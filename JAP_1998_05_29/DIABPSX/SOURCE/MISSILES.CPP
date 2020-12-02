#include "THISDUST.H"
#include "COREAUTO.H"


// decompiled code
// original method signature: 
// void FUN_80139c04(int iParm1,int *piParm2,int *piParm3);
 // line -1, offset 0x80139c04
// function 'FUN_80139c04' @0x80139C04 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80139c04(int iParm1,int *piParm2,int *piParm3)

{
	byte bVar1;
	char cVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = (int)(&plr)[myplr]._pMagic;
	bVar1 = (&plr)[myplr]._pLevel;
	cVar2 = (&plr)[myplr]._pClass;
	iVar4 = (int)(&plr)[myplr]._pSplLvl[iParm1] + (int)(&plr)[myplr]._pISplLvlAdd;
	if (0x23 < iParm1 - 1U) {
		return;
	}
	iVar3 = iVar5 >> 3;
	switch(iParm1) {
	case 1:
		*piParm2 = iVar3 + iVar4 + 1;
		iVar3 = iVar3 + iVar4 + 10;
		break;
	case 2:
		iVar3 = (int)(char)bVar1;
		iVar5 = iVar3 + iVar4 + 1;
		*piParm2 = iVar5;
		if (cVar2 == '\0') {
			*piParm2 = iVar5 * 2;
		}
		if (cVar2 == '\x01') {
			*piParm2 = *piParm2 + (*piParm2 >> 1);
		}
		*piParm3 = 10;
		iVar5 = 0;
		if (0 < iVar3) {
			do {
				iVar5 = iVar5 + 1;
				*piParm3 = *piParm3 + 4;
			} while (iVar5 < iVar3);
		}
		iVar5 = 0;
		if (0 < iVar4) {
			do {
				iVar5 = iVar5 + 1;
				*piParm3 = *piParm3 + 6;
			} while (iVar5 < iVar4);
		}
		if (cVar2 == '\0') {
			*piParm3 = *piParm3 << 1;
		}
		if (cVar2 == '\x01') {
			*piParm3 = *piParm3 + (*piParm3 >> 1);
		}
		iVar3 = -1;
		goto LAB_8013a1e8;
	case 3:
		*piParm2 = 2;
		iVar3 = (int)(char)bVar1 + 2;
		break;
	case 4:
		*piParm2 = (int)(char)bVar1;
		while (0 < iVar4) {
			iVar4 = iVar4 + -1;
			*piParm2 = *piParm2 + (*piParm2 >> 3);
		}
		iVar3 = *piParm2 + (*piParm2 >> 1);
		*piParm2 = iVar3;
		iVar3 = iVar3 * 2;
		break;
	default:
		iVar3 = -1;
		goto LAB_8013a1e8;
	case 6:
		*piParm2 = ((int)(char)bVar1 + 2) * 2;
		*piParm3 = ((int)(char)bVar1 + 0x14) * 2;
		return;
	case 0xc:
		*piParm2 = ((int)((uint)bVar1 << 0x18) >> 0x17) + 4;
		iVar5 = iVar4;
		while (0 < iVar5) {
			iVar5 = iVar5 + -1;
			*piParm2 = *piParm2 + (*piParm2 >> 3);
		}
		*piParm3 = ((int)((uint)bVar1 << 0x18) >> 0x17) + 0x28;
		while (0 < iVar4) {
			iVar4 = iVar4 + -1;
			*piParm3 = *piParm3 + (*piParm3 >> 3);
		}
		return;
	case 0xd:
		*piParm2 = ((int)((uint)bVar1 << 0x18) >> 0x19) + 1;
		iVar5 = iVar4;
		while (0 < iVar5) {
			iVar5 = iVar5 + -1;
			*piParm2 = *piParm2 + (*piParm2 >> 3);
		}
		*piParm3 = ((int)((uint)bVar1 << 0x18) >> 0x19) + 10;
		while (0 < iVar4) {
			iVar4 = iVar4 + -1;
			*piParm3 = *piParm3 + (*piParm3 >> 3);
		}
		return;
	case 0xe:
		*piParm2 = 4;
		iVar3 = ((int)((uint)bVar1 << 0x18) >> 0x17) + 4;
		break;
	case 0xf:
		iVar3 = ((int)(char)bVar1 + 10) * 6;
		*piParm2 = ((int)(char)bVar1 + 1) * 6;
		break;
	case 0x12:
		*piParm2 = (int)(char)bVar1 + 5 >> 1;
		iVar5 = iVar4;
		while (0 < iVar5) {
			iVar5 = iVar5 + -1;
			*piParm2 = *piParm2 + (*piParm2 >> 3);
		}
		*piParm2 = *piParm2 * 5;
		*piParm3 = (int)(char)bVar1 + 0x1e >> 1;
		while (0 < iVar4) {
			iVar4 = iVar4 + -1;
			*piParm3 = *piParm3 + (*piParm3 >> 3);
		}
		iVar3 = *piParm3 * 5;
		break;
	case 0x14:
		*piParm2 = 3;
		iVar3 = (int)(char)bVar1 + 4 + ((int)(char)bVar1 + 4 >> 1);
		break;
	case 0x15:
		*piParm2 = 0xb;
		iVar3 = 0x11;
		break;
	case 0x18:
		*piParm2 = 0;
		iVar4 = 0;
		if (0 < (int)(char)bVar1) {
			do {
				iVar4 = iVar4 + 1;
				*piParm2 = *piParm2 + 1;
			} while (iVar4 < (int)(char)bVar1);
		}
		*piParm3 = 0;
		iVar4 = 0;
		if ((int)(char)bVar1 < 1) {
			return;
		}
		do {
			iVar4 = iVar4 + 1;
			*piParm3 = *piParm3 + 6;
		} while (iVar4 < (int)(char)bVar1);
		return;
	case 0x1d:
		*piParm2 = ((int)((uint)bVar1 << 0x18) >> 0x17) + 4;
		iVar5 = iVar4;
		while (0 < iVar5) {
			iVar5 = iVar5 + -1;
			*piParm2 = *piParm2 + (*piParm2 >> 3);
		}
		*piParm3 = ((int)((uint)bVar1 << 0x18) >> 0x17) + 0x28;
		while (0 < iVar4) {
			iVar4 = iVar4 + -1;
			*piParm3 = *piParm3 + (*piParm3 >> 3);
		}
		return;
	case 0x1e:
		*piParm2 = 1;
		iVar3 = (iVar5 >> 2) + 1;
		break;
	case 0x1f:
		iVar3 = (int)(char)bVar1 + 0x12;
		*piParm2 = (int)(char)bVar1 + 9;
		break;
	case 0x22:
		iVar3 = (int)(char)bVar1;
		iVar5 = iVar3 + iVar4 + 1;
		*piParm2 = iVar5;
		if (cVar2 == '\0') {
			*piParm2 = iVar5 * 2;
		}
		if (cVar2 == '\x01') {
			*piParm2 = *piParm2 + (*piParm2 >> 1);
		}
		*piParm3 = 10;
		iVar5 = 0;
		if (0 < iVar3) {
			do {
				iVar5 = iVar5 + 1;
				*piParm3 = *piParm3 + 4;
			} while (iVar5 < iVar3);
		}
		iVar5 = 0;
		if (0 < iVar4) {
			do {
				iVar5 = iVar5 + 1;
				*piParm3 = *piParm3 + 6;
			} while (iVar5 < iVar4);
		}
		if (cVar2 == '\0') {
			*piParm3 = *piParm3 << 1;
		}
		if (cVar2 == '\x01') {
			*piParm3 = *piParm3 + (*piParm3 >> 1);
		}
		iVar3 = -1;
		goto LAB_8013a1e8;
	case 0x23:
		iVar3 = ((iVar5 >> 1) - iVar3) + iVar4 * 3;
LAB_8013a1e8:
		*piParm2 = iVar3;
	}
	*piParm3 = iVar3;
	return;
}



// decompiled code
// original method signature: 
// undefined4 FUN_8013a1fc(int iParm1,int iParm2,int iParm3,int iParm4);
 // line -1, offset 0x8013a1fc
// function 'FUN_8013a1fc' @0x8013A1FC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8013a1fc(int iParm1,int iParm2,int iParm3,int iParm4)

{
	int iVar1;
	void *pvVar2;
	undefined4 uVar3;
	
	uVar3 = 0;
	while ((iParm1 != iParm3 || (iParm2 != iParm4))) {
		iVar1 = GetDirection__Fiiii(iParm1,iParm2,iParm3,iParm4);
		iParm1 = iParm1 + XDirAdd[iVar1];
		iParm2 = iParm2 + YDirAdd[iVar1];
		pvVar2 = GetSOLID__Fii(iParm1,iParm2);
		if (pvVar2 != (void *)0x0) {
			uVar3 = 1;
		}
	}
	return uVar3;
}



// decompiled code
// original method signature: 
// int FUN_8013a2b0(int iParm1,int iParm2,int iParm3);
 // line -1, offset 0x8013a2b0
// function 'FUN_8013a2b0' @0x8013A2B0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_8013a2b0(int iParm1,int iParm2,int iParm3)

{
	short sVar1;
	undefined **ppuVar2;
	int *piVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined **ppuVar8;
	int *piVar9;
	int iVar10;
	uint uVar11;
	int iVar12;
	int local_70 [20];
	
	ppuVar2 = (undefined **)&DAT_80119de4;
	piVar3 = local_70;
	do {
		piVar9 = piVar3;
		ppuVar8 = ppuVar2;
		puVar5 = ppuVar8[1];
		puVar6 = ppuVar8[2];
		puVar7 = ppuVar8[3];
		*(undefined **)piVar9 = *ppuVar8;
		*(undefined **)(piVar9 + 1) = puVar5;
		*(undefined **)(piVar9 + 2) = puVar6;
		*(undefined **)(piVar9 + 3) = puVar7;
		ppuVar2 = ppuVar8 + 4;
		piVar3 = piVar9 + 4;
	} while (ppuVar8 + 4 != PTR_ARRAY_80119e14 + 4);
	puVar5 = ppuVar8[5];
	puVar6 = ppuVar8[6];
	*(undefined **)(piVar9 + 4) = PTR_ARRAY_80119e14[4];
	*(undefined **)(piVar9 + 5) = puVar5;
	*(undefined **)(piVar9 + 6) = puVar6;
	iVar12 = 1;
	if (0x13 < iParm3) {
		iParm3 = 0x13;
	}
	if (1 < iParm3) {
		iVar4 = 4;
		do {
			uVar11 = (uint)(byte)(&CrawlTable)[*(int *)((int)local_70 + iVar4)];
			iVar10 = *(int *)((int)local_70 + iVar4) + 1;
			if ((&CrawlTable)[*(int *)((int)local_70 + iVar4)] != 0) {
				do {
					if (((((iParm1 + (int)(&CrawlTable)[iVar10]) - 1U < 0x6f) &&
							 ((iParm2 + (int)(&CHAR_00h_800d5555)[iVar10]) - 1U < 0x6f)) &&
							(sVar1 = (&dung_map)
											 [(iParm1 + (int)(&CrawlTable)[iVar10]) * 0x70 +
												iParm2 + (int)(&CHAR_00h_800d5555)[iVar10]].dMonster, 0 < (int)sVar1)) &&
						 (iVar4 = FUN_8013a1fc(iParm1,iParm2), iVar4 == 0)) {
						return (int)sVar1 + -1;
					}
					uVar11 = uVar11 - 1;
					iVar10 = iVar10 + 2;
				} while (0 < (int)uVar11);
			}
			iVar12 = iVar12 + 1;
			iVar4 = iVar12 * 4;
		} while (iVar12 < iParm3);
	}
	return 0xffffffff;
}



// decompiled code
// original method signature: 
// int FUN_8013a43c(int iParm1,int iParm2);
 // line -1, offset 0x8013a43c
// function 'FUN_8013a43c' @0x8013A43C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_8013a43c(int iParm1,int iParm2)

{
	int iVar1;
	
	if (iParm1 == myplr) {
		iVar1 = (int)*(char *)(iParm1 * 0x19e8 + -0x7ff25a57 + iParm2) +
						(int)(&plr)[iParm1]._pISplLvlAdd;
	}
	else {
		iVar1 = 1;
	}
	if (iVar1 < 0) {
		iVar1 = 0;
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// uint FUN_8013a4b0(int iParm1,int iParm2,int iParm3,int iParm4);
 // line -1, offset 0x8013a4b0
// function 'FUN_8013a4b0' @0x8013A4B0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
/* WARNING: Removing unreachable block (ram,0x8013a504) */
/* WARNING: Removing unreachable block (ram,0x8013a508) */
/* WARNING: Removing unreachable block (ram,0x8013a554) */

uint FUN_8013a4b0(int iParm1,int iParm2,int iParm3,int iParm4)

{
	int iVar1;
	int iVar2;
	int iVar3;
	byte *pbVar4;
	undefined4 uVar5;
	uint uVar6;
	undefined4 uVar7;
	undefined4 uVar8;
	undefined4 *puVar9;
	undefined4 *puVar10;
	undefined4 local_148 [64];
	byte local_48 [8];
	byte local_40 [8];
	byte local_38 [8];
	byte local_30 [8];
	
	puVar10 = local_148;
	puVar9 = &DAT_80119e30;
	do {
		uVar5 = puVar9[1];
		uVar7 = puVar9[2];
		uVar8 = puVar9[3];
		*puVar10 = *puVar9;
		puVar10[1] = uVar5;
		puVar10[2] = uVar7;
		puVar10[3] = uVar8;
		puVar9 = puVar9 + 4;
		puVar10 = puVar10 + 4;
	} while (puVar9 != &DAT_80119f30);
	local_48[0] = DAT_8011c258;
	local_48[1] = DAT_8011c259;
	local_48[2] = DAT_8011c25a;
	local_40[0] = DAT_8011c25c;
	local_40[1] = DAT_8011c25d;
	local_40[2] = DAT_8011c25e;
	local_38[0] = DAT_8011c260;
	local_38[1] = DAT_8011c261;
	local_38[2] = DAT_8011c262;
	local_30[0] = DAT_8011c264;
	local_30[1] = DAT_8011c265;
	local_30[2] = DAT_8011c266;
	iVar1 = abs(iParm3 - iParm1);
	if (0xf < iVar1) {
		iVar1 = 0xf;
	}
	iVar2 = abs(iParm4 - iParm2);
	iVar3 = iVar2 << 4;
	if (0xf < iVar2) {
		iVar3 = 0xf0;
	}
	uVar6 = (uint)*(byte *)((int)local_148 + iVar1 + iVar3);
	if (iParm3 < iParm1) {
		pbVar4 = local_48 + uVar6;
		if (iParm2 <= iParm4) {
			pbVar4 = local_40 + uVar6;
		}
	}
	else {
		pbVar4 = local_38 + uVar6;
		if (iParm2 <= iParm4) {
			pbVar4 = local_30 + uVar6;
		}
	}
	return (uint)*pbVar4;
}



// decompiled code
// original method signature: 
// uint FUN_8013a6cc(int iParm1,int iParm2,int iParm3,int iParm4);
 // line -1, offset 0x8013a6cc
// function 'FUN_8013a6cc' @0x8013A6CC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
/* WARNING: Removing unreachable block (ram,0x8013a720) */
/* WARNING: Removing unreachable block (ram,0x8013a724) */
/* WARNING: Removing unreachable block (ram,0x8013a770) */

uint FUN_8013a6cc(int iParm1,int iParm2,int iParm3,int iParm4)

{
	int iVar1;
	int iVar2;
	int iVar3;
	byte *pbVar4;
	undefined4 uVar5;
	uint uVar6;
	undefined4 uVar7;
	undefined4 uVar8;
	undefined4 *puVar9;
	undefined4 *puVar10;
	undefined4 local_148 [64];
	undefined4 local_48;
	undefined local_44;
	undefined4 local_40;
	undefined local_3c;
	undefined4 local_38;
	undefined local_34;
	undefined4 local_30;
	undefined local_2c;
	
	puVar10 = local_148;
	puVar9 = &DAT_80119f30;
	do {
		uVar5 = puVar9[1];
		uVar7 = puVar9[2];
		uVar8 = puVar9[3];
		*puVar10 = *puVar9;
		puVar10[1] = uVar5;
		puVar10[2] = uVar7;
		puVar10[3] = uVar8;
		puVar9 = puVar9 + 4;
		puVar10 = puVar10 + 4;
	} while (puVar9 != &DAT_8011a030);
	local_48 = DAT_8011c268;
	local_44 = DAT_8011c26c;
	local_40 = DAT_8011c270;
	local_3c = DAT_8011c274;
	local_38 = DAT_8011c278;
	local_34 = DAT_8011c27c;
	local_30 = DAT_8011c280;
	local_2c = DAT_8011c284;
	iVar1 = abs(iParm3 - iParm1);
	if (0xf < iVar1) {
		iVar1 = 0xf;
	}
	iVar2 = abs(iParm4 - iParm2);
	iVar3 = iVar2 << 4;
	if (0xf < iVar2) {
		iVar3 = 0xf0;
	}
	uVar6 = (uint)*(byte *)((int)local_148 + iVar1 + iVar3);
	if (iParm3 < iParm1) {
		pbVar4 = (byte *)((int)&local_48 + uVar6);
		if (iParm2 <= iParm4) {
			pbVar4 = (byte *)((int)&local_40 + uVar6);
		}
	}
	else {
		pbVar4 = (byte *)((int)&local_38 + uVar6);
		if (iParm2 <= iParm4) {
			pbVar4 = (byte *)((int)&local_30 + uVar6);
		}
	}
	return (uint)*pbVar4;
}



// decompiled code
// original method signature: 
// void FUN_8013a8e8(int iParm1,int iParm2);
 // line -1, offset 0x8013a8e8
// function 'FUN_8013a8e8' @0x8013A8E8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8013a8e8(int iParm1,int iParm2)

{
	int iVar1;
	
	iVar1 = 0x7d - iGp00001b08;
	iGp00001b08 = iGp00001b08 + -1;
	missileavail[iVar1] = (short)iParm1;
	AddUnLight__Fi((int)missile[iParm1]._mlid);
	if ((0 < iGp00001b08) && (iParm2 != iGp00001b08)) {
		(&missileactive)[iParm2] = (&missileactive)[iGp00001b08];
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8013a988(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
 // line -1, offset 0x8013a988
// function 'FUN_8013a988' @0x8013A988 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8013a988(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
	uint ix;
	long lVar1;
	uint uVar2;
	int iVar3;
	uint iy;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar3 = (param_4 - param_2) * 0x20;
	ix = (iVar3 + (param_5 - param_3) * -0x20) * 0x10000;
	iVar4 = (int)ix >> 0x1f;
	iy = (iVar3 + (param_5 - param_3) * 0x20) * 0x10000;
	iVar5 = (int)iy >> 0x1f;
	iVar3 = veclen2__Fii(ix,iy);
	iVar6 = iVar3 >> 0x1f;
	if ((ix == 0) && (iVar4 == 0)) {
		ix = 1;
		iVar4 = 0;
	}
	if ((iy == 0) && (iVar5 == 0)) {
		iy = 1;
		iVar5 = 0;
	}
	if ((iVar3 == 0) && (iVar6 == 0)) {
		iVar3 = 1;
		iVar6 = 0;
	}
	uVar2 = param_6 * 0x10000;
	lVar1 = __divdi3((int)((ulonglong)uVar2 * (ulonglong)ix),
									 (int)((ulonglong)uVar2 * (ulonglong)ix >> 0x20) + uVar2 * iVar4 +
									 ix * ((int)uVar2 >> 0x1f),iVar3,iVar6);
	ix = param_6 * 0x8000;
	missile[param_1]._mixvel = lVar1;
	lVar1 = __divdi3((int)((ulonglong)ix * (ulonglong)iy),
									 (int)((ulonglong)ix * (ulonglong)iy >> 0x20) + ix * iVar5 +
									 iy * ((int)ix >> 0x1f),iVar3,iVar6);
	missile[param_1]._miyvel = lVar1;
	return;
}



// decompiled code
// original method signature: 
// void FUN_8013aa70(undefined4 param_1,int param_2);
 // line -1, offset 0x8013aa70
// function 'FUN_8013aa70' @0x8013AA70 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8013aa70(undefined4 param_1,int param_2)

{
	int in_v0;
	long lVar1;
	int in_v1;
	uint uVar2;
	int unaff_s0;
	int unaff_s1;
	uint unaff_s2;
	int unaff_s3;
	int unaff_s6;
	int unaff_s7;
	
	lVar1 = __divdi3(param_1,param_2 + in_v0 * unaff_s1 + unaff_s0 * in_v1);
	uVar2 = unaff_s7 * 0x8000;
	missile[unaff_s6]._mixvel = lVar1;
	lVar1 = __divdi3((int)((ulonglong)uVar2 * (ulonglong)unaff_s2),
									 (int)((ulonglong)uVar2 * (ulonglong)unaff_s2 >> 0x20) + uVar2 * unaff_s3 +
									 unaff_s2 * ((int)uVar2 >> 0x1f));
	missile[unaff_s6]._miyvel = lVar1;
	return;
}



// decompiled code
// original method signature: 
// void FUN_8013ab44(int iParm1);
 // line -1, offset 0x8013ab44
// function 'FUN_8013ab44' @0x8013AB44 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8013ab44(int iParm1)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	uint uVar4;
	uint uVar5;
	int iVar6;
	byte bVar7;
	int iVar8;
	uint uVar9;
	int iVar10;
	
	iVar8 = (int)missile[iParm1]._mix;
	iVar10 = (int)missile[iParm1]._miy;
	if ((((iVar8 < 1) || (iVar10 < 1)) || (0x6f < iVar8)) || (0x6f < iVar10)) {
		missile[iParm1]._miDelFlag = '\x01';
	}
	if (missile[iParm1]._miDelFlag == '\0') {
		cVar1 = (&dung_map)[iVar8 * 0x70 + iVar10].dMissile;
		uVar4 = SEXT14(cVar1);
		(&dung_map)[iVar8 * 0x70 + iVar10].dFlags = (&dung_map)[iVar8 * 0x70 + iVar10].dFlags | 0x40;
		cVar2 = (char)iParm1;
		if (uVar4 == 0) {
			(&dung_map)[iVar8 * 0x70 + iVar10].dMissile = cVar2 + '\x01';
		}
		else {
			if ((int)uVar4 < 0) {
				uVar9 = (uVar4 & 0x60) >> 5;
				uVar5 = uVar9 + 1;
				if (missile[iParm1]._mitype ==
						missile[(int)(&dMissArray + (uVar4 & 0x1f) * 4)[uVar9] + -1]._mitype) {
					return;
				}
				if (uVar5 < 4) {
					(&dMissArray + (uVar4 & 0x1f) * 4)[uVar5] = cVar2 + '\x01';
					(&dung_map)[iVar8 * 0x70 + iVar10].dMissile =
							 (&dung_map)[iVar8 * 0x70 + iVar10].dMissile + ' ';
				}
			}
			else {
				uVar4 = 0;
				bVar7 = 0;
				do {
					iVar6 = (int)(uVar4 << 0x18) >> 0x16;
					bVar3 = bVar7 + 1;
					if ((&dMissArray)[iVar6] == '\0') {
						(&dMissArray)[iVar6] = cVar1;
						s__80105175[iVar6] = cVar2 + '\x01';
						(&dung_map)[iVar8 * 0x70 + iVar10].dMissile = bVar7 + 0xa0;
						break;
					}
					uVar4 = (uint)bVar3;
					bVar7 = bVar3;
				} while ((char)bVar3 < ' ');
			}
		}
		if (missile[iParm1]._miPreFlag != '\0') {
			uGp00001b0c = 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8013ada0(int iParm1);
 // line -1, offset 0x8013ada0
// function 'FUN_8013ada0' @0x8013ADA0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8013ada0(int iParm1)

{
	char cVar1;
	char cVar2;
	short sVar3;
	short sVar4;
	char cVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	sVar3 = *(short *)((int)&missile[iParm1]._mityoff + 2);
	sVar4 = *(short *)((int)&missile[iParm1]._mitxoff + 2);
	iVar6 = (int)sVar3 * 2;
	iVar7 = (int)sVar4 + iVar6;
	iVar6 = iVar6 - (int)sVar4;
	if (iVar7 < 0) {
		iVar9 = -(-iVar7 >> 3);
		iVar7 = -(-iVar7 >> 6);
	}
	else {
		iVar9 = iVar7 >> 3;
		iVar7 = iVar7 >> 6;
	}
	iVar8 = iVar6 >> 3;
	if (iVar6 < 0) {
		iVar8 = -(-iVar6 >> 3);
		iVar6 = -(-iVar6 >> 6);
	}
	else {
		iVar6 = iVar6 >> 6;
	}
	cVar1 = (char)iVar6;
	cVar5 = (char)iVar7;
	missile[iParm1]._mixoff = (char)sVar4 + (cVar5 - cVar1) * -0x20;
	missile[iParm1]._miyoff = (char)sVar3 + (cVar5 + cVar1) * -0x10;
	cVar2 = missile[iParm1]._misx;
	missile[iParm1]._miy = missile[iParm1]._misy + cVar1;
	cVar1 = missile[iParm1]._mlid;
	missile[iParm1]._mix = cVar2 + cVar5;
	ChangeLightOff__Fiii((int)cVar1,iVar9 + iVar7 * -8,iVar8 + iVar6 * -8);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8013aed4(int iParm1);
 // line -1, offset 0x8013aed4
// function 'FUN_8013aed4' @0x8013AED4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8013aed4(int iParm1)

{
	char cVar1;
	char cVar2;
	char cVar3;
	uchar uVar4;
	int iVar5;
	int iVar6;
	
	iVar6 = 0;
	iVar5 = 0;
	switch(missile[iParm1]._mimfnum) {
	case '\0':
	case '\x01':
	case '\a':
		iVar6 = 1;
		goto LAB_8013af5c;
	case '\x02':
		iVar6 = 0;
LAB_8013af5c:
		iVar5 = 1;
		break;
	case '\x03':
	case '\x04':
	case '\x05':
		iVar6 = 0;
		iVar5 = 0;
		break;
	case '\x06':
		iVar6 = 1;
		iVar5 = 0;
	}
	uVar4 = PosOkMonst__Fiii((int)missile[iParm1]._misource,(int)missile[iParm1]._mix + iVar6,
													 (int)missile[iParm1]._miy + iVar5);
	if (uVar4 != '\0') {
		cVar1 = missile[iParm1]._miy;
		cVar2 = (char)iVar6;
		cVar3 = (char)iVar5;
		missile[iParm1]._mix = missile[iParm1]._mix + cVar2;
		missile[iParm1]._miy = cVar1 + cVar3;
		missile[iParm1]._mixoff = missile[iParm1]._mixoff + (cVar2 - cVar3) * -0x20;
		missile[iParm1]._miyoff = missile[iParm1]._miyoff + (cVar2 + cVar3) * -0x10;
	}
	return;
}



// decompiled code
// original method signature: 
// uint FUN_8013b04c(int param_1,int param_2,int param_3,int param_4,int param_5,char param_6);
 // line -1, offset 0x8013b04c
// function 'FUN_8013b04c' @0x8013B04C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8013b04c(int param_1,int param_2,int param_3,int param_4,int param_5,char param_6)

{
	uchar uVar1;
	ushort uVar2;
	bool bVar3;
	long lVar4;
	uint uVar5;
	int iVar6;
	int iVar7;
	byte local_30 [8];
	
	bVar3 = false;
	if (monster[param_1].mtalkmsg == 0) {
		if (monster[param_1]._mhitpoints >> 6 < 1) {
			return 0;
		}
		if ((((monster[param_1].MType)->mtype != ' ') || (monster[param_1]._mgoal != '\x02')) &&
			 (monster[param_1]._mmode != '\x0e')) {
			uVar2 = monster[param_1].mMagicRes;
			uVar1 = missiledata[param_5].mResist;
			if (((uVar2 & 8) != 0) && (uVar1 == '\x03')) {
				return 1;
			}
			if (((uVar2 & 0x10) != 0) && (uVar1 == '\x01')) {
				return 1;
			}
			if (((uVar2 & 0x20) != 0) && (uVar1 == '\x02')) {
				return 1;
			}
			if ((((uVar2 & 1) != 0) && (uVar1 == '\x03')) ||
				 ((((uVar2 & 2) != 0 && (uVar1 == '\x01')) || (((uVar2 & 4) != 0 && (uVar1 == '\x02')))))) {
				bVar3 = true;
			}
			lVar4 = ENG_random__Fl(100);
			iVar6 = (0x5a - param_4) - (int)monster[param_1].mArmorClass;
			iVar7 = iVar6;
			if (iVar6 < 5) {
				iVar7 = 5;
			}
			if (0x5f < iVar6) {
				iVar7 = 0x5f;
			}
			uVar5 = FUN_8015698c(param_1,local_30);
			if ((uVar5 & 0xff) != 0) {
				return (uint)local_30[0];
			}
			if ((iVar7 <= lVar4) && (monster[param_1]._mmode != '\x0f')) {
				return 1;
			}
			lVar4 = ENG_random__Fl((param_3 - param_2) + 1);
			param_2 = lVar4 + param_2;
			if (param_6 == '\0') {
				param_2 = param_2 * 0x40;
			}
			if (bVar3) {
				param_2 = monster[param_1]._mhitpoints - (param_2 >> 2);
			}
			else {
				param_2 = monster[param_1]._mhitpoints - param_2;
			}
			monster[param_1]._mhitpoints = param_2;
			if (monster[param_1]._mhitpoints >> 6 < 1) {
				if (monster[param_1]._mmode != '\x0f') {
					FUN_8014c3d8(param_1,0xffffffff);
					return 1;
				}
				FUN_8014c3d8(param_1,0xffffffff);
			}
			else {
				if (bVar3) {
					PlayEffect__Fii(param_1,1);
					return 1;
				}
				if (monster[param_1]._mmode != '\x0f') {
					if (3 >= param_1) {
						return 1;
					}
					FUN_8014b2d8(param_1,0xffffffff);
					return 1;
				}
				if (3 < param_1) {
					FUN_8014b2d8(param_1,0xffffffff);
				}
			}
			monster[param_1]._mmode = '\x0f';
			return 1;
		}
	}
	return 0;
}



// decompiled code
// original method signature: 
// uint FUN_8013b3d0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char param_7);
 // line -1, offset 0x8013b3d0
// function 'FUN_8013b3d0' @0x8013B3D0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8013b3d0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
								 char param_7)

{
	uchar uVar1;
	ushort uVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	long lVar6;
	uint uVar7;
	int iVar8;
	byte local_38 [8];
	char local_30;
	
	bVar5 = false;
	local_30 = param_7;
	if ((monster[param_2].mtalkmsg != 0) || (monster[param_2]._mhitpoints >> 6 < 1)) {
		return 0;
	}
	if (((param_6 == 0x35) && ((monster[param_2].MType)->mtype != 'n')) &&
		 ((monster[param_2].MData)->mMonstClass != '\0')) {
		return 0;
	}
	if (((monster[param_2].MType)->mtype == ' ') && (monster[param_2]._mgoal == '\x02')) {
		return 0;
	}
	if (monster[param_2]._mmode == '\x0e') {
		return 0;
	}
	uVar2 = monster[param_2].mMagicRes;
	uVar1 = missiledata[param_6].mResist;
	if (((uVar2 & 8) != 0) && (uVar1 == '\x03')) {
		return 0;
	}
	if (((uVar2 & 0x10) != 0) && (uVar1 == '\x01')) {
		return 0;
	}
	if (((uVar2 & 0x20) != 0) && (uVar1 == '\x02')) {
		return 0;
	}
	if (((uVar2 & 0x80) != 0) && (uVar1 == '\x04')) {
		return 0;
	}
	if (((((uVar2 & 1) != 0) && (uVar1 == '\x03')) || (((uVar2 & 2) != 0 && (uVar1 == '\x01')))) ||
		 (((uVar2 & 4) != 0 && (uVar1 == '\x02')))) {
		bVar5 = true;
	}
	lVar6 = ENG_random__Fl(100);
	if (missiledata[param_6].mType == '\0') {
		param_5 = ((((int)(&plr)[param_1]._pLevel - ((int)monster[param_2].mArmorClass + -0x32)) -
							 (&plr)[param_1]._pIEnAc) +
							(int)(&plr)[param_1]._pDexterity + (&plr)[param_1]._pIBonusToHit) -
							(param_5 * param_5 >> 1);
		if ((&plr)[param_1]._pClass == '\x01') {
			param_5 = param_5 + 0x14;
		}
		bVar3 = param_5 < 5;
		if ((&plr)[param_1]._pClass == '\0') {
			param_5 = param_5 + 10;
LAB_8013b740:
			bVar3 = param_5 < 5;
		}
	}
	else {
		param_5 = ((int)(&plr)[param_1]._pMagic - ((int)monster[param_2].mLevel * 2 + -0x32)) - param_5;
		bVar3 = param_5 < 5;
		if ((&plr)[param_1]._pClass == '\x02') {
			param_5 = param_5 + 0x14;
			goto LAB_8013b740;
		}
	}
	bVar4 = 0x5f < param_5;
	if (bVar3) {
		param_5 = 5;
	}
	if (!bVar3 && bVar4) {
		param_5 = 0x5f;
	}
	if (monster[param_2]._mmode == '\x0f') {
		lVar6 = 0;
	}
	uVar7 = FUN_8015698c(param_2,local_38);
	if ((uVar7 & 0xff) != 0) {
		return (uint)local_38[0];
	}
	if (param_5 <= lVar6) {
		return 1;
	}
	if (param_6 == 0x3f) {
		param_3 = monster[param_2]._mhitpoints / 3 >> 6;
	}
	else {
		lVar6 = ENG_random__Fl((param_4 - param_3) + 1);
		param_3 = lVar6 + param_3;
	}
	if (missiledata[param_6].mType == '\0') {
		param_3 = param_3 + (param_3 * (&plr)[param_1]._pIBonusDam) / 100 +
							(&plr)[param_1]._pIBonusDamMod;
		if ((&plr)[param_1]._pClass == '\x01') {
			param_3 = param_3 + (&plr)[param_1]._pDamageMod;
		}
		else {
			param_3 = param_3 + ((&plr)[param_1]._pDamageMod >> 1);
		}
	}
	if (local_30 == '\0') {
		param_3 = param_3 << 6;
	}
	if (bVar5) {
		param_3 = param_3 >> 2;
	}
	monster[param_2]._mhitpoints = monster[param_2]._mhitpoints - param_3;
	if (((&plr)[param_1]._pIFlags & 0x100U) != 0) {
		monster[param_2]._mFlags = monster[param_2]._mFlags | 8;
	}
	if (monster[param_2]._mhitpoints >> 6 < 1) {
		if (monster[param_2]._mmode != '\x0f') {
			FUN_8014c3d8(param_2,param_1);
			goto LAB_8013bacc;
		}
		FUN_8014c3d8(param_2,param_1);
	}
	else {
		if (bVar5) {
			PlayEffect__Fii(param_2,1);
			goto LAB_8013bacc;
		}
		if (monster[param_2]._mmode != '\x0f') {
			if ((missiledata[param_6].mType == '\0') && (((&plr)[param_1]._pIFlags & 0x800U) != 0)) {
				iVar8 = GetDirection__Fiiii((int)(&plr)[param_1]._px,(int)(&plr)[param_1]._py,
																		(int)monster[param_2]._mx,(int)monster[param_2]._my);
				FUN_8014b0bc(param_2,iVar8);
			}
			if (3 < param_2) {
				FUN_8014b2d8(param_2,param_1,param_3);
			}
			goto LAB_8013bacc;
		}
		if (3 < param_2) {
			FUN_8014b2d8(param_2,param_1,param_3);
		}
	}
	monster[param_2]._mmode = '\x0f';
LAB_8013bacc:
	if (monster[param_2]._msquelch == '\0') {
		monster[param_2]._msquelch = -1;
		monster[param_2]._lastx = (char)(&plr)[param_1]._px;
		monster[param_2]._lasty = (char)(&plr)[param_1]._py;
		return 1;
	}
	return 1;
}



// decompiled code
// original method signature: 
// undefined4 FUN_8013bb90(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char param_7,byte param_8);
 // line -1, offset 0x8013bb90
// function 'FUN_8013bb90' @0x8013BB90 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4
FUN_8013bb90(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char param_7,
						byte param_8)

{
	char cVar1;
	byte bVar2;
	long lVar3;
	int dir;
	int x;
	int y;
	long lVar4;
	
	if ((&plr)[param_1]._pHitPoints >> 6 < 1) {
		return 0;
	}
	if ((&plr)[param_1]._pInvincible != '\0') {
		return 0;
	}
	if ((((&plr)[param_1]._pSpellFlags & 1U) != 0) && (missiledata[param_6].mType == '\0')) {
		return 0;
	}
	lVar3 = ENG_random__Fl(100);
	if (missiledata[param_6].mType == '\0') {
		x = (uint)(ushort)(&plr)[param_1]._pDexterity << 0x10;
		dir = x >> 0x10;
		dir = (&plr)[param_1]._pIAC + (&plr)[param_1]._pIBonusAC +
					(((dir / 5 + (dir >> 0x1f)) - (x >> 0x1f)) * 0x10000 >> 0x10);
		if (param_2 == -1) {
			dir = (param_3 * -2 + 100) - (dir >> 1);
			goto LAB_8013bdf8;
		}
		dir = ((uint)monster[param_2].mHit - (dir + -0x1e)) +
					((int)monster[param_2].mLevel - (int)(&plr)[param_1]._pLevel) * 2;
	}
	else {
		if (param_2 == -1) {
			dir = 0x28;
			goto LAB_8013bdf8;
		}
		dir = (int)monster[param_2].mLevel * 2 - ((int)(&plr)[param_1]._pLevel * 2 + -0x28);
	}
	dir = dir + param_3 * -2;
LAB_8013bdf8:
	if (dir < 10) {
		dir = 10;
	}
	if ((currlevel == '\x0e') && (dir < 0x14)) {
		dir = 0x14;
	}
	if ((currlevel == '\x0f') && (dir < 0x19)) {
		dir = 0x19;
	}
	if ((currlevel == '\x10') && (dir < 0x1e)) {
		dir = 0x1e;
	}
	if ((((&plr)[param_1]._pmode == PM_STAND) || (lVar4 = 100, (&plr)[param_1]._pmode == PM_ATTACK))
		 && (lVar4 = 100, (&plr)[param_1]._pBlockFlag != '\0')) {
		lVar4 = ENG_random__Fl(100);
	}
	if (param_7 == '\x01') {
		lVar4 = 100;
	}
	if (param_6 == 0x3b) {
		lVar4 = 100;
	}
	if (param_2 == -1) {
		x = (&plr)[param_1]._pBaseToBlk + (int)(&plr)[param_1]._pDexterity;
	}
	else {
		x = (&plr)[param_1]._pBaseToBlk + (int)(&plr)[param_1]._pDexterity +
				((int)monster[param_2].mLevel - (int)(&plr)[param_1]._pLevel) * -2;
	}
	y = x;
	if (x < 0) {
		y = 0;
	}
	if (100 < x) {
		y = 100;
	}
	bVar2 = missiledata[param_6].mResist;
	if (bVar2 == 2) {
		x = (int)(&plr)[param_1]._pLghtResist;
	}
	else {
		if (bVar2 < 3) {
			if (bVar2 == 1) {
				x = (int)(&plr)[param_1]._pFireResist;
			}
			else {
				x = 0;
			}
		}
		else {
			x = 0;
			if (bVar2 < 5) {
				x = (int)(&plr)[param_1]._pMagResist;
			}
		}
	}
	if (dir <= lVar3) {
		return 0;
	}
	if (param_6 == 0x3f) {
		param_4 = (&plr)[param_1]._pHitPoints / 3;
	}
	else {
		if (param_7 == '\0') {
			lVar3 = ENG_random__Fl(((param_5 - param_4) + 1) * 0x40);
			param_4 = lVar3 + param_4 * 0x40;
			if (((&plr)[param_1]._pIFlags & 0x10000000U) != 0) {
				param_4 = param_4 >> 1;
			}
			dir = (&plr)[param_1]._pIGetHit << 6;
		}
		else {
			lVar3 = ENG_random__Fl((param_5 - param_4) + 1);
			param_4 = lVar3 + param_4;
			if (((&plr)[param_1]._pIFlags & 0x10000000U) != 0) {
				param_4 = param_4 >> 1;
			}
			dir = (&plr)[param_1]._pIGetHit;
		}
		param_4 = param_4 + dir;
		if (param_4 < 0x40) {
			param_4 = 0x40;
		}
	}
	if (0 < x) {
		param_4 = param_4 - (param_4 * x) / 100;
		x = (&plr)[param_1]._pMaxHP;
		(&plr)[param_1]._pHitPoints = (&plr)[param_1]._pHitPoints - param_4;
		dir = (&plr)[param_1]._pHitPoints;
		(&plr)[param_1]._pHPBase = (&plr)[param_1]._pHPBase - param_4;
		if (x < dir) {
			lVar3 = (&plr)[param_1]._pMaxHPBase;
			(&plr)[param_1]._pHitPoints = x;
			(&plr)[param_1]._pHPBase = lVar3;
		}
		if (0 < (&plr)[param_1]._pHitPoints >> 6) {
			cVar1 = (&plr)[param_1]._pClass;
			if (cVar1 == '\0') {
				x = (int)(&plr)[param_1]._px;
				y = (int)(&plr)[param_1]._py;
				dir = 0x316;
			}
			else {
				if (cVar1 == '\x01') {
					x = (int)(&plr)[param_1]._px;
					y = (int)(&plr)[param_1]._py;
					dir = 0x2a8;
				}
				else {
					if (cVar1 != '\x02') {
						drawhpflag = '\x01';
						return 1;
					}
					x = (int)(&plr)[param_1]._px;
					y = (int)(&plr)[param_1]._py;
					dir = 0x240;
				}
			}
			PlaySfxLoc__Fiii(dir,x,y);
			drawhpflag = '\x01';
			return 1;
		}
		StartPlrKill__Fii(param_1,(uint)param_8);
		return 1;
	}
	if (lVar4 < y) {
		if (param_2 == -1) {
			dir = (int)(&plr)[param_1]._pdir;
		}
		else {
			dir = GetDirection__Fiiii((int)(&plr)[param_1]._px,(int)(&plr)[param_1]._py,
																(int)monster[param_2]._mx,(int)monster[param_2]._my);
		}
		StartPlrBlock__Fii(param_1,dir);
		return 1;
	}
	if (((&plr)[param_1]._pmode == PM_GOTHIT) && (param_7 == '\x01')) {
		return 0;
	}
	x = (&plr)[param_1]._pMaxHP;
	(&plr)[param_1]._pHitPoints = (&plr)[param_1]._pHitPoints - param_4;
	dir = (&plr)[param_1]._pHitPoints;
	(&plr)[param_1]._pHPBase = (&plr)[param_1]._pHPBase - param_4;
	if (x < dir) {
		lVar3 = (&plr)[param_1]._pMaxHPBase;
		(&plr)[param_1]._pHitPoints = x;
		(&plr)[param_1]._pHPBase = lVar3;
	}
	if (0 < (&plr)[param_1]._pHitPoints >> 6) {
		StartPlrHit__FiiUc(param_1,param_4,'\0');
		return 1;
	}
	StartPlrKill__Fii(param_1,(uint)param_8);
	return 1;
}



// decompiled code
// original method signature: 
// undefined4 FUN_8013c5ec(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char param_7);
 // line -1, offset 0x8013c5ec
// function 'FUN_8013c5ec' @0x8013C5EC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4
FUN_8013c5ec(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char param_7)

{
	char cVar1;
	byte bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	long lVar6;
	long lVar7;
	int x;
	int y;
	ulong dwDam;
	int dir;
	
	if ((&plr)[param_2]._pInvincible != '\0') {
		return 0;
	}
	if (param_6 == 0x35) {
		return 0;
	}
	if ((((&plr)[param_2]._pSpellFlags & 1U) != 0) && (missiledata[param_6].mType == '\0')) {
		return 0;
	}
	bVar2 = missiledata[param_6].mResist;
	if (bVar2 == 2) {
		dir = (int)(&plr)[param_2]._pLghtResist;
	}
	else {
		if (bVar2 < 3) {
			if (bVar2 == 1) {
				dir = (int)(&plr)[param_2]._pFireResist;
			}
			else {
				dir = 0;
			}
		}
		else {
			dir = 0;
			if (bVar2 < 5) {
				dir = (int)(&plr)[param_2]._pMagResist;
			}
		}
	}
	lVar6 = ENG_random__Fl(100);
	if (missiledata[param_6].mType == '\0') {
		y = (uint)(ushort)(&plr)[param_2]._pDexterity << 0x10;
		x = y >> 0x10;
		param_5 = (((int)(&plr)[param_1]._pLevel -
							 ((&plr)[param_2]._pIAC + (&plr)[param_2]._pIBonusAC +
								(((x / 5 + (x >> 0x1f)) - (y >> 0x1f)) * 0x10000 >> 0x10) + -0x32)) +
							(int)(&plr)[param_1]._pDexterity + (&plr)[param_1]._pIBonusToHit) -
							(param_5 * param_5 >> 1);
		if ((&plr)[param_1]._pClass == '\x01') {
			param_5 = param_5 + 0x14;
		}
		bVar4 = param_5 < 5;
		if ((&plr)[param_1]._pClass != '\0') goto LAB_8013c964;
		param_5 = param_5 + 10;
	}
	else {
		param_5 = ((int)(&plr)[param_1]._pMagic - ((int)(&plr)[param_2]._pLevel * 2 + -0x32)) - param_5;
		bVar4 = param_5 < 5;
		if ((&plr)[param_1]._pClass != '\x02') goto LAB_8013c964;
		param_5 = param_5 + 0x14;
	}
	bVar4 = param_5 < 5;
LAB_8013c964:
	bVar5 = 0x5f < param_5;
	if (bVar4) {
		param_5 = 5;
	}
	bVar3 = lVar6 < param_5;
	if (!bVar4 && bVar5) {
		bVar3 = lVar6 < 0x5f;
	}
	if (!bVar3) {
		return 0;
	}
	if ((((&plr)[param_2]._pmode == PM_STAND) || (lVar6 = 100, (&plr)[param_2]._pmode == PM_ATTACK))
		 && (lVar6 = 100, (&plr)[param_2]._pBlockFlag != '\0')) {
		lVar6 = ENG_random__Fl(100);
	}
	if (param_7 == '\x01') {
		lVar6 = 100;
	}
	y = (&plr)[param_2]._pBaseToBlk + (int)(&plr)[param_2]._pDexterity +
			((int)(&plr)[param_1]._pLevel - (int)(&plr)[param_2]._pLevel) * -2;
	x = y;
	if (y < 0) {
		x = 0;
	}
	if (100 < y) {
		x = 100;
	}
	if (param_6 == 0x3f) {
		dwDam = (&plr)[param_2]._pHitPoints / 3;
	}
	else {
		lVar7 = ENG_random__Fl((param_4 - param_3) + 1);
		dwDam = lVar7 + param_3;
		if (missiledata[param_6].mType == '\0') {
			dwDam = dwDam + (int)(dwDam * (&plr)[param_1]._pIBonusDam) / 100 +
							(&plr)[param_1]._pIBonusDamMod + (&plr)[param_1]._pDamageMod;
		}
		if (param_7 == '\0') {
			dwDam = dwDam << 6;
		}
	}
	if (missiledata[param_6].mType != '\0') {
		dwDam = (int)dwDam >> 1;
	}
	if (dir < 1) {
		if (x <= lVar6) {
			NetSendCmdDamage__FUcUcUl('\x01',(uchar)param_2,dwDam);
			StartPlrHit__FiiUc(param_2,dwDam,'\0');
			return 1;
		}
		dir = GetDirection__Fiiii((int)(&plr)[param_2]._px,(int)(&plr)[param_2]._py,
															(int)(&plr)[param_1]._px,(int)(&plr)[param_1]._py);
		StartPlrBlock__Fii(param_2,dir);
		return 1;
	}
	NetSendCmdDamage__FUcUcUl('\x01',(uchar)param_2,dwDam - (int)(dwDam * dir) / 100);
	cVar1 = (&plr)[param_1]._pClass;
	if (cVar1 == '\0') {
		x = (int)(&plr)[param_1]._px;
		y = (int)(&plr)[param_1]._py;
		dir = 0x316;
	}
	else {
		if (cVar1 == '\x01') {
			x = (int)(&plr)[param_1]._px;
			y = (int)(&plr)[param_1]._py;
			dir = 0x2a8;
		}
		else {
			if (cVar1 != '\x02') {
				return 1;
			}
			x = (int)(&plr)[param_1]._px;
			y = (int)(&plr)[param_1]._py;
			dir = 0x240;
		}
	}
	PlaySfxLoc__Fiii(dir,x,y);
	return 1;
}



// decompiled code
// original method signature: 
// undefined4 FUN_8013c9b8(int param_1);
 // line -1, offset 0x8013c9b8
// function 'FUN_8013c9b8' @0x8013C9B8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8013c9b8(int param_1)

{
	char cVar1;
	long lVar2;
	int in_v1;
	int y;
	ulong dwDam;
	int pnum;
	int unaff_s2;
	char unaff_s3;
	int x;
	int dir;
	long lVar3;
	int unaff_s6;
	int unaff_s7;
	int param_5;
	int param_7;
	
	if (((in_v1 == 0) || (lVar3 = 100, in_v1 == 4)) &&
		 (lVar3 = 100, (&plr._pBlockFlag)[param_1] != '\0')) {
		lVar3 = ENG_random__Fl(100);
	}
	if (unaff_s3 == '\x01') {
		lVar3 = 100;
	}
	x = (&plr)[pnum]._pBaseToBlk + (int)(&plr)[pnum]._pDexterity +
			((int)(&plr)[unaff_s2]._pLevel - (int)(&plr)[pnum]._pLevel) * -2;
	dir = x;
	if (x < 0) {
		dir = 0;
	}
	if (100 < x) {
		dir = 100;
	}
	if (unaff_s6 == 0x3f) {
		dwDam = (&plr)[pnum]._pHitPoints / 3;
	}
	else {
		lVar2 = ENG_random__Fl((param_7 - param_5) + 1);
		dwDam = lVar2 + param_5;
		if (missiledata[unaff_s6].mType == '\0') {
			dwDam = dwDam + (int)(dwDam * (&plr)[unaff_s2]._pIBonusDam) / 100 +
							(&plr)[unaff_s2]._pIBonusDamMod + (&plr)[unaff_s2]._pDamageMod;
		}
		if (unaff_s3 == '\0') {
			dwDam = dwDam << 6;
		}
	}
	if (missiledata[unaff_s6].mType != '\0') {
		dwDam = (int)dwDam >> 1;
	}
	if (unaff_s7 < 1) {
		if (lVar3 < dir) {
			dir = GetDirection__Fiiii((int)(&plr)[pnum]._px,(int)(&plr)[pnum]._py,
																(int)(&plr)[unaff_s2]._px,(int)(&plr)[unaff_s2]._py);
			StartPlrBlock__Fii(pnum,dir);
		}
		else {
			NetSendCmdDamage__FUcUcUl('\x01',(uchar)pnum,dwDam);
			StartPlrHit__FiiUc(pnum,dwDam,'\0');
		}
	}
	else {
		NetSendCmdDamage__FUcUcUl('\x01',(uchar)pnum,dwDam - (int)(dwDam * unaff_s7) / 100);
		cVar1 = (&plr)[unaff_s2]._pClass;
		if (cVar1 == '\0') {
			x = (int)(&plr)[unaff_s2]._px;
			y = (int)(&plr)[unaff_s2]._py;
			dir = 0x316;
		}
		else {
			if (cVar1 == '\x01') {
				x = (int)(&plr)[unaff_s2]._px;
				y = (int)(&plr)[unaff_s2]._py;
				dir = 0x2a8;
			}
			else {
				if (cVar1 != '\x02') {
					return 1;
				}
				x = (int)(&plr)[unaff_s2]._px;
				y = (int)(&plr)[unaff_s2]._py;
				dir = 0x240;
			}
		}
		PlaySfxLoc__Fiii(dir,x,y);
	}
	return 1;
}



// decompiled code
// original method signature: 
// void FUN_8013cd88(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,int param_6,char param_7,int param_8);
 // line -1, offset 0x8013cd88
// function 'FUN_8013cd88' @0x8013CD88 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8013cd88(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
								 int param_6,char param_7,int param_8)

{
	char cVar1;
	short sVar2;
	bool bVar3;
	uchar uVar4;
	byte bVar5;
	uint local_2c;
	void *pvVar6;
	int iVar7;
	uint oi;
	map_info *pmVar8;
	
	pmVar8 = &dung_map + param_6 + param_5 * 0x70;
	if ((0x6f < param_5) || (0x6f < param_6)) {
		missile[param_1]._miDelFlag = '\x01';
		AddUnLight__Fi((int)missile[param_1]._mlid);
		return;
	}
	if ((missile[param_1]._miAnimType == '\x04') ||
		 (iVar7 = (int)missile[param_1]._misource, iVar7 == -1)) {
		iVar7 = (int)pmVar8->dMonster;
		if (0 < iVar7) {
			if (missile[param_1]._miAnimType == '\x04') {
				local_2c = FUN_8013b3d0((int)missile[param_1]._misource,iVar7 + -1,param_2,param_3,
																(int)missile[param_1]._midist,(int)missile[param_1]._mitype,
																param_4 & 0xff);
			}
			else {
				local_2c = FUN_8013b04c(iVar7 + -1,param_2,param_3,(int)missile[param_1]._midist,
																(int)missile[param_1]._mitype,param_4 & 0xff);
			}
			if ((local_2c & 0xff) != 0) {
				if (param_7 == '\0') {
					missile[param_1]._mirange = 0;
				}
				missile[param_1]._miHitFlag = '\x01';
			}
		}
		uVar4 = IsDplayer__Fii(param_5,param_6);
		if ((uVar4 == '\0') || (param_8 == 0)) goto LAB_8013d19c;
		local_2c = (uint)(missile[param_1]._miAnimType == '\x04');
		bVar5 = IsDplayer__Fii(param_5,param_6);
		iVar7 = -1;
		sVar2 = missile[param_1]._midist;
		cVar1 = missile[param_1]._mitype;
LAB_8013d178:
		local_2c = FUN_8013bb90((uint)bVar5 - 1,iVar7,(int)sVar2,param_2,param_3,(int)cVar1,
														param_4 & 0xff,local_2c);
	}
	else {
		if (missile[param_1]._micaster != 0) {
			if (((((monster[iVar7]._mFlags & 0x10) != 0) &&
					 (iVar7 = (int)pmVar8->dMonster + -1, 0 < (int)pmVar8->dMonster)) &&
					((monster[iVar7]._mFlags & 0x20) != 0)) &&
				 (local_2c = FUN_8013b04c(iVar7,param_2,param_3,(int)missile[param_1]._midist,
																	(int)missile[param_1]._mitype,param_4 & 0xff),
				 (local_2c & 0xff) != 0)) {
				if (param_7 == '\0') {
					missile[param_1]._mirange = 0;
				}
				missile[param_1]._miHitFlag = '\x01';
			}
			uVar4 = IsDplayer__Fii(param_5,param_6);
			if ((uVar4 == '\0') || (param_8 == 0)) goto LAB_8013d19c;
			bVar5 = IsDplayer__Fii(param_5,param_6);
			iVar7 = (int)missile[param_1]._misource;
			sVar2 = missile[param_1]._midist;
			cVar1 = missile[param_1]._mitype;
			local_2c = 0;
			goto LAB_8013d178;
		}
		local_2c = SEXT24(pmVar8->dMonster);
		oi = local_2c - 1;
		if (((0 < (int)local_2c) ||
				(((int)local_2c < 0 && (oi = ~local_2c, monster[oi]._mmode == '\x0f')))) &&
			 (local_2c = FUN_8013b3d0(iVar7,oi,param_2,param_3,(int)missile[param_1]._midist,
																(int)missile[param_1]._mitype,param_4 & 0xff),
			 (local_2c & 0xff) != 0)) {
			if (param_7 == '\0') {
				missile[param_1]._mirange = 0;
			}
			missile[param_1]._miHitFlag = '\x01';
		}
		bVar3 = false;
		uVar4 = IsDplayer__Fii(param_5,param_6);
		if (uVar4 != '\0') {
			bVar5 = IsDplayer__Fii(param_5,param_6);
			bVar3 = (uint)bVar5 - 1 != (int)missile[param_1]._misource;
		}
		if ((!bVar3) || (param_8 == 0)) goto LAB_8013d19c;
		bVar5 = IsDplayer__Fii(param_5,param_6);
		local_2c = FUN_8013c5ec((int)missile[param_1]._misource,(uint)bVar5 - 1,param_2,param_3,
														(int)missile[param_1]._midist,(int)missile[param_1]._mitype,
														param_4 & 0xff);
	}
	if ((local_2c & 0xff) != 0) {
		if (param_7 == '\0') {
			missile[param_1]._mirange = 0;
		}
		missile[param_1]._miHitFlag = '\x01';
	}
LAB_8013d19c:
	local_2c = SEXT14(pmVar8->dObject);
	if (local_2c != 0) {
		oi = local_2c - 1;
		if ((int)local_2c < 1) {
			oi = ~local_2c;
		}
		if (object[oi]._oMissFlag == '\0') {
			if (object[oi]._oBreak == '\x01') {
				BreakObject__Fii(-1,oi);
			}
			if (param_7 == '\0') {
				missile[param_1]._mirange = 0;
			}
			missile[param_1]._miHitFlag = '\0';
		}
	}
	pvVar6 = GetMISSILE__Fii(param_5,param_6);
	if (pvVar6 != (void *)0x0) {
		if (param_7 == '\0') {
			missile[param_1]._mirange = 0;
		}
		missile[param_1]._miHitFlag = '\0';
	}
	if ((missile[param_1]._mirange == 0) && (missiledata[(int)missile[param_1]._mitype].miSFX != -1))
	{
		PlaySfxLoc__Fiii(missiledata[(int)missile[param_1]._mitype].miSFX,(int)missile[param_1]._mix,
										 (int)missile[param_1]._miy);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8013d1b4(void);
 // line -1, offset 0x8013d1b4
// function 'FUN_8013d1b4' @0x8013D1B4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8013d1b4(void)

{
	uint in_v0;
	void *pvVar1;
	uint oi;
	int unaff_s1;
	int unaff_s4;
	int x;
	int y;
	
	oi = ~in_v0;
	if (object[oi]._oMissFlag == '\0') {
		if (object[oi]._oBreak == '\x01') {
			BreakObject__Fii(-1,oi);
		}
		if (unaff_s4 == 0) {
			*(undefined2 *)(unaff_s1 + 0x18) = 0;
		}
		*(undefined *)(unaff_s1 + 0x3d) = 0;
	}
	pvVar1 = GetMISSILE__Fii(x,y);
	if (pvVar1 != (void *)0x0) {
		if (unaff_s4 == 0) {
			*(undefined2 *)(unaff_s1 + 0x18) = 0;
		}
		*(undefined *)(unaff_s1 + 0x3d) = 0;
	}
	if ((*(short *)(unaff_s1 + 0x18) == 0) &&
		 (missiledata[(int)*(char *)(unaff_s1 + 0x30)].miSFX != -1)) {
		PlaySfxLoc__Fiii(missiledata[(int)*(char *)(unaff_s1 + 0x30)].miSFX,
										 (int)*(char *)(unaff_s1 + 0x31),(int)*(char *)(unaff_s1 + 0x32));
	}
	return;
}



// decompiled code
// original method signature: 
// uint FUN_8013d2b8(uint uParm1,int iParm2);
 // line -1, offset 0x8013d2b8
// function 'FUN_8013d2b8' @0x8013D2B8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8013d2b8(uint uParm1,int iParm2)

{
	uint uVar1;
	
	uVar1 = (uParm1 & 0xf0) >> 4;
	if ((uParm1 & 0xff) != 0) {
		if (uVar1 < 10) {
			if (uVar1 == 0) {
				uVar1 = 0x10;
			}
			if (iParm2 < (int)uVar1) {
				return (uint)ValueTable[uParm1 & 0xf];
			}
		}
		else {
			if (iParm2 < (int)(uParm1 & 0xf)) {
				return (uint)StringTable[iParm2 + (uVar1 - 10 & 0xff) * 9];
			}
		}
	}
	return 0;
}



// decompiled code
// original method signature: 
// void FUN_8013d34c(int iParm1,int iParm2);
 // line -1, offset 0x8013d34c
// function 'FUN_8013d34c' @0x8013D34C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8013d34c(int iParm1,int iParm2)

{
	char cVar1;
	char cVar2;
	
	missile[iParm1]._miAnimType = (uchar)iParm2;
	cVar2 = missile[iParm1]._mimfnum;
	missile[iParm1]._miAnimFlags = misfiledata[iParm2].mFlags;
	cVar1 = FUN_8013d2b8((uint)misfiledata[iParm2].mAnimDelay,(int)cVar2);
	missile[iParm1]._miAnimDelay = cVar1;
	cVar2 = FUN_8013d2b8((uint)misfiledata[iParm2].mAnimLen,(int)cVar2);
	missile[iParm1]._miAnimLen = cVar2;
	missile[iParm1]._miAnimCnt = '\0';
	missile[iParm1]._miAnimFrame = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void FUN_8013d424(int iParm1,char cParm2);
 // line -1, offset 0x8013d424
// function 'FUN_8013d424' @0x8013D424 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8013d424(int iParm1,char cParm2)

{
	missile[iParm1]._mimfnum = cParm2;
	FUN_8013d34c(iParm1,(uint)missile[iParm1]._miAnimType);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8013d470(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char param_7,int param_8);
 // line -1, offset 0x8013d470
// function 'FUN_8013d470' @0x8013D470 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8013d470(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
								 char param_7,int param_8)

{
	char cVar1;
	int r;
	undefined4 uVar2;
	
	if ((param_2 == param_4) && (param_3 == param_5)) {
		param_4 = param_2 + XDirAdd[param_6];
		param_5 = param_3 + YDirAdd[param_6];
	}
	if (param_7 == '\0') {
		if ((&plr)[param_8]._pClass == '\x01') {
			r = ((int)((uint)(byte)(&plr)[param_8]._pLevel << 0x18) >> 0x1a) + 0x1f;
			goto LAB_8013d590;
		}
		if ((&plr)[param_8]._pClass == '\0') {
			r = ((int)((uint)(byte)(&plr)[param_8]._pLevel << 0x18) >> 0x1b) + 0x1f;
			goto LAB_8013d590;
		}
	}
	r = 0x20;
LAB_8013d590:
	FUN_8013a988(param_1,param_2,param_3,param_4,param_5,r);
	uVar2 = FUN_8013a6cc(param_2,param_3,param_4,param_5);
	FUN_8013d424(param_1,uVar2);
	cVar1 = missile[param_1]._mitype;
	missile[param_1]._mirange = 0x100;
	missile[param_1]._miVar1 = (short)param_2;
	missile[param_1]._miVar2 = (short)param_3;
	if (cVar1 == '8') {
		r = 0x365;
	}
	else {
		r = 0x95;
	}
	r = AddLight__Fiii(param_2,param_3,r);
	missile[param_1]._mlid = (char)r;
	return;
}



// decompiled code
// original method signature: 
// void FUN_8013d818(int iParm1,int iParm2,int iParm3);
 // line -1, offset 0x8013d818
// function 'FUN_8013d818' @0x8013D818 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8013d818(int iParm1,int iParm2,int iParm3)

{
	uchar uVar1;
	int iVar2;
	int x;
	int iVar3;
	int iVar4;
	
	iVar3 = 1;
	do {
		iVar4 = -iVar3;
		if (0x31 < iVar3) {
			missile[iParm1]._mix = (char)iParm2;
			missile[iParm1]._miy = (char)iParm3;
			return;
		}
		while (iVar2 = -iVar3, iVar4 <= iVar3) {
			while (iVar2 <= iVar3) {
				x = iParm2 + iVar2;
				uVar1 = PosOkPlayer__Fiii(myplr,x,iParm3 + iVar4);
				iVar2 = iVar2 + 1;
				if (uVar1 != '\0') {
					missile[iParm1]._mix = (char)x;
					missile[iParm1]._miy = (char)(iParm3 + iVar4);
					return;
				}
			}
			iVar4 = iVar4 + 1;
		}
		iVar3 = iVar3 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// void FUN_8013d954(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,char param_7,uint param_8);
 // line -1, offset 0x8013d954
// function 'FUN_8013d954' @0x8013D954 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8013d954(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
								 char param_7,uint param_8)

{
	uchar uVar1;
	long lVar2;
	void *pvVar3;
	char cVar4;
	int y;
	char cVar5;
	int x;
	int iVar6;
	char local_38;
	
	iVar6 = 1;
	do {
		uVar1 = '\x01';
		do {
			lVar2 = ENG_random__Fl(3);
			x = lVar2 + 4;
			lVar2 = ENG_random__Fl(3);
			y = lVar2 + 4;
			lVar2 = ENG_random__Fl(2);
			if (lVar2 == 1) {
				x = -x;
			}
			cVar5 = (char)x;
			lVar2 = ENG_random__Fl(2);
			if (lVar2 == 1) {
				y = -y;
			}
			cVar4 = (char)y;
			if (((param_7 == '\0') && (plr.plractive != '\0')) &&
				 (PlayerStruct_800dbf20.plractive != '\0')) {
				uVar1 = ChkPlrOffsets__Fiiii
													((param_2 + x) * 8,(param_3 + y) * 8,(&plr)[param_8 ^ 1].WorldX,
													 (&plr)[param_8 ^ 1].WorldY);
			}
		} while (uVar1 == '\0');
		x = param_2 + x;
		y = param_3 + y;
		pvVar3 = GetSOLID__Fii(x,y);
		uVar1 = setlevel;
		if (((pvVar3 == (void *)0x0) && ((&dung_map)[x * 0x70 + y].dObject == '\0')) &&
			 ((&dung_map)[x * 0x70 + y].dMonster == 0)) goto LAB_8013daf8;
		iVar6 = iVar6 + 1;
		cVar5 = '\0';
	} while (iVar6 < 0x1f5);
	cVar4 = '\0';
LAB_8013daf8:
	missile[param_1]._mirange = 2;
	missile[param_1]._miVar1 = 0;
	if ((uVar1 == '\0') || (setlvlnum != '\x05')) {
		missile[param_1]._mix = (char)param_2 + cVar5;
		missile[param_1]._miy = (char)param_3 + cVar4;
		if (param_7 == '\0') {
			UseMana__Fii(param_8,10);
		}
	}
	else {
		if ((uint)(byte)object[(int)(&dung_map)[param_4 * 0x70 + param_5].dObject + -1]._otype - 0x54 <
				2) {
			local_38 = (char)param_4;
			missile[param_1]._mix = local_38;
			missile[param_1]._miy = (char)param_5;
			uVar1 = PosOkPlayer__Fiii(myplr,param_4,param_5);
			if (uVar1 == '\0') {
				FUN_8013d818(param_1,param_4,param_5);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// undefined4 FUN_8013edf8(int iParm1,int iParm2);
 // line -1, offset 0x8013edf8
// function 'FUN_8013edf8' @0x8013EDF8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8013edf8(int iParm1,int iParm2)

{
	bool bVar1;
	int iVar2;
	int *piVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	if (0 < numtrigs) {
		piVar3 = &trigs._ty;
		iVar4 = 0;
		do {
			iVar2 = *(int *)((int)&trigs._tx + iVar4);
			bVar1 = false;
			if ((iParm1 == iVar2) && (iParm2 == *piVar3)) {
				return 1;
			}
			iVar2 = abs(iVar2 - iParm1);
			if (iVar2 < 2) {
				iVar2 = abs(*piVar3 - iParm2);
				bVar1 = iVar2 < 2;
			}
			if (bVar1) {
				return 1;
			}
			piVar3 = piVar3 + 4;
			iVar5 = iVar5 + 1;
			iVar4 = iVar4 + 0x10;
		} while (iVar5 < numtrigs);
	}
	iVar4 = 0;
	piVar3 = &quests._qty;
	iVar5 = 0;
	do {
		if (((currlevel == (&quests._qlevel)[iVar5]) && ((&quests._qslvl)[iVar5] != '\0')) &&
			 ((&quests._qactive)[iVar5] != '\0')) {
			iVar2 = *(int *)((int)&quests._qtx + iVar5);
			bVar1 = false;
			if ((iParm1 == iVar2) && (iParm2 == *piVar3)) {
				return 1;
			}
			iVar2 = abs(iVar2 - iParm1);
			if (iVar2 < 2) {
				iVar2 = abs(*piVar3 - iParm2);
				bVar1 = iVar2 < 2;
			}
			if (bVar1) {
				return 1;
			}
		}
		piVar3 = piVar3 + 5;
		iVar4 = iVar4 + 1;
		iVar5 = iVar5 + 0x14;
		if (0xf < iVar4) {
			return 0;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void FUN_8013efa0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,int param_8);
 // line -1, offset 0x8013efa0
// function 'FUN_8013efa0' @0x8013EFA0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8013efa0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
								 undefined4 param_6,undefined4 param_7,int param_8)

{
	char cVar1;
	bool bVar2;
	byte bVar3;
	int iVar4;
	void *pvVar5;
	void *pvVar6;
	uint uVar7;
	short *psVar8;
	uchar x;
	int x_00;
	uchar y;
	int y_00;
	uint uVar9;
	int iVar10;
	int iVar11;
	int local_60;
	undefined4 local_5c;
	undefined4 local_58;
	undefined4 local_54;
	undefined4 local_50;
	undefined4 local_4c;
	int local_48;
	int local_40;
	int local_38;
	
	local_60 = DAT_8011a030;
	local_5c = DAT_8011a034;
	local_58 = DAT_8011a038;
	local_54 = DAT_8011a03c;
	local_50 = DAT_8011a040;
	local_4c = DAT_8011a044;
	x_00 = 0;
	y_00 = 0;
	if (currlevel == '\0') {
		x = (uchar)param_4;
		missile[param_1]._mix = x;
		y = (uchar)param_5;
		missile[param_1]._miy = y;
		missile[param_1]._misx = x;
		missile[param_1]._misy = y;
		missile[param_1]._miDelFlag = '\0';
		local_48 = param_1;
		local_40 = param_4;
	}
	else {
		iVar11 = 0;
		local_38 = param_1 * 0x13;
		missile[param_1]._miDelFlag = '\x01';
		iVar4 = 0;
		local_48 = param_1;
		local_40 = param_4;
		do {
			uVar9 = (uint)(byte)(&CrawlTable)[*(int *)((int)&local_60 + iVar4)];
			iVar10 = *(int *)((int)&local_60 + iVar4) + 1;
			if ((&CrawlTable)[*(int *)((int)&local_60 + iVar4)] != 0) {
				iVar4 = local_38 * 4;
				do {
					x_00 = local_40 + (int)(&CrawlTable)[iVar10];
					y_00 = param_5 + (int)(&CHAR_00h_800d5555)[iVar10];
					if ((x_00 - 1U < 0x6f) && (y_00 - 1U < 0x6f)) {
						pvVar5 = GetSOLID__Fii(x_00,y_00);
						pvVar6 = GetMISSILE__Fii(x_00,y_00);
						bVar3 = IsDplayer__Fii(x_00,y_00);
						bVar2 = false;
						if (((uint)pvVar5 | (int)(&dung_map)[x_00 * 0x70 + y_00].dObject | (uint)pvVar6 |
								 (uint)bVar3 | (int)(&dung_map)[x_00 * 0x70 + y_00].dMissile |
								(int)(&dung_map)[x_00 * 0x70 + y_00].dMonster) == 0) {
							uVar7 = FUN_8013edf8(x_00,y_00);
							bVar2 = (uVar7 & 0xff) == 0;
						}
						if (bVar2) {
							(&missile[0]._mix)[iVar4] = (char)x_00;
							(&missile[0]._miy)[iVar4] = (char)y_00;
							(&missile[0]._misx)[iVar4] = (char)x_00;
							(&missile[0]._misy)[iVar4] = (char)y_00;
							(&missile[0]._miDelFlag)[iVar4] = '\0';
							iVar11 = 6;
							break;
						}
					}
					uVar9 = uVar9 - 1;
					iVar10 = iVar10 + 2;
				} while (0 < (int)uVar9);
			}
			y = (uchar)y_00;
			x = (uchar)x_00;
			iVar11 = iVar11 + 1;
			iVar4 = iVar11 * 4;
		} while (iVar11 < 6);
	}
	cVar1 = missile[local_48]._miAnimLen;
	missile[local_48]._mirange = 100;
	missile[local_48]._miVar2 = 0;
	missile[local_48]._miVar1 = 100 - (short)cVar1;
	x_00 = 0;
	if (0 < iGp00001b08) {
		psVar8 = &missileactive;
		do {
			y_00 = (int)*psVar8;
			if (((missile[y_00]._mitype == '\n') && (y_00 != local_48)) &&
				 ((int)missile[y_00]._misource == param_8)) {
				missile[y_00]._mirange = 0;
			}
			x_00 = x_00 + 1;
			psVar8 = psVar8 + 1;
		} while (x_00 < iGp00001b08);
	}
	FUN_8013ab44(local_48);
	x_00 = myplr;
	myplr = param_8;
	if ((missile[local_48]._miDelFlag == '\0') && (currlevel != '\0')) {
		NetSendCmdLocParam3__FUcUcUcUcUsUsUs
							('\x01','8',x,y,(uint)currlevel,(uint)leveltype,(uint)(setlevel != '\0'));
	}
	myplr = x_00;
	return;
}



// decompiled code
// original method signature: 
// void FUN_80140e64(undefined4 param_1);
 // line -1, offset 0x80140e64
// function 'FUN_80140e64' @0x80140E64 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80140e64(undefined4 param_1)

{
	int in_v0;
	int iVar1;
	int in_v1;
	int iVar2;
	int unaff_s1;
	int id;
	int unaff_s4;
	
	if (in_v0 != 0) {
		*(undefined4 *)((int)&plr._pHitPoints + in_v1) = param_1;
	}
	iVar2 = *(int *)((int)&plr._pMaxHPBase + in_v1);
	iVar1 = *(int *)((int)&plr._pHPBase + in_v1) + unaff_s1;
	*(int *)((int)&plr._pHPBase + in_v1) = iVar1;
	if (iVar2 < iVar1) {
		*(int *)((int)&plr._pHPBase + in_v1) = iVar2;
	}
	UseMana__Fii(id,2);
	drawhpflag = '\x01';
	missile[unaff_s4]._miDelFlag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void FUN_80140f14(int param_1);
 // line -1, offset 0x80140f14
// function 'FUN_80140f14' @0x80140F14 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80140f14(int param_1)

{
	int param_8;
	
	missile[param_1]._miDelFlag = '\x01';
	UseMana__Fii(param_8,0x22);
	if (param_8 == myplr) {
		NewCursor__Fi(10);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80142998(void);
 // line -1, offset 0x80142998
// function 'FUN_80142998' @0x80142998 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80142998(void)

{
	uint uVar1;
	int in_v0;
	short *unaff_s0;
	short *unaff_s1;
	undefined *unaff_s2;
	int unaff_s3;
	int unaff_s4;
	
	while( true ) {
		unaff_s3 = unaff_s3 + 1;
		if (*(int *)(in_v0 + -0x4c88) < unaff_s3) break;
		if (((&PlayerStruct_800dbf20.plractive)[(int)unaff_s2] != '\0') &&
			 (uVar1 = FUN_80155478(), (uVar1 & 0xff) != 0)) {
			FUN_80142a04((int)*unaff_s1,(int)*unaff_s0,(int)*unaff_s1,(int)*unaff_s0);
		}
		unaff_s0 = unaff_s0 + 0xcf4;
		unaff_s1 = unaff_s1 + 0xcf4;
		in_v0 = -0x7fee0000;
		unaff_s2 = &DAT_000019e8 + (int)unaff_s2;
	}
	missile[unaff_s4]._miDelFlag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// int FUN_80142a04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6,char param_7,int param_8,int param_9,char param_10);
 // line -1, offset 0x80142a04
// function 'FUN_80142a04' @0x80142A04 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_80142a04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
								undefined4 param_5,int param_6,char param_7,int param_8,int param_9,char param_10)

{
	uchar uVar1;
	short sVar2;
	int iVar3;
	_func_29 *p_Var4;
	int iVar5;
	int iVar6;
	undefined4 uVar7;
	int *piVar8;
	int *piVar9;
	int local_68 [16];
	
	piVar9 = local_68;
	piVar8 = &DAT_8011a080;
	do {
		iVar3 = piVar8[1];
		iVar5 = piVar8[2];
		iVar6 = piVar8[3];
		*piVar9 = *piVar8;
		piVar9[1] = iVar3;
		piVar9[2] = iVar5;
		piVar9[3] = iVar6;
		piVar8 = piVar8 + 4;
		piVar9 = piVar9 + 4;
	} while (piVar8 != &DAT_8011a0c0);
	if (iGp00001b08 < 0x7d) {
		iVar3 = (int)missileavail[0];
		sVar2 = missileavail[0x7c - iGp00001b08];
		(&missileactive)[iGp00001b08] = missileavail[0];
		missileavail[0] = sVar2;
		p_Var4 = (_func_29 *)MissPrintRoutines[param_6];
		missile[iVar3]._mitype = (char)param_6;
		missile[iVar3]._micaster = (short)param_7;
		missile[iVar3]._misource = (short)param_8;
		missile[iVar3].PrintPtr = p_Var4;
		missile[iVar3]._miAnimType = missiledata[param_6].mFileNum;
		uVar1 = missiledata[param_6].mDraw;
		missile[iVar3]._mispllvl = param_10;
		missile[iVar3]._mimfnum = (char)param_5;
		missile[iVar3]._miDrawFlag = uVar1;
		if ((missile[iVar3]._miAnimType == 0xff) ||
			 (uVar7 = param_5, misfiledata[(uint)missile[iVar3]._miAnimType].mAnimFAmt < 8)) {
			uVar7 = 0;
		}
		iGp00001b08 = iGp00001b08 + 1;
		FUN_8013d424(iVar3,uVar7);
		missile[iVar3]._mix = (char)param_1;
		missile[iVar3]._miy = (char)param_2;
		missile[iVar3]._misx = (char)param_1;
		missile[iVar3]._misy = (char)param_2;
		if (((param_7 == '\0') && (param_6 != 0x2c)) && (param_6 != 0x31)) {
			missile[iVar3]._miVar6 =
					 (short)((int)(&plr)[param_8]._pxoff + local_68[(int)(&plr)[param_8]._pdir * 2] >> 1);
			missile[iVar3]._miVar7 =
					 (short)((int)(&plr)[param_8]._pyoff + local_68[(int)(&plr)[param_8]._pdir * 2 + 1] >> 1);
		}
		else {
			missile[iVar3]._miVar6 = 0;
			missile[iVar3]._miVar7 = 0;
		}
		missile[iVar3]._mitxoff = 0;
		missile[iVar3]._mityoff = 0;
		missile[iVar3]._mixoff = '\0';
		missile[iVar3]._miyoff = '\0';
		missile[iVar3]._miDelFlag = '\0';
		missile[iVar3]._miAnimAdd = '\x01';
		missile[iVar3]._miLightFlag = '\0';
		missile[iVar3]._miPreFlag = '\0';
		missile[iVar3]._mlid = -1;
		missile[iVar3]._miHitFlag = '\0';
		missile[iVar3]._midist = 0;
		missile[iVar3]._mirnd = 0;
		missile[iVar3]._midam = param_9;
		if (missiledata[param_6].mlSFX != -1) {
			PlaySfxLoc__Fiii(missiledata[param_6].mlSFX,(int)missile[iVar3]._mix,(int)missile[iVar3]._miy)
			;
		}
		(*missiledata[param_6].mAddProc)
							(iVar3,param_1,param_2,param_3,param_4,param_5,(int)param_7,param_8,param_9);
	}
	else {
		iVar3 = -1;
	}
	return iVar3;
}



// decompiled code
// original method signature: 
// void FUN_80142bf4(void);
 // line -1, offset 0x80142bf4
// function 'FUN_80142bf4' @0x80142BF4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80142bf4(void)

{
	int in_v0;
	int iVar1;
	int unaff_s0;
	int unaff_s1;
	int unaff_s2;
	int unaff_s3;
	char unaff_s4;
	char unaff_s5;
	int param_21;
	
	iVar1 = in_v0 * 4;
	(&missile[0]._mix)[iVar1] = unaff_s4;
	(&missile[0]._miy)[iVar1] = unaff_s5;
	(&missile[0]._misx)[iVar1] = unaff_s4;
	(&missile[0]._misy)[iVar1] = unaff_s5;
	if (((unaff_s3 == 0) && (unaff_s1 != 0x2c)) && (unaff_s1 != 0x31)) {
		(&missile[0]._miVar6)[in_v0 * 2] =
				 (short)((int)(&plr)[unaff_s2]._pxoff +
								 *(int *)(&stack0x00000028 + (int)(&plr)[unaff_s2]._pdir * 8) >> 1);
		(&missile[0]._miVar7)[in_v0 * 2] =
				 (short)((int)(&plr)[unaff_s2]._pyoff +
								 *(int *)(&stack0x0000002c + (int)(&plr)[unaff_s2]._pdir * 8) >> 1);
	}
	else {
		missile[unaff_s0]._miVar6 = 0;
		missile[unaff_s0]._miVar7 = 0;
	}
	missile[unaff_s0]._mitxoff = 0;
	missile[unaff_s0]._mityoff = 0;
	missile[unaff_s0]._mixoff = '\0';
	missile[unaff_s0]._miyoff = '\0';
	missile[unaff_s0]._miDelFlag = '\0';
	missile[unaff_s0]._miAnimAdd = '\x01';
	missile[unaff_s0]._miLightFlag = '\0';
	missile[unaff_s0]._miPreFlag = '\0';
	missile[unaff_s0]._mlid = -1;
	missile[unaff_s0]._miHitFlag = '\0';
	missile[unaff_s0]._midist = 0;
	missile[unaff_s0]._mirnd = 0;
	missile[unaff_s0]._midam = param_21;
	if (missiledata[unaff_s1].mlSFX != -1) {
		PlaySfxLoc__Fiii(missiledata[unaff_s1].mlSFX,(int)missile[unaff_s0]._mix,
										 (int)missile[unaff_s0]._miy);
	}
	(*missiledata[unaff_s1].mAddProc)();
	return;
}



// decompiled code
// original method signature: 
// int FUN_80142e90(int iParm1,int iParm2,int iParm3);
 // line -1, offset 0x80142e90
// function 'FUN_80142e90' @0x80142E90 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_80142e90(int iParm1,int iParm2,int iParm3)

{
	short sVar1;
	uint uVar2;
	undefined4 uVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	uVar2 = FUN_80155478((int)missile[iParm1]._mix,(int)missile[iParm1]._miy,iParm2,iParm3);
	if (((((uVar2 & 0xff) != 0) &&
			 (iVar4 = (int)(&dung_map)[iParm2 * 0x70 + iParm3].dMonster + -1,
			 0 < (int)(&dung_map)[iParm2 * 0x70 + iParm3].dMonster)) &&
			(0 < monster[iVar4]._mhitpoints >> 6)) && (3 < iVar4)) {
		iVar5 = -1;
		iVar4 = GetDirection__Fiiii((int)missile[iParm1]._mix,(int)missile[iParm1]._miy,iParm2,iParm3);
		sVar1 = missile[iParm1]._misource;
		missile[iParm1]._miVar3 = missileavail[0];
		uVar3 = FUN_8013a43c((int)sVar1,1);
		FUN_80142a04((int)missile[iParm1]._mix,(int)missile[iParm1]._miy,iParm2,iParm3,iVar4,1,0,
								 (int)missile[iParm1]._misource,missile[iParm1]._midam,uVar3);
	}
	if (iVar5 == -1) {
		FUN_8013d424(iParm1,2);
		missile[iParm1]._miVar2 = 3;
	}
	return iVar5;
}



// decompiled code
// original method signature: 
// void FUN_80142ff4(void);
 // line -1, offset 0x80142ff4
// function 'FUN_80142ff4' @0x80142FF4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80142ff4(void)

{
	int unaff_s1;
	int unaff_s2;
	int unaff_s5;
	undefined4 param_9;
	
	param_9 = *(undefined4 *)((int)&missile[0]._midam + unaff_s1);
	FUN_80142a04();
	if (unaff_s5 == -1) {
		FUN_8013d424();
		missile[unaff_s2]._miVar2 = 3;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014340c(undefined4 uParm1,undefined4 uParm2,int iParm3);
 // line -1, offset 0x8014340c
// function 'FUN_8014340c' @0x8014340C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014340c(undefined4 uParm1,undefined4 uParm2,int iParm3)

{
	char cVar1;
	uchar uVar2;
	char cVar3;
	undefined4 in_v0;
	int iVar4;
	int in_v1;
	int iVar5;
	int iVar6;
	int iVar7;
	int unaff_s0;
	int unaff_s1;
	int unaff_s2;
	
	*(undefined4 *)((int)&missile[0]._mitxoff + unaff_s0) = in_v0;
	*(int *)((int)&missile[0]._mityoff + unaff_s0) = in_v1 + iParm3;
	FUN_8013ada0();
	if (unaff_s1 == -1) {
		ENG_random__Fl(10);
		ENG_random__Fl(10);
	}
	if ((missile[unaff_s2]._mix != missile[unaff_s2]._misx) ||
		 (missile[unaff_s2]._miy != missile[unaff_s2]._misy)) {
		uVar2 = missiledata[(int)missile[unaff_s2]._mitype].mResist;
		missiledata[(int)missile[unaff_s2]._mitype].mResist = '\0';
		FUN_8013cd88();
		missiledata[(int)missile[unaff_s2]._mitype].mResist = uVar2;
	}
	if (missile[unaff_s2]._mirange == 0) {
		iVar4 = missile[unaff_s2]._mitxoff;
		iVar6 = missile[unaff_s2]._mixvel;
		iVar5 = missile[unaff_s2]._mityoff;
		iVar7 = missile[unaff_s2]._miyvel;
		missile[unaff_s2]._mimfnum = '\0';
		missile[unaff_s2]._mitxoff = iVar4 - iVar6;
		missile[unaff_s2]._mityoff = iVar5 - iVar7;
		FUN_8013ada0();
		FUN_8013d34c();
		missile[unaff_s2]._mirange = (short)missile[unaff_s2]._miAnimLen - 1;
	}
	else {
		if (((int)missile[unaff_s2]._mix != (int)missile[unaff_s2]._miVar1) ||
			 ((int)missile[unaff_s2]._miy != (int)missile[unaff_s2]._miVar2)) {
			cVar3 = missile[unaff_s2]._miy;
			cVar1 = missile[unaff_s2]._mitype;
			missile[unaff_s2]._miVar1 = (short)missile[unaff_s2]._mix;
			missile[unaff_s2]._miVar2 = (short)cVar3;
			if (cVar1 == '8') {
				ChangeLight__Fiiii((int)missile[unaff_s2]._mlid,(int)missile[unaff_s2]._miVar1,
													 (int)(short)cVar3,0x365);
			}
			else {
				ChangeLight__Fiiii((int)missile[unaff_s2]._mlid,(int)missile[unaff_s2]._miVar1,
													 (int)(short)cVar3,0x95);
			}
		}
	}
	if (missile[unaff_s2]._mirange == 0) {
		cVar1 = missile[unaff_s2]._mlid;
		missile[unaff_s2]._miDelFlag = '\x01';
		AddUnLight__Fi((int)cVar1);
	}
	FUN_8013ab44();
	return;
}



// decompiled code
// original method signature: 
// void FUN_801434a0(void);
 // line -1, offset 0x801434a0
// function 'FUN_801434a0' @0x801434A0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801434a0(void)

{
	char cVar1;
	uchar uVar2;
	char cVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int unaff_s2;
	
	if ((missile[unaff_s2]._mix != missile[unaff_s2]._misx) ||
		 (missile[unaff_s2]._miy != missile[unaff_s2]._misy)) {
		uVar2 = missiledata[(int)missile[unaff_s2]._mitype].mResist;
		missiledata[(int)missile[unaff_s2]._mitype].mResist = '\0';
		FUN_8013cd88();
		missiledata[(int)missile[unaff_s2]._mitype].mResist = uVar2;
	}
	if (missile[unaff_s2]._mirange == 0) {
		iVar4 = missile[unaff_s2]._mitxoff;
		iVar6 = missile[unaff_s2]._mixvel;
		iVar5 = missile[unaff_s2]._mityoff;
		iVar7 = missile[unaff_s2]._miyvel;
		missile[unaff_s2]._mimfnum = '\0';
		missile[unaff_s2]._mitxoff = iVar4 - iVar6;
		missile[unaff_s2]._mityoff = iVar5 - iVar7;
		FUN_8013ada0();
		FUN_8013d34c();
		missile[unaff_s2]._mirange = (short)missile[unaff_s2]._miAnimLen - 1;
	}
	else {
		if (((int)missile[unaff_s2]._mix != (int)missile[unaff_s2]._miVar1) ||
			 ((int)missile[unaff_s2]._miy != (int)missile[unaff_s2]._miVar2)) {
			cVar3 = missile[unaff_s2]._miy;
			cVar1 = missile[unaff_s2]._mitype;
			missile[unaff_s2]._miVar1 = (short)missile[unaff_s2]._mix;
			missile[unaff_s2]._miVar2 = (short)cVar3;
			if (cVar1 == '8') {
				ChangeLight__Fiiii((int)missile[unaff_s2]._mlid,(int)missile[unaff_s2]._miVar1,
													 (int)(short)cVar3,0x365);
			}
			else {
				ChangeLight__Fiiii((int)missile[unaff_s2]._mlid,(int)missile[unaff_s2]._miVar1,
													 (int)(short)cVar3,0x95);
			}
		}
	}
	if (missile[unaff_s2]._mirange == 0) {
		cVar1 = missile[unaff_s2]._mlid;
		missile[unaff_s2]._miDelFlag = '\x01';
		AddUnLight__Fi((int)cVar1);
	}
	FUN_8013ab44();
	return;
}



// decompiled code
// original method signature: 
// void FUN_80143b54(int iParm1);
 // line -1, offset 0x80143b54
// function 'FUN_80143b54' @0x80143B54 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80143b54(int iParm1)

{
	int iVar1;
	uint uVar2;
	int iVar3;
	uint uVar4;
	
	missile[iParm1]._mirange = missile[iParm1]._mirange - 1;
	missile[iParm1]._midist = missile[iParm1]._midist + 1;
	iVar1 = missile[iParm1]._mityoff;
	iVar3 = missile[iParm1]._miyvel;
	missile[iParm1]._mitxoff = missile[iParm1]._mitxoff + missile[iParm1]._mixvel;
	missile[iParm1]._mityoff = iVar1 + iVar3;
	FUN_8013ada0();
	iVar1 = (int)missile[iParm1]._misource;
	if (iVar1 == -1) {
		uVar2 = (uint)currlevel;
		uVar4 = uVar2 << 1;
	}
	else {
		if (missile[iParm1]._micaster == 0) {
			uVar2 = (&plr)[iVar1]._pIMinDam;
			uVar4 = (&plr)[iVar1]._pIMaxDam;
		}
		else {
			uVar2 = (uint)monster[iVar1].mMinDamage;
			uVar4 = (uint)monster[iVar1].mMaxDamage;
		}
	}
	if (((int)missile[iParm1]._mix != (int)missile[iParm1]._misx) ||
		 (missile[iParm1]._miy != missile[iParm1]._misy)) {
		FUN_8013cd88(iParm1,uVar2,uVar4,0,(int)missile[iParm1]._mix,(int)missile[iParm1]._miy,0,1);
	}
	if (missile[iParm1]._mirange == 0) {
		missile[iParm1]._miDelFlag = '\x01';
	}
	FUN_8013ab44(iParm1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80146288(int iParm1);
 // line -1, offset 0x80146288
// function 'FUN_80146288' @0x80146288 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80146288(int iParm1)

{
	short sVar1;
	ushort uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int pnum;
	
	pnum = (int)missile[iParm1]._misource;
	missile[iParm1]._miVar6 =
			 (short)*(undefined4 *)
							 ((int)(&plr)[pnum]._pdir * 4 + (int)(&plr)[pnum]._pClass * 0x20 + -0x7fee5ec4);
	missile[iParm1]._mix = (char)(&plr)[pnum]._px;
	missile[iParm1]._miy = (char)(&plr)[pnum]._py;
	missile[iParm1]._mitxoff = (int)(&plr)[pnum]._pxoff << 0x10;
	missile[iParm1]._mityoff = (int)(&plr)[pnum]._pyoff << 0x10;
	missile[iParm1]._misx = (char)(&plr)[pnum]._px;
	missile[iParm1]._misy = (char)(&plr)[pnum]._py;
	FUN_8013ada0(iParm1);
	if ((&plr)[pnum]._pmode == PM_WALK3) {
		if ((&plr)[pnum]._pdir == '\x02') {
			missile[iParm1]._mix = missile[iParm1]._mix + '\x01';
		}
		else {
			missile[iParm1]._miy = missile[iParm1]._miy + '\x01';
		}
	}
	if (((&plr)[pnum]._pMana < 1) || ((&plr)[pnum].plractive == '\0')) {
		missile[iParm1]._mirange = 0;
	}
	iVar6 = (int)missile[iParm1]._miVar1 - (&plr)[pnum]._pHitPoints;
	if ((&plr)[pnum]._pHitPoints < (int)missile[iParm1]._miVar1) {
		iVar3 = 0;
		iVar4 = 0;
		if (0 < (int)missile[iParm1]._mispllvl) {
			do {
				if (6 < iVar3) break;
				iVar3 = iVar3 + 1;
				iVar4 = iVar4 + 3;
			} while (iVar3 < (int)missile[iParm1]._mispllvl);
		}
		if (0 < iVar4) {
			iVar6 = iVar6 - iVar6 / iVar4;
		}
		if (iVar6 < 0) {
			iVar6 = 0;
		}
		iVar3 = (&plr)[pnum]._pMana;
		drawmanaflag = '\x01';
		drawhpflag = '\x01';
		if (iVar3 < iVar6) {
			iVar5 = (&plr)[pnum]._pMana;
			iVar4 = (&plr)[pnum]._pHitPoints;
			(&plr)[pnum]._pMana = 0;
			(&plr)[pnum]._pHitPoints = iVar4 - (iVar6 - iVar3);
			iVar3 = (&plr)[pnum]._pMaxManaBase;
			iVar4 = (&plr)[pnum]._pMaxMana;
			(&plr)[pnum]._pHPBase = (&plr)[pnum]._pHPBase - (iVar6 - iVar5);
			(&plr)[pnum]._pManaBase = iVar3 - iVar4;
			missile[iParm1]._mirange = 0;
			missile[iParm1]._miDelFlag = '\x01';
			iVar6 = (&plr)[pnum]._pHitPoints;
			if (iVar6 < 0) {
				SetPlayerHitPoints__Fii(pnum,0);
				iVar6 = (&plr)[pnum]._pHitPoints;
			}
			if ((iVar6 >> 6 == 0) && (pnum == myplr)) {
				StartPlrKill__Fii(pnum,(int)missile[iParm1]._miVar8);
			}
		}
		else {
			iVar4 = (&plr)[pnum]._pManaBase;
			(&plr)[pnum]._pHitPoints = (int)missile[iParm1]._miVar1;
			sVar1 = missile[iParm1]._miVar2;
			iVar3 = (&plr)[pnum]._pMana;
			(&plr)[pnum]._pManaBase = iVar4 - iVar6;
			(&plr)[pnum]._pMana = iVar3 - iVar6;
			(&plr)[pnum]._pHPBase = (int)sVar1;
		}
	}
	uVar2 = missile[iParm1]._mirange;
	missile[iParm1]._miVar1 = (short)(&plr)[pnum]._pHitPoints;
	missile[iParm1]._miVar2 = (short)(&plr)[pnum]._pHPBase;
	if (uVar2 == 0) {
		missile[iParm1]._miDelFlag = '\x01';
		NetSendCmd__FUcUc('\x01','Y');
		uGp00001b0d = 0;
		uGp00001b0e = 0;
	}
	FUN_8013ab44(iParm1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80146588(int iParm1);
 // line -1, offset 0x80146588
// function 'FUN_80146588' @0x80146588 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80146588(int iParm1)

{
	char cVar1;
	char cVar2;
	ushort uVar3;
	int *piVar4;
	int *piVar5;
	short sVar6;
	long lVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int *piVar11;
	int *piVar12;
	int local_58 [16];
	
	piVar4 = &DAT_8011a0c0;
	piVar5 = local_58;
	do {
		piVar12 = piVar5;
		piVar11 = piVar4;
		iVar8 = piVar11[1];
		iVar9 = piVar11[2];
		iVar10 = piVar11[3];
		*piVar12 = *piVar11;
		piVar12[1] = iVar8;
		piVar12[2] = iVar9;
		piVar12[3] = iVar10;
		piVar4 = piVar11 + 4;
		piVar5 = piVar12 + 4;
	} while (piVar11 + 4 != (int *)0x8011a0f0);
	iVar8 = piVar11[5];
	piVar12[4] = iRam8011a0f0;
	piVar12[5] = iVar8;
	cVar1 = missile[iParm1]._mix;
	missile[iParm1]._miy = missile[iParm1]._miy + -1;
	cVar2 = missile[iParm1]._miyoff;
	missile[iParm1]._mix = cVar1 + -1;
	sVar6 = missile[iParm1]._miVar1 + 1;
	missile[iParm1]._miVar1 = sVar6;
	missile[iParm1]._miyoff = cVar2 + ' ';
	if ((int)sVar6 == (int)missile[iParm1]._miAnimLen) {
		FUN_8013d424(iParm1,1);
		lVar7 = ENG_random__Fl(0xb);
		missile[iParm1]._miAnimFrame = (char)lVar7 + '\x01';
	}
	iVar8 = missile[iParm1]._mityoff;
	iVar9 = missile[iParm1]._miyvel;
	missile[iParm1]._mitxoff = missile[iParm1]._mitxoff + missile[iParm1]._mixvel;
	missile[iParm1]._mityoff = iVar8 + iVar9;
	FUN_8013ada0(iParm1);
	uVar3 = missile[iParm1]._mirange;
	FUN_8013cd88(iParm1,missile[iParm1]._midam,missile[iParm1]._midam,0,(int)missile[iParm1]._mix,
							 (int)missile[iParm1]._miy,0,1);
	if (missile[iParm1]._miHitFlag == '\x01') {
		missile[iParm1]._mirange = uVar3;
	}
	if (missile[iParm1]._mirange == 0) {
		cVar1 = missile[iParm1]._mlid;
		missile[iParm1]._miDelFlag = '\x01';
		AddUnLight__Fi((int)cVar1);
	}
	if ((missile[iParm1]._mimfnum == '\0') && (missile[iParm1]._mirange != 0)) {
		if (missile[iParm1]._miVar2 == 0) {
			iVar8 = AddLight__Fiii((int)missile[iParm1]._mix,(int)missile[iParm1]._miy,
														 (local_58[0] >> 1) + 0x90);
			missile[iParm1]._mlid = (char)iVar8;
		}
		ChangeLight__Fiiii((int)missile[iParm1]._mlid,(int)missile[iParm1]._mix,
											 (int)missile[iParm1]._miy,
											 (local_58[(int)missile[iParm1]._miVar2] >> 1) + 0x90);
		missile[iParm1]._miVar2 = missile[iParm1]._miVar2 + 1;
	}
	else {
		if (((int)missile[iParm1]._mix != (int)missile[iParm1]._miVar3) ||
			 ((int)missile[iParm1]._miy != (int)missile[iParm1]._miVar4)) {
			cVar1 = missile[iParm1]._mlid;
			cVar2 = missile[iParm1]._miy;
			missile[iParm1]._miVar3 = (short)missile[iParm1]._mix;
			sVar6 = missile[iParm1]._miVar3;
			missile[iParm1]._miVar4 = (short)cVar2;
			ChangeLight__Fiiii((int)cVar1,(int)sVar6,(int)(short)cVar2,0x94);
		}
	}
	cVar1 = missile[iParm1]._miy;
	cVar2 = missile[iParm1]._miyoff;
	missile[iParm1]._mix = missile[iParm1]._mix + '\x01';
	missile[iParm1]._miy = cVar1 + '\x01';
	missile[iParm1]._miyoff = cVar2 + -0x20;
	FUN_8013ab44(iParm1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80147ab8(int iParm1);
 // line -1, offset 0x80147ab8
// function 'FUN_80147ab8' @0x80147AB8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80147ab8(int iParm1)

{
	int iVar1;
	short *psVar2;
	int iVar3;
	
	iVar3 = 0;
	psVar2 = &missileactive;
	while (iVar3 < iGp00001b08) {
		iVar1 = (int)*psVar2;
		if ((missile[iVar1]._mitype == '\x1e') && ((int)missile[iVar1]._miVar2 == iParm1)) {
			missile[iVar1]._miDelFlag = '\x01';
		}
		psVar2 = psVar2 + 1;
		iVar3 = iVar3 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80147b40(int iParm1);
 // line -1, offset 0x80147b40
// function 'FUN_80147b40' @0x80147B40 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80147b40(int iParm1)

{
	short sVar1;
	
	sVar1 = missile[iParm1]._miVar1;
	missile[iParm1]._mirange = missile[iParm1]._mirange - 1;
	if (sVar1 == 0) {
		FUN_8013cd88(iParm1,missile[iParm1]._midam,missile[iParm1]._midam,0,(int)missile[iParm1]._mix,
								 (int)missile[iParm1]._miy,1,1);
	}
	if (missile[iParm1]._miHitFlag == '\x01') {
		missile[iParm1]._miVar1 = 1;
	}
	if (missile[iParm1]._mirange == 0) {
		missile[iParm1]._miDelFlag = '\x01';
	}
	FUN_8013ab44(iParm1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014854c(int param_1);
 // line -1, offset 0x8014854c
// function 'FUN_8014854c' @0x8014854C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014854c(int param_1)

{
	int in_at;
	int iVar1;
	void *pvVar2;
	int in_v0;
	int unaff_s0;
	int x;
	int unaff_s3;
	int y;
	char unaff_s4;
	
	while ((y = unaff_s3 + 1, y < (int)*(short *)(&DAT_00002c7a + in_at + in_v0) && (unaff_s4 == '\0')
				 )) {
		iVar1 = param_1 * 4 + unaff_s0 * 3;
		x = (int)(&missile[0]._miVar4)[iVar1 * 2];
		if (x < (int)(&missile[0]._miVar5)[iVar1 * 2]) {
			iVar1 = x * 0x380 + y * 8;
			do {
				if ((3 < *(short *)((int)&dung_map.dMonster + iVar1)) &&
					 (pvVar2 = GetSOLID__Fii(x,y), pvVar2 == (void *)0x0)) {
					unaff_s4 = '\x01';
					FUN_80142a04(x,y,x,y);
				}
				x = x + 1;
				iVar1 = iVar1 + 0x380;
			} while ((x < (int)missile[unaff_s0]._miVar5) && (unaff_s4 == '\0'));
		}
		if (unaff_s4 == '\0') {
			missile[unaff_s0]._miVar4 = missile[unaff_s0]._miVar6;
		}
		param_1 = unaff_s0 * 4;
		in_v0 = unaff_s0 * 0x4c;
		in_at = -0x7ff00000;
		unaff_s3 = y;
	}
	if (unaff_s4 == '\x01') {
		missile[unaff_s0]._miVar2 = (short)unaff_s3;
		missile[unaff_s0]._miVar4 = (short)x;
	}
	else {
		missile[unaff_s0]._miDelFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80148600(int iParm1);
 // line -1, offset 0x80148600
// function 'FUN_80148600' @0x80148600 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80148600(int iParm1)

{
	bool bVar1;
	bool bVar2;
	int iVar3;
	uint uVar4;
	void *pvVar5;
	uint uVar6;
	int y1;
	int y;
	int x;
	int *piVar7;
	int iVar8;
	int iVar9;
	int *piVar10;
	int x1;
	
	bVar1 = false;
	bVar2 = false;
	x1 = (int)missile[iParm1]._mix;
	y1 = (int)missile[iParm1]._miy;
	iVar9 = (int)missile[iParm1]._misource;
	iVar3 = GetDirection__Fiiii(x1,y1,(int)missile[iParm1]._miVar1,(int)missile[iParm1]._miVar2);
	piVar7 = XDirAdd + iVar3;
	piVar10 = YDirAdd + iVar3;
	x = x1 + *piVar7;
	y = y1 + *piVar10;
	uVar6 = iVar3 - 2U & 7;
	uVar4 = iVar3 + 2U & 7;
	pvVar5 = GetMISSILE__Fii(x,y);
	if (pvVar5 == (void *)0x0) {
		FUN_80142a04(x,y,x + *piVar7,y + *piVar10,(int)(&plr)[iVar9]._pdir,0xe,0,iVar9,0,
								 (int)missile[iParm1]._mispllvl);
		iVar8 = 0;
		x = x + XDirAdd[uVar6];
		y = y + YDirAdd[uVar6];
		x1 = x1 + *piVar7 + XDirAdd[uVar4];
		y1 = y1 + *piVar10 + YDirAdd[uVar4];
		if (0 < ((int)((uint)(byte)missile[iParm1]._mispllvl << 0x18) >> 0x19) + 2) {
			do {
				pvVar5 = GetMISSILE__Fii(x,y);
				if ((((pvVar5 != (void *)0x0) || (bVar1)) || (0x6e < x - 1U)) || (0x6e < y - 1U)) {
					bVar1 = true;
				}
				else {
					FUN_80142a04(x,y,x + XDirAdd[iVar3],y + *piVar10,(int)(&plr)[iVar9]._pdir,0xe,0,iVar9,0,
											 (int)missile[iParm1]._mispllvl);
					x = x + XDirAdd[uVar6];
					y = y + YDirAdd[uVar6];
				}
				pvVar5 = GetMISSILE__Fii(x1,y1);
				if (((pvVar5 != (void *)0x0) || (bVar2)) || ((0x6e < x1 - 1U || (0x6e < y1 - 1U)))) {
					bVar2 = true;
				}
				else {
					FUN_80142a04(x1,y1,x1 + XDirAdd[iVar3],y1 + *piVar10,(int)(&plr)[iVar9]._pdir,0xe,0,iVar9,
											 0,(int)missile[iParm1]._mispllvl);
					x1 = x1 + XDirAdd[uVar4];
					y1 = y1 + YDirAdd[uVar4];
				}
				iVar8 = iVar8 + 1;
			} while (iVar8 < ((int)((uint)(byte)missile[iParm1]._mispllvl << 0x18) >> 0x19) + 2);
		}
	}
	missile[iParm1]._mirange = missile[iParm1]._mirange - 1;
	if (missile[iParm1]._mirange == 0) {
		missile[iParm1]._miDelFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014a694(void);
 // line -1, offset 0x8014a694
// function 'FUN_8014a694' @0x8014A694 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014a694(void)

{
	char cVar1;
	char cVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	short *psVar6;
	
	psVar6 = &missileactive;
	iVar5 = 0;
	if (0 < iGp00001b08) {
		do {
			iVar5 = iVar5 + 1;
			iVar3 = (int)*psVar6;
			(&dung_map)[(int)missile[iVar3]._mix * 0x70 + (int)missile[iVar3]._miy].dFlags =
					 (&dung_map)[(int)missile[iVar3]._mix * 0x70 + (int)missile[iVar3]._miy].dFlags & 0xbf;
			(&dung_map)[(int)missile[iVar3]._mix * 0x70 + (int)missile[iVar3]._miy].dMissile = '\0';
			psVar6 = psVar6 + 1;
		} while (iVar5 * 0x10000 >> 0x10 < iGp00001b08);
	}
	iVar5 = 0;
	do {
		iVar4 = 0;
		iVar3 = 0;
		do {
			(&dMissArray)[(iVar3 >> 0x10) + ((iVar5 << 0x10) >> 0xe)] = '\0';
			iVar4 = iVar4 + 1;
			iVar3 = iVar4 * 0x10000;
		} while (iVar4 * 0x10000 >> 0x10 < 4);
		iVar5 = iVar5 + 1;
	} while (iVar5 * 0x10000 >> 0x10 < 0x20);
	iVar5 = 0;
	if (0 < iGp00001b08) {
		iVar3 = 0;
		do {
			iVar5 = iVar5 + 1;
			if (missile[(int)(&missileactive)[iVar3 >> 0x10]]._miDelFlag == '\0') {
				iVar4 = iVar5 * 0x10000;
			}
			else {
				iVar5 = 0;
				FUN_8013a8e8();
				iVar4 = 0;
			}
			iVar3 = iVar5 << 0x10;
		} while (iVar4 >> 0x10 < iGp00001b08);
	}
	psVar6 = &missileactive;
	uGp00001b0c = 0;
	cGp00001b0d = '\0';
	cGp00001b0e = '\0';
	iVar5 = 0;
	if (0 < iGp00001b08) {
		do {
			iVar3 = (int)*psVar6;
			psVar6 = psVar6 + 1;
			(*missiledata[(int)missile[iVar3]._mitype].mProc)();
			if (((missile[iVar3]._miAnimFlags & 2) == 0) &&
				 (cVar2 = missile[iVar3]._miAnimDelay, cVar1 = missile[iVar3]._miAnimCnt + '\x01',
				 missile[iVar3]._miAnimCnt = cVar1, cVar2 <= cVar1)) {
				cVar2 = missile[iVar3]._miAnimFrame;
				cVar1 = missile[iVar3]._miAnimAdd;
				missile[iVar3]._miAnimCnt = '\0';
				cVar2 = cVar2 + cVar1;
				missile[iVar3]._miAnimFrame = cVar2;
				if (missile[iVar3]._miAnimLen < cVar2) {
					missile[iVar3]._miAnimFrame = '\x01';
				}
				if (missile[iVar3]._miAnimFrame < '\x01') {
					missile[iVar3]._miAnimFrame = missile[iVar3]._miAnimLen;
				}
			}
			iVar5 = iVar5 + 1;
		} while (iVar5 * 0x10000 >> 0x10 < iGp00001b08);
	}
	if ((cGp00001b0d != '\0') || (cGp00001b0e != '\0')) {
		iVar5 = 0;
		if (iGp00001b08 < 1) {
			return;
		}
		iVar3 = 0;
		do {
			if (missile[(int)*(short *)((int)&missileactive + (iVar3 >> 0xf))]._mitype == '\r') {
				FUN_80146288();
			}
			iVar5 = iVar5 + 1;
			iVar3 = iVar5 * 0x10000;
		} while (iVar5 * 0x10000 >> 0x10 < iGp00001b08);
	}
	iVar5 = 0;
	if (0 < iGp00001b08) {
		iVar3 = 0;
		do {
			iVar5 = iVar5 + 1;
			if (missile[(int)(&missileactive)[iVar3 >> 0x10]]._miDelFlag == '\0') {
				iVar4 = iVar5 * 0x10000;
			}
			else {
				iVar5 = 0;
				FUN_8013a8e8();
				iVar4 = 0;
			}
			iVar3 = iVar5 << 0x10;
		} while (iVar4 >> 0x10 < iGp00001b08);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014aac0(int iParm1);
 // line -1, offset 0x8014aac0
// function 'FUN_8014aac0' @0x8014AAC0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014aac0(int iParm1)

{
	(&dung_map)[(int)missile[iParm1]._mix * 0x70 + (int)missile[iParm1]._miy].dFlags =
			 (&dung_map)[(int)missile[iParm1]._mix * 0x70 + (int)missile[iParm1]._miy].dFlags & 0xbf;
	(&dung_map)[(int)missile[iParm1]._mix * 0x70 + (int)missile[iParm1]._miy].dMissile = '\0';
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014ab60(int iParm1);
 // line -1, offset 0x8014ab60
// function 'FUN_8014ab60' @0x8014AB60 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014ab60(int iParm1)

{
	*(undefined4 *)(iParm1 + 0xd0) = *(undefined4 *)(iParm1 + 200);
	*(undefined4 *)(iParm1 + 0xd4) = *(undefined4 *)(iParm1 + 0xcc);
	return;
}



