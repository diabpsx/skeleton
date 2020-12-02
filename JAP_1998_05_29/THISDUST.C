// decompiled code
// original method signature: 
// int FUN_0003017c(ushort uParm1);
 // line -1, offset 0x0003017c
// function 'FUN_0003017c' @0x0003017C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_0003017c(ushort uParm1)

{
	int iVar1;
	
	iVar1 = (uint)uParm1 << 0x10;
	if ((int)((uint)uParm1 << 0x10) < 0) {
		uParm1 = 0;
		iVar1 = 0;
	}
	if (0xff < iVar1 >> 0x10) {
		uParm1 = 0xff;
	}
	return (int)(short)uParm1;
}



// decompiled code
// original method signature: 
// int FUN_000376fc(int iParm1,int iParm2);
 // line -1, offset 0x000376fc
// function 'FUN_000376fc' @0x000376FC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_000376fc(int iParm1,int iParm2)

{
	return *(int *)(iParm1 + 0x2c) + *(int *)(iParm2 * 4 + *(int *)(iParm1 + 0x30));
}



// decompiled code
// original method signature: 
// int FUN_00037718(int iParm1,uint uParm2);
 // line -1, offset 0x00037718
// function 'FUN_00037718' @0x00037718 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_00037718(int iParm1,uint uParm2)

{
	return *(int *)(iParm1 + 0x24) + (uParm2 & 0xffff) * 0xc;
}



// decompiled code
// original method signature: 
// void FUN_0003cf5c(void);
 // line -1, offset 0x0003cf5c
// function 'FUN_0003cf5c' @0x0003CF5C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0003cf5c(void)

{
	if (FileSYS == 2) {
		SFXHDR_800b9c64.volume = 0;
		FUN_00099010(&SFXHDR_800b9c64);
		if (iGp000010b4 != 0) {
			FUN_00099388(iGp000010b4,8);
			FUN_000203b8(1);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_0003d06c(int iParm1);
 // line -1, offset 0x0003d06c
// function 'FUN_0003d06c' @0x0003D06C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0003d06c(int iParm1)

{
	int iVar1;
	
	if ((FileSYS == 2) && (CDWAIT == (void *)0x0)) {
		if ((*(byte *)(iParm1 + 1) & 1) == 0) {
			if ((*(byte *)(iParm1 + 1) & 0x70) == 0) {
				FUN_0003cf5c();
			}
			iVar1 = sglSpeechVolume * sglMasterVolume;
		}
		else {
			iVar1 = sglSoundVolume * sglMasterVolume;
			FUN_0003cf5c();
		}
		iVar1 = iVar1 >> 8;
		if (-1 < iVar1) {
			if (0x3fff < iVar1) {
				iVar1 = 0x3fff;
			}
			uGp000010b4 = FUN_00098dc8((uint)*(ushort *)(iParm1 + 2),0,iVar1,0);
			iGp000010b8 = iParm1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// undefined4 FUN_0003d1dc(int iParm1,int iParm2,int *piParm3,int *piParm4);
 // line -1, offset 0x0003d1dc
// function 'FUN_0003d1dc' @0x0003D1DC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_0003d1dc(int iParm1,int iParm2,int *piParm3,int *piParm4)

{
	int iVar1;
	int iVar2;
	int iVar3;
	short local_20;
	short local_1e;
	
	*piParm3 = sglSoundVolume * sglMasterVolume >> 8;
	*piParm4 = 0x8000;
	if ((&dung_map)[iParm1 * 0x70 + iParm2].dFlags != '\0') {
		if (iParm1 + iParm2 == 0) {
			return 1;
		}
		iVar1 = FUN_000919ec();
		if (iVar1 != 0) {
			FUN_0009185c(iVar1,&local_20,iParm1 * 0x14,iParm2 * 0x14,0,0);
			iVar1 = (int)local_20;
			if (iVar1 < iGp000010bc) {
				return 0;
			}
			if ((int)(iGp000010bc + uGp000010c4) < iVar1) {
				return 0;
			}
			if ((int)local_1e < iGp000010c0) {
				return 0;
			}
			if ((int)local_1e <= iGp000010c0 + iGp000010c8) {
				if (MONO != (void *)0x0) {
					return 1;
				}
				iVar3 = iVar1 * 0xcc;
				if (iVar3 < 0) {
					iVar3 = 0;
				}
				if (0x10000 < iVar3) {
					iVar3 = 0x10000;
				}
				iVar2 = (int)(uGp000010c4 + (uGp000010c4 >> 0x1f)) >> 1;
				if (iVar2 < iVar1) {
					iVar1 = uGp000010c4 - iVar1;
				}
				*piParm3 = iVar1 * 2 * ((sglSoundVolume * sglMasterVolume * 0x100) / iVar2) >> 0x10;
				*piParm4 = iVar3;
				return 1;
			}
		}
	}
	return 0;
}



// decompiled code
// original method signature: 
// void FUN_0003d3c4(ushort *puParm1,char cParm2,undefined4 uParm3,undefined4 uParm4);
 // line -1, offset 0x0003d3c4
// function 'FUN_0003d3c4' @0x0003D3C4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0003d3c4(ushort *puParm1,char cParm2,undefined4 uParm3,undefined4 uParm4)

{
	uint uVar1;
	int local_18;
	undefined4 local_14;
	
	if (gbSndInited != '\0') {
		local_14 = 0x8000;
		local_18 = sglSoundVolume * sglMasterVolume >> 8;
		if ((cParm2 == '\0') ||
			 (uVar1 = FUN_0003d1dc(uParm3,uParm4,&local_18,&local_14), (uVar1 & 0xff) != 0)) {
			if (((*(byte *)((int)puParm1 + 1) & 1) == 0) && ((*(byte *)((int)puParm1 + 1) & 2) == 0)) {
				if (((*puParm1 & 0xc00) != 0) ||
					 (uVar1 = FUN_00077f70((uint)puParm1[1]), (uVar1 & 0xff) == 0)) {
					FUN_00077d58(puParm1,local_18,local_14);
				}
			}
			else {
				local_14 = 0x8000;
				local_18 = sglSoundVolume * sglMasterVolume >> 8;
				if (optionsflag == (void *)0x0) {
					FUN_0003d06c(puParm1,local_18,0x8000);
				}
				else {
					local_18 = sglSpeechVolume * sglMasterVolume >> 8;
					FUN_0009a79c((uint)sgSFX[50].pszName,local_18,0x8000,0);
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// int FUN_0003d670(int iParm1);
 // line -1, offset 0x0003d670
// function 'FUN_0003d670' @0x0003D670 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_0003d670(int iParm1)

{
	int iVar1;
	undefined4 uVar2;
	
	if (iParm1 == 0x316) {
LAB_0003d6d4:
		uVar2 = 2;
	}
	else {
		if (((iParm1 != 0x2d9) && (iParm1 != 0x2dc)) && (iParm1 != 0x2df)) {
			if ((((iParm1 == 0x240) || (iParm1 == 0x2a8)) ||
					((iParm1 == 9 || ((iParm1 == 0x43 || (iParm1 == 0x2c)))))) || (iParm1 == 0x10))
			goto LAB_0003d6d4;
			if (iParm1 == 0) {
				return 2;
			}
			if (iParm1 != 0x2cd) {
				return iParm1;
			}
		}
		uVar2 = 3;
	}
	iVar1 = FUN_0003db24(uVar2);
	return iParm1 + iVar1;
}



// decompiled code
// original method signature: 
// void FUN_0003d784(undefined4 uParm1,undefined4 uParm2,undefined4 uParm3);
 // line -1, offset 0x0003d784
// function 'FUN_0003d784' @0x0003D784 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0003d784(undefined4 uParm1,undefined4 uParm2,undefined4 uParm3)

{
	uint uVar1;
	undefined4 uVar2;
	
	uVar1 = FUN_0003d670();
	if (uVar1 < 4) {
		if ((plr.plractive != '\0') && (PlayerStruct_800dbf20.plractive != '\0')) {
			return;
		}
		uVar2 = 0;
		uParm2 = 0;
		uParm3 = 0;
	}
	else {
		uVar2 = 1;
	}
	FUN_0003d3c4(sgSFX + uVar1,uVar2,uParm2,uParm3);
	return;
}



// decompiled code
// original method signature: 
// void FUN_0003dadc(void);
 // line -1, offset 0x0003dadc
// function 'FUN_0003dadc' @0x0003DADC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0003dadc(void)

{
	iGp000010dc = iGp000010dc + 1;
	iGp00002044 = iGp00002044 * 0x15a4e35 + 1;
	FUN_000105b4();
	return;
}



// decompiled code
// original method signature: 
// int FUN_0003db24(int iParm1);
 // line -1, offset 0x0003db24
// function 'FUN_0003db24' @0x0003DB24 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_0003db24(int iParm1)

{
	int iVar1;
	
	if (iParm1 < 1) {
		iVar1 = 0;
	}
	else {
		if (iParm1 < 0xffff) {
			iVar1 = FUN_0003dadc();
			iVar1 = (iVar1 >> 0x10) % iParm1;
		}
		else {
			iVar1 = FUN_0003dadc();
			iVar1 = iVar1 % iParm1;
		}
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// void FUN_0003e6b0(int iParm1,char cParm2);
 // line -1, offset 0x0003e6b0
// function 'FUN_0003e6b0' @0x0003E6B0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0003e6b0(int iParm1,char cParm2)

{
	uint uVar1;
	short sVar2;
	int iVar3;
	short *psVar4;
	int iVar5;
	uint uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	uint uVar16;
	uint uVar17;
	char cVar18;
	int iVar19;
	char cVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	char cVar24;
	int iVar25;
	int local_a0;
	int local_98;
	int local_90;
	int local_88;
	int local_80;
	int local_70;
	int local_68;
	int local_60;
	int local_58;
	int local_50;
	uint local_48;
	int local_30;
	
	iVar8 = 0;
	iVar7 = 0;
	iVar12 = 0;
	iVar22 = 0;
	iVar23 = 0;
	iVar15 = 0;
	iVar14 = 0;
	uVar16 = 0;
	uVar17 = 0;
	iVar21 = 0;
	iVar25 = 0;
	iVar19 = 0;
	iVar10 = 0;
	iVar11 = 0;
	iVar13 = 6;
	iVar9 = 0x1b0;
	local_a0 = 0;
	local_48 = 0;
	local_98 = 0;
	local_90 = 0;
	local_88 = 0;
	local_80 = 0;
	cVar20 = '\0';
	local_70 = 0;
	local_68 = 0;
	local_60 = 0;
	local_58 = 0;
	local_50 = 0;
	local_30 = 0;
	while( true ) {
		cVar18 = (char)iVar19;
		iVar5 = (int)&(&plr)[iParm1]._pmode + iVar9;
		if (6 < local_30) break;
		if ((*(short *)(iVar5 + 0x2c) != -1) && (*(char *)(iVar5 + 0x66) != '\0')) {
			iVar8 = iVar8 + (int)*(char *)(iVar5 + 0x3b);
			iVar7 = iVar7 + (int)*(char *)(iVar5 + 0x3c);
			iVar12 = iVar12 + (int)*(char *)(iVar5 + 0x4a);
			if ((int)*(char *)(iVar5 + 0x3d) != 0) {
				uVar1 = (int)*(char *)(iVar5 + 0x3d) - 1;
				if ((int)(uVar1 * 0x4000000) < 0) {
					uVar6 = 1 << (uVar1 & 0x1f);
					uVar1 = 0;
				}
				else {
					uVar6 = 0 << (uVar1 & 0x1f);
					if (uVar1 * 0x4000000 != 0) {
						uVar6 = uVar6 | 1U >> (-uVar1 & 0x1f);
					}
					uVar1 = 1 << (uVar1 & 0x1f);
				}
				uVar17 = uVar17 | uVar6;
				uVar16 = uVar16 | uVar1;
			}
			if ((*(char *)(iVar5 + 0x51) == '\0') || (*(char *)(iVar5 + 0x69) != '\0')) {
				iVar22 = iVar22 + (int)*(short *)(iVar5 + 0x38);
				iVar23 = iVar23 + (int)*(short *)(iVar5 + 0x36);
				if (*(int *)(iVar5 + 0x20) != 0) {
					iVar3 = ((int)*(char *)(iVar5 + 0x4a) * *(int *)(iVar5 + 0x20)) / 100;
					if (iVar3 == 0) {
						iVar3 = 1;
					}
					local_a0 = local_a0 + iVar3;
				}
				local_48 = local_48 | *(uint *)(iVar5 + 0x1c);
				iVar15 = iVar15 + (int)*(char *)(iVar5 + 0x57);
				local_98 = local_98 + (int)*(char *)(iVar5 + 0x56);
				iVar14 = iVar14 + (int)*(char *)(iVar5 + 0x59);
				local_90 = local_90 + (int)*(char *)(iVar5 + 0x58);
				iVar25 = iVar25 + (int)*(char *)(iVar5 + 0x5b);
				iVar21 = iVar21 + (int)*(char *)(iVar5 + 0x5a);
				iVar10 = iVar10 + (int)*(char *)(iVar5 + 0x3a);
				iVar19 = iVar19 + (int)*(char *)(iVar5 + 0x5c);
				iVar13 = iVar13 + (int)*(char *)(iVar5 + 0x43);
				iVar11 = iVar11 + (int)*(char *)(iVar5 + 0x42);
				local_80 = local_80 + (int)*(short *)(iVar5 + 0x30);
				local_88 = local_88 + (int)*(short *)(iVar5 + 0x32);
				local_70 = local_70 + (int)*(char *)(iVar5 + 0x48);
				cVar20 = cVar20 + *(char *)(iVar5 + 0x5d);
				local_60 = local_60 + (int)*(char *)(iVar5 + 0x45);
				local_68 = local_68 + (int)*(char *)(iVar5 + 0x44);
				local_58 = local_58 + (int)*(char *)(iVar5 + 0x46);
				local_50 = local_50 + (int)*(char *)(iVar5 + 0x47);
			}
		}
		iVar9 = iVar9 + 0x6c;
		local_30 = local_30 + 1;
	}
	if ((iVar8 == 0) && (iVar7 == 0)) {
		iVar8 = 1;
		iVar7 = 1;
		if (((&plr)[iParm1].InvBody[4]._itype == 5) && ((&plr)[iParm1].InvBody[4]._iStatFlag != '\0')) {
			iVar7 = 3;
		}
		if (((&plr)[iParm1].InvBody[5]._itype == 5) && ((&plr)[iParm1].InvBody[5]._iStatFlag != '\0')) {
			iVar7 = 3;
		}
	}
	(&plr)[iParm1]._pIMinDam = iVar8;
	(&plr)[iParm1]._pIMaxDam = iVar7;
	(&plr)[iParm1]._pIAC = iVar12;
	(&plr)[iParm1]._pIBonusDam = iVar22;
	(&plr)[iParm1]._pIBonusToHit = iVar23;
	(&plr)[iParm1]._pIBonusAC = local_a0;
	(&plr)[iParm1]._pIBonusDamMod = iVar10;
	(&plr)[iParm1]._pIGetHit = iVar11;
	(&plr)[iParm1]._pIFlags = local_48;
	if (iVar13 < 2) {
		iVar13 = 2;
	}
	if (0xf < iVar13) {
		iVar13 = 0xf;
	}
	if ((int)(&plr)[iParm1]._pLightRad != iVar13) {
		FUN_0004d364((int)(&plr)[iParm1]._plid,&DAT_000023f0 + iVar13);
		if (iVar13 < 10) {
			cVar24 = (&plr)[iParm1]._pvid;
			iVar7 = 10;
		}
		else {
			cVar24 = (&plr)[iParm1]._pvid;
			iVar7 = iVar13;
		}
		FUN_0004d61c((int)cVar24,iVar7);
		(&plr)[iParm1]._pLightRad = (char)iVar13;
	}
	iVar7 = myplr;
	(&plr)[iParm1]._pStrength = (&plr)[iParm1]._pBaseStr + (short)local_98;
	if ((&plr)[iVar7]._pStrength < 1) {
		(&plr)[iVar7]._pStrength = 0;
	}
	iVar7 = myplr;
	(&plr)[iParm1]._pMagic = (&plr)[iParm1]._pBaseMag + (short)iVar15;
	if ((&plr)[iVar7]._pMagic < 1) {
		(&plr)[iVar7]._pMagic = 0;
	}
	iVar7 = myplr;
	(&plr)[iParm1]._pDexterity = (&plr)[iParm1]._pBaseDex + (short)local_90;
	if ((&plr)[iVar7]._pDexterity < 1) {
		(&plr)[iVar7]._pDexterity = 0;
	}
	iVar7 = myplr;
	(&plr)[iParm1]._pVitality = (&plr)[iParm1]._pBaseVit + (short)iVar14;
	if ((&plr)[iVar7]._pVitality < 1) {
		(&plr)[iVar7]._pVitality = 0;
	}
	if ((&plr)[iParm1]._pClass == '\x01') {
		(&plr)[iParm1]._pDamageMod =
				 (((int)(&plr)[iParm1]._pStrength + (int)(&plr)[iParm1]._pDexterity) *
				 (int)(&plr)[iParm1]._pLevel) / 200;
	}
	else {
		(&plr)[iParm1]._pDamageMod =
				 ((int)(&plr)[iParm1]._pStrength * (int)(&plr)[iParm1]._pLevel) / 100;
	}
	cVar24 = (&plr)[iParm1]._pRSplType;
	*(uint *)&(&plr)[iParm1]._pISpells = uVar16;
	*(uint *)((int)&(&plr)[iParm1]._pISpells + 4) = uVar17;
	if (cVar24 == '\x03') {
		uVar1 = (&plr)[iParm1]._pRSpell - 1;
		if ((int)(uVar1 * 0x4000000) < 0) {
			uVar16 = uVar17 >> (uVar1 & 0x1f);
		}
		else {
			uVar16 = uVar16 >> (uVar1 & 0x1f);
			if (uVar1 * 0x4000000 != 0) {
				uVar16 = uVar16 | uVar17 << (-uVar1 & 0x1f);
			}
		}
		if ((uVar16 & 1) == 0) {
			(&plr)[iParm1]._pRSpell = -1;
			(&plr)[iParm1]._pRSplType = '\x04';
			force_redraw = 0xff;
		}
	}
	(&plr)[iParm1]._pISplLvlAdd = cVar20;
	(&plr)[iParm1]._pIEnAc = local_70;
	if ((int)local_48 < 0) {
		cVar18 = '\0';
		iVar21 = 0;
		iVar25 = 0;
	}
	cVar24 = (char)iVar25;
	cVar20 = (char)iVar21;
	if ((int)local_48 >= 0 && 0x4b < iVar19) {
		cVar18 = 'K';
	}
	(&plr)[iParm1]._pMagResist = cVar18;
	if (0x4b < iVar21) {
		cVar20 = 'K';
	}
	(&plr)[iParm1]._pFireResist = cVar20;
	if (0x4b < iVar25) {
		cVar24 = 'K';
	}
	cVar20 = (&plr)[iParm1]._pClass;
	(&plr)[iParm1]._pLghtResist = cVar24;
	if (cVar20 == '\0') {
		iVar14 = iVar14 << 1;
	}
	if (cVar20 == '\x01') {
		iVar14 = iVar14 + (iVar14 >> 1);
	}
	local_88 = local_88 + iVar14 * 0x40;
	if (cVar20 == '\x02') {
		iVar15 = iVar15 << 1;
	}
	iVar7 = iVar15 << 6;
	if (cVar20 == '\x01') {
		iVar7 = (iVar15 + (iVar15 >> 1)) * 0x40;
	}
	(&plr)[iParm1]._pHitPoints = (&plr)[iParm1]._pHPBase + local_88;
	iVar8 = (&plr)[iParm1]._pHitPoints;
	(&plr)[iParm1]._pMaxHP = (&plr)[iParm1]._pMaxHPBase + local_88;
	if (iVar8 >> 6 < 1) {
		FUN_00066cf0(iParm1,0);
	}
	iVar8 = (&plr)[iParm1]._pManaBase;
	(&plr)[iParm1]._pIFMinDam = local_68;
	(&plr)[iParm1]._pIFMaxDam = local_60;
	(&plr)[iParm1]._pILMinDam = local_58;
	(&plr)[iParm1]._pILMaxDam = local_50;
	iVar9 = (&plr)[iParm1]._pMaxManaBase;
	(&plr)[iParm1]._pMana = iVar8 + local_80 + iVar7;
	(&plr)[iParm1]._pMaxMana = iVar9 + local_80 + iVar7;
	if ((local_48 & 1) == 0) {
		(&plr)[iParm1]._pInfraFlag = '\0';
	}
	else {
		(&plr)[iParm1]._pInfraFlag = '\x01';
	}
	uVar16 = 0;
	uVar17 = SEXT24((&plr)[iParm1].InvBody[4]._itype);
	(&plr)[iParm1]._pBlockFlag = '\0';
	(&plr)[iParm1]._pwtype = '\0';
	if ((uVar17 != 0xffffffff) && ((&plr)[iParm1].InvBody[4]._iClass == '\x01')) {
		uVar16 = uVar17 & -(uint)((&plr)[iParm1].InvBody[4]._iStatFlag != '\0');
	}
	uVar1 = SEXT24((&plr)[iParm1].InvBody[5]._itype);
	uVar17 = uVar16;
	if (((uVar1 == 0xffffffff) || (uVar17 = uVar16, (&plr)[iParm1].InvBody[5]._iClass != '\x01')) ||
		 (uVar17 = uVar1, (&plr)[iParm1].InvBody[5]._iStatFlag != '\0')) {
		uVar16 = uVar17;
	}
	switch(uVar16) {
	case 1:
		uVar16 = 2;
		break;
	case 2:
		uVar16 = 5;
		break;
	case 3:
		(&plr)[iParm1]._pwtype = '\x01';
		uVar16 = 4;
		break;
	case 4:
		uVar16 = 6;
		break;
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		break;
	case 10:
		uVar16 = 8;
		break;
	default:
		if (((&plr)[iParm1].InvBody[4]._itype == 5) && ((&plr)[iParm1].InvBody[4]._iStatFlag != '\0')) {
			(&plr)[iParm1]._pBlockFlag = '\x01';
			uVar16 = uVar16 + 1;
		}
		if (((&plr)[iParm1].InvBody[5]._itype == 5) && ((&plr)[iParm1].InvBody[5]._iStatFlag != '\0')) {
			(&plr)[iParm1]._pBlockFlag = '\x01';
			uVar16 = uVar16 + 1;
		}
		sVar2 = (&plr)[iParm1].InvBody[6]._itype;
		if ((sVar2 == 8) && ((&plr)[iParm1].InvBody[6]._iStatFlag != '\0')) {
			uVar16 = uVar16 + 0x10;
			sVar2 = (&plr)[iParm1].InvBody[6]._itype;
		}
		if ((sVar2 == 9) && ((&plr)[iParm1].InvBody[6]._iStatFlag != '\0')) {
			uVar16 = uVar16 + 0x20;
		}
		if (((int)(&plr)[iParm1]._pgfxnum == uVar16) || (cParm2 == '\0')) {
			(&plr)[iParm1]._pgfxnum = (char)uVar16;
		}
		else {
			(&plr)[iParm1]._pgfxnum = (char)uVar16;
			(&plr)[iParm1]._pGFXLoad = 0;
			FUN_00067208(iParm1);
			iVar7 = (&plr)[iParm1]._pNFrames;
			(&plr)[iParm1]._pAnimFrame = 1;
			(&plr)[iParm1].peq = '\0';
			(&plr)[iParm1]._pAnimCnt = 0;
			(&plr)[iParm1]._pAnimDelay = 3;
			(&plr)[iParm1]._pAnimLen = iVar7;
		}
		iVar7 = nummissiles;
		local_30 = 0;
		if (0 < nummissiles) {
			psVar4 = &missileactive;
			do {
				iVar8 = (int)*psVar4;
				if ((missile[iVar8]._mitype == '\r') && ((int)missile[iVar8]._misource == iParm1)) {
					missile[iVar8]._miVar1 = (short)(&plr)[iParm1]._pHitPoints;
					missile[iVar8]._miVar2 = (short)(&plr)[iParm1]._pHPBase;
				}
				psVar4 = psVar4 + 1;
				local_30 = local_30 + 1;
			} while (local_30 < iVar7);
		}
		drawhpflag = '\x01';
		drawmanaflag = '\x01';
		return;
	}
	if (((&plr)[iParm1].InvBody[4]._itype == 5) && ((&plr)[iParm1].InvBody[4]._iStatFlag != '\0')) {
		(&plr)[iParm1]._pBlockFlag = '\x01';
		uVar16 = uVar16 + 1;
	}
	if (((&plr)[iParm1].InvBody[5]._itype == 5) && ((&plr)[iParm1].InvBody[5]._iStatFlag != '\0')) {
		(&plr)[iParm1]._pBlockFlag = '\x01';
		uVar16 = uVar16 + 1;
	}
	sVar2 = (&plr)[iParm1].InvBody[6]._itype;
	if ((sVar2 == 8) && ((&plr)[iParm1].InvBody[6]._iStatFlag != '\0')) {
		uVar16 = uVar16 + 0x10;
		sVar2 = (&plr)[iParm1].InvBody[6]._itype;
	}
	if ((sVar2 == 9) && ((&plr)[iParm1].InvBody[6]._iStatFlag != '\0')) {
		uVar16 = uVar16 + 0x20;
	}
	if (((int)(&plr)[iParm1]._pgfxnum == uVar16) || (cParm2 == '\0')) {
		(&plr)[iParm1]._pgfxnum = (char)uVar16;
	}
	else {
		(&plr)[iParm1]._pgfxnum = (char)uVar16;
		(&plr)[iParm1]._pGFXLoad = 0;
		SetPlrAnims__Fi(iParm1);
		iVar7 = (&plr)[iParm1]._pNFrames;
		(&plr)[iParm1]._pAnimFrame = 1;
		(&plr)[iParm1].peq = '\0';
		(&plr)[iParm1]._pAnimCnt = 0;
		(&plr)[iParm1]._pAnimDelay = 3;
		(&plr)[iParm1]._pAnimLen = iVar7;
	}
	iVar7 = nummissiles;
	local_30 = 0;
	if (0 < nummissiles) {
		psVar4 = &missileactive;
		do {
			iVar8 = (int)*psVar4;
			if ((missile[iVar8]._mitype == '\r') && ((int)missile[iVar8]._misource == iParm1)) {
				missile[iVar8]._miVar1 = (short)(&plr)[iParm1]._pHitPoints;
				missile[iVar8]._miVar2 = (short)(&plr)[iParm1]._pHPBase;
			}
			psVar4 = psVar4 + 1;
			local_30 = local_30 + 1;
		} while (local_30 < iVar7);
	}
	drawhpflag = '\x01';
	drawmanaflag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void FUN_0003f130(int iParm1);
 // line -1, offset 0x0003f130
// function 'FUN_0003f130' @0x0003F130 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0003f130(int iParm1)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	uint uVar5;
	
	*(undefined4 *)&(&plr)[iParm1]._pScrlSpells = 0;
	*(undefined4 *)((int)&(&plr)[iParm1]._pScrlSpells + 4) = 0;
	iVar3 = 0;
	if (0 < (&plr)[iParm1]._pNumInv) {
		iVar4 = 0;
		do {
			if (((*(short *)((int)&(&plr)[iParm1].InvList[0]._itype + iVar4) != -1) &&
					((uint)(&(&plr)[iParm1].InvList[0]._iMiscId)[iVar4] - 0x15 < 2)) &&
				 ((&(&plr)[iParm1].InvList[0]._iStatFlag)[iVar4] != '\0')) {
				uVar1 = *(uint *)((int)&(&plr)[iParm1]._pScrlSpells + 4);
				uVar2 = (int)(&(&plr)[iParm1].InvList[0]._iSpell)[iVar4] - 1;
				if ((int)(uVar2 * 0x4000000) < 0) {
					uVar5 = 1 << (uVar2 & 0x1f);
					uVar2 = 0;
				}
				else {
					uVar5 = 0 << (uVar2 & 0x1f);
					if (uVar2 * 0x4000000 != 0) {
						uVar5 = uVar5 | 1U >> (-uVar2 & 0x1f);
					}
					uVar2 = 1 << (uVar2 & 0x1f);
				}
				*(uint *)&(&plr)[iParm1]._pScrlSpells = *(uint *)&(&plr)[iParm1]._pScrlSpells | uVar2;
				*(uint *)((int)&(&plr)[iParm1]._pScrlSpells + 4) = uVar1 | uVar5;
			}
			iVar3 = iVar3 + 1;
			iVar4 = iVar4 + 0x6c;
		} while (iVar3 < (&plr)[iParm1]._pNumInv);
	}
	iVar4 = 0;
	iVar3 = iParm1 * 0x19e8;
	do {
		if (((*(short *)((int)&plr.SpdList[0]._itype + iVar3) != -1) &&
				((uint)(&plr.SpdList[0]._iMiscId)[iVar3] - 0x15 < 2)) &&
			 ((&plr.SpdList[0]._iStatFlag)[iVar3] != '\0')) {
			uVar1 = *(uint *)((int)&(&plr)[iParm1]._pScrlSpells + 4);
			uVar2 = (int)(&plr.SpdList[0]._iSpell)[iVar3] - 1;
			if ((int)(uVar2 * 0x4000000) < 0) {
				uVar5 = 1 << (uVar2 & 0x1f);
				uVar2 = 0;
			}
			else {
				uVar5 = 0 << (uVar2 & 0x1f);
				if (uVar2 * 0x4000000 != 0) {
					uVar5 = uVar5 | 1U >> (-uVar2 & 0x1f);
				}
				uVar2 = 1 << (uVar2 & 0x1f);
			}
			*(uint *)&(&plr)[iParm1]._pScrlSpells = *(uint *)&(&plr)[iParm1]._pScrlSpells | uVar2;
			*(uint *)((int)&(&plr)[iParm1]._pScrlSpells + 4) = uVar1 | uVar5;
		}
		iVar4 = iVar4 + 1;
		iVar3 = iVar3 + 0x6c;
	} while (iVar4 < 8);
	if ((((&plr)[iParm1]._pRSplType == '\x02') &&
			(uVar1 = 1 << ((&plr)[iParm1]._pRSpell - 1U & 0x1f),
			(*(uint *)&(&plr)[iParm1]._pScrlSpells & uVar1) == 0)) &&
		 ((*(uint *)((int)&(&plr)[iParm1]._pScrlSpells + 4) & (int)uVar1 >> 0x1f) == 0)) {
		(&plr)[iParm1]._pRSpell = -1;
		(&plr)[iParm1]._pRSplType = '\x04';
		force_redraw = 0xff;
	}
	return;
}



// decompiled code
// original method signature: 
// int FUN_0003f4b0(int iParm1);
 // line -1, offset 0x0003f4b0
// function 'FUN_0003f4b0' @0x0003F4B0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_0003f4b0(int iParm1)

{
	int iVar1;
	uint uVar2;
	uint uVar3;
	
	iVar1 = (int)*(short *)(iParm1 + 0x38c);
	*(undefined4 *)(&DAT_000019b0 + iParm1) = 0;
	*(undefined4 *)(&DAT_000019b4 + iParm1) = 0;
	if ((iVar1 != -1) && (iVar1 = (int)*(char *)(iParm1 + 0x3c6), iVar1 != 0)) {
		if (*(char *)(iParm1 + 0x3a9) == '\0') {
			iVar1 = 3;
			if (((int)*(char *)(iParm1 + 0x39d) == *(int *)(iParm1 + 100)) &&
				 (iVar1 = 4, *(char *)(iParm1 + 0x68) == '\x03')) {
				*(undefined4 *)(iParm1 + 100) = 0xffffffff;
				*(undefined *)(iParm1 + 0x68) = 4;
			}
		}
		else {
			uVar2 = (int)*(char *)(iParm1 + 0x39d) - 1;
			if ((int)(uVar2 * 0x4000000) < 0) {
				uVar3 = 1 << (uVar2 & 0x1f);
				iVar1 = 0;
			}
			else {
				uVar3 = 0 << (uVar2 & 0x1f);
				if (uVar2 * 0x4000000 != 0) {
					uVar3 = uVar3 | 1U >> (-uVar2 & 0x1f);
				}
				iVar1 = 1 << (uVar2 & 0x1f);
			}
			*(int *)(&DAT_000019b0 + iParm1) = iVar1;
			*(uint *)(&DAT_000019b4 + iParm1) = uVar3;
		}
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// void FUN_0003f57c(int iParm1);
 // line -1, offset 0x0003f57c
// function 'FUN_0003f57c' @0x0003F57C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0003f57c(int iParm1)

{
	bool bVar1;
	char *pcVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar6 = 0;
	iVar5 = 0;
	iVar4 = 0;
	iVar3 = 6;
	pcVar2 = &(&plr)[iParm1].InvBody[0]._iPLDex;
	do {
		if ((*(short *)(pcVar2 + -0x2c) != -1) && (pcVar2[0xe] = '\x01', pcVar2[0x11] != '\0')) {
			iVar6 = iVar6 + (int)pcVar2[-2];
			iVar4 = iVar4 + (int)*pcVar2;
			iVar5 = iVar5 + (int)pcVar2[-1];
		}
		iVar3 = iVar3 + -1;
		pcVar2 = pcVar2 + 0x6c;
	} while (iVar3 != -1);
	do {
		bVar1 = false;
		iVar3 = 6;
		pcVar2 = &(&plr)[iParm1].InvBody[0]._iPLDex;
		do {
			if (((*(short *)(pcVar2 + -0x2c) != -1) && (pcVar2[0xe] != '\0')) &&
				 ((int)(&plr)[iParm1]._pBaseDex + iVar4 < (int)(uint)(byte)pcVar2[10] ||
					((int)(&plr)[iParm1]._pBaseMag + iVar5 < (int)(uint)(byte)pcVar2[0xc] ||
					(int)(&plr)[iParm1]._pBaseStr + iVar6 < (int)(uint)(byte)pcVar2[9]))) {
				bVar1 = true;
				pcVar2[0xe] = '\0';
				if (pcVar2[0x11] != '\0') {
					iVar6 = iVar6 - (int)pcVar2[-2];
					iVar4 = iVar4 - (int)*pcVar2;
					iVar5 = iVar5 - (int)pcVar2[-1];
				}
			}
			iVar3 = iVar3 + -1;
			pcVar2 = pcVar2 + 0x6c;
		} while (iVar3 != -1);
	} while (bVar1);
	return;
}



// decompiled code
// original method signature: 
// uint FUN_0003f6dc(int iParm1,int iParm2);
 // line -1, offset 0x0003f6dc
// function 'FUN_0003f6dc' @0x0003F6DC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_0003f6dc(int iParm1,int iParm2)

{
	uint uVar1;
	
	uVar1 = 0;
	if (((int)(uint)*(byte *)(iParm2 + 100) <= (int)*(short *)(iParm1 + 0xfc)) &&
		 (uVar1 = 0, (int)(uint)*(byte *)(iParm2 + 0x61) <= (int)*(short *)(iParm1 + 0xf8))) {
		uVar1 = (uint)((int)*(short *)(iParm1 + 0x100) < (int)(uint)*(byte *)(iParm2 + 0x62)) ^ 1;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void FUN_0003f754(int iParm1);
 // line -1, offset 0x0003f754
// function 'FUN_0003f754' @0x0003F754 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0003f754(int iParm1)

{
	undefined uVar1;
	char cVar2;
	int iVar3;
	int iVar4;
	char *pcVar5;
	
	iVar3 = (&plr)[iParm1]._pNumInv;
	iVar4 = iParm1 * 0x19e8 + -0x7ff25624;
	while (iVar3 = iVar3 + -1, iVar3 != -1) {
		uVar1 = FUN_0003f6dc(&plr + iParm1,iVar4);
		*(undefined *)(iVar4 + 0x66) = uVar1;
		iVar4 = iVar4 + 0x6c;
	}
	iVar4 = iParm1 * 0x19e8 + -0x7ff24518;
	iVar3 = 7;
	pcVar5 = &(&plr)[iParm1].SpdList[0]._iStatFlag;
	do {
		if (*(short *)(pcVar5 + -0x3a) != -1) {
			cVar2 = FUN_0003f6dc(&plr + iParm1,iVar4);
			*pcVar5 = cVar2;
		}
		pcVar5 = pcVar5 + 0x6c;
		iVar3 = iVar3 + -1;
		iVar4 = iVar4 + 0x6c;
	} while (iVar3 != -1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_0003f834(int iParm1);
 // line -1, offset 0x0003f834
// function 'FUN_0003f834' @0x0003F834 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0003f834(int iParm1)

{
	short *psVar1;
	char cVar2;
	uint uVar3;
	uint uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if ((currlevel == '\0') && (iVar6 = 1, (&ItemStruct_800dfa84)[StorePlrNo * 0x14]._itype != -1)) {
		iVar7 = 0x6c;
		do {
			if (0x13 < iVar6) break;
			FUN_000485ac(iVar6);
			psVar1 = (short *)((int)&(&_witchitem)[StorePlrNo * 0x14 + 1]._itype + iVar7);
			iVar6 = iVar6 + 1;
			iVar7 = iVar7 + 0x6c;
		} while (*psVar1 != -1);
	}
	iVar6 = 0;
	if (0 < (&plr)[iParm1]._pNumInv) {
		iVar7 = 0;
		do {
			if ((*(short *)((int)&(&plr)[iParm1].InvList[0]._itype + iVar7) == 0) &&
				 ((&(&plr)[iParm1].InvList[0]._iMiscId)[iVar7] == '\x18')) {
				cVar2 = (&(&plr)[iParm1].InvList[0]._iSpell)[iVar7];
				(&(&plr)[iParm1].InvList[0]._iMinMag)[iVar7] =
						 (uchar)(&spelldata)[(int)(&(&plr)[iParm1].InvList[0]._iSpell)[iVar7]].sMinInt;
				iVar5 = (int)*(char *)(iParm1 * 0x19e8 + -0x7ff25a57 + (int)cVar2);
				while (iVar5 != 0) {
					uVar4 = (uint)(&(&plr)[iParm1].InvList[0]._iMinMag)[iVar7];
					uVar4 = uVar4 + (int)uVar4 / 5;
					uVar3 = uVar4 & 0xff;
					(&(&plr)[iParm1].InvList[0]._iMinMag)[iVar7] = (uchar)uVar4;
					iVar5 = iVar5 + -1;
					if (0xff < (int)(uVar3 + (int)uVar3 / 5)) {
						(&(&plr)[iParm1].InvList[0]._iMinMag)[iVar7] = -1;
						iVar5 = 0;
					}
				}
				cVar2 = FUN_0003f6dc(&plr + iParm1,iParm1 * 0x19e8 + -0x7ff25624 + iVar7);
				(&(&plr)[iParm1].InvList[0]._iStatFlag)[iVar7] = cVar2;
			}
			iVar6 = iVar6 + 1;
			iVar7 = iVar7 + 0x6c;
		} while (iVar6 < (&plr)[iParm1]._pNumInv);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_0003fb18(int iParm1,uint uParm2);
 // line -1, offset 0x0003fb18
// function 'FUN_0003fb18' @0x0003FB18 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0003fb18(int iParm1,uint uParm2)

{
	FUN_0003f754();
	FUN_0003f57c(iParm1);
	FUN_0003e6b0(iParm1,uParm2 & 0xff);
	FUN_0003f754(iParm1);
	FUN_0003f834(iParm1);
	FUN_0003f130(iParm1);
	FUN_0003f4b0(&plr + iParm1);
	if (currlevel == '\0') {
		FUN_00048858();
	}
	return;
}



// decompiled code
// original method signature: 
// uint FUN_00047d04(int iParm1);
 // line -1, offset 0x00047d04
// function 'FUN_00047d04' @0x00047D04 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_00047d04(int iParm1)

{
	uint uVar1;
	
	uVar1 = (uint)((int)(&plr)[myplr]._pStrength < (int)(uint)*(byte *)(iParm1 + 0x61)) ^ 1;
	if ((int)(&plr)[myplr]._pMagic < (int)(uint)*(byte *)(iParm1 + 100)) {
		uVar1 = 0;
	}
	if ((int)(&plr)[myplr]._pDexterity < (int)(uint)*(byte *)(iParm1 + 0x62)) {
		uVar1 = 0;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void FUN_000485ac(int iParm1);
 // line -1, offset 0x000485ac
// function 'FUN_000485ac' @0x000485AC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_000485ac(int iParm1)

{
	int iVar1;
	
	if ((&_witchitem)[StorePlrNo * 0x14 + iParm1]._iMiscId == '\x18') {
		(&_witchitem)[StorePlrNo * 0x14 + iParm1]._iMinMag =
				 (uchar)(&spelldata)[(int)(&_witchitem)[StorePlrNo * 0x14 + iParm1]._iSpell].sMinInt;
		iVar1 = (int)*(char *)(myplr * 0x19e8 + -0x7ff25a57 +
													(int)(&_witchitem)[StorePlrNo * 0x14 + iParm1]._iSpell);
		while (iVar1 != 0) {
			(&_witchitem)[StorePlrNo * 0x14 + iParm1]._iMinMag =
					 (&_witchitem)[StorePlrNo * 0x14 + iParm1]._iMinMag +
					 (char)((int)(uint)(&_witchitem)[StorePlrNo * 0x14 + iParm1]._iMinMag / 5);
			iVar1 = iVar1 + -1;
			if (0xff < (int)((uint)(&_witchitem)[StorePlrNo * 0x14 + iParm1]._iMinMag +
											(int)(uint)(&_witchitem)[StorePlrNo * 0x14 + iParm1]._iMinMag / 5)) {
				(&_witchitem)[StorePlrNo * 0x14 + iParm1]._iMinMag = -1;
				iVar1 = 0;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_00048858(void);
 // line -1, offset 0x00048858
// function 'FUN_00048858' @0x00048858 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00048858(void)

{
	char cVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar2 = 0;
	do {
		if (*(short *)((int)&(&_smithitem)[StorePlrNo * 0x14]._itype + iVar2) != -1) {
			cVar1 = FUN_00047d04((int)&(&_smithitem)[StorePlrNo * 0x14]._iVAdd1 + iVar2);
			(&(&_smithitem)[StorePlrNo * 0x14]._iStatFlag)[iVar2] = cVar1;
		}
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 0x6c;
	} while (iVar3 < 0x14);
	iVar3 = 0;
	iVar2 = 0;
	do {
		if (*(short *)((int)&(&_premiumitem)[StorePlrNo * 6]._itype + iVar2) != -1) {
			cVar1 = FUN_00047d04((int)&(&_premiumitem)[StorePlrNo * 6]._iVAdd1 + iVar2);
			(&(&_premiumitem)[StorePlrNo * 6]._iStatFlag)[iVar2] = cVar1;
		}
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 0x6c;
	} while (iVar3 < 6);
	iVar3 = 0;
	iVar2 = 0;
	do {
		if (*(short *)((int)&(&_witchitem)[StorePlrNo * 0x14]._itype + iVar2) != -1) {
			cVar1 = FUN_00047d04((int)&(&_witchitem)[StorePlrNo * 0x14]._iVAdd1 + iVar2);
			(&(&_witchitem)[StorePlrNo * 0x14]._iStatFlag)[iVar2] = cVar1;
		}
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 0x6c;
	} while (iVar3 < 0x14);
	iVar3 = 0;
	iVar2 = 0;
	do {
		if (*(short *)((int)&(&_healitem)[StorePlrNo * 0x14]._itype + iVar2) != -1) {
			cVar1 = FUN_00047d04((int)&(&_healitem)[StorePlrNo * 0x14]._iVAdd1 + iVar2);
			(&(&_healitem)[StorePlrNo * 0x14]._iStatFlag)[iVar2] = cVar1;
		}
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 0x6c;
	} while (iVar3 < 0x14);
	cVar1 = FUN_00047d04(_boyitem + StorePlrNo);
	_boyitem[StorePlrNo]._iStatFlag = cVar1;
	return;
}



// decompiled code
// original method signature: 
// uint FUN_0004d2e8(char cParm1,char cParm2,ushort uParm3);
 // line -1, offset 0x0004d2e8
// function 'FUN_0004d2e8' @0x0004D2E8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_0004d2e8(char cParm1,char cParm2,ushort uParm3)

{
	uint uVar1;
	
	uVar1 = 0xffffffff;
	if (iGp00001194 < 0x50) {
		uVar1 = (uint)(&lightactive)[iGp00001194];
		LightList[uVar1]._lx = cParm1;
		LightList[uVar1]._ly = cParm2;
		LightList[uVar1]._lradius = uParm3;
		LightList[uVar1]._xoff = '\0';
		LightList[uVar1]._yoff = '\0';
		LightList[uVar1]._ldel = '\0';
		iGp00001194 = iGp00001194 + 1;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void FUN_0004d364(int iParm1,ushort uParm2);
 // line -1, offset 0x0004d364
// function 'FUN_0004d364' @0x0004D364 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0004d364(int iParm1,ushort uParm2)

{
	if (iParm1 != -1) {
		LightList[iParm1]._lradius = uParm2;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_0004d61c(int iParm1,ushort uParm2);
 // line -1, offset 0x0004d61c
// function 'FUN_0004d61c' @0x0004D61C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0004d61c(int iParm1,ushort uParm2)

{
	int iVar1;
	ushort *puVar2;
	int iVar3;
	
	iVar3 = 0;
	if (0 < iGp0000119c) {
		puVar2 = &VisionList[0]._lradius;
		iVar1 = 0;
		do {
			if ((int)(&VisionList[0]._lid)[iVar1] == iParm1) {
				(&VisionList[0]._lunflag)[iVar1] = '\x01';
				(&VisionList[0]._lunx)[iVar1] = (&VisionList[0]._lx)[iVar1];
				(&VisionList[0]._luny)[iVar1] = (&VisionList[0]._ly)[iVar1];
				(&VisionList[0]._lunr)[iVar1] = (char)*puVar2;
				*puVar2 = uParm2;
				uGp000011a0 = 1;
			}
			puVar2 = puVar2 + 7;
			iVar3 = iVar3 + 1;
			iVar1 = iVar1 + 0xe;
		} while (iVar3 < iGp0000119c);
	}
	return;
}



// decompiled code
// original method signature: 
// uint FUN_0005fd9c(PlayerStruct *pPParm1);
 // line -1, offset 0x0005fd9c
// function 'FUN_0005fd9c' @0x0005FD9C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_0005fd9c(PlayerStruct *pPParm1)

{
	return (uint)(&plr + iGp00001288 == pPParm1);
}



// decompiled code
// original method signature: 
// void FUN_0005fe54(int iParm1);
 // line -1, offset 0x0005fe54
// function 'FUN_0005fe54' @0x0005FE54 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0005fe54(int iParm1)

{
	int iVar1;
	undefined4 uVar2;
	byte bVar3;
	int iVar4;
	
	iVar4 = (int)*(char *)(iParm1 + 0xf6);
	if (leveltype == '\0') {
		iVar1 = iVar4 * 0xb;
		*(int *)(iParm1 + 400) = (int)(char)(&DAT_800da3df)[iVar1];
		*(int *)(iParm1 + 0x194) = (int)(char)(&DAT_800da3e0)[iVar1];
		*(int *)(iParm1 + 0x1a8) = (int)(char)(&DAT_800da3dc)[iVar1];
		*(int *)(iParm1 + 0x19c) = (int)(char)(&DAT_800da3dd)[iVar1];
	}
	else {
		iVar1 = iVar4 * 0xb;
		*(int *)(iParm1 + 400) = (int)(&PlrGFXAnimLens)[iVar1];
		*(int *)(iParm1 + 0x194) = (int)(&CHAR_08h_800da3da)[iVar1];
		*(int *)(iParm1 + 0x198) = (int)(&CHAR_10h_800da3d9)[iVar1];
		*(int *)(iParm1 + 0x1a4) = (int)(char)(&DAT_800da3de)[iVar1];
		*(int *)(iParm1 + 0x19c) = (int)(char)(&DAT_800da3dd)[iVar1];
		*(int *)(iParm1 + 0x1a8) = (int)(char)(&DAT_800da3dc)[iVar1];
		*(int *)(iParm1 + 0x1ac) = (int)(char)(&DAT_800da3db)[iVar1];
		*(int *)(iParm1 + 0x18c) = (int)(char)(&DAT_800da3e1)[iVar1];
	}
	*(int *)(iParm1 + 0x1a0) = (int)(char)(&DAT_800da3e2)[iVar4 * 0xb];
	bVar3 = *(byte *)(iParm1 + 0x43) & 0xf;
	if (iVar4 == 0) {
		if (bVar3 == 4) {
			if (leveltype != '\0') {
				*(undefined4 *)(iParm1 + 400) = 8;
			}
			uVar2 = 0xb;
		}
		else {
			if (bVar3 == 5) {
				*(undefined4 *)(iParm1 + 0x198) = 0x14;
				uVar2 = 10;
			}
			else {
				if (bVar3 != 8) {
					return;
				}
				*(undefined4 *)(iParm1 + 0x198) = 0x10;
				uVar2 = 0xb;
			}
		}
	}
	else {
		if (iVar4 == 1) {
			if (bVar3 == 5) {
				*(undefined4 *)(iParm1 + 0x198) = 0x16;
				uVar2 = 0xd;
			}
			else {
				if (bVar3 == 4) {
					*(undefined4 *)(iParm1 + 0x198) = 0xc;
					uVar2 = 7;
				}
				else {
					if (bVar3 != 8) {
						return;
					}
					*(undefined4 *)(iParm1 + 0x198) = 0x10;
					uVar2 = 0xb;
				}
			}
		}
		else {
			if (iVar4 != 2) {
				return;
			}
			if ((*(byte *)(iParm1 + 0x43) & 0xf) == 0) {
				*(undefined4 *)(iParm1 + 0x198) = 0x14;
				return;
			}
			if (bVar3 == 1) {
				uVar2 = 9;
			}
			else {
				if (bVar3 == 4) {
					uVar2 = 0x14;
				}
				else {
					uVar2 = 0x18;
					if (bVar3 != 5) {
						return;
					}
				}
				*(undefined4 *)(iParm1 + 0x198) = uVar2;
				uVar2 = 0x10;
			}
		}
	}
	*(undefined4 *)(iParm1 + 0x18c) = uVar2;
	return;
}



// decompiled code
// original method signature: 
// void FUN_00065da0(int iParm1,int iParm2);
 // line -1, offset 0x00065da0
// function 'FUN_00065da0' @0x00065DA0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00065da0(int iParm1,int iParm2)

{
	char cVar1;
	short sVar2;
	short sVar3;
	
	sVar3 = (short)iParm2;
	if ((&MaxStats)[(int)(&plr)[iParm1]._pClass * 4] < (int)(&plr)[iParm1]._pBaseStr + iParm2) {
		sVar3 = (short)(&MaxStats)[(int)(&plr)[iParm1]._pClass * 4] - (&plr)[iParm1]._pBaseStr;
	}
	sVar2 = (&plr)[iParm1]._pStrength;
	(&plr)[iParm1]._pBaseStr = (&plr)[iParm1]._pBaseStr + sVar3;
	cVar1 = (&plr)[iParm1]._pClass;
	(&plr)[iParm1]._pStrength = sVar2 + sVar3;
	if (cVar1 == '\x01') {
		(&plr)[iParm1]._pDamageMod =
				 (((int)(&plr)[iParm1]._pStrength + (int)(&plr)[iParm1]._pDexterity) *
				 (int)(&plr)[iParm1]._pLevel) / 200;
	}
	else {
		(&plr)[iParm1]._pDamageMod =
				 ((int)(&plr)[iParm1]._pStrength * (int)(&plr)[iParm1]._pLevel) / 100;
	}
	FUN_0003fb18(iParm1,1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_00066168(int iParm1,int iParm2);
 // line -1, offset 0x00066168
// function 'FUN_00066168' @0x00066168 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00066168(int iParm1,int iParm2)

{
	int iVar1;
	
	*(int *)(iParm1 + 0x11c) = iParm2;
	*(int *)(iParm1 + 0x114) = iParm2 - (*(int *)(iParm1 + 0x120) - *(int *)(iParm1 + 0x118));
	iVar1 = FUN_0005fd9c();
	if (iVar1 != 0) {
		drawhpflag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_00066cf0(int iParm1);
 // line -1, offset 0x00066cf0
// function 'FUN_00066cf0' @0x00066CF0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00066cf0(int iParm1)

{
	FUN_00066168(&plr + iParm1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_00067208(int iParm1);
 // line -1, offset 0x00067208
// function 'FUN_00067208' @0x00067208 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00067208(int iParm1)

{
	FUN_0005fe54(&plr + iParm1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_00077d58(int iParm1,int iParm2,undefined4 uParm3);
 // line -1, offset 0x00077d58
// function 'FUN_00077d58' @0x00077D58 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00077d58(int iParm1,int iParm2,undefined4 uParm3)

{
	if (iParm1 != 0) {
		iParm2 = iParm2 << 1;
		if (iParm2 < 0) {
			iParm2 = 0;
		}
		else {
			if (0x3fff < iParm2) {
				iParm2 = 0x3fff;
			}
		}
		FUN_0009a79c((uint)*(ushort *)(iParm1 + 2),iParm2,uParm3,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_00077f70(void);
 // line -1, offset 0x00077f70
// function 'FUN_00077f70' @0x00077F70 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00077f70(void)

{
	FUN_0009a6ec();
	return;
}



// decompiled code
// original method signature: 
// undefined4 FUN_0007b348(void);
 // line -1, offset 0x0007b348
// function 'FUN_0007b348' @0x0007B348 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_0007b348(void)

{
	return uGp0000146c;
}



// decompiled code
// original method signature: 
// void FUN_0007eeb8(int iParm1,byte *pbParm2);
 // line -1, offset 0x0007eeb8
// function 'FUN_0007eeb8' @0x0007EEB8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0007eeb8(int iParm1,byte *pbParm2)

{
	byte bVar1;
	undefined uVar2;
	
	*(short *)(iParm1 + 8) = (ushort)*pbParm2 << 1;
	uVar2 = (undefined)((int)((uint)bGp000014e6 << 3) / 6);
	*(short *)(iParm1 + 10) = (ushort)pbParm2[1] << 1;
	*(short *)(iParm1 + 0x14) = (ushort)pbParm2[2] << 1;
	*(short *)(iParm1 + 0x16) = (ushort)pbParm2[3] << 1;
	*(short *)(iParm1 + 0x20) = (ushort)pbParm2[4] << 1;
	*(short *)(iParm1 + 0x22) = (ushort)pbParm2[5] << 1;
	*(short *)(iParm1 + 0x2c) = (ushort)pbParm2[6] << 1;
	bVar1 = pbParm2[7];
	*(byte *)(iParm1 + 4) = bGp000014e6;
	*(byte *)(iParm1 + 0x10) = bGp000014e6;
	*(byte *)(iParm1 + 0x1c) = bGp000014e6;
	*(byte *)(iParm1 + 0x28) = bGp000014e6;
	*(char *)(iParm1 + 0x18) = *(char *)(iParm1 + 0x18) + -1;
	*(ushort *)(iParm1 + 0x1a) = *(ushort *)(iParm1 + 0x1a) | 0x40;
	*(short *)(iParm1 + 0x2e) = (ushort)bVar1 << 1;
	*(undefined *)(iParm1 + 5) = uVar2;
	*(undefined *)(iParm1 + 6) = uVar2;
	*(undefined *)(iParm1 + 0x11) = uVar2;
	*(undefined *)(iParm1 + 0x12) = uVar2;
	*(undefined *)(iParm1 + 0x1d) = uVar2;
	*(undefined *)(iParm1 + 0x1e) = uVar2;
	*(undefined *)(iParm1 + 0x29) = uVar2;
	*(undefined *)(iParm1 + 0x2a) = uVar2;
	*(char *)(iParm1 + 0x30) = *(char *)(iParm1 + 0x30) + -1;
	*(char *)(iParm1 + 0x25) = *(char *)(iParm1 + 0x25) + -1;
	*(char *)(iParm1 + 0x31) = *(char *)(iParm1 + 0x31) + -1;
	*(byte *)(iParm1 + 7) = *(byte *)(iParm1 + 7) & 0xfe | 2;
	return;
}



// decompiled code
// original method signature: 
// undefined4 FUN_0007f34c(void);
 // line -1, offset 0x0007f34c
// function 'FUN_0007f34c' @0x0007F34C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_0007f34c(void)

{
	return 0x1ff;
}



// decompiled code
// original method signature: 
// void FUN_0007f5b8(int iParm1);
 // line -1, offset 0x0007f5b8
// function 'FUN_0007f5b8' @0x0007F5B8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0007f5b8(int iParm1)

{
	short sVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	uint uVar5;
	int iVar6;
	int iVar7;
	
	iVar6 = (int)monster[iParm1]._mx;
	iVar7 = (int)monster[iParm1]._my;
	uVar5 = (uint)monster[iParm1]._menemy;
	if (plr.plractive == '\0') {
		uVar5 = 0xffffffff;
		if (PlayerStruct_800dbf20.plractive != '\0') {
			uVar5 = 1;
		}
	}
	else {
		bVar2 = false;
		if (PlayerStruct_800dbf20.plractive == '\0') {
			uVar5 = 0;
		}
		else {
			sVar1 = (&plr)[uVar5]._py;
			iVar3 = FUN_000105b4((int)(&plr)[uVar5]._px - iVar6);
			if ((1 < iVar3) || (iVar3 = FUN_000105b4((int)sVar1 - iVar7), 1 < iVar3)) {
				bVar2 = true;
			}
			if (bVar2) {
				iVar3 = FUN_000105b4((int)plr._px - iVar6);
				iVar4 = FUN_000105b4((int)plr._py - iVar7);
				iVar6 = FUN_000105b4((int)PlayerStruct_800dbf20._px - iVar6);
				iVar7 = FUN_000105b4((int)PlayerStruct_800dbf20._py - iVar7);
				if (iVar3 < iVar4) {
					iVar3 = iVar4;
				}
				uVar5 = (uint)(iVar6 < iVar3);
				if (iVar6 < iVar7) {
					uVar5 = (uint)(iVar7 < iVar3);
				}
			}
		}
	}
	if (uVar5 == 0xffffffff) {
		monster[iParm1]._mFlags = monster[iParm1]._mFlags | 0x400;
	}
	else {
		monster[iParm1]._menemy = (uchar)uVar5;
		monster[iParm1]._menemyx = (uchar)(&plr)[uVar5]._px;
		sVar1 = (&plr)[uVar5]._py;
		monster[iParm1]._mFlags = monster[iParm1]._mFlags & 0xfbff;
		monster[iParm1]._menemyy = (uchar)sVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_00080ef8(int iParm1,int iParm2,int iParm3);
 // line -1, offset 0x00080ef8
// function 'FUN_00080ef8' @0x00080EF8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00080ef8(int iParm1,int iParm2,int iParm3)

{
	char cVar1;
	int iVar2;
	
	missiledata[10].mlSFX = -1;
	(&dung_map)[iParm2 * 0x70 + iParm3].dMissile = '\0';
	iVar2 = FUN_00142a04(0,0,iParm2,iParm3,0,10,0,iParm1,0,0);
	if (iVar2 != -1) {
		FUN_0013d424(iVar2,1);
		cVar1 = FUN_0004d2e8((int)missile[iParm1]._mix,(int)missile[iParm1]._miy,0x14a);
		missile[iParm1]._mlid = cVar1;
		missiledata[10].mlSFX = 0x6e;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_000833b0(void);
 // line -1, offset 0x000833b0
// function 'FUN_000833b0' @0x000833B0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_000833b0(void)

{
	if (iGp00000324 == 0x1e) {
		FUN_00013a78(0);
		FUN_000833f0();
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_000833f0(void);
 // line -1, offset 0x000833f0
// function 'FUN_000833f0' @0x000833F0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_000833f0(void)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	LOAD_IMAGE_ARGS *pLVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	iVar6 = 0;
	while (iVar5 < iGp00000324) {
		iVar3 = (int)&AllArgs.Rect.x + iVar6;
		uVar1 = *(uint *)((int)&AllArgs.UseAddr + iVar6);
		if ((uVar1 & 4) == 0) {
			if ((uVar1 & 1) == 0) {
				iVar2 = FUN_00021774(*(undefined4 *)((int)&AllArgs.IsMove + iVar6));
				if (iVar2 == 0) {
					FUN_00020e94(0,"psxsrc/GPUQ.CPP",0x7c);
				}
				iVar2 = iVar2 + *(int *)((int)&AllArgs.DiscardAfterDump + iVar6);
			}
			else {
				iVar2 = *(int *)((int)&AllArgs.Offset + iVar6);
			}
			FUN_00013d24(iVar3,iVar2);
		}
		else {
			FUN_00013de4(iVar3,(uint)*(ushort *)((int)&AllArgs.ImgHandle + iVar6),
									 (uint)*(ushort *)((int)&AllArgs.ImgHandle + iVar6 + 2));
		}
		iVar6 = iVar6 + 0x1c;
		iVar5 = iVar5 + 1;
	}
	FUN_00013a78(0);
	iVar5 = 0;
	pLVar4 = &AllArgs;
	while (iVar5 < iGp00000324) {
		if ((pLVar4->UseAddr & 5) == 0) {
			if ((pLVar4->UseAddr & 2) == 0) {
				uVar1 = FUN_000217dc(pLVar4->IsMove);
			}
			else {
				uVar1 = FUN_00021860(pLVar4->IsMove);
			}
			if ((uVar1 & 0xff) == 0) {
				FUN_00020e94(0,"psxsrc/GPUQ.CPP",0x91);
			}
		}
		pLVar4 = (LOAD_IMAGE_ARGS *)&pLVar4->Addr;
		iVar5 = iVar5 + 1;
	}
	iGp00000324 = 0;
	return;
}



// decompiled code
// original method signature: 
// void FUN_00083564(short *psParm1,uint uParm2,uint uParm3);
 // line -1, offset 0x00083564
// function 'FUN_00083564' @0x00083564 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00083564(short *psParm1,uint uParm2,uint uParm3)

{
	short sVar1;
	int iVar2;
	
	FUN_000833b0();
	iVar2 = iGp00000324 * 0x1c;
	(&AllArgs.DiscardAfterDump)[iGp00000324 * 7] = uParm3;
	((RECT *)((int)&AllArgs.Rect + iVar2))->x = *psParm1;
	*(short *)((int)&AllArgs.Rect + iVar2 + 2) = psParm1[1];
	*(short *)((int)&AllArgs.Rect + iVar2 + 4) = psParm1[2];
	sVar1 = psParm1[3];
	(&AllArgs.IsMove)[iGp00000324 * 7] = uParm2;
	(&AllArgs.UseAddr)[iGp00000324 * 7] = (&AllArgs.UseAddr)[iGp00000324 * 7] & 0xfffffff8;
	*(short *)((int)&AllArgs.Rect + iVar2 + 6) = sVar1;
	iGp00000324 = iGp00000324 + 1;
	return;
}



// decompiled code
// original method signature: 
// void FUN_00083618(int iParm1);
 // line -1, offset 0x00083618
// function 'FUN_00083618' @0x00083618 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00083618(int iParm1)

{
	uint uVar1;
	uint *puVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (0 < iGp00000324) {
		puVar2 = &AllArgs.UseAddr;
		iVar4 = 0;
		do {
			if (((*puVar2 & 1) == 0) && (*(int *)((int)&AllArgs.IsMove + iVar4) == iParm1)) {
				*puVar2 = *puVar2 | 2;
				return;
			}
			puVar2 = puVar2 + 7;
			iVar3 = iVar3 + 1;
			iVar4 = iVar4 + 0x1c;
		} while (iVar3 < iGp00000324);
	}
	uVar1 = FUN_00021860();
	if ((uVar1 & 0xff) == 0) {
		FUN_00020e94(0,"psxsrc/GPUQ.CPP",0xee);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_00083e54(void);
 // line -1, offset 0x00083e54
// function 'FUN_00083e54' @0x00083E54 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00083e54(void)

{
	iGp00000338 = iGp00000338 + 0x40;
	return;
}



// decompiled code
// original method signature: 
// undefined4 FUN_000840f8(void);
 // line -1, offset 0x000840f8
// function 'FUN_000840f8' @0x000840F8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_000840f8(void)

{
	return uGp00001eb0;
}



// decompiled code
// original method signature: 
// undefined4 FUN_00084474(void);
 // line -1, offset 0x00084474
// function 'FUN_00084474' @0x00084474 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_00084474(void)

{
	return uGp00001ebc;
}



// decompiled code
// original method signature: 
// int FUN_00085920(int iParm1,undefined4 uParm2,undefined4 uParm3);
 // line -1, offset 0x00085920
// function 'FUN_00085920' @0x00085920 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_00085920(int iParm1,undefined4 uParm2,undefined4 uParm3)

{
	int iVar1;
	undefined4 uVar2;
	undefined4 uVar3;
	uint uVar4;
	
	iVar1 = FUN_00085df8(iParm1,uParm2,FileToLoad);
	if (iVar1 != 1) {
		FUN_00085af4(iParm1,uParm2);
	}
	iVar1 = (**(code **)(*(int *)(iParm1 + 0x10) + 0x24))
										(iParm1 + (int)*(short *)(*(int *)(iParm1 + 0x10) + 0x20),FileToLoad);
	if (iVar1 == 0) {
		FUN_00020e94(0,"psxsrc/FILEIO.CPP",0x59);
	}
	iVar1 = FUN_000215dc(iVar1,uParm3,uParm2);
	if (iVar1 == -1) {
		FUN_00020e94(0,"psxsrc/FILEIO.CPP",0x5c);
	}
	uVar2 = FUN_00021774(iVar1);
	if (iVar1 == 0) {
		FUN_00020e94(0,"psxsrc/FILEIO.CPP",0x5f);
	}
	uVar3 = (**(code **)(*(int *)(iParm1 + 0x10) + 0x24))
										(iParm1 + (int)*(short *)(*(int *)(iParm1 + 0x10) + 0x20),FileToLoad);
	(**(code **)(*(int *)(iParm1 + 0x10) + 0x1c))
						(iParm1 + (int)*(short *)(*(int *)(iParm1 + 0x10) + 0x18),FileToLoad,uVar2,uVar3);
	uVar4 = FUN_000217dc(iVar1);
	if ((uVar4 & 0xff) == 0) {
		FUN_00020e94(0,"psxsrc/FILEIO.CPP",100);
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// undefined4 FUN_00085a90(int iParm1,undefined4 uParm2);
 // line -1, offset 0x00085a90
// function 'FUN_00085a90' @0x00085A90 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_00085a90(int iParm1,undefined4 uParm2)

{
	int iVar1;
	undefined4 uVar2;
	
	iVar1 = FUN_00085df8(iParm1,uParm2,FileToLoad);
	uVar2 = 0xffffffff;
	if (iVar1 == 1) {
		uVar2 = (**(code **)(*(int *)(iParm1 + 0x10) + 0x24))
											(iParm1 + (int)*(short *)(*(int *)(iParm1 + 0x10) + 0x20),FileToLoad);
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// void FUN_00085af4(void);
 // line -1, offset 0x00085af4
// function 'FUN_00085af4' @0x00085AF4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00085af4(void)

{
	FUN_00020e64();
	return;
}



// decompiled code
// original method signature: 
// void FUN_00085b14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6);
 // line -1, offset 0x00085b14
// function 'FUN_00085b14' @0x00085B14 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00085b14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
								 undefined4 param_5,int param_6)

{
	int iVar1;
	
	iVar1 = FUN_00085df8(param_1,param_2,FileToLoad);
	if (iVar1 == 0) {
		FUN_00020e94(0,"psxsrc/FILEIO.CPP",0x91);
	}
	if (param_6 == -1) {
		param_6 = (**(code **)(*(int *)(param_1 + 0x10) + 0x24))
												(param_1 + (int)*(short *)(*(int *)(param_1 + 0x10) + 0x20),FileToLoad);
	}
	(**(code **)(*(int *)(param_1 + 0x10) + 0x34))
						(param_1 + (int)*(short *)(*(int *)(param_1 + 0x10) + 0x30),FileToLoad,param_3,param_4,
						 param_5,param_6);
	return;
}



// decompiled code
// original method signature: 
// undefined4 FUN_00085bf4(int iParm1,undefined4 uParm2,undefined4 uParm3,int iParm4);
 // line -1, offset 0x00085bf4
// function 'FUN_00085bf4' @0x00085BF4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_00085bf4(int iParm1,undefined4 uParm2,undefined4 uParm3,int iParm4)

{
	int iVar1;
	
	iVar1 = FUN_00085df8(iParm1,uParm2,FileToLoad);
	if (iVar1 == 0) {
		FUN_00020e94(0,"psxsrc/FILEIO.CPP",0xa4);
	}
	if (iParm4 == -1) {
		iParm4 = (**(code **)(*(int *)(iParm1 + 0x10) + 0x24))
											 (iParm1 + (int)*(short *)(*(int *)(iParm1 + 0x10) + 0x20),FileToLoad);
	}
	(**(code **)(*(int *)(iParm1 + 0x10) + 0x1c))
						(iParm1 + (int)*(short *)(*(int *)(iParm1 + 0x10) + 0x18),FileToLoad,uParm3,iParm4);
	return 1;
}



// decompiled code
// original method signature: 
// int FUN_00085df8(int iParm1,undefined4 uParm2,undefined4 uParm3);
 // line -1, offset 0x00085df8
// function 'FUN_00085df8' @0x00085DF8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_00085df8(int iParm1,undefined4 uParm2,undefined4 uParm3)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	FUN_000103c8(uParm3);
	FUN_00088474(uParm3);
	iVar1 = (**(code **)(*(int *)(iParm1 + 0x10) + 0x14))
										(iParm1 + (int)*(short *)(*(int *)(iParm1 + 0x10) + 0x10),uParm3);
	iVar2 = 1;
	if (iVar1 == 0) {
		iVar3 = 0;
		iVar1 = FUN_00086064(iParm1);
		iVar2 = 0;
		if (iVar1 != 0) {
			FUN_00085fb4(iParm1);
			iVar1 = *(int *)(iParm1 + 0xc);
			do {
				iVar1 = FUN_00085f0c(iParm1,uParm3,iVar1);
				iVar2 = iVar3;
				if (iVar1 == 0) break;
				FUN_000103f0(uParm3,&DAT_8011ab38);
				FUN_000103f0(uParm3,uParm2);
				iVar2 = (**(code **)(*(int *)(iParm1 + 0x10) + 0x14))
													(iParm1 + (int)*(short *)(*(int *)(iParm1 + 0x10) + 0x10),uParm3);
				if (iVar2 != 0) {
					iVar3 = 1;
				}
				iVar2 = iVar3;
			} while (iVar3 == 0);
			FUN_0008600c(iParm1);
		}
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// char * FUN_00085f0c(undefined4 uParm1,int iParm2,char *pcParm3);
 // line -1, offset 0x00085f0c
// function 'FUN_00085f0c' @0x00085F0C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
char * FUN_00085f0c(undefined4 uParm1,int iParm2,char *pcParm3)

{
	char cVar1;
	char cVar2;
	char *pcVar3;
	char *pcVar4;
	
	cVar2 = *pcParm3;
	cVar1 = *pcParm3;
	pcVar3 = pcParm3;
	while ((cVar1 != '\0' && (cVar2 != ';'))) {
		pcVar3 = pcVar3 + 1;
		cVar1 = *pcVar3;
		cVar2 = *pcVar3;
	}
	pcVar4 = pcVar3 + -(int)pcParm3;
	if (pcVar4 == (char *)0x0) {
		pcVar3 = (char *)0x0;
	}
	else {
		FUN_00019e2c(iParm2,pcParm3,pcVar4);
		cVar1 = *pcVar3;
		pcVar4[iParm2] = '\0';
		if (cVar1 != '\0') {
			pcVar3 = pcVar3 + 1;
		}
	}
	return pcVar3;
}



// decompiled code
// original method signature: 
// void FUN_00085fb4(int iParm1);
 // line -1, offset 0x00085fb4
// function 'FUN_00085fb4' @0x00085FB4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00085fb4(int iParm1)

{
	int iVar1;
	
	iVar1 = FUN_00086064();
	if (iVar1 != 0) {
		iVar1 = FUN_00021774(*(undefined4 *)(iParm1 + 8));
		*(int *)(iParm1 + 0xc) = iVar1;
		if (iVar1 == 0) {
			FUN_00020e94(0,"psxsrc/FILEIO.CPP",0x11e);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_0008600c(int iParm1);
 // line -1, offset 0x0008600c
// function 'FUN_0008600c' @0x0008600C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0008600c(int iParm1)

{
	int iVar1;
	uint uVar2;
	
	iVar1 = FUN_00086064();
	if ((iVar1 != 0) && (uVar2 = FUN_000217dc(*(undefined4 *)(iParm1 + 8)), (uVar2 & 0xff) == 0)) {
		FUN_00020e94(0,"psxsrc/FILEIO.CPP",299);
	}
	return;
}



// decompiled code
// original method signature: 
// uint FUN_00086064(int iParm1);
 // line -1, offset 0x00086064
// function 'FUN_00086064' @0x00086064 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_00086064(int iParm1)

{
	return (uint)(~*(uint *)(iParm1 + 8) != 0);
}



// decompiled code
// original method signature: 
// undefined * FUN_00087a6c(char *pcParm1,char cParm2);
 // line -1, offset 0x00087a6c
// function 'FUN_00087a6c' @0x00087A6C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined * FUN_00087a6c(char *pcParm1,char cParm2)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	int iVar4;
	char *pcVar5;
	undefined *puVar6;
	undefined *puVar7;
	int iVar8;
	int iVar9;
	undefined local_40 [12];
	undefined uStack52;
	undefined local_33 [19];
	
	puVar7 = (undefined *)0x0;
	iVar8 = 0;
	iVar1 = FUN_00019e1c();
	if (cParm2 == '\0') {
		puVar7 = (undefined *)(iGp000003ec + 0x14);
		iVar9 = iGp000003e4;
	}
	else {
		iVar9 = 0;
		if (cParm2 == '\x01') {
			puVar7 = (undefined *)(iGp000003e8 + 0x14);
			iVar9 = iGp000003e0;
		}
	}
	FUN_00088474(pcParm1);
	iVar4 = 0;
	pcVar5 = pcParm1;
	if (0 < iVar1) {
		do {
			if (*pcVar5 == '\\') {
				iVar8 = iVar4 + 1;
			}
			iVar4 = iVar4 + 1;
			pcVar5 = pcVar5 + 1;
		} while (iVar4 < iVar1);
	}
	if (iVar8 != 0) {
		iVar4 = 0;
		pcVar5 = pcParm1;
		if (0 < iVar1 - iVar8) {
			do {
				iVar2 = iVar4 + iVar8;
				iVar4 = iVar4 + 1;
				*pcVar5 = pcParm1[iVar2];
				pcVar5 = pcVar5 + 1;
			} while (iVar4 < iVar1 - iVar8);
		}
		pcParm1[iVar4] = '\0';
	}
	iVar1 = 0xd;
	puVar3 = local_33;
	do {
		*puVar3 = 0;
		iVar1 = iVar1 + -1;
		puVar3 = puVar3 + -1;
	} while (-1 < iVar1);
	iVar1 = 0;
	while( true ) {
		if (iVar9 <= iVar1) {
			return (undefined *)0;
		}
		puVar3 = local_40;
		puVar6 = puVar7;
		do {
			*puVar3 = *puVar6;
			puVar3 = puVar3 + 1;
			puVar6 = puVar6 + 1;
		} while ((int)puVar3 < (int)&uStack52);
		iVar8 = FUN_00019dfc(pcParm1,local_40);
		iVar1 = iVar1 + 1;
		if (iVar8 == 0) break;
		puVar7 = puVar7 + 0x14;
	}
	return puVar7;
}



// decompiled code
// original method signature: 
// uint FUN_00087bf8(undefined4 uParm1,char cParm2);
 // line -1, offset 0x00087bf8
// function 'FUN_00087bf8' @0x00087BF8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_00087bf8(undefined4 uParm1,char cParm2)

{
	int iVar1;
	
	if (iGp000003e8 == 0) {
		iVar1 = FUN_00029004();
	}
	else {
		iVar1 = FUN_00087a6c(uParm1,(int)cParm2);
	}
	return (uint)(iVar1 != 0);
}



// decompiled code
// original method signature: 
// uint FUN_000881a0(undefined4 uParm1,char cParm2);
 // line -1, offset 0x000881a0
// function 'FUN_000881a0' @0x000881A0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_000881a0(undefined4 uParm1,char cParm2)

{
	uint uVar1;
	
	uVar1 = FUN_00087a6c(uParm1,(int)cParm2);
	return uVar1 & -(uint)(uVar1 != 0);
}



// decompiled code
// original method signature: 
// uint FUN_000881cc(int iParm1);
 // line -1, offset 0x000881cc
// function 'FUN_000881cc' @0x000881CC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_000881cc(int iParm1)

{
	return (uint)(iParm1 != 0);
}



// decompiled code
// original method signature: 
// byte * FUN_000881d4(byte *pbParm1,byte *pbParm2);
 // line -1, offset 0x000881d4
// function 'FUN_000881d4' @0x000881D4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
byte * FUN_000881d4(byte *pbParm1,byte *pbParm2)

{
	byte bVar1;
	uint uVar2;
	int iVar3;
	byte *pbVar4;
	byte *pbVar5;
	uint uVar6;
	uint uVar7;
	
	uVar7 = 0;
	pbVar5 = pbParm2;
	do {
		while( true ) {
			uVar7 = uVar7 >> 1;
			pbVar4 = pbParm1;
			uVar2 = uVar7;
			if ((uVar7 & 0xff00) == 0) {
				uVar2 = (uint)*pbParm1;
				pbVar4 = pbParm1 + 1;
				uVar7 = uVar2 | 0xff00;
			}
			if ((uVar2 & 1) != 0) break;
			pbParm1 = pbVar4 + 1;
			*pbVar5 = *pbVar4;
			pbVar5 = pbVar5 + 1;
		}
		uVar2 = (uint)*pbVar4;
		pbParm1 = pbVar4 + 1;
		if (*pbVar4 < 0x60) {
			uVar6 = (uVar2 & 0xf) << 8 | (uint)*pbParm1;
			pbParm1 = pbVar4 + 2;
			if (uVar6 == 0) {
				return pbVar5 + -(int)pbParm2;
			}
			iVar3 = ((int)uVar2 >> 4) + 3;
			if ((int)uVar2 >> 4 == 5) {
				bVar1 = *pbParm1;
				pbParm1 = pbVar4 + 3;
				iVar3 = (uint)bVar1 + 8;
			}
		}
		else {
			uVar6 = 0x100 - uVar2;
			iVar3 = 2;
		}
		if (iVar3 != 0) {
			pbVar4 = pbVar5 + -uVar6;
			do {
				bVar1 = *pbVar4;
				pbVar4 = pbVar4 + 1;
				iVar3 = iVar3 + -1;
				*pbVar5 = bVar1;
				pbVar5 = pbVar5 + 1;
			} while (iVar3 != 0);
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void FUN_00088474(byte *pbParm1);
 // line -1, offset 0x00088474
// function 'FUN_00088474' @0x00088474 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00088474(byte *pbParm1)

{
	byte bVar1;
	
	while( true ) {
		bVar1 = *pbParm1;
		if (*pbParm1 == 0) break;
		if ((((&DAT_800b5dbd)[(uint)bVar1] & 3) != 0) && ((uint)bVar1 - 0x61 < 0x1a)) {
			*pbParm1 = bVar1 - 0x20;
		}
		pbParm1 = pbParm1 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_0009185c(int param_1,short *param_2,undefined4 param_3,undefined4 param_4,short param_5,short param_6);
 // line -1, offset 0x0009185c
// function 'FUN_0009185c' @0x0009185C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0009185c(int param_1,short *param_2,undefined4 param_3,undefined4 param_4,short param_5,
								 short param_6)

{
	short sVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	short sVar6;
	
	sVar3 = FUN_000919d0(param_1,param_3,param_4);
	sVar4 = FUN_000919d0(param_1,(int)*(short *)(param_1 + 0xd2),(int)*(short *)(param_1 + 0xd6));
	sVar1 = *(short *)(param_1 + 0xc0);
	sVar5 = FUN_000919d8(param_1,param_3,param_4);
	sVar6 = FUN_000919d8(param_1,(int)*(short *)(param_1 + 0xd2),(int)*(short *)(param_1 + 0xd6));
	sVar2 = *(short *)(param_1 + 0xc2);
	*param_2 = (sVar1 + sVar3 + param_5) - sVar4;
	param_2[1] = (sVar2 + sVar5 + param_6) - sVar6;
	return;
}



// decompiled code
// original method signature: 
// int FUN_000919d0(undefined4 uParm1,int iParm2,int iParm3);
 // line -1, offset 0x000919d0
// function 'FUN_000919d0' @0x000919D0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_000919d0(undefined4 uParm1,int iParm2,int iParm3)

{
	return iParm2 - iParm3;
}



// decompiled code
// original method signature: 
// int FUN_000919d8(undefined4 uParm1,int iParm2,int iParm3);
 // line -1, offset 0x000919d8
// function 'FUN_000919d8' @0x000919D8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_000919d8(undefined4 uParm1,int iParm2,int iParm3)

{
	return (int)(iParm2 + iParm3 + ((uint)(iParm2 + iParm3) >> 0x1f)) >> 1;
}



// decompiled code
// original method signature: 
// undefined4 FUN_000919ec(void);
 // line -1, offset 0x000919ec
// function 'FUN_000919ec' @0x000919EC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_000919ec(void)

{
	return uGp00000528;
}



// decompiled code
// original method signature: 
// void FUN_00091e88(undefined4 *puParm1);
 // line -1, offset 0x00091e88
// function 'FUN_00091e88' @0x00091E88 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00091e88(undefined4 *puParm1)

{
	puParm1[0x14] = 0xffffffff;
	puParm1[0x15] = 0xffffffff;
	puParm1[0x16] = 0xffffffff;
	puParm1[0x17] = 0xffffffff;
	*puParm1 = 1;
	return;
}



// decompiled code
// original method signature: 
// void FUN_00091f30(undefined4 *puParm1,int iParm2,int iParm3,undefined4 uParm4);
 // line -1, offset 0x00091f30
// function 'FUN_00091f30' @0x00091F30 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00091f30(undefined4 *puParm1,int iParm2,int iParm3,undefined4 uParm4)

{
	undefined4 uVar1;
	int iVar2;
	undefined auStack40 [4];
	short local_24;
	short local_22;
	
	if (puParm1[0x10] == 0) {
		puParm1[2] = 0xffffffff;
		uVar1 = FUN_000945e4(puParm1[0x12]);
		puParm1[5] = uVar1;
		iVar2 = FUN_00021774();
		puParm1[10] = iVar2;
		if (iVar2 == 0) {
			FUN_00020e94(0,"psxsrc/GMAN.CPP",0xb5);
		}
		iVar2 = FUN_000953bc(puParm1[0x12]);
		if (iVar2 != 0) {
			FUN_00092218(puParm1);
		}
		puParm1[9] = puParm1[10] + *(int *)(puParm1[10] + 0xc);
		puParm1[0xe] = puParm1[10] + *(int *)(puParm1[10] + 4);
		puParm1[0xb] = puParm1[10] + *(int *)(puParm1[10] + 8);
		puParm1[0xf] = puParm1[10] + *(int *)(puParm1[10] + 0x18);
		FUN_00093958(puParm1);
		FUN_00093818(puParm1);
		FUN_00092368(puParm1);
		puParm1[0x10] = 1;
		iVar2 = FUN_00095394(puParm1[0x12]);
		if (iVar2 != 0) {
			if (*(int *)puParm1[10] == 0) {
				puParm1[0x13] = 0xffffffff;
				FUN_00094068(puParm1,auStack40);
				uVar1 = FUN_00095388(puParm1[0x12]);
				iVar2 = FUN_000215dc((int)local_24 * (int)local_22,&DAT_00008001,uVar1);
				puParm1[0x13] = iVar2;
				if (iVar2 == -1) {
					FUN_00020e94(0,"psxsrc/GMAN.CPP",0xe1);
				}
			}
			else {
				iVar2 = FUN_000215dc(0x140,&DAT_00008001,&DAT_8011acf8);
				puParm1[0x1b] = iVar2;
				if (iVar2 == -1) {
					FUN_00020e94(0,"psxsrc/GMAN.CPP",0xcc);
				}
				puParm1[0x18] = 0;
				puParm1[0x19] = 0;
				puParm1[0x1a] = 0;
				FUN_000a4384(puParm1);
			}
			if (iParm2 == -1) {
				iParm2 = FUN_0009458c(puParm1[0x12]);
			}
			else {
				if (iParm3 == 0) {
					FUN_00094458(puParm1[0x12],iParm2,uParm4);
					*puParm1 = 0;
				}
				else {
					*puParm1 = 1;
				}
			}
			puParm1[4] = iParm2;
		}
	}
	puParm1[0x11] = puParm1[0x11] + 1;
	return;
}



// decompiled code
// original method signature: 
// void FUN_00092218(int iParm1);
 // line -1, offset 0x00092218
// function 'FUN_00092218' @0x00092218 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00092218(int iParm1)

{
	undefined4 uVar1;
	undefined auStack32 [24];
	
	uVar1 = FUN_00095388(*(undefined4 *)(iParm1 + 0x48));
	FUN_000103c8(auStack32,uVar1);
	FUN_000103f0(auStack32,&PTR_DAT_8011acec);
	uVar1 = FUN_00084474();
	uGp0000059c = (uint)*(byte *)(*(int *)(iParm1 + 0x28) + 0x24);
	iGp000005a4 = (*(uint *)(*(int *)(iParm1 + 0x28) + 0x14) & 0xf) << 6;
	uGp000005a0 = (uint)*(byte *)(*(int *)(iParm1 + 0x28) + 0x25);
	iGp000005a8 = (*(uint *)(*(int *)(iParm1 + 0x28) + 0x14) >> 4) << 8;
	FUN_00085b14(uVar1,auStack32,0x8000,TpLoadCallBack__FPUciib,0,0xffffffff);
	return;
}



// decompiled code
// original method signature: 
// void FUN_000922d0(int iParm1);
 // line -1, offset 0x000922d0
// function 'FUN_000922d0' @0x000922D0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_000922d0(int iParm1)

{
	int iVar1;
	
	iVar1 = *(int *)(iParm1 + 0x44) + -1;
	*(int *)(iParm1 + 0x44) = iVar1;
	if (iVar1 == 0) {
		iVar1 = FUN_00095394(*(undefined4 *)(iParm1 + 0x48));
		if ((iVar1 != 0) && (**(int **)(iParm1 + 0x28) != 0)) {
			FUN_000a4400(iParm1);
			FUN_00093f44(iParm1);
			FUN_00093f44(iParm1);
		}
		FUN_00093a84(iParm1);
	}
	if (*(int *)(iParm1 + 0x44) < 0) {
		*(undefined4 *)(iParm1 + 0x44) = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_00092368(int iParm1);
 // line -1, offset 0x00092368
// function 'FUN_00092368' @0x00092368 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00092368(int iParm1)

{
	undefined4 uVar1;
	
	if (*(int *)(*(int *)(iParm1 + 0x28) + 0x18) != 0) {
		uVar1 = FUN_000923b4(*(undefined4 *)(iParm1 + 0x3c));
		*(undefined4 *)(iParm1 + 0x20) = uVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// int FUN_000923b4(uint *puParm1);
 // line -1, offset 0x000923b4
// function 'FUN_000923b4' @0x000923B4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_000923b4(uint *puParm1)

{
	int iVar1;
	int iVar2;
	uint uVar3;
	uint uVar4;
	uint **ppuVar5;
	uint *puVar6;
	
	uVar4 = *puParm1;
	puVar6 = puParm1 + 1;
	if (uVar4 == 0) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x17d);
	}
	iVar1 = FUN_000215dc(uVar4 << 2,&DAT_00008001,&DAT_8011ad00);
	if (iVar1 == -1) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x180);
	}
	ppuVar5 = (uint **)FUN_00021774(iVar1);
	if (ppuVar5 == (uint **)0x0) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x183);
	}
	uVar3 = 0;
	if (uVar4 != 0) {
		do {
			*ppuVar5 = (uint *)((int)puVar6 - (int)puParm1);
			iVar2 = FUN_000953e4(puVar6);
			puVar6 = (uint *)((int)puVar6 + iVar2);
			uVar3 = uVar3 + 1;
			ppuVar5 = ppuVar5 + 1;
		} while (uVar3 < uVar4);
	}
	uVar4 = FUN_000217dc(iVar1);
	if ((uVar4 & 0xff) == 0) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x18c);
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// void FUN_000924e0(undefined4 param_1,char *param_2,int param_3,int param_4,int param_5);
 // line -1, offset 0x000924e0
// function 'FUN_000924e0' @0x000924E0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_000924e0(undefined4 param_1,char *param_2,int param_3,int param_4,int param_5)

{
	char cVar1;
	undefined2 uVar2;
	char cVar3;
	char cVar4;
	char cVar5;
	
	cVar5 = param_2[1];
	uVar2 = *(undefined2 *)(param_2 + 2);
	cVar4 = (char)(*(uint *)(param_2 + 8) >> 9);
	cVar3 = (char)*(uint *)(param_2 + 8);
	cVar1 = *param_2;
	if ((*(uint *)(param_2 + 4) >> 0x19 & 1) == 0) {
		cVar3 = cVar1 + cVar3;
		if (param_4 == 0) {
			*(char *)(param_3 + 0xc) = cVar1;
			*(char *)(param_3 + 0x14) = cVar3;
			*(char *)(param_3 + 0x1c) = cVar1;
			*(char *)(param_3 + 0x24) = cVar3;
		}
		else {
			*(char *)(param_3 + 0xc) = cVar3 + -1;
			*(char *)(param_3 + 0x14) = cVar1 + -1;
			*(char *)(param_3 + 0x1c) = cVar3 + -1;
			*(char *)(param_3 + 0x24) = cVar1 + -1;
		}
		cVar4 = cVar5 + cVar4;
		if (param_5 == 0) {
			*(char *)(param_3 + 0xd) = cVar5;
			*(char *)(param_3 + 0x15) = cVar5;
		}
		else {
			*(char *)(param_3 + 0xd) = cVar4 + -1;
			*(char *)(param_3 + 0x15) = cVar4 + -1;
			cVar4 = cVar5 + -1;
		}
		*(char *)(param_3 + 0x1d) = cVar4;
		*(char *)(param_3 + 0x25) = cVar4;
	}
	else {
		if (param_4 == 0) {
			cVar3 = cVar5 + cVar3 + -1;
			*(char *)(param_3 + 0xd) = cVar3;
			*(char *)(param_3 + 0x1d) = cVar3;
			cVar3 = -1;
		}
		else {
			*(char *)(param_3 + 0xd) = cVar5;
			*(char *)(param_3 + 0x1d) = cVar5;
		}
		*(char *)(param_3 + 0x15) = cVar5 + cVar3;
		*(char *)(param_3 + 0x25) = cVar5 + cVar3;
		if (param_5 == 0) {
			*(char *)(param_3 + 0xc) = cVar1;
			*(char *)(param_3 + 0x14) = cVar1;
		}
		else {
			cVar5 = cVar1 + cVar4 + -1;
			*(char *)(param_3 + 0xc) = cVar5;
			*(char *)(param_3 + 0x14) = cVar5;
			cVar4 = -1;
		}
		*(char *)(param_3 + 0x1c) = cVar1 + cVar4;
		*(char *)(param_3 + 0x24) = cVar1 + cVar4;
	}
	*(undefined2 *)(param_3 + 0x16) = uVar2;
	return;
}



// decompiled code
// original method signature: 
// void FUN_00092a80(int param_1,int param_2,int param_3,short param_4,short param_5,int param_6,int param_7);
 // line -1, offset 0x00092a80
// function 'FUN_00092a80' @0x00092A80 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00092a80(int param_1,int param_2,int param_3,short param_4,short param_5,int param_6,
								 int param_7)

{
	char cVar1;
	undefined uVar2;
	undefined uVar3;
	short sVar4;
	short sVar5;
	undefined2 uVar6;
	int iVar7;
	uint uVar8;
	int iVar9;
	uint uVar10;
	uint uVar11;
	undefined2 local_30;
	undefined2 local_2e;
	undefined2 local_2c;
	short local_2a;
	
	iVar7 = FUN_0009536c(param_1,param_3);
	uVar8 = *(uint *)(iVar7 + 8);
	*(undefined *)(param_2 + 3) = 9;
	*(undefined *)(param_2 + 7) = 0x2d;
	uVar11 = uVar8 >> 9 & 0x1ff;
	uVar8 = uVar8 & 0x1ff;
	if (param_6 == 0) {
		param_4 = param_4 + (short)*(char *)(iVar7 + 4);
	}
	else {
		param_4 = (param_4 - (short)*(char *)(iVar7 + 4)) - (short)uVar8;
	}
	cVar1 = *(char *)(iVar7 + 5);
	sVar4 = param_4 + (short)uVar8;
	*(short *)(param_2 + 8) = param_4;
	*(short *)(param_2 + 0x10) = sVar4;
	*(short *)(param_2 + 0x18) = param_4;
	*(short *)(param_2 + 0x20) = sVar4;
	param_5 = param_5 + (short)cVar1;
	sVar4 = (short)uVar11;
	sVar5 = param_5 + sVar4;
	*(short *)(param_2 + 10) = param_5;
	*(short *)(param_2 + 0x12) = param_5;
	*(short *)(param_2 + 0x1a) = sVar5;
	*(short *)(param_2 + 0x22) = sVar5;
	FUN_00093dd4(param_1,iVar7,param_2);
	if ((*(uint *)(iVar7 + 4) & 0x4000000) == 0) {
		iVar9 = FUN_00095298(param_1);
		if (iVar9 == 0) {
			FUN_00020e94(0,"psxsrc/GMAN.CPP",0x2b7);
		}
		else {
			if (*(int *)(param_1 + 8) != param_3) {
				FUN_000936c0(param_1,iVar7);
				local_30 = (undefined2)*(undefined4 *)(param_1 + 0x50);
				local_2e = (undefined2)*(undefined4 *)(param_1 + 0x54);
				uVar10 = FUN_00020de0(uVar8,2);
				local_2c = (undefined2)(uVar10 >> 1);
				local_2a = sVar4;
				FUN_00083564(&local_30,*(undefined4 *)(param_1 + 0x4c),0);
			}
			*(undefined *)(param_2 + 0xc) = (char)((*(uint *)(param_1 + 0x50) & 0x3f) << 1);
			*(undefined *)(param_2 + 0xd) = (char)*(undefined4 *)(param_1 + 0x54);
			*(char *)(param_2 + 0x14) =
					 ((byte)*(undefined4 *)(param_1 + 0x50) & 0x3f) * '\x02' + (char)uVar8;
			*(undefined *)(param_2 + 0x15) = (char)*(undefined4 *)(param_1 + 0x54);
			*(undefined *)(param_2 + 0x1c) = (char)((*(uint *)(param_1 + 0x50) & 0x3f) << 1);
			cVar1 = (char)uVar11;
			*(char *)(param_2 + 0x1d) = (char)*(undefined4 *)(param_1 + 0x54) + cVar1;
			*(char *)(param_2 + 0x24) =
					 ((byte)*(undefined4 *)(param_1 + 0x50) & 0x3f) * '\x02' + (char)uVar8;
			*(char *)(param_2 + 0x25) = (char)*(undefined4 *)(param_1 + 0x54) + cVar1;
			uVar6 = FUN_0001301c(1,0,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
			*(undefined2 *)(param_2 + 0x16) = uVar6;
			if (param_7 != 0) {
				uVar2 = *(undefined *)(param_2 + 0x1d);
				*(undefined *)(param_2 + 0x1d) = *(undefined *)(param_2 + 0xd);
				uVar3 = *(undefined *)(param_2 + 0x15);
				*(undefined *)(param_2 + 0xd) = uVar2;
				*(undefined *)(param_2 + 0x15) = *(undefined *)(param_2 + 0x25);
				*(undefined *)(param_2 + 0x25) = uVar3;
			}
		}
		*(int *)(param_1 + 8) = param_3;
	}
	else {
		FUN_000924e0(param_1,iVar7,param_2,param_6,param_7);
		*(int *)(param_1 + 8) = param_3;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_00092e74(undefined4 param_1,char *param_2,int param_3,int param_4,int param_5);
 // line -1, offset 0x00092e74
// function 'FUN_00092e74' @0x00092E74 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00092e74(undefined4 param_1,char *param_2,int param_3,int param_4,int param_5)

{
	char cVar1;
	undefined2 uVar2;
	char cVar3;
	char cVar4;
	char cVar5;
	
	cVar5 = param_2[1];
	uVar2 = *(undefined2 *)(param_2 + 2);
	cVar4 = (char)(*(uint *)(param_2 + 8) >> 9);
	cVar3 = (char)*(uint *)(param_2 + 8);
	cVar1 = *param_2;
	if ((*(uint *)(param_2 + 4) >> 0x19 & 1) == 0) {
		cVar3 = cVar1 + cVar3;
		if (param_4 == 0) {
			*(char *)(param_3 + 0xc) = cVar1;
			*(char *)(param_3 + 0x18) = cVar3;
			*(char *)(param_3 + 0x24) = cVar1;
			*(char *)(param_3 + 0x30) = cVar3;
		}
		else {
			*(char *)(param_3 + 0xc) = cVar3 + -1;
			*(char *)(param_3 + 0x18) = cVar1 + -1;
			*(char *)(param_3 + 0x24) = cVar3 + -1;
			*(char *)(param_3 + 0x30) = cVar1 + -1;
		}
		cVar4 = cVar5 + cVar4;
		if (param_5 == 0) {
			*(char *)(param_3 + 0xd) = cVar5;
			*(char *)(param_3 + 0x19) = cVar5;
		}
		else {
			*(char *)(param_3 + 0xd) = cVar4 + -1;
			*(char *)(param_3 + 0x19) = cVar4 + -1;
			cVar4 = cVar5 + -1;
		}
		*(char *)(param_3 + 0x25) = cVar4;
		*(char *)(param_3 + 0x31) = cVar4;
	}
	else {
		if (param_4 == 0) {
			cVar3 = cVar5 + cVar3 + -1;
			*(char *)(param_3 + 0xd) = cVar3;
			*(char *)(param_3 + 0x25) = cVar3;
			cVar3 = -1;
		}
		else {
			*(char *)(param_3 + 0xd) = cVar5;
			*(char *)(param_3 + 0x25) = cVar5;
		}
		*(char *)(param_3 + 0x19) = cVar5 + cVar3;
		*(char *)(param_3 + 0x31) = cVar5 + cVar3;
		if (param_5 == 0) {
			*(char *)(param_3 + 0xc) = cVar1;
			*(char *)(param_3 + 0x18) = cVar1;
		}
		else {
			cVar5 = cVar1 + cVar4 + -1;
			*(char *)(param_3 + 0xc) = cVar5;
			*(char *)(param_3 + 0x18) = cVar5;
			cVar4 = -1;
		}
		*(char *)(param_3 + 0x24) = cVar1 + cVar4;
		*(char *)(param_3 + 0x30) = cVar1 + cVar4;
	}
	*(undefined2 *)(param_3 + 0x1a) = uVar2;
	return;
}



// decompiled code
// original method signature: 
// void FUN_00092f74(int param_1,int param_2,uint param_3,short param_4,short param_5,int param_6,int param_7);
 // line -1, offset 0x00092f74
// function 'FUN_00092f74' @0x00092F74 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00092f74(int param_1,int param_2,uint param_3,short param_4,short param_5,int param_6,
								 int param_7)

{
	undefined uVar1;
	undefined uVar2;
	short sVar3;
	char cVar4;
	undefined2 uVar5;
	int iVar6;
	uint uVar7;
	uint *puVar8;
	uint uVar9;
	char cVar10;
	short sVar11;
	uint uVar12;
	undefined2 local_30;
	undefined2 local_2e;
	undefined2 local_2c;
	short local_2a;
	
	iVar6 = FUN_0009536c(param_1,param_3 & 0xffff);
	uVar7 = *(uint *)(iVar6 + 8);
	*(undefined *)(param_2 + 3) = 0xc;
	*(undefined *)(param_2 + 7) = 0x3d;
	uVar12 = uVar7 >> 9 & 0x1ff;
	uVar7 = uVar7 & 0x1ff;
	if (param_6 == 0) {
		param_4 = param_4 + (short)*(char *)(iVar6 + 4);
	}
	else {
		param_4 = (param_4 - (short)*(char *)(iVar6 + 4)) - (short)uVar7;
	}
	sVar3 = (short)uVar12;
	if (param_7 == 0) {
		param_5 = param_5 + (short)*(char *)(iVar6 + 5);
	}
	else {
		param_5 = (param_5 - (short)*(char *)(iVar6 + 5)) - sVar3;
	}
	sVar11 = param_4 + (short)uVar7;
	*(short *)(param_2 + 8) = param_4;
	*(short *)(param_2 + 10) = param_5;
	*(short *)(param_2 + 0x14) = sVar11;
	*(short *)(param_2 + 0x16) = param_5;
	*(short *)(param_2 + 0x20) = param_4;
	*(short *)(param_2 + 0x22) = param_5 + sVar3;
	*(short *)(param_2 + 0x2c) = sVar11;
	*(short *)(param_2 + 0x2e) = param_5 + sVar3;
	puVar8 = (uint *)FUN_00095350(param_1,(uint)*(byte *)(iVar6 + 6));
	if ((*puVar8 & 1) == 0) {
		uVar5 = FUN_00013058(0x140,0x100);
		*(undefined2 *)(param_2 + 0xe) = uVar5;
		local_30 = 0x140;
		local_2e = 0x100;
		local_2c = 0x40;
		local_2a = 1;
		FUN_00013d24(&local_30,puVar8 + 1);
	}
	else {
		*(undefined2 *)(param_2 + 0xe) = *(undefined2 *)((int)puVar8 + 2);
	}
	if ((*(uint *)(iVar6 + 4) & 0x4000000) == 0) {
		FUN_000936c0(param_1,iVar6);
		local_30 = 0x141;
		local_2e = 0x101;
		uVar9 = FUN_00020de0(uVar7,2);
		local_2c = (undefined2)(uVar9 >> 1);
		local_2a = sVar3;
		FUN_00083564(&local_30,*(undefined4 *)(param_1 + 0x4c),0);
		cVar10 = (char)uVar7 + '\x01';
		*(undefined *)(param_2 + 0xc) = 1;
		*(undefined *)(param_2 + 0xd) = 1;
		*(undefined *)(param_2 + 0x19) = 1;
		*(undefined *)(param_2 + 0x24) = 1;
		cVar4 = (char)uVar12 + '\x01';
		*(char *)(param_2 + 0x18) = cVar10;
		*(char *)(param_2 + 0x25) = cVar4;
		*(char *)(param_2 + 0x30) = cVar10;
		*(char *)(param_2 + 0x31) = cVar4;
		uVar5 = FUN_0001301c(1,0,0x141,0x101);
		*(undefined2 *)(param_2 + 0x1a) = uVar5;
		if (param_7 != 0) {
			uVar1 = *(undefined *)(param_2 + 0x25);
			*(undefined *)(param_2 + 0x25) = *(undefined *)(param_2 + 0xd);
			uVar2 = *(undefined *)(param_2 + 0x19);
			*(undefined *)(param_2 + 0xd) = uVar1;
			*(undefined *)(param_2 + 0x19) = *(undefined *)(param_2 + 0x31);
			*(undefined *)(param_2 + 0x31) = uVar2;
		}
	}
	else {
		FUN_00092e74(param_1,iVar6,param_2,param_6,param_7);
	}
	return;
}



// decompiled code
// original method signature: 
// POLY_FT4 *FUN_00093418(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6,int param_7);
 // line -1, offset 0x00093418
// function 'FUN_00093418' @0x00093418 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
POLY_FT4 *
FUN_00093418(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
						,int param_6,int param_7)

{
	int iVar1;
	ulong *puVar2;
	POLY_FT4 *local_28 [2];
	
	if ((param_2 < 0) || (iVar1 = FUN_0009533c(), iVar1 <= param_2)) {
		local_28[0] = &MyFT4;
	}
	else {
		FUN_000951a8(local_28);
		FUN_00092a80(param_1,local_28[0],param_2,param_3,param_4,param_5,param_7);
		puVar2 = ThisOt;
		if (param_7 == 0) {
			puVar2 = ThisOt + param_6;
			local_28[0]->tag = local_28[0]->tag & 0xff000000 | *puVar2 & 0xffffff;
			*puVar2 = *puVar2 & 0xff000000 | (uint)local_28[0] & 0xffffff;
		}
		else {
			local_28[0]->tag = local_28[0]->tag & 0xff000000 | ThisOt[2] & 0xffffff;
			puVar2[2] = puVar2[2] & 0xff000000 | (uint)local_28[0] & 0xffffff;
		}
	}
	return local_28[0];
}



// decompiled code
// original method signature: 
// POLY_GT4 *FUN_0009356c(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6,int param_7);
 // line -1, offset 0x0009356c
// function 'FUN_0009356c' @0x0009356C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
POLY_GT4 *
FUN_0009356c(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
						undefined4 param_5,int param_6,int param_7)

{
	int iVar1;
	ulong *puVar2;
	POLY_GT4 *local_28 [2];
	
	iVar1 = FUN_0009533c();
	if ((int)(param_2 & 0xffff) < iVar1) {
		FUN_0009512c(local_28);
		FUN_00092f74(param_1,local_28[0],param_2 & 0xffff,param_3,param_4,param_5,param_7);
		puVar2 = ThisOt;
		if (param_7 == 0) {
			puVar2 = ThisOt + param_6;
			local_28[0]->tag = local_28[0]->tag & 0xff000000 | *puVar2 & 0xffffff;
			*puVar2 = *puVar2 & 0xff000000 | (uint)local_28[0] & 0xffffff;
		}
		else {
			local_28[0]->tag = local_28[0]->tag & 0xff000000 | ThisOt[2] & 0xffffff;
			puVar2[2] = puVar2[2] & 0xff000000 | (uint)local_28[0] & 0xffffff;
		}
	}
	else {
		local_28[0] = &MyGT4;
	}
	return local_28[0];
}



// decompiled code
// original method signature: 
// void FUN_000936c0(int iParm1,int *piParm2);
 // line -1, offset 0x000936c0
// function 'FUN_000936c0' @0x000936C0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_000936c0(int iParm1,int *piParm2)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	uint uVar5;
	uint uVar6;
	
	iVar1 = FUN_00021774(*(undefined4 *)(iParm1 + 0x10));
	if (iVar1 == 0) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x428);
	}
	iVar2 = *piParm2;
	iVar3 = FUN_00020de0(piParm2[2] & 0x1ff,2);
	uVar5 = piParm2[2];
	iVar4 = FUN_00021774(*(undefined4 *)(iParm1 + 0x4c));
	if (iVar4 == 0) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x433);
	}
	uVar6 = (uint)piParm2[1] >> 0x1b & 3;
	if (uVar6 == 1) {
		FUN_00094788(iVar1 + iVar2,iVar4,iVar3 * (uVar5 >> 9 & 0x1ff));
	}
	else {
		if ((uVar6 == 0) || (uVar6 != 2)) {
			FUN_00020e94(0,"psxsrc/GMAN.CPP",0x441);
		}
		else {
			FUN_000881d4(iVar1 + iVar2,iVar4);
		}
	}
	FUN_000217dc(*(undefined4 *)(iParm1 + 0x4c));
	FUN_000217dc(*(undefined4 *)(iParm1 + 0x10));
	return;
}



// decompiled code
// original method signature: 
// void FUN_00093818(int iParm1);
 // line -1, offset 0x00093818
// function 'FUN_00093818' @0x00093818 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00093818(int iParm1)

{
	int iVar1;
	undefined4 uVar2;
	int iVar3;
	uint uVar4;
	
	iVar3 = *(int *)(*(int *)(iParm1 + 0x28) + 0x1c);
	if (iVar3 == 0) {
		*(undefined4 *)(iParm1 + 0x34) = 0;
		*(undefined4 *)(iParm1 + 0x1c) = 0xffffffff;
	}
	else {
		iVar3 = FUN_000215dc(iVar3 << 2,&DAT_00008001,&DAT_8011ad00);
		*(int *)(iParm1 + 0x1c) = iVar3;
		if (iVar3 == -1) {
			FUN_00020e94(0,"psxsrc/GMAN.CPP",0x455);
		}
		iVar3 = FUN_00021774(*(undefined4 *)(iParm1 + 0x1c));
		*(int *)(iParm1 + 0x34) = iVar3;
		if (iVar3 == 0) {
			FUN_00020e94(0,"psxsrc/GMAN.CPP",0x458);
		}
		iVar3 = *(int *)(iParm1 + 0x38);
		uVar4 = 0;
		if (*(int *)(*(int *)(iParm1 + 0x28) + 0x1c) != 0) {
			do {
				*(int *)(uVar4 * 4 + *(int *)(iParm1 + 0x34)) = iVar3 - *(int *)(iParm1 + 0x38);
				iVar1 = FUN_000943ec(iVar3);
				uVar4 = uVar4 + 1;
				iVar3 = iVar3 + iVar1;
			} while (uVar4 < *(uint *)(*(int *)(iParm1 + 0x28) + 0x1c));
		}
	}
	iVar3 = FUN_0009531c(iParm1);
	iVar1 = 0;
	while (iVar1 < iVar3) {
		uVar2 = FUN_00095300(iParm1,iVar1);
		FUN_0009437c(uVar2);
		iVar1 = iVar1 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_00093958(int iParm1);
 // line -1, offset 0x00093958
// function 'FUN_00093958' @0x00093958 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00093958(int iParm1)

{
	int iVar1;
	uint *puVar2;
	uint uVar3;
	
	iVar1 = FUN_000215dc((uint)*(ushort *)(*(int *)(iParm1 + 0x28) + 0x22) << 2,&DAT_00008001,
											 &DAT_8011ad00);
	*(int *)(iParm1 + 0x18) = iVar1;
	if (iVar1 == -1) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x47d);
	}
	iVar1 = FUN_00021774(*(undefined4 *)(iParm1 + 0x18));
	*(int *)(iParm1 + 0x30) = iVar1;
	if (iVar1 == 0) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x480);
	}
	puVar2 = *(uint **)(iParm1 + 0x2c);
	uVar3 = 0;
	if (*(short *)(*(int *)(iParm1 + 0x28) + 0x22) != 0) {
		iVar1 = 0;
		do {
			*(uint **)(iVar1 + *(int *)(iParm1 + 0x30)) = (uint *)((int)puVar2 - *(int *)(iParm1 + 0x2c));
			if ((*puVar2 & 1) == 0) {
				puVar2 = (uint *)((int)puVar2 + (*puVar2 & 0xfffffffe));
			}
			puVar2 = puVar2 + 1;
			uVar3 = uVar3 + 1;
			iVar1 = uVar3 * 4;
		} while (uVar3 < (uint)*(ushort *)(*(int *)(iParm1 + 0x28) + 0x22));
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_00093a54(int iParm1);
 // line -1, offset 0x00093a54
// function 'FUN_00093a54' @0x00093A54 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00093a54(int iParm1)

{
	*(undefined4 *)(iParm1 + 0x6c) = 0xffffffff;
	*(undefined4 *)(iParm1 + 0x10) = 0xffffffff;
	*(undefined4 *)(iParm1 + 0x14) = 0xffffffff;
	*(undefined4 *)(iParm1 + 0x18) = 0xffffffff;
	*(undefined4 *)(iParm1 + 0x1c) = 0xffffffff;
	*(undefined4 *)(iParm1 + 0x4c) = 0xffffffff;
	*(undefined4 *)(iParm1 + 0x20) = 0xffffffff;
	*(undefined4 *)(iParm1 + 0xc) = 0;
	*(undefined4 *)(iParm1 + 0x44) = 0;
	*(undefined4 *)(iParm1 + 0x40) = 0;
	return;
}



// decompiled code
// original method signature: 
// void FUN_00093a84(int iParm1);
 // line -1, offset 0x00093a84
// function 'FUN_00093a84' @0x00093A84 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00093a84(int iParm1)

{
	uint uVar1;
	
	FUN_00093bac();
	FUN_00095224(iParm1);
	if ((*(int *)(iParm1 + 0x18) != -1) && (uVar1 = FUN_00021860(), (uVar1 & 0xff) == 0)) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x4ee);
	}
	if ((*(int *)(iParm1 + 0x1c) != -1) && (uVar1 = FUN_00021860(), (uVar1 & 0xff) == 0)) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x4f4);
	}
	if ((*(int *)(iParm1 + 0x20) != -1) && (uVar1 = FUN_00021860(), (uVar1 & 0xff) == 0)) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x4fa);
	}
	if (*(int *)(iParm1 + 0x4c) != -1) {
		FUN_00083618();
	}
	if ((*(int *)(iParm1 + 0x6c) != -1) && (uVar1 = FUN_00021860(), (uVar1 & 0xff) == 0)) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x505);
	}
	FUN_00093a54(iParm1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_00093bac(int iParm1);
 // line -1, offset 0x00093bac
// function 'FUN_00093bac' @0x00093BAC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00093bac(int iParm1)

{
	uint uVar1;
	
	if (*(int *)(iParm1 + 0x14) != -1) {
		uVar1 = FUN_00021860();
		if ((uVar1 & 0xff) == 0) {
			FUN_00020e94(0,"psxsrc/GMAN.CPP",0x512);
		}
		*(undefined4 *)(iParm1 + 0x14) = 0xffffffff;
	}
	return;
}



// decompiled code
// original method signature: 
// TextDat * FUN_00093c10(uint uParm1);
 // line -1, offset 0x00093c10
// function 'FUN_00093c10' @0x00093C10 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
TextDat * FUN_00093c10(uint uParm1)

{
	int iVar1;
	TextDat *pTVar2;
	int iVar3;
	TextDat *pTVar4;
	
	if (0x173 < uParm1) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x521);
	}
	if (AllDats372[uParm1] == (TextDat *)0x0) {
		pTVar4 = (TextDat *)0x0;
		iVar3 = 0;
		pTVar2 = &DatPool;
		do {
			iVar1 = FUN_000952e8(pTVar2);
			if (iVar1 != 1) {
				pTVar4 = pTVar2;
			}
			iVar3 = iVar3 + 1;
			pTVar2 = pTVar2 + 1;
		} while ((iVar3 < 0x14) && (pTVar4 == (TextDat *)0x0));
		if (pTVar4 == (TextDat *)0x0) {
			FUN_00020e94(0,"psxsrc/GMAN.CPP",0x52e);
		}
		FUN_00095330(pTVar4,TX_DatTab[uParm1],uParm1);
		FUN_00091e88(pTVar4);
		AllDats372[uParm1] = pTVar4;
	}
	FUN_00091f30(AllDats372[uParm1],0xffffffff,1,0);
	return AllDats372[uParm1];
}



// decompiled code
// original method signature: 
// void FUN_00093d80(undefined4 uParm1);
 // line -1, offset 0x00093d80
// function 'FUN_00093d80' @0x00093D80 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00093d80(undefined4 uParm1)

{
	int iVar1;
	
	FUN_000922d0();
	iVar1 = FUN_000952e8(uParm1);
	if (iVar1 != 1) {
		iVar1 = FUN_000952f4(uParm1);
		AllDats372[iVar1] = (TextDat *)0x0;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_00093dd4(int iParm1,int iParm2,int iParm3);
 // line -1, offset 0x00093dd4
// function 'FUN_00093dd4' @0x00093DD4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00093dd4(int iParm1,int iParm2,int iParm3)

{
	undefined2 uVar1;
	uint *puVar2;
	int iVar3;
	undefined2 local_18;
	undefined2 local_16;
	undefined2 local_14;
	undefined2 local_12;
	
	puVar2 = (uint *)FUN_00095350(iParm1,(uint)*(byte *)(iParm2 + 6));
	if ((*puVar2 & 1) == 0) {
		iVar3 = FUN_000952c0(iParm1);
		if (iVar3 == 0) {
			FUN_00020e94(0,"psxsrc/GMAN.CPP",0x566);
		}
		uVar1 = FUN_00013058(*(undefined4 *)(iParm1 + 0x58),*(undefined4 *)(iParm1 + 0x5c));
		*(undefined2 *)(iParm3 + 0xe) = uVar1;
		local_18 = (undefined2)*(undefined4 *)(iParm1 + 0x58);
		local_14 = 0x40;
		local_12 = 1;
		local_16 = (undefined2)*(undefined4 *)(iParm1 + 0x5c);
		FUN_00013d24(&local_18,puVar2 + 1);
	}
	else {
		*(undefined2 *)(iParm3 + 0xe) = *(undefined2 *)((int)puVar2 + 2);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_00093f44(int iParm1);
 // line -1, offset 0x00093f44
// function 'FUN_00093f44' @0x00093F44 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00093f44(int iParm1)

{
	int iVar1;
	uint uVar2;
	undefined4 *puVar3;
	int iVar4;
	
	if (*(int *)(iParm1 + 0x60) == 0) {
		*(undefined4 *)(iParm1 + 0x60) = 1;
	}
	else {
		*(undefined4 *)(iParm1 + 0x60) = 0;
	}
	iVar1 = FUN_00021774(*(undefined4 *)(iParm1 + 0x6c));
	if (iVar1 == 0) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x5a0);
	}
	iVar4 = 0;
	puVar3 = (undefined4 *)(iVar1 + *(int *)(iParm1 + 0x60) * 0xa0);
	while (iVar4 < *(int *)(*(int *)(iParm1 + 0x60) * 4 + iParm1 + 100)) {
		uVar2 = FUN_00021860(*puVar3);
		if ((uVar2 & 0xff) == 0) {
			FUN_00020e94(0,"psxsrc/GMAN.CPP",0x5ac);
		}
		puVar3 = puVar3 + 1;
		iVar4 = iVar4 + 1;
	}
	*(undefined4 *)(*(int *)(iParm1 + 0x60) * 4 + iParm1 + 100) = 0;
	uVar2 = FUN_000217dc(*(undefined4 *)(iParm1 + 0x6c));
	if ((uVar2 & 0xff) == 0) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x5b2);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_00094068(int iParm1,int iParm2);
 // line -1, offset 0x00094068
// function 'FUN_00094068' @0x00094068 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00094068(int iParm1,int iParm2)

{
	undefined2 uVar1;
	int iVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	int iVar6;
	int iVar7;
	uint uVar8;
	
	if (*(int *)(iParm1 + 0x40) == 0) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x5db);
	}
	iVar2 = FUN_0009533c(iParm1);
	uVar4 = 0;
	uVar8 = 0;
	iVar7 = 0;
	iVar6 = 0;
	while (iVar7 < iVar2) {
		uVar3 = *(uint *)(iVar6 + *(int *)(iParm1 + 0x24) + 8);
		uVar5 = uVar3 & 0x1ff;
		uVar3 = uVar3 >> 9 & 0x1ff;
		if (uVar4 < uVar5) {
			uVar4 = uVar5;
		}
		if (uVar8 < uVar3) {
			uVar8 = uVar3;
		}
		iVar6 = iVar6 + 0xc;
		iVar7 = iVar7 + 1;
	}
	uVar1 = FUN_00020de0(uVar4,2);
	*(undefined2 *)(iParm2 + 4) = uVar1;
	*(undefined2 *)(iParm2 + 6) = (short)uVar8;
	return;
}



// decompiled code
// original method signature: 
// void FUN_00094190(int iParm1);
 // line -1, offset 0x00094190
// function 'FUN_00094190' @0x00094190 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00094190(int iParm1)

{
	FUN_00020de0((uint)*(byte *)(iParm1 + 2) + 0xc,4);
	return;
}



// decompiled code
// original method signature: 
// void FUN_000941e8(int iParm1);
 // line -1, offset 0x000941e8
// function 'FUN_000941e8' @0x000941E8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_000941e8(int iParm1)

{
	undefined4 *puVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	uint uVar5;
	int *piVar6;
	int local_20 [7];
	undefined4 local_4;
	
	piVar6 = local_20;
	iVar3 = 7;
	puVar1 = &local_4;
	do {
		*puVar1 = 0;
		iVar3 = iVar3 + -1;
		puVar1 = puVar1 + -1;
	} while (-1 < iVar3);
	iVar4 = 0;
	iVar3 = iParm1;
	do {
		iVar4 = iVar4 + 1;
		local_20[(uint)*(byte *)(iVar3 + 4)] = 1;
		iVar3 = iParm1 + iVar4;
	} while (iVar4 < 8);
	iVar3 = 0;
	uVar5 = 0;
	while ((int)uVar5 < 8) {
		if (*piVar6 != 0) {
			iVar2 = 0;
			iVar4 = iParm1;
			do {
				if (((uint)*(byte *)(iVar4 + 4) & 0xf) == uVar5) {
					*(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | (byte)(iVar3 << 4);
				}
				iVar2 = iVar2 + 1;
				iVar4 = iParm1 + iVar2;
			} while (iVar2 < 8);
			iVar3 = iVar3 + 1;
		}
		piVar6 = piVar6 + 1;
		uVar5 = uVar5 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_0009437c(int *piParm1);
 // line -1, offset 0x0009437c
// function 'FUN_0009437c' @0x0009437C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0009437c(int *piParm1)

{
	int iVar1;
	int iVar2;
	int *piVar3;
	
	piVar3 = piParm1 + 1;
	iVar2 = 0;
	if (0 < *piParm1) {
		do {
			FUN_000941e8(piVar3);
			iVar1 = FUN_00094190(piVar3);
			piVar3 = (int *)((int)piVar3 + iVar1);
			iVar2 = iVar2 + 1;
		} while (iVar2 < *piParm1);
	}
	return;
}



// decompiled code
// original method signature: 
// int FUN_000943ec(int *piParm1);
 // line -1, offset 0x000943ec
// function 'FUN_000943ec' @0x000943EC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_000943ec(int *piParm1)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar4 = *piParm1;
	iVar3 = 4;
	piParm1 = piParm1 + 1;
	iVar2 = 0;
	while (iVar2 < iVar4) {
		iVar1 = FUN_00094190(piParm1);
		piParm1 = (int *)((int)piParm1 + iVar1);
		iVar3 = iVar3 + iVar1;
		iVar2 = iVar2 + 1;
	}
	return iVar3;
}



// decompiled code
// original method signature: 
// void FUN_00094458(undefined4 *puParm1,undefined4 uParm2,int iParm3);
 // line -1, offset 0x00094458
// function 'FUN_00094458' @0x00094458 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00094458(undefined4 *puParm1,undefined4 uParm2,int iParm3)

{
	int iVar1;
	uint uVar2;
	undefined4 uVar3;
	undefined auStack40 [16];
	
	iVar1 = FUN_00095394();
	if (iVar1 == 0) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x669);
	}
	uVar2 = FUN_00019e1c(*puParm1);
	if (8 < uVar2) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x66a);
	}
	FUN_0009460c(puParm1,auStack40,&DAT_8011acf0);
	uVar3 = FUN_00084474();
	iVar1 = FUN_00085a90(uVar3,auStack40);
	if (iParm3 < iVar1) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x672);
	}
	iVar1 = FUN_00021774(uParm2);
	if (iVar1 == 0) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x675);
	}
	FUN_00085bf4(uVar3,auStack40,iVar1,0xffffffff);
	uVar2 = FUN_000217dc(uParm2);
	if ((uVar2 & 0xff) == 0) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x678);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_0009458c(undefined4 uParm1);
 // line -1, offset 0x0009458c
// function 'FUN_0009458c' @0x0009458C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0009458c(undefined4 uParm1)

{
	int iVar1;
	
	iVar1 = FUN_00095394();
	if (iVar1 == 0) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x67e);
	}
	FUN_00094654(uParm1,&DAT_8011acf0,1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_000945e4(undefined4 uParm1);
 // line -1, offset 0x000945e4
// function 'FUN_000945e4' @0x000945E4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_000945e4(undefined4 uParm1)

{
	FUN_00094654(uParm1,&DAT_8011ad14,&DAT_00008001);
	return;
}



// decompiled code
// original method signature: 
// void FUN_0009460c(undefined4 *puParm1,undefined4 uParm2,undefined4 uParm3);
 // line -1, offset 0x0009460c
// function 'FUN_0009460c' @0x0009460C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0009460c(undefined4 *puParm1,undefined4 uParm2,undefined4 uParm3)

{
	FUN_000103c8(uParm2,*puParm1);
	FUN_000103f0(uParm2,uParm3);
	return;
}



// decompiled code
// original method signature: 
// undefined4 FUN_00094654(undefined4 *puParm1,undefined4 uParm2,undefined4 uParm3);
 // line -1, offset 0x00094654
// function 'FUN_00094654' @0x00094654 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_00094654(undefined4 *puParm1,undefined4 uParm2,undefined4 uParm3)

{
	uint uVar1;
	undefined4 uVar2;
	undefined auStack32 [16];
	
	uVar1 = FUN_00019e1c(*puParm1);
	if (8 < uVar1) {
		FUN_00020e94(0,"psxsrc/GMAN.CPP",0x691);
	}
	FUN_0009460c(puParm1,auStack32,uParm2);
	uVar2 = FUN_00084474();
	uVar2 = FUN_00085920(uVar2,auStack32,uParm3);
	FUN_00022270(uVar2,auStack32);
	return uVar2;
}



// decompiled code
// original method signature: 
// uint FUN_000946f4(undefined4 *puParm1,undefined4 uParm2);
 // line -1, offset 0x000946f4
// function 'FUN_000946f4' @0x000946F4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_000946f4(undefined4 *puParm1,undefined4 uParm2)

{
	undefined4 uVar1;
	int iVar2;
	undefined auStack32 [16];
	
	uVar1 = FUN_00084474();
	FUN_000103c8(auStack32,*puParm1);
	FUN_000103f0(auStack32,uParm2);
	if ((FileSYS == 2) && (iVar2 = FUN_00087bf8(auStack32,1), iVar2 != 1)) {
		return 0;
	}
	iVar2 = FUN_00085a90(uVar1,auStack32);
	return (uint)(iVar2 + 1U < 2) ^ 1;
}



// decompiled code
// original method signature: 
// void FUN_00094788(byte *pbParm1,uint *puParm2,int iParm3);
 // line -1, offset 0x00094788
// function 'FUN_00094788' @0x00094788 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00094788(byte *pbParm1,uint *puParm2,int iParm3)

{
	byte bVar1;
	byte *pbVar2;
	uint uVar3;
	uint *puVar4;
	uint uVar5;
	uint *puVar6;
	
	puVar6 = (uint *)((int)puParm2 + iParm3);
	if (puParm2 < puVar6) {
		do {
			uVar5 = (uint)*pbParm1;
			bVar1 = *pbParm1 >> 6;
			pbVar2 = pbParm1 + 1;
			if (bVar1 == 0) {
				bVar1 = *pbVar2;
				pbVar2 = pbParm1 + 2;
			}
			else {
				uVar5 = uVar5 & 0x3f;
			}
			uVar3 = (uint)bVar1;
			if (7 < bVar1) {
				puVar4 = (uint *)((uint)((int)puParm2 + 3U) & 0xfffffffc);
				while (puParm2 < puVar4) {
					*(char *)puParm2 = (char)uVar5;
					puParm2 = (uint *)((int)puParm2 + 1);
					uVar3 = uVar3 - 1;
				}
				while (puParm2 = puVar4, 3 < uVar3) {
					*puVar4 = uVar5 | uVar5 << 8 | uVar5 << 0x10 | uVar5 << 0x18;
					uVar3 = uVar3 - 4;
					puVar4 = puVar4 + 1;
				}
			}
			while (uVar3 != 0) {
				*(char *)puParm2 = (char)uVar5;
				uVar3 = uVar3 - 1;
				puParm2 = (uint *)((int)puParm2 + 1);
			}
			pbParm1 = pbVar2;
		} while (puParm2 < puVar6);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_0009512c(POLY_FT4 **ppPParm1);
 // line -1, offset 0x0009512c
// function 'FUN_0009512c' @0x0009512C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0009512c(POLY_FT4 **ppPParm1)

{
	if (AddrToAvoid <= ThisPrimAddr + 0xd) {
		FUN_00020e94(0,"psxsrc/primpool.h",0x44);
	}
	*ppPParm1 = ThisPrimAddr;
	ThisPrimAddr = (POLY_FT4 *)&ThisPrimAddr[1].u0;
	return;
}



// decompiled code
// original method signature: 
// void FUN_000951a8(POLY_FT4 **ppPParm1);
 // line -1, offset 0x000951a8
// function 'FUN_000951a8' @0x000951A8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_000951a8(POLY_FT4 **ppPParm1)

{
	if (AddrToAvoid <= ThisPrimAddr + 10) {
		FUN_00020e94(0,"psxsrc/primpool.h",0x44);
	}
	*ppPParm1 = ThisPrimAddr;
	ThisPrimAddr = ThisPrimAddr + 1;
	return;
}



// decompiled code
// original method signature: 
// void FUN_00095224(int *piParm1);
 // line -1, offset 0x00095224
// function 'FUN_00095224' @0x00095224 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00095224(int *piParm1)

{
	uint uVar1;
	
	if ((piParm1[4] != -1) && (*piParm1 != 0)) {
		uVar1 = FUN_00021860();
		if ((uVar1 & 0xff) == 0) {
			FUN_00020e94(0,"psxsrc/gman.h",0x127);
		}
		piParm1[4] = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// uint FUN_00095298(int iParm1);
 // line -1, offset 0x00095298
// function 'FUN_00095298' @0x00095298 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_00095298(int iParm1)

{
	uint uVar1;
	
	uVar1 = 0;
	if (-1 < *(int *)(iParm1 + 0x50)) {
		uVar1 = ~*(uint *)(iParm1 + 0x54) >> 0x1f;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// uint FUN_000952c0(int iParm1);
 // line -1, offset 0x000952c0
// function 'FUN_000952c0' @0x000952C0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_000952c0(int iParm1)

{
	uint uVar1;
	
	uVar1 = 0;
	if (-1 < *(int *)(iParm1 + 0x58)) {
		uVar1 = ~*(uint *)(iParm1 + 0x5c) >> 0x1f;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// uint FUN_000952e8(int iParm1);
 // line -1, offset 0x000952e8
// function 'FUN_000952e8' @0x000952E8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_000952e8(int iParm1)

{
	return (uint)(*(int *)(iParm1 + 0x44) != 0);
}



// decompiled code
// original method signature: 
// undefined4 FUN_000952f4(int iParm1);
 // line -1, offset 0x000952f4
// function 'FUN_000952f4' @0x000952F4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_000952f4(int iParm1)

{
	return *(undefined4 *)(iParm1 + 4);
}



// decompiled code
// original method signature: 
// int FUN_00095300(int iParm1,int iParm2);
 // line -1, offset 0x00095300
// function 'FUN_00095300' @0x00095300 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_00095300(int iParm1,int iParm2)

{
	return *(int *)(iParm1 + 0x38) + *(int *)(iParm2 * 4 + *(int *)(iParm1 + 0x34));
}



// decompiled code
// original method signature: 
// undefined4 FUN_0009531c(int iParm1);
 // line -1, offset 0x0009531c
// function 'FUN_0009531c' @0x0009531C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_0009531c(int iParm1)

{
	return *(undefined4 *)(*(int *)(iParm1 + 0x28) + 0x1c);
}



// decompiled code
// original method signature: 
// void FUN_00095330(int iParm1,undefined4 uParm2,undefined4 uParm3);
 // line -1, offset 0x00095330
// function 'FUN_00095330' @0x00095330 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00095330(int iParm1,undefined4 uParm2,undefined4 uParm3)

{
	*(undefined4 *)(iParm1 + 0x48) = uParm2;
	*(undefined4 *)(iParm1 + 4) = uParm3;
	return;
}



// decompiled code
// original method signature: 
// uint FUN_0009533c(int iParm1);
 // line -1, offset 0x0009533c
// function 'FUN_0009533c' @0x0009533C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_0009533c(int iParm1)

{
	return (uint)*(ushort *)(*(int *)(iParm1 + 0x28) + 0x20);
}



// decompiled code
// original method signature: 
// int FUN_00095350(int iParm1,int iParm2);
 // line -1, offset 0x00095350
// function 'FUN_00095350' @0x00095350 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_00095350(int iParm1,int iParm2)

{
	return *(int *)(iParm1 + 0x2c) + *(int *)(iParm2 * 4 + *(int *)(iParm1 + 0x30));
}



// decompiled code
// original method signature: 
// int FUN_0009536c(int iParm1,uint uParm2);
 // line -1, offset 0x0009536c
// function 'FUN_0009536c' @0x0009536C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_0009536c(int iParm1,uint uParm2)

{
	return *(int *)(iParm1 + 0x24) + (uParm2 & 0xffff) * 0xc;
}



// decompiled code
// original method signature: 
// undefined4 FUN_00095388(undefined4 *puParm1);
 // line -1, offset 0x00095388
// function 'FUN_00095388' @0x00095388 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_00095388(undefined4 *puParm1)

{
	return *puParm1;
}



// decompiled code
// original method signature: 
// void FUN_00095394(undefined4 uParm1);
 // line -1, offset 0x00095394
// function 'FUN_00095394' @0x00095394 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00095394(undefined4 uParm1)

{
	FUN_000946f4(uParm1,&DAT_8011acf0);
	return;
}



// decompiled code
// original method signature: 
// void FUN_000953bc(undefined4 uParm1);
 // line -1, offset 0x000953bc
// function 'FUN_000953bc' @0x000953BC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_000953bc(undefined4 uParm1)

{
	FUN_000946f4(uParm1,&PTR_DAT_8011acec);
	return;
}



// decompiled code
// original method signature: 
// uint FUN_000953e4(int *piParm1);
 // line -1, offset 0x000953e4
// function 'FUN_000953e4' @0x000953E4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_000953e4(int *piParm1)

{
	return *piParm1 << 3 | 4;
}



// decompiled code
// original method signature: 
// void FUN_00098ac4(void);
 // line -1, offset 0x00098ac4
// function 'FUN_00098ac4' @0x00098AC4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00098ac4(void)

{
	uGp0000066c = 0;
	FUN_00020010(0x8000,PrintCDWaitTask__FP4TASK,0x800,0);
	return;
}



// decompiled code
// original method signature: 
// void FUN_00098b3c(void);
 // line -1, offset 0x00098b3c
// function 'FUN_00098b3c' @0x00098B3C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00098b3c(void)

{
	ulong *puVar1;
	int iVar2;
	
	if (FileSYS == 2) {
		iVar2 = 0x47ff;
		puVar1 = &ULONG_800cbce4;
		do {
			*puVar1 = 0;
			iVar2 = iVar2 + -1;
			puVar1 = puVar1 + -1;
		} while (-1 < iVar2);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_00098b74(void);
 // line -1, offset 0x00098b74
// function 'FUN_00098b74' @0x00098B74 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00098b74(void)

{
	undefined4 uVar1;
	int iVar2;
	int iVar3;
	ulong *puVar4;
	
	if (iGp00000640 == 0) {
		iVar2 = FUN_00012d60();
		if (iVar2 == 0) {
			uVar1 = 0x3c;
		}
		else {
			uVar1 = 0x32;
			if (iVar2 != 1) {
				uVar1 = uGp00000644;
			}
		}
		uGp00000644 = uVar1;
		FUN_00098b3c();
		puVar4 = STR_Buffer;
		uGp00000668 = 0;
		iVar3 = 0;
		iVar2 = 0;
		do {
			*(ulong **)((int)&SFXTab.mem + iVar2) = puVar4;
			puVar4 = puVar4 + 0x2400;
			(&SFXTab.used)[iVar2] = '\0';
			*(undefined4 *)((int)&SFXTab.SPUstreamaddr + iVar2) = 0;
			*(int *)((int)&SFXTab.voice + iVar2) = iVar3;
			iVar3 = iVar3 + 1;
			iVar2 = iVar2 + 0x84;
		} while (iVar3 < 2);
		iVar2 = FUN_00020010(0,STR_SystemTask__FP4TASK,0x800,0);
		if (iVar2 == 0) {
			FUN_00020e94(0,"psxsrc/STREAM.CPP",0x1ff);
		}
		FUN_0002090c(iVar2);
		FUN_00098ac4();
		sglMasterVolume = 0xe6;
		sglMusicVolume = 0x1fff;
		sglSoundVolume = 0x1fff;
		sglSpeechVolume = 0x1fff;
		iGp00000640 = 1;
	}
	return;
}



// decompiled code
// original method signature: 
// SFXHDR * FUN_00098ca0(char cParm1);
 // line -1, offset 0x00098ca0
// function 'FUN_00098ca0' @0x00098CA0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
SFXHDR * FUN_00098ca0(char cParm1)

{
	int iVar1;
	SFXHDR *pSVar2;
	SFXHDR *pSVar3;
	int iVar4;
	
	iVar4 = (int)cParm1;
	pSVar3 = &SFXTab + iVar4;
	pSVar2 = (SFXHDR *)0x0;
	if (pSVar3->used == '\0') {
		pSVar3->used = '\x01';
		(&SFXTab)[iVar4].state = '\x01';
		iVar1 = FUN_000840f8();
		(&SFXTab)[iVar4].framecount = iVar1;
		iVar1 = FUN_000840f8();
		(&SFXTab)[iVar4].lastcount = iVar1;
		(&SFXTab)[iVar4].stream_playing = 2;
		(&SFXTab)[iVar4].pitch = 0x3fc;
		(&SFXTab)[iVar4].stream_sec = 0;
		(&SFXTab)[iVar4].stream_pos = 0;
		(&SFXTab)[iVar4].sec_num = 0;
		(&SFXTab)[iVar4].SPU_frame = 0;
		(&SFXTab)[iVar4].SPU_sec = 0;
		(&SFXTab)[iVar4].SPU_pos = 0;
		(&SFXTab)[iVar4].SPU_sec_num = 0;
		(&SFXTab)[iVar4].stream_offs = 0;
		(&SFXTab)[iVar4].playing = '\0';
		(&SFXTab)[iVar4].stream_read = 0;
		(&SFXTab)[iVar4].stream_stall = 0;
		(&SFXTab)[iVar4].stream_ending = 0;
		(&SFXTab)[iVar4].voice = iVar4;
		(&SFXTab)[iVar4].DMA_size = 0;
		(&SFXTab)[iVar4].ChunkGot = '\0';
		(&SFXTab)[iVar4].spu_rate = 0x69;
		iVar1 = FUN_000173bc(&DAT_00008ea0);
		(&SFXTab)[iVar4].SPUstreamaddr = iVar1;
		if (iVar1 == -1) {
			FUN_00020e94(0,"psxsrc/STREAM.CPP",0x23e);
		}
		FUN_00018f1c(0);
		FUN_00018ebc((&SFXTab)[iVar4].SPUstreamaddr);
		FUN_00018d5c(&DAT_00008e80);
		FUN_00018f4c(1);
		cGp0000063d = cGp0000063d + '\x01';
		pSVar2 = pSVar3;
	}
	return pSVar2;
}



// decompiled code
// original method signature: 
// SFXHDR * FUN_00098dc8(ushort uParm1,uint uParm2,int iParm3,char cParm4);
 // line -1, offset 0x00098dc8
// function 'FUN_00098dc8' @0x00098DC8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
SFXHDR * FUN_00098dc8(ushort uParm1,uint uParm2,int iParm3,char cParm4)

{
	undefined4 uVar1;
	int iVar2;
	SFXHDR *sfh;
	uint uVar3;
	char cVar4;
	uchar FileType;
	char acStack72 [32];
	undefined local_28;
	undefined local_27;
	
	FUN_00098b74();
	if ((uParm2 & 0xff) != 0) {
		local_28 = 0x4d;
switchD_00098e34_caseD_6:
		if (uParm1 == 0x69) {
LAB_00098ed8:
			local_28 = 0x4d;
		}
		else {
			if (uParm1 < 0x6a) {
				if ((uParm1 == 0xc) || (uParm1 == 0x2e)) goto LAB_00098ed8;
			}
			else {
				if ((uParm1 == 0x6b) || (uParm1 == 0x348)) goto LAB_00098ed8;
			}
		}
		local_27 = 0;
		FUN_00019e5c(acStack72,"%s%04X",&local_28,(uint)uParm1);
		uVar3 = uParm2 + 1 & 1;
		iVar2 = FUN_00098ca0(uVar3);
		uVar3 = uVar3 ^ 1;
		if (iVar2 == 0) {
			return (SFXHDR *)0;
		}
		cVar4 = (char)uVar3;
		*(char *)(iVar2 + 0xc) = cVar4;
		*(char *)(iVar2 + 1) = cParm4;
		*(int *)(iVar2 + 0x14) = iParm3;
		*(int *)(iVar2 + 0x18) = iParm3;
		FUN_00099010(iVar2);
		if (uVar3 == 0) {
			*(undefined4 *)(iVar2 + 0x1c) = 0x3fc;
			if (iGp00000644 == 0x32) {
				*(int *)(iVar2 + 0x60) = iGp0000064c;
			}
			else {
				*(undefined4 *)(iVar2 + 0x60) = 0x68;
			}
			uVar1 = 0;
		}
		else {
			*(undefined4 *)(iVar2 + 0x1c) = 0x3fc;
			if (iGp00000644 == 0x32) {
				*(int *)(iVar2 + 0x60) = iGp0000064c;
			}
			else {
				*(undefined4 *)(iVar2 + 0x60) = 0x68;
			}
			uVar1 = 1;
			if (leveltype == '\0') goto LAB_00098fb8;
		}
		FUN_0001866c(uVar1,1 << (*(uint *)(iVar2 + 0x10) & 0x1f));
LAB_00098fb8:
		FUN_00019e5c(iVar2 + 0x74,"%s.VAG",acStack72);
		*(uint *)(iVar2 + 0x70) = (uint)uParm1;
		FUN_0009a06c(iVar2,(int)cVar4);
		return (SFXHDR *)iVar2;
	}
	uVar1 = FUN_0007b348();
	switch(uVar1) {
	case 0:
		local_28 = 0x45;
		break;
	case 1:
		local_28 = 0x46;
		break;
	case 2:
		local_28 = 0x47;
		break;
	case 3:
		local_28 = 0x53;
		break;
	case 4:
		local_28 = 0x4a;
		break;
	case 5:
		DBG_Error((char *)0x0,"psxsrc/STREAM.CPP",0x277);
		break;
	default:
		goto switchD_00098e34_caseD_6;
	}
	if (uParm1 == 0x69) {
LAB_80098ed8:
		local_28 = 0x4d;
	}
	else {
		if (uParm1 < 0x6a) {
			if ((uParm1 == 0xc) || (uParm1 == 0x2e)) goto LAB_80098ed8;
		}
		else {
			if ((uParm1 == 0x6b) || (uParm1 == 0x348)) goto LAB_80098ed8;
		}
	}
	local_27 = 0;
	sprintf(acStack72,"%s%04X",&local_28,(uint)uParm1);
	uVar3 = uParm2 + 1 & 1;
	sfh = STR_InitStream__Fc((char)uVar3);
	uVar3 = uVar3 ^ 1;
	if (sfh == (SFXHDR *)0x0) {
		return (SFXHDR *)0;
	}
	FileType = (uchar)uVar3;
	sfh->type = FileType;
	sfh->loop = cParm4;
	sfh->volume = iParm3;
	sfh->s_volume = iParm3;
	STR_setvolume__FP6SFXHDR(sfh);
	if (uVar3 == 0) {
		sfh->pitch = 0x3fc;
		if (iGp00000644 == 0x32) {
			sfh->spu_rate = iGp0000064c;
		}
		else {
			sfh->spu_rate = 0x68;
		}
		uVar1 = 0;
	}
	else {
		sfh->pitch = 0x3fc;
		if (iGp00000644 == 0x32) {
			sfh->spu_rate = iGp0000064c;
		}
		else {
			sfh->spu_rate = 0x68;
		}
		uVar1 = 1;
		if (leveltype == '\0') goto LAB_80098fb8;
	}
	SpuSetReverbVoice(uVar1,1 << (sfh->voice & 0x1fU));
LAB_80098fb8:
	sprintf(sfh->name,"%s.VAG",acStack72);
	sfh->SfxNo = (uint)uParm1;
	STR_StreamMainTask__FP6SFXHDRc(sfh,FileType);
	return sfh;
}



// decompiled code
// original method signature: 
// void FUN_00099010(int iParm1);
 // line -1, offset 0x00099010
// function 'FUN_00099010' @0x00099010 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00099010(int iParm1)

{
	int iVar1;
	
	voice_attr.mask = 3;
	voice_attr.voice = 1 << (*(uint *)(iParm1 + 0x10) & 0x1f);
	voice_attr.volume.left = (short)*(undefined4 *)(iParm1 + 0x14);
	voice_attr.volume.right = (short)*(undefined4 *)(iParm1 + 0x14);
	iVar1 = FUN_0007b348();
	if (((iVar1 == 1) || (iVar1 == 3)) && (*(int *)(iParm1 + 0x10) == 1)) {
		voice_attr.volume.left = voice_attr.volume.left << 1;
		voice_attr.volume.right = voice_attr.volume.right << 1;
	}
	FUN_000194dc(&voice_attr);
	return;
}



// decompiled code
// original method signature: 
// void FUN_0009931c(char *pcParm1);
 // line -1, offset 0x0009931c
// function 'FUN_0009931c' @0x0009931C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0009931c(char *pcParm1)

{
	if (*pcParm1 != '\0') {
		*(undefined4 *)(pcParm1 + 0x14) = 0;
		cGp0000063d = cGp0000063d + -1;
		*pcParm1 = '\0';
		FUN_00099010();
		FUN_00018b0c(0,1 << (*(uint *)(pcParm1 + 0x10) & 0x1f));
		FUN_0001798c(*(undefined4 *)(pcParm1 + 0x40));
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_00099388(int iParm1,int iParm2);
 // line -1, offset 0x00099388
// function 'FUN_00099388' @0x00099388 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_00099388(int iParm1,int iParm2)

{
	if ((*(char *)(iParm1 + 3) == '\x06') && (iParm2 == 6)) {
		iParm2 = 1;
	}
	if ((*(char *)(iParm1 + 3) == '\x03') || (iParm2 != 4)) {
		if (iParm2 == 3) {
			*(undefined4 *)(iParm1 + 0x18) = *(undefined4 *)(iParm1 + 0x14);
		}
		if (iParm2 == 8) {
			*(undefined4 *)(iParm1 + 0x14) = 0;
			FUN_00099010(iParm1);
			FUN_0009ac24(*(undefined4 *)(iParm1 + 8),iParm1);
			FUN_0009931c(iParm1);
			FUN_000881cc(*(undefined4 *)(iParm1 + 8));
			*(undefined4 *)(iParm1 + 4) = 0;
			if (*(char *)(iParm1 + 0xc) == '\0') {
				sghStream = (SFXHDR *)0x0;
				sgpStreamSFX = (TSFX *)0x0;
			}
			else {
				sghMusic = (SFXHDR *)0x0;
			}
			FUN_00019e5c(iParm1 + 0x74,"BATTER");
		}
		else {
			*(undefined *)(iParm1 + 3) = (char)iParm2;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_0009a06c(int iParm1);
 // line -1, offset 0x0009a06c
// function 'FUN_0009a06c' @0x0009A06C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0009a06c(int iParm1)

{
	int iVar1;
	int iVar2;
	int *piVar3;
	code *pcVar4;
	
	if ((*(char *)(iParm1 + 0xc) == '\0') && (FeFlag == '\0')) {
		while (iVar1 = FUN_0009bbc0(), iVar1 != 1) {
			FUN_000203b8(1);
		}
	}
	iVar1 = FUN_000881a0(iParm1 + 0x74,0);
	if (iVar1 == 0) {
		FUN_00019e4c("FILE %s NOT FOUND",iParm1 + 0x74);
		FUN_0009931c(iParm1);
	}
	else {
		*(undefined4 *)(iParm1 + 100) = *(undefined4 *)(iVar1 + 0x10);
		if (*(int *)(iVar1 + 0x10) < 0x8e81) {
			pcVar4 = STR_AsyncWeeTASK__FP4TASK;
		}
		else {
			pcVar4 = STR_AsyncTASK__FP4TASK;
		}
		iVar2 = FUN_00020010(0x8000,pcVar4,0x800,0x10);
		if (iVar2 == 0) {
			FUN_00020e94(0,"psxsrc/STREAM.CPP",0x5dc);
		}
		FUN_0002090c(iVar2);
		piVar3 = *(int **)(iVar2 + 0x1c);
		*piVar3 = iVar1;
		piVar3[1] = iParm1;
	}
	return;
}



// decompiled code
// original method signature: 
// int FUN_0009a364(void);
 // line -1, offset 0x0009a364
// function 'FUN_0009a364' @0x0009A364 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_0009a364(void)

{
	int iVar1;
	char *pcVar2;
	int iVar3;
	undefined auStack32 [2];
	char local_1e [22];
	
	iVar3 = -1;
	FUN_00019450(auStack32);
	iVar1 = 2;
	pcVar2 = local_1e;
	do {
		if (iVar3 != -1) {
			return iVar3;
		}
		if (*pcVar2 != '\x01') {
			iVar3 = iVar1;
		}
		iVar1 = iVar1 + 1;
		pcVar2 = pcVar2 + 1;
	} while (iVar1 < 0x18);
	return iVar3;
}



// decompiled code
// original method signature: 
// int FUN_0009a5dc(short sParm1);
 // line -1, offset 0x0009a5dc
// function 'FUN_0009a5dc' @0x0009A5DC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_0009a5dc(short sParm1)

{
	uint uVar1;
	int iVar2;
	short *psVar3;
	int iVar4;
	
	psVar3 = (short *)FUN_00021774(uGp0000067c);
	if (psVar3 == (short *)0x0) {
		FUN_00020e94(0,"psxsrc/SNDBANK.CPP",0x1a0);
	}
	iVar4 = -1;
	iVar2 = 0;
	if (uGp00001f2c != 0) {
		do {
			if (iVar4 != -1) break;
			if (*psVar3 == sParm1) {
				iVar4 = iVar2;
			}
			iVar2 = iVar2 + 1;
			psVar3 = psVar3 + 6;
		} while (iVar2 < (int)(uint)uGp00001f2c);
	}
	uVar1 = FUN_000217dc(uGp0000067c);
	if ((uVar1 & 0xff) == 0) {
		FUN_00020e94(0,"psxsrc/SNDBANK.CPP",0x1ab);
	}
	return iVar4;
}



// decompiled code
// original method signature: 
// undefined4 FUN_0009a6ec(int iParm1);
 // line -1, offset 0x0009a6ec
// function 'FUN_0009a6ec' @0x0009A6EC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_0009a6ec(int iParm1)

{
	ushort *puVar1;
	int iVar2;
	
	iVar2 = 2;
	puVar1 = &USHORT_8011cd9c;
	do {
		if ((uint)*puVar1 == iParm1 + 1U) {
			return 1;
		}
		iVar2 = iVar2 + 1;
		puVar1 = puVar1 + 1;
	} while (iVar2 < 0x18);
	return 0;
}



// decompiled code
// original method signature: 
// undefined4 FUN_0009a728(uint uParm1);
 // line -1, offset 0x0009a728
// function 'FUN_0009a728' @0x0009A728 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_0009a728(uint uParm1)

{
	undefined4 uVar1;
	int iVar2;
	ushort *puVar3;
	ushort *puVar4;
	
	iVar2 = 0;
	if (0 < iGp00000684) {
		puVar3 = &SFXRemapTab;
		puVar4 = &USHORT_801109ca;
		do {
			iVar2 = iVar2 + 1;
			if ((uint)*puVar3 == uParm1) {
				uVar1 = FUN_0009a5dc((uint)*puVar4);
				return uVar1;
			}
			puVar4 = puVar4 + 2;
			puVar3 = puVar3 + 2;
		} while (iVar2 < iGp00000684);
	}
	return 0xffffffff;
}



// decompiled code
// original method signature: 
// uint FUN_0009a79c(ushort uParm1,int iParm2,int iParm3,short sParm4);
 // line -1, offset 0x0009a79c
// function 'FUN_0009a79c' @0x0009A79C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_0009a79c(ushort uParm1,int iParm2,int iParm3,short sParm4)

{
	int iVar1;
	uint uVar2;
	int iVar3;
	uint uVar4;
	uint uVar5;
	int local_68;
	undefined4 local_64;
	undefined2 local_60;
	undefined2 local_5e;
	short local_54;
	int local_4c;
	
	if (iGp00000680 == 0) {
		FUN_00020e94(0,"psxsrc/SNDBANK.CPP",499);
	}
	iVar1 = FUN_000a4648();
	uVar5 = 0;
	if (iVar1 != 1) {
		iVar1 = FUN_0009a5dc((uint)uParm1);
		if ((iVar1 == -1) && (iVar1 = FUN_0009a728((uint)uParm1), iVar1 == -1)) {
			uGp00000689 = 1;
			uVar5 = 0;
		}
		else {
			uVar2 = FUN_0009a364();
			uVar5 = 0;
			if (uVar2 != 0xffffffff) {
				if ((ushort)(uParm1 - 0x3c5) < 4) {
					iParm2 = iParm2 << 3;
				}
				if (uParm1 == 0x50) {
					iParm2 = iParm2 << 3;
				}
				if (0x3fff < iParm2) {
					iParm2 = 0x3fff;
				}
				iVar3 = FUN_00021774(uGp0000067c);
				if (iVar3 == 0) {
					FUN_00020e94(0,"psxsrc/SNDBANK.CPP",0x221);
				}
				iVar3 = iVar1 * 0xc + iVar3;
				local_4c = *(int *)(iVar3 + 4);
				CHStatus[uVar2] = uParm1 + 1;
				local_64 = 0x93;
				iVar1 = 1 << (uVar2 & 0x1f);
				local_60 = (undefined2)((uint)((0x10000 - iParm3) * iParm2) >> 0x10);
				local_5e = (undefined2)((uint)(iParm3 * iParm2) >> 0x10);
				local_4c = iGp00000680 + local_4c;
				local_54 = *(short *)(iVar3 + 10) + sParm4;
				local_68 = iVar1;
				FUN_00018ccc(&local_68);
				if (leveltype != '\0') {
					FUN_0001866c(1,iVar1);
				}
				uVar4 = FUN_000217dc(uGp0000067c);
				uVar5 = uVar2;
				if ((uVar4 & 0xff) == 0) {
					FUN_00020e94(0,"psxsrc/SNDBANK.CPP",0x237);
					uVar5 = uVar2;
				}
			}
		}
	}
	return uVar5;
}



// decompiled code
// original method signature: 
// uint FUN_0009abf4(int iParm1);
 // line -1, offset 0x0009abf4
// function 'FUN_0009abf4' @0x0009ABF4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_0009abf4(int iParm1)

{
	FUN_0002f94c(0);
	return (uint)*(byte *)(iParm1 + 0xd);
}



// decompiled code
// original method signature: 
// void FUN_0009ac24(undefined4 uParm1,int iParm2);
 // line -1, offset 0x0009ac24
// function 'FUN_0009ac24' @0x0009AC24 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0009ac24(undefined4 uParm1,int iParm2)

{
	uint uVar1;
	
	uVar1 = FUN_0009abf4(iParm2);
	if ((uVar1 & 0xff) == 0) {
		FUN_00024268(*(undefined4 *)(iParm2 + 0x54));
		*(undefined *)(iParm2 + 0xd) = 1;
		FUN_0002f94c(0);
	}
	return;
}



// decompiled code
// original method signature: 
// undefined4 FUN_0009bbc0(void);
 // line -1, offset 0x0009bbc0
// function 'FUN_0009bbc0' @0x0009BBC0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_0009bbc0(void)

{
	return uGp00000874;
}



// decompiled code
// original method signature: 
// void FUN_0009f6b4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,uint param_10,undefined4 param_11,int param_12);
 // line -1, offset 0x0009f6b4
// function 'FUN_0009f6b4' @0x0009F6B4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0009f6b4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
								 int param_7,int param_8,int param_9,uint param_10,undefined4 param_11,int param_12)

{
	short sVar1;
	short sVar2;
	short sVar3;
	uint uVar4;
	uint uVar5;
	int iVar6;
	int iVar7;
	undefined4 uVar8;
	short sVar9;
	int iVar10;
	undefined uVar11;
	int *piVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	undefined uVar16;
	int iVar17;
	uint local_68;
	int local_60;
	int local_58;
	
	uVar4 = param_3 >> 0x10;
	if ((int)uVar4 < 0) {
		uVar4 = -uVar4;
	}
	uVar5 = param_4 >> 0x10;
	if ((int)uVar5 < 0) {
		uVar5 = -uVar5;
	}
	piVar12 = &p2partexecnum;
	if (param_12 == 0) {
		piVar12 = &p1partexecnum;
	}
	if ((int)uVar4 < (int)uVar5) {
		iVar6 = uVar5 + (uVar5 >> 0x1f);
	}
	else {
		iVar6 = uVar4 + (uVar4 >> 0x1f);
	}
	iVar6 = iVar6 >> 1;
	if (iVar6 == 0) {
		iVar6 = 1;
	}
	iVar10 = *piVar12;
	if (iVar10 < param_5) {
		param_5 = iVar10;
	}
	iVar7 = iVar10 + (iVar6 >> 1);
	if (iVar6 >> 1 == 0) {
		iVar7 = iVar10 + 1;
	}
	*piVar12 = iVar7;
	if (iGp0000097c == 0) {
		uVar4 = FUN_000840f8();
		local_68 = uVar4 >> 2 & 7;
	}
	else {
		local_68 = 0;
	}
	if (param_9 != 0) {
		uVar4 = FUN_00020cf4();
		param_1 = param_1 + (uVar4 & 3);
		param_2 = param_2 + ((int)uVar4 >> 0x10 & 3U);
	}
	local_60 = param_1 << 0x10;
	local_58 = param_2 << 0x10;
	uVar8 = FUN_00093c10(0);
	iVar10 = 0;
	if (0 < param_5) {
		do {
			iVar15 = (local_68 - iVar10 & 7) + 0xd0;
			iVar7 = FUN_000a09c0(uVar8,iVar15);
			iVar17 = (*(uint *)(iVar7 + 8) & 0x1ff) * param_6;
			iVar13 = local_60 >> 0x10;
			iVar14 = local_58 >> 0x10;
			iVar7 = (*(uint *)(iVar7 + 8) >> 9 & 0x1ff) * param_6;
			local_60 = local_60 - param_3 / iVar6;
			local_58 = local_58 - param_4 / iVar6;
			iVar13 = iVar13 - (iVar17 >> 0x10);
			iVar14 = iVar14 - (iVar7 >> 0x10);
			if (param_8 == 0) {
				param_10._0_1_ = (undefined)(param_6 >> 9);
			}
			else {
				param_10._0_1_ = (undefined)(param_6 >> 10);
			}
			uVar11 = (undefined)param_10;
			if ((param_10 & 0xff0000) != 0) {
				uVar11 = (undefined)(param_10 >> 0x10);
			}
			uVar16 = (char)(param_10 >> 8);
			if ((param_10 & 0xff00) == 0) {
				uVar16 = (undefined)param_10;
			}
			if ((param_10 & 0xff) != 0) {
			}
			iVar15 = FUN_00093418(uVar8,iVar15,iVar13,iVar14,0,param_11,0);
			if (param_8 != 0) {
				*(ushort *)(iVar15 + 0x16) = *(ushort *)(iVar15 + 0x16) | 0x20;
			}
			sVar2 = (short)iVar13;
			sVar9 = sVar2 + (short)(iVar17 >> 0xf);
			sVar1 = (short)iVar14;
			sVar3 = sVar1 + (short)(iVar7 >> 0xf);
			*(short *)(iVar15 + 0x1a) = sVar3;
			*(short *)(iVar15 + 0x22) = sVar3;
			*(short *)(iVar15 + 8) = sVar2;
			*(short *)(iVar15 + 10) = sVar1;
			*(short *)(iVar15 + 0x10) = sVar9;
			*(short *)(iVar15 + 0x12) = sVar1;
			*(short *)(iVar15 + 0x18) = sVar2;
			*(short *)(iVar15 + 0x20) = sVar9;
			*(undefined *)(iVar15 + 4) = uVar11;
			*(undefined *)(iVar15 + 5) = uVar16;
			*(undefined *)(iVar15 + 6) = (undefined)param_10;
			*(byte *)(iVar15 + 7) = *(byte *)(iVar15 + 7) & 0xfe | 2;
			if (0x7ff < param_6) {
				param_6 = param_6 - param_7;
			}
			iVar10 = iVar10 + 1;
		} while (iVar10 < param_5);
	}
	FUN_00093d80(uVar8);
	return;
}



// decompiled code
// original method signature: 
// int FUN_000a09c0(int iParm1,uint uParm2);
 // line -1, offset 0x000a09c0
// function 'FUN_000a09c0' @0x000A09C0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_000a09c0(int iParm1,uint uParm2)

{
	return *(int *)(iParm1 + 0x24) + (uParm2 & 0xffff) * 0xc;
}



// decompiled code
// original method signature: 
// void FUN_000a4384(TextDat *pTParm1);
 // line -1, offset 0x000a4384
// function 'FUN_000a4384' @0x000A4384 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_000a4384(TextDat *pTParm1)

{
	int iVar1;
	
	iVar1 = FUN_000a44b4();
	if (iVar1 == -1) {
		iVar1 = FUN_000a44ec();
		if (iVar1 == -1) {
			FUN_00020e94(0,"psxsrc/DECOMP.CPP",0x4f);
		}
		(&DecRequestors10)[iVar1] = pTParm1;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_000a4400(void);
 // line -1, offset 0x000a4400
// function 'FUN_000a4400' @0x000A4400 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_000a4400(void)

{
	int iVar1;
	
	iVar1 = FUN_000a44b4();
	if (iVar1 == -1) {
		FUN_00020e94(0,"psxsrc/DECOMP.CPP",0x5d);
	}
	(&DecRequestors10)[iVar1] = (TextDat *)0x0;
	return;
}



// decompiled code
// original method signature: 
// int FUN_000a44b4(TextDat *pTParm1);
 // line -1, offset 0x000a44b4
// function 'FUN_000a44b4' @0x000A44B4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_000a44b4(TextDat *pTParm1)

{
	int iVar1;
	TextDat **ppTVar2;
	
	iVar1 = 0;
	ppTVar2 = &DecRequestors10;
	do {
		if (*ppTVar2 == pTParm1) {
			return iVar1;
		}
		iVar1 = iVar1 + 1;
		ppTVar2 = ppTVar2 + 1;
	} while (iVar1 < 10);
	return 0xffffffff;
}



// decompiled code
// original method signature: 
// int FUN_000a44ec(void);
 // line -1, offset 0x000a44ec
// function 'FUN_000a44ec' @0x000A44EC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_000a44ec(void)

{
	int iVar1;
	TextDat **ppTVar2;
	
	iVar1 = 0;
	ppTVar2 = &DecRequestors10;
	do {
		if (*ppTVar2 == (TextDat *)0x0) {
			return iVar1;
		}
		iVar1 = iVar1 + 1;
		ppTVar2 = ppTVar2 + 1;
	} while (iVar1 < 10);
	return 0xffffffff;
}



// decompiled code
// original method signature: 
// undefined4 FUN_000a4648(void);
 // line -1, offset 0x000a4648
// function 'FUN_000a4648' @0x000A4648 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_000a4648(void)

{
	return uGp000009c8;
}



// decompiled code
// original method signature: 
// void FUN_000a6a44(int param_1,int param_2,uint param_3,uint param_4,byte param_5,int param_6,int param_7,uint param_8,int param_9,int param_10,int param_11,int param_12,byte param_13);
 // line -1, offset 0x000a6a44
// function 'FUN_000a6a44' @0x000A6A44 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
/* WARNING: Could not reconcile some variable overlaps */

void FUN_000a6a44(int param_1,int param_2,uint param_3,uint param_4,byte param_5,int param_6,
								 int param_7,uint param_8,int param_9,int param_10,int param_11,int param_12,
								 byte param_13)

{
	short sVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	undefined4 uVar5;
	int iVar6;
	int iVar7;
	uint uVar8;
	uint uVar9;
	int iVar10;
	short sVar12;
	short sVar13;
	uint uVar11;
	short local_88;
	ushort local_70;
	ushort local_68;
	ushort local_60;
	undefined local_58;
	undefined local_50;
	undefined local_48;
	int local_40;
	
	if (param_10 == 0xffff) {
		param_10 = FUN_000ab68c();
		param_10 = param_10 + 4;
	}
	uVar5 = FUN_00093c10(0);
	if ((PauseMode == '\0') || (uVar9 = 0x10, param_9 != 0)) {
		uVar9 = FUN_00020cf4();
		uVar9 = uVar9 & 0x1f;
		uVar8 = FUN_000840f8();
		uVar8 = uVar8 >> 2 & 7;
	}
	else {
		uVar8 = 4;
	}
	uVar9 = uVar9 + param_7;
	param_6 = param_6 >> 1;
	if ((int)(uVar9 * 0x10000) < 0) {
		uVar9 = 0;
	}
	uVar9 = uVar9 & 0xffff;
	uVar11 = (param_3 & 0xff) * uVar9;
	local_70 = (ushort)(uVar11 >> 8);
	local_68 = (ushort)((param_4 & 0xff) * uVar9 >> 8);
	local_60 = (ushort)((uint)param_5 * uVar9 >> 8);
	if (0xff < uVar11 >> 8) {
		local_70 = 0xff;
	}
	if (0xff < local_68) {
		local_68 = 0xff;
	}
	if (0xff < local_60) {
		local_60 = 0xff;
	}
	if (param_9 != 0) {
		iVar6 = FUN_00093418(uVar5,uVar8 + 0xd0,param_1,param_2,0,param_10,0);
		*(undefined *)(iVar6 + 4) = (char)param_3;
		*(undefined *)(iVar6 + 5) = (char)param_4;
		*(byte *)(iVar6 + 6) = param_5;
		*(byte *)(iVar6 + 7) = *(byte *)(iVar6 + 7) & 0xfe | 2;
	}
	param_2 = param_2 + -3;
	param_1 = param_1 + 3;
	uVar9 = (uint)param_13;
	local_40 = 0;
	iVar6 = uVar9 * 2;
	do {
		iVar7 = FUN_0009356c(uVar5,0xd8,param_1,param_2,0,param_10 + 1,0);
		*(ushort *)(iVar7 + 0x1a) = *(ushort *)(iVar7 + 0x1a) | 0x20;
		*(char *)(iVar7 + 0x25) = *(char *)(iVar7 + 0x25) + -1;
		*(char *)(iVar7 + 0x18) = *(char *)(iVar7 + 0x18) + -1;
		*(char *)(iVar7 + 0x31) = *(char *)(iVar7 + 0x31) + -1;
		*(char *)(iVar7 + 0x30) = *(char *)(iVar7 + 0x30) + -1;
		local_88 = (short)param_2;
		if (param_12 == 0) {
			sVar12 = (short)((uint)((int)Circle[param_8 & 0x3f] * param_6) >> 8);
			sVar1 = Circle[param_8 + uVar9 & 0x3f];
			sVar13 = (short)((uint)((int)Circle[param_8 + iVar6 & 0x3f] * param_6) >> 8);
			iVar10 = (int)Circle[param_8 + uVar9 + 0x10 & 0x3f] * param_6 >> 8;
			sVar3 = (short)((uint)((int)Circle[param_8 + 0x10 & 0x3f] * param_6) >> 8);
			sVar4 = (short)((uint)((int)Circle[param_8 + iVar6 + 0x10 & 0x3f] * param_6) >> 8);
		}
		else {
			sVar12 = (short)((uint)((int)Circle[param_8 & 0x3f] * param_6) >> 8);
			sVar1 = Circle[param_8 + uVar9 & 0x3f];
			sVar13 = (short)((uint)((int)Circle[param_8 + iVar6 & 0x3f] * param_6) >> 8);
			iVar10 = (int)Circle[param_8 + uVar9 + 0x10 & 0x3f] * param_6 >> 9;
			sVar3 = (short)((int)Circle[param_8 + 0x10 & 0x3f] * param_6 >> 9);
			sVar4 = (short)((int)Circle[param_8 + iVar6 + 0x10 & 0x3f] * param_6 >> 9);
		}
		sVar2 = (short)param_1;
		*(short *)(iVar7 + 8) = sVar2 + sVar12;
		*(short *)(iVar7 + 10) = local_88 + sVar3;
		*(short *)(iVar7 + 0x14) = sVar2;
		*(short *)(iVar7 + 0x20) = sVar2 + (short)((uint)((int)sVar1 * param_6) >> 8);
		*(short *)(iVar7 + 0x16) = local_88;
		*(short *)(iVar7 + 0x2c) = sVar2 + sVar13;
		*(short *)(iVar7 + 0x2e) = local_88 + sVar4;
		*(undefined *)(iVar7 + 4) = 0;
		*(undefined *)(iVar7 + 5) = 0;
		*(undefined *)(iVar7 + 6) = 0;
		*(short *)(iVar7 + 0x22) = local_88 + (short)iVar10;
		*(undefined *)(iVar7 + 0x10) = (undefined)local_70;
		*(undefined *)(iVar7 + 0x11) = (undefined)local_68;
		*(undefined *)(iVar7 + 0x1c) = 0;
		*(undefined *)(iVar7 + 0x1d) = 0;
		*(undefined *)(iVar7 + 0x1e) = 0;
		*(undefined *)(iVar7 + 0x28) = 0;
		*(undefined *)(iVar7 + 0x29) = 0;
		*(undefined *)(iVar7 + 0x2a) = 0;
		*(byte *)(iVar7 + 7) = *(byte *)(iVar7 + 7) & 0xfe | 2;
		*(undefined *)(iVar7 + 0x12) = (undefined)local_60;
		if (param_11 != 0) {
			iVar7 = FUN_0009356c(uVar5,0xd8,param_1,param_2,0,param_10 + 1,0);
			*(short *)(iVar7 + 8) = sVar2 + sVar12;
			*(short *)(iVar7 + 10) = local_88 + sVar3;
			*(short *)(iVar7 + 0x14) = sVar2;
			*(short *)(iVar7 + 0x20) = sVar2 + (short)(((int)sVar1 * param_6 >> 8) >> 3);
			*(short *)(iVar7 + 0x16) = local_88;
			*(short *)(iVar7 + 0x2c) = sVar2 + sVar13;
			*(short *)(iVar7 + 0x2e) = local_88 + sVar4;
			*(short *)(iVar7 + 0x22) = local_88 + (short)(iVar10 >> 3);
			local_58 = (undefined)(local_70 >> 2);
			*(undefined *)(iVar7 + 4) = local_58;
			local_50 = (undefined)(local_68 >> 2);
			*(undefined *)(iVar7 + 5) = local_50;
			local_48 = (undefined)(local_60 >> 2);
			*(undefined *)(iVar7 + 6) = local_48;
			*(undefined *)(iVar7 + 0x10) = (undefined)local_70;
			*(undefined *)(iVar7 + 0x11) = (undefined)local_68;
			*(undefined *)(iVar7 + 0x12) = (undefined)local_60;
			*(undefined *)(iVar7 + 0x1c) = local_58;
			*(undefined *)(iVar7 + 0x1d) = local_50;
			*(undefined *)(iVar7 + 0x1e) = local_48;
			*(undefined *)(iVar7 + 0x28) = local_58;
			*(undefined *)(iVar7 + 0x29) = local_50;
			*(ushort *)(iVar7 + 0x1a) = *(ushort *)(iVar7 + 0x1a) | 0x20;
			*(char *)(iVar7 + 0x18) = *(char *)(iVar7 + 0x18) + -1;
			*(char *)(iVar7 + 0x25) = *(char *)(iVar7 + 0x25) + -1;
			*(char *)(iVar7 + 0x30) = *(char *)(iVar7 + 0x30) + -1;
			*(undefined *)(iVar7 + 0x2a) = local_48;
			*(char *)(iVar7 + 0x31) = *(char *)(iVar7 + 0x31) + -1;
			*(byte *)(iVar7 + 7) = *(byte *)(iVar7 + 7) & 0xfe | 2;
		}
		param_8 = param_8 + iVar6;
		local_40 = local_40 + iVar6;
	} while (local_40 < 0x40);
	FUN_00093d80(uVar5);
	return;
}



// decompiled code
// original method signature: 
// undefined4 FUN_000ab68c(void);
 // line -1, offset 0x000ab68c
// function 'FUN_000ab68c' @0x000AB68C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_000ab68c(void)

{
	return 0x1e8;
}



// decompiled code
// original method signature: 
// uint FUN_0013d2b8(uint uParm1,int iParm2);
 // line -1, offset 0x0013d2b8
// function 'FUN_0013d2b8' @0x0013D2B8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_0013d2b8(uint uParm1,int iParm2)

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
// void FUN_0013d34c(int iParm1,int iParm2);
 // line -1, offset 0x0013d34c
// function 'FUN_0013d34c' @0x0013D34C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0013d34c(int iParm1,int iParm2)

{
	char cVar1;
	char cVar2;
	
	missile[iParm1]._miAnimType = (uchar)iParm2;
	cVar2 = missile[iParm1]._mimfnum;
	missile[iParm1]._miAnimFlags = misfiledata[iParm2].mFlags;
	cVar1 = FUN_0013d2b8((uint)misfiledata[iParm2].mAnimDelay,(int)cVar2);
	missile[iParm1]._miAnimDelay = cVar1;
	cVar2 = FUN_0013d2b8((uint)misfiledata[iParm2].mAnimLen,(int)cVar2);
	missile[iParm1]._miAnimLen = cVar2;
	missile[iParm1]._miAnimCnt = '\0';
	missile[iParm1]._miAnimFrame = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void FUN_0013d424(int iParm1,char cParm2);
 // line -1, offset 0x0013d424
// function 'FUN_0013d424' @0x0013D424 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_0013d424(int iParm1,char cParm2)

{
	missile[iParm1]._mimfnum = cParm2;
	FUN_0013d34c(iParm1,(uint)missile[iParm1]._miAnimType);
	return;
}



// decompiled code
// original method signature: 
// int FUN_00142a04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6,char param_7,int param_8,int param_9,char param_10);
 // line -1, offset 0x00142a04
// function 'FUN_00142a04' @0x00142A04 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_00142a04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
		FUN_0013d424(iVar3,uVar7);
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
			FUN_0003d784(missiledata[param_6].mlSFX,(int)missile[iVar3]._mix,(int)missile[iVar3]._miy);
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
// void FUN_800b0320(void);
 // line -1, offset 0x800b0320
// function 'FUN_800b0320' @0x800B0320 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800b0320(void)

{
	uchar uVar1;
	
	SetDispMask(0);
	VSync(0);
	VSync(0);
	VID_SetXYOff__Fii(0,0);
	SetVideoMode(0);
	FUN_800b03e0();
	uVar1 = GPUQ_InitModule__Fv();
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/VID.CPP",0x7f);
	}
	uGp00001eac = 0;
	VSyncCallback(VID_DispEnvSend);
	uVar1 = PRIM_Open__FiiiP10SCREEN_ENVUl(0x400,0x200,2,&screen,1);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/VID.CPP",0x86);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_800b03e0(void);
 // line -1, offset 0x800b03e0
// function 'FUN_800b03e0' @0x800B03E0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800b03e0(void)

{
	ResetGraph(0);
	SetGraphDebug(0);
	InitGeom();
	SetDefDrawEnv(&screen,0,0,0x140,0xf0);
	SetDefDispEnv(0x8011cb3c,0x140,0,0x140,0xf0);
	SetDefDrawEnv(&SCREEN_ENV_8011cb50,0x140,0,0x140,0xf0);
	SetDefDispEnv(0x8011cbac,0,0,0x140,0xf0);
	screen.drawenv.isbg = '\0';
	SCREEN_ENV_8011cb50.drawenv.isbg = '\0';
	screen.drawenv.dtd = '\x01';
	SCREEN_ENV_8011cb50.drawenv.dtd = '\x01';
	SetDrawEnv(0x8011cafc,&screen);
	SetDrawEnv(0x8011cb6c,&SCREEN_ENV_8011cb50);
	return;
}



// decompiled code
// original method signature: 
// void FUN_800b04d0(void);
 // line -1, offset 0x800b04d0
// function 'FUN_800b04d0' @0x800B04D0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800b04d0(void)

{
	puGp00000358 = &OPT_LinkerOpts;
	FUN_800b04fc();
	return;
}



// decompiled code
// original method signature: 
// void FUN_800b04fc(void);
 // line -1, offset 0x800b04fc
// function 'FUN_800b04fc' @0x800B04FC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800b04fc(void)

{
	PsxMem.Type = 1;
	PsxFastMem.Mem = &DAT_1f800000;
	PsxFastMem.Size = 0x400;
	PsxFastMem.Type = 2;
	PsxMem.Mem = OPT_FreeMemStart;
	PsxMem.Size = (ulong)OPT_FreeMemSize;
	memset(OPT_FreeMemStart,0,(size_t)OPT_FreeMemSize);
	GAL_AddMemType(&PsxFastMem);
	GAL_AddMemType(&PsxMem);
	GAL_SetVerbosity(GAL_AVERAGE);
	return;
}



// decompiled code
// original method signature: 
// void FUN_800b059c(void);
 // line -1, offset 0x800b059c
// function 'FUN_800b059c' @0x800B059C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800b059c(void)

{
	uchar uVar1;
	undefined2 local_10;
	undefined2 local_e;
	undefined2 local_c;
	undefined2 local_a;
	
	SaveGP();
	FUN_800b04d0();
	InitTmalloc__Fv();
	FUN_800b0320();
	local_10 = 0;
	local_e = 0;
	local_c = 0x140;
	local_a = 0x100;
	ClearImage(&local_10,0,0,0);
	local_10 = 0x140;
	ClearImage(&local_10,0,0,0);
	VID_ScrOn__Fv();
	SortOutFileSystem__Fv();
	ResetCallback();
	uVar1 = TSK_OpenModule((ulong)&DAT_00008001);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/SYSINIT.CPP",0x83);
	}
	TSK_SetExtraStackProtection('\0');
	GU_InitModule();
	FUN_800b0760();
	FUN_800b06e4();
	FUN_800b071c();
	PutUpCutScreen__Fi(0xb);
	if (iGp0000036c == 2) {
		BL_LoadDirectory__Fv();
	}
	SCR_Open__Fv();
	FUN_800b07a4();
	FUN_800b0784();
	STR_Init__Fv();
	SpuInit();
	SPU_OnceOnlyInit__Fv();
	GLUE_Init__Fv();
	return;
}



// decompiled code
// original method signature: 
// void FUN_800b06e4(void);
 // line -1, offset 0x800b06e4
// function 'FUN_800b06e4' @0x800B06E4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800b06e4(void)

{
	uGp00001ec4 = 0;
	uGp00001ec8 = 0;
	TSK_AddTask(0x8000,PauseTask__FP4TASK,0x800,0);
	return;
}



// decompiled code
// original method signature: 
// void FUN_800b071c(void);
 // line -1, offset 0x800b071c
// function 'FUN_800b071c' @0x800B071C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800b071c(void)

{
	InitTAP(&RawPadData0,0x22,&RawPadData1,0x22);
	StartTAP();
	PadInit(1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_800b0760(void);
 // line -1, offset 0x800b0760
// function 'FUN_800b0760' @0x800B0760 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800b0760(void)

{
	TextDat **ppTVar1;
	int iVar2;
	
	iVar2 = 0x173;
	ppTVar1 = &PTR_800b9a20;
	do {
		*ppTVar1 = (TextDat *)0x0;
		iVar2 = iVar2 + -1;
		ppTVar1 = ppTVar1 + -1;
	} while (-1 < iVar2);
	return;
}



// decompiled code
// original method signature: 
// void FUN_800b0784(void);
 // line -1, offset 0x800b0784
// function 'FUN_800b0784' @0x800B0784 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800b0784(void)

{
	ClearOutOverlays__Fv();
	return;
}



// decompiled code
// original method signature: 
// void FUN_800b07a4(void);
 // line -1, offset 0x800b07a4
// function 'FUN_800b07a4' @0x800B07A4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800b07a4(void)

{
	TextDat **ppTVar1;
	int iVar2;
	
	iVar2 = 9;
	ppTVar1 = &PTR_8011d074;
	do {
		*ppTVar1 = (TextDat *)0x0;
		iVar2 = iVar2 + -1;
		ppTVar1 = ppTVar1 + -1;
	} while (-1 < iVar2);
	return;
}


