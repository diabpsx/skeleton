#include "THISDUST.H"
#include "CONTROL.H"


// decompiled code
// original method signature: 
// void FUN_80157274(void);
 // line -1, offset 0x80157274
// function 'FUN_80157274' @0x80157274 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80157274(void)

{
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015727c(int iParm1,int iParm2,int iParm3);
 // line -1, offset 0x8015727c
// function 'FUN_8015727c' @0x8015727C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015727c(int iParm1,int iParm2,int iParm3)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = PrintFt4__7TextDatiiiiii
										 (pTGp00001b8c,iParm3,iParm1 + 0x80,(iParm2 - iGp00001bb0) + 0x20,0,iGp00001b7c,
											0);
	pPVar1->code = pPVar1->code & 0xfe | 2;
	pPVar1->r0 = BORDERR;
	pPVar1->g0 = BORDERG;
	pPVar1->b0 = BORDERB;
	return;
}



// decompiled code
// original method signature: 
// void FUN_80157300(int param_1,int param_2,short param_3,short param_4,byte param_5);
 // line -1, offset 0x80157300
// function 'FUN_80157300' @0x80157300 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80157300(int param_1,int param_2,short param_3,short param_4,byte param_5)

{
	char cVar1;
	int iVar2;
	short sVar3;
	POLY_FT4 *pPVar4;
	uint uVar5;
	short sVar6;
	
	pPVar4 = PrintFt4__7TextDatiiiiii(pTGp00001b88,0x94,param_1,param_2,0,iGp00001b80,0);
	sVar3 = (short)param_1 + 0x81;
	sVar6 = (short)param_1 + param_3 + 0x7f;
	pPVar4->x0 = sVar3;
	pPVar4->x1 = sVar6;
	pPVar4->x2 = sVar3;
	pPVar4->x3 = sVar6;
	sVar3 = (short)param_2 - (short)uGp00001bb0;
	sVar6 = sVar3 + 0x21;
	pPVar4->y0 = sVar6;
	pPVar4->y1 = sVar6;
	sVar3 = sVar3 + param_4 + 0x1f;
	pPVar4->y2 = sVar3;
	pPVar4->y3 = sVar3;
	pPVar4->tpage = pPVar4->tpage | 0x40;
	pPVar4->u1 = pPVar4->u0 + '\x01';
	pPVar4->u3 = pPVar4->u0 + '\x01';
	pPVar4->v2 = pPVar4->v0 + '\x01';
	pPVar4->v3 = pPVar4->v0 + '\x01';
	pPVar4->code = pPVar4->code & 0xfe | 2;
	iVar2 = myplr;
	if (param_5 == 1) {
		pPVar4->r0 = -0x30;
		pPVar4->g0 = '\0';
		pPVar4->b0 = '\0';
		pPVar4->tpage = pPVar4->tpage | 0x20;
	}
	else {
		if (param_5 < 2) {
			if (param_5 == 0) {
				pPVar4->r0 = ' ';
				pPVar4->g0 = ' ';
				pPVar4->b0 = ' ';
				pPVar4->tpage = pPVar4->tpage | 0x40;
			}
		}
		else {
			if (param_5 == 2) {
				pPVar4->tpage = pPVar4->tpage | 0x20;
				uVar5 = (&_pcurs)[iVar2];
				cVar1 = (char)iGp00001b90;
				if (uVar5 == (uint)param_5) {
					pPVar4->r0 = '\0';
					pPVar4->g0 = '\0';
				}
				else {
					if (uVar5 == 3) {
						pPVar4->r0 = cVar1 + -0x80;
						pPVar4->b0 = '\0';
						pPVar4->g0 = cVar1 + -0x80;
						return;
					}
					if (uVar5 == 4) {
						pPVar4->g0 = '\0';
						pPVar4->r0 = cVar1 + -0x80;
					}
					else {
						if (0xb < (int)uVar5) {
							pPVar4->r0 = cVar1 + -0x80;
							pPVar4->g0 = (uchar)(iGp00001b90 + 0x80 >> 2);
							pPVar4->b0 = (uchar)(iGp00001b90 + 0x80 >> 2);
							return;
						}
						pPVar4->r0 = cVar1 + -0x80;
						pPVar4->g0 = cVar1 + -0x80;
					}
				}
				pPVar4->b0 = cVar1 + -0x80;
			}
			else {
				if (param_5 == 3) {
					pPVar4->r0 = -0x80;
					cVar1 = (char)(iGp00001b90 >> 2);
					pPVar4->g0 = cVar1 + ' ';
					pPVar4->tpage = pPVar4->tpage | 0x20;
					pPVar4->b0 = cVar1 + ' ';
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_801575b8(int param_1,int param_2,int param_3,char param_4,int param_5);
 // line -1, offset 0x801575b8
// function 'FUN_801575b8' @0x801575B8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801575b8(int param_1,int param_2,int param_3,char param_4,int param_5)

{
	byte bVar1;
	byte bVar2;
	POLY_FT4 *pPVar3;
	TextDat *this;
	
	this = pTGp00001b8c;
	if (param_3 < 0x32) {
		this = pTGp00001b88;
	}
	pPVar3 = PrintFt4__7TextDatiiiiii
										 (this,InvGfxTable[param_3],param_1 + 0x80,(param_2 - iGp00001bb0) + 0x20,0,
											iGp00001b84,0);
	bVar2 = pPVar3->code;
	bVar1 = bVar2 & 0xfe;
	pPVar3->code = bVar1;
	if (param_5 == 0) {
		bVar2 = bVar2 & 0xfc;
	}
	else {
		bVar2 = bVar1 | 2;
	}
	pPVar3->code = bVar2;
	if (param_4 == '\0') {
		pPVar3->r0 = -0x80;
		pPVar3->g0 = '\0';
		pPVar3->b0 = '\0';
	}
	else {
		pPVar3->r0 = -0x80;
		pPVar3->g0 = -0x80;
		pPVar3->b0 = -0x80;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80157688(void);
 // line -1, offset 0x80157688
// function 'FUN_80157688' @0x80157688 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80157688(void)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	byte *pbVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar7 = InvRect.Y;
	iVar5 = InvRect.X;
	iGp00001b90 = iGp00001b90 + iGp00001b94;
	if (0 < iGp00001b90) {
		iGp00001b90 = 0;
		iGp00001b94 = -8;
	}
	if (iGp00001b90 < -0x7f) {
		iGp00001b90 = -0x7f;
		iGp00001b94 = 8;
	}
	iVar4 = 200;
	iVar6 = 0x19;
	FUN_8015727c(InvRect.X,InvRect.Y,0x5c);
	FUN_80157300(iVar5,iVar7,0x20,0x20,(uint)InvSlotTable);
	iVar7 = InvXY_8010d050.Y;
	iVar5 = InvXY_8010d050.X;
	FUN_8015727c(InvXY_8010d050.X,InvXY_8010d050.Y,0x5b);
	FUN_80157300(iVar5,iVar7,0x10,0x10,(uint)UCHAR_00h_8010d684);
	iVar7 = InvXY_8010d058.Y;
	iVar5 = InvXY_8010d058.X;
	FUN_8015727c(InvXY_8010d058.X,InvXY_8010d058.Y,0x5b);
	FUN_80157300(iVar5,iVar7,0x10,0x10,(uint)UCHAR_00h_8010d685);
	iVar7 = InvXY_8010d060.Y;
	iVar5 = InvXY_8010d060.X;
	FUN_8015727c(InvXY_8010d060.X,InvXY_8010d060.Y,0x5b);
	FUN_80157300(iVar5,iVar7,0x10,0x10,(uint)UCHAR_00h_8010d686);
	iVar7 = InvXY_ARRAY_8010d068[0].Y;
	iVar5 = InvXY_ARRAY_8010d068[0].X;
	FUN_8015727c(InvXY_ARRAY_8010d068[0].X,InvXY_ARRAY_8010d068[0].Y,0x5d);
	FUN_80157300(iVar5,iVar7,0x20,0x30,(uint)s__8010d687[0]);
	iVar7 = InvXY_ARRAY_8010d098[0].Y;
	iVar5 = InvXY_ARRAY_8010d098[0].X;
	FUN_8015727c(InvXY_ARRAY_8010d098[0].X,InvXY_ARRAY_8010d098[0].Y,0x5d);
	FUN_80157300(iVar5,iVar7,0x20,0x30,(uint)s__8010d68d[0]);
	iVar7 = InvXY_ARRAY_8010d0c8[0].Y;
	iVar5 = InvXY_ARRAY_8010d0c8[0].X;
	FUN_8015727c(InvXY_ARRAY_8010d0c8[0].X,InvXY_ARRAY_8010d0c8[0].Y,0x5d);
	FUN_80157300(iVar5,iVar7,0x20,0x30,(uint)s__8010d693[0]);
	FUN_8015727c(InvXY_8010d0f8.X,InvXY_8010d0f8.Y,0x5f);
	do {
		puVar1 = (undefined4 *)((int)&InvRect.X + iVar4);
		puVar2 = (undefined4 *)((int)&InvRect.Y + iVar4);
		iVar4 = iVar4 + 8;
		pbVar3 = &InvSlotTable + iVar6;
		iVar6 = iVar6 + 1;
		FUN_80157300(*puVar1,*puVar2,0x10,0x10,(uint)*pbVar3);
	} while (iVar4 < 0x208);
	iVar5 = 0x208;
	iVar7 = 0x41;
	FUN_8015727c(InvXY_8010d238.X,InvXY_8010d238.Y,0x5e);
	do {
		puVar1 = (undefined4 *)((int)&InvRect.X + iVar5);
		puVar2 = (undefined4 *)((int)&InvRect.Y + iVar5);
		iVar5 = iVar5 + 8;
		pbVar3 = &InvSlotTable + iVar7;
		iVar7 = iVar7 + 1;
		FUN_80157300(*puVar1,*puVar2,0x10,0x10,(uint)*pbVar3);
	} while (iVar5 < 0x248);
	return;
}



// decompiled code
// original method signature: 
// void FUN_801579a0(int iParm1,int iParm2,char *pcParm3);
 // line -1, offset 0x801579a0
// function 'FUN_801579a0' @0x801579A0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801579a0(int iParm1,int iParm2,char *pcParm3)

{
	char *Str;
	uint G;
	uint R;
	
	Str = GetStr__Fi(iParm2);
	R = (uint)WHITER;
	G = (uint)WHITEG;
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,iParm1,Str,JustLeft,&BRect,R,G,G);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,iParm1,pcParm3,JustRight,&BRect,R,G,G);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80157a6c(void);
 // line -1, offset 0x80157a6c
// function 'FUN_80157a6c' @0x80157A6C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80157a6c(void)

{
	ushort uVar1;
	uint uVar2;
	char *__format;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	Dialog DStack56;
	char acStack40 [16];
	
	FUN_80161ea8(&DStack56);
	SetOTpos__6Dialogi(&DStack56,0xf9);
	FUN_80161e78(&DStack56,5);
	FUN_80161e58(&DStack56,(uint)BORDERR,(uint)BORDERG,(uint)BORDERB);
	Back__6Dialogiiii(&DStack56,10,0x20,0x74,0xb0);
	uGp00001bd4 = 0xb;
	uGp00001bd6 = 0x20;
	uGp00001bd8 = 0x72;
	uGp00001bda = 0xb0;
	uVar2 = (uint)((&plr)[options_pad]._pBaseStr < (&plr)[options_pad]._pStrength);
	if ((&plr)[options_pad]._pStrength < (&plr)[options_pad]._pBaseStr) {
		uVar2 = 2;
	}
	__format = GetStr__Fi(0x4fd);
	sprintf(acStack40,__format,(int)(&plr)[options_pad]._pStrength);
	FUN_801579a0(0xc,0x419,acStack40,uVar2);
	uVar2 = (uint)((&plr)[options_pad]._pBaseMag < (&plr)[options_pad]._pMagic);
	if ((&plr)[options_pad]._pMagic < (&plr)[options_pad]._pBaseMag) {
		uVar2 = 2;
	}
	__format = GetStr__Fi(0x4fd);
	sprintf(acStack40,__format,(int)(&plr)[options_pad]._pMagic);
	FUN_801579a0(0x19,0x26f,acStack40,uVar2);
	uVar2 = (uint)((&plr)[options_pad]._pBaseDex < (&plr)[options_pad]._pDexterity);
	if ((&plr)[options_pad]._pDexterity < (&plr)[options_pad]._pBaseDex) {
		uVar2 = 2;
	}
	__format = GetStr__Fi(0x4fd);
	sprintf(acStack40,__format,(int)(&plr)[options_pad]._pDexterity);
	FUN_801579a0(0x26,0xff,acStack40,uVar2);
	uVar2 = (uint)((&plr)[options_pad]._pBaseVit < (&plr)[options_pad]._pVitality);
	if ((&plr)[options_pad]._pVitality < (&plr)[options_pad]._pBaseVit) {
		uVar2 = 2;
	}
	__format = GetStr__Fi(0x4fd);
	sprintf(acStack40,__format,(int)(&plr)[options_pad]._pVitality);
	FUN_801579a0(0x32,0x4b7,acStack40,uVar2);
	iVar7 = (&plr)[options_pad]._pIBonusToHit;
	uVar2 = (uint)(0 < iVar7);
	if (iVar7 < 0) {
		uVar2 = 2;
	}
	uVar1 = (&plr)[options_pad]._pDexterity;
	__format = GetStr__Fi(0x503);
	sprintf(acStack40,__format,((int)((uint)uVar1 << 0x10) >> 0x11) + iVar7 + 0x32);
	FUN_801579a0(0x40,0x495,acStack40,uVar2);
	iVar7 = (&plr)[options_pad]._pIBonusDam;
	uVar2 = (uint)(0 < iVar7);
	if (iVar7 < 0) {
		uVar2 = 2;
	}
	iVar10 = (&plr)[options_pad]._pIMinDam;
	iVar8 = (&plr)[options_pad]._pIBonusDamMod;
	if (((&plr)[options_pad].InvBody[4]._itype == 3) && ((&plr)[options_pad]._pClass != '\x01')) {
		iVar3 = (&plr)[options_pad]._pDamageMod >> 1;
	}
	else {
		iVar3 = (&plr)[options_pad]._pDamageMod;
	}
	iVar9 = (&plr)[options_pad]._pIMaxDam;
	iVar4 = (&plr)[options_pad]._pIBonusDam;
	iVar5 = (&plr)[options_pad]._pIBonusDamMod;
	if (((&plr)[options_pad].InvBody[4]._itype == 3) && ((&plr)[options_pad]._pClass != '\x01')) {
		iVar6 = (&plr)[options_pad]._pDamageMod >> 1;
	}
	else {
		iVar6 = (&plr)[options_pad]._pDamageMod;
	}
	__format = GetStr__Fi(0x501);
	sprintf(acStack40,__format,iVar10 + (iVar10 * iVar7) / 100 + iVar8 + iVar3,
					iVar9 + (iVar9 * iVar4) / 100 + iVar5 + iVar6);
	FUN_801579a0(0x4d,0xe1,acStack40,uVar2);
	iVar7 = (&plr)[options_pad]._pMaxHP;
	uVar2 = (uint)((&plr)[options_pad]._pMaxHPBase < iVar7);
	if ((&plr)[options_pad]._pHitPoints != iVar7) {
		uVar2 = 2;
	}
	sprintf(acStack40,"%i/%i",(&plr)[options_pad]._pHitPoints >> 6,iVar7 >> 6);
	FUN_801579a0(0x5c,0x24d,acStack40,uVar2);
	iVar7 = (&plr)[options_pad]._pMaxMana;
	uVar2 = (uint)((&plr)[options_pad]._pMaxManaBase < iVar7);
	if ((&plr)[options_pad]._pMana != iVar7) {
		uVar2 = 2;
	}
	sprintf(acStack40,"%i/%i",(&plr)[options_pad]._pMana >> 6,iVar7 >> 6);
	FUN_801579a0(0x68,0x27a,acStack40,uVar2);
	iVar7 = (&plr)[options_pad]._pIBonusAC;
	uVar2 = (uint)(0 < iVar7);
	if (iVar7 < 0) {
		uVar2 = 2;
	}
	iVar10 = (uint)(ushort)(&plr)[options_pad]._pDexterity << 0x10;
	iVar8 = iVar10 >> 0x10;
	iVar3 = (&plr)[options_pad]._pIAC;
	__format = GetStr__Fi(0x4fd);
	sprintf(acStack40,__format,
					iVar3 + iVar7 + (((iVar8 / 5 + (iVar8 >> 0x1f)) - (iVar10 >> 0x1f)) * 0x10000 >> 0x10));
	FUN_801579a0(0x75,0x2a,acStack40,uVar2);
	uVar2 = (uint)((&plr)[options_pad]._pMagResist != '\0');
	if ((&plr)[options_pad]._pMagResist < 'K') {
		__format = GetStr__Fi(0x503);
		sprintf(acStack40,__format,(int)(&plr)[options_pad]._pMagResist);
	}
	else {
		uVar2 = 3;
		__format = GetStr__Fi(0x285);
		sprintf(acStack40,__format);
	}
	FUN_801579a0(0x84,0x273,acStack40,uVar2);
	uVar2 = (uint)((&plr)[options_pad]._pFireResist != '\0');
	if ((&plr)[options_pad]._pFireResist < 'K') {
		__format = GetStr__Fi(0x503);
		sprintf(acStack40,__format,(int)(&plr)[options_pad]._pFireResist);
	}
	else {
		uVar2 = 3;
		__format = GetStr__Fi(0x285);
		sprintf(acStack40,__format);
	}
	FUN_801579a0(0x91,0x157,acStack40,uVar2);
	uVar2 = (uint)((&plr)[options_pad]._pLghtResist != '\0');
	if ((&plr)[options_pad]._pLghtResist < 'K') {
		__format = GetStr__Fi(0x503);
		sprintf(acStack40,__format,(int)(&plr)[options_pad]._pLghtResist);
	}
	else {
		uVar2 = 3;
		__format = GetStr__Fi(0x285);
		sprintf(acStack40,__format);
	}
	FUN_801579a0(0x9e,0x254,acStack40,uVar2);
	__format = GetStr__Fi(0x4fd);
	sprintf(acStack40,__format,(&plr)[options_pad]._pGold);
	FUN_801579a0(0xac,0x191,acStack40,0);
	FUN_80161e80(&DStack56,2);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80158358(void);
 // line -1, offset 0x80158358
// function 'FUN_80158358' @0x80158358 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80158358(void)

{
	char *__format;
	int in_v1;
	uint uVar1;
	char *__s;
	
	uVar1 = (uint)((&plr)[*(int *)(in_v1 + -0x4db0)]._pFireResist != '\0');
	if ((&plr)[*(int *)(in_v1 + -0x4db0)]._pFireResist < 'K') {
		__format = GetStr__Fi(0x503);
		sprintf(__s,__format,(int)(&plr)[options_pad]._pFireResist);
	}
	else {
		uVar1 = 3;
		__format = GetStr__Fi(0x285);
		sprintf(__s,__format);
	}
	FUN_801579a0(0x91,0x157,&stack0x00000028,uVar1);
	uVar1 = (uint)((&plr)[options_pad]._pLghtResist != '\0');
	if ((&plr)[options_pad]._pLghtResist < 'K') {
		__format = GetStr__Fi(0x503);
		sprintf(&stack0x00000028,__format,(int)(&plr)[options_pad]._pLghtResist);
	}
	else {
		uVar1 = 3;
		__format = GetStr__Fi(0x285);
		sprintf(&stack0x00000028,__format);
	}
	FUN_801579a0(0x9e,0x254,&stack0x00000028,uVar1);
	__format = GetStr__Fi(0x4fd);
	sprintf(&stack0x00000028,__format,(&plr)[options_pad]._pGold);
	FUN_801579a0(0xac,0x191,&stack0x00000028,0);
	FUN_80161e80(&stack0x00000018,2);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80158588(void);
 // line -1, offset 0x80158588
// function 'FUN_80158588' @0x80158588 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80158588(void)

{
	Dialog DStack24;
	
	FUN_80161ea8(&DStack24);
	SetOTpos__6Dialogi(&DStack24,iGp00001b78);
	FUN_80161e78(&DStack24,5);
	FUN_80161e58(&DStack24,(uint)BORDERR,(uint)BORDERG,(uint)BORDERB);
	Back__6Dialogiiii(&DStack24,0x80,0x80 - iGp00001bb0,0xb0,0xbe);
	Back__6Dialogiiii(&DStack24,0x80,0x20 - iGp00001bb0,0xb0,0x5e);
	FUN_80161e80(&DStack24,2);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80158634(void);
 // line -1, offset 0x80158634
// function 'FUN_80158634' @0x80158634 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80158634(void)

{
	byte bVar1;
	short sVar2;
	byte bVar3;
	uchar uVar4;
	POLY_FT4 *pPVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	TextDat *this;
	
	uGp00001bcc = 1;
	uGp00001bc8 = 1;
	if ((&_pcurs)[myplr] < 0xc) {
		if ((&(&plr)[myplr].InvList[0x27]._iPLMag)[iGp00001bb4] != '\0') {
			FUN_8016135c();
			FUN_801610b0(iGp00001bb4 + -0x19);
		}
		if (0x40 < iGp00001bb4) {
			uGp00001bcc = 1;
			uGp00001bc8 = 1;
		}
		iVar6 = 0;
		if (0 < (int)uGp00001bcc) {
			iVar8 = 0;
			do {
				iVar7 = 0;
				if (0 < (int)uGp00001bc8) {
					do {
						(&InvSlotTable)[iVar8 + iGp00001bb4 + iVar7] = '\x02';
						iVar7 = iVar7 + 1;
					} while (iVar7 < (int)uGp00001bc8);
				}
				iVar6 = iVar6 + 1;
				iVar8 = iVar8 + 10;
			} while (iVar6 < (int)uGp00001bcc);
		}
		if (((&_pcurs)[myplr] - 2U < 2) || ((&_pcurs)[myplr] == 4)) {
			switch(iGp00001bb4) {
			case 0:
				uGp00001bc8 = 2;
				uGp00001bcc = uGp00001bc8;
				break;
			default:
				uGp00001bc8 = 1;
				uGp00001bcc = 1;
				FUN_801610b0(iGp00001bb4 + -0x19);
				break;
			case 4:
			case 5:
			case 6:
				uGp00001bc8 = 1;
				uGp00001bcc = uGp00001bc8;
				break;
			case 7:
			case 0xd:
			case 0x13:
				uGp00001bc8 = 2;
				uGp00001bcc = 3;
			}
			iVar8 = (&InvRect)[iGp00001bb4].X + 8;
			iVar6 = (&InvRect)[iGp00001bb4].Y + 8;
			if (uGp00001bc8 == 2) {
				iVar8 = (&InvRect)[iGp00001bb4].X + 0x10;
			}
			if (uGp00001bcc == 2) {
				iVar6 = (&InvRect)[iGp00001bb4].Y + 0x10;
			}
			if (uGp00001bcc == 3) {
				iVar6 = iVar6 + 0x10;
			}
			PrintFt4__7TextDatiiiiii
								(pTGp00001b8c,(&_pcurs)[myplr] + -2,iVar8 + 0x80,(iVar6 - iGp00001bb0) + 0x20,0,
								 0x100,0);
		}
	}
	else {
		sVar2 = (&plr)[myplr].HoldItem._itype;
		if (sVar2 != -1) {
			if (sVar2 == 0xb) {
				iVar6 = (&plr)[myplr].HoldItem._ivalue;
				if (iVar6 < 0x9c4) {
					uVar4 = '\x04';
					if (1000 < iVar6) {
						uVar4 = '\x05';
					}
				}
				else {
					uVar4 = '\x06';
				}
				(&plr)[myplr].HoldItem._iCurs = uVar4;
			}
			bVar1 = (&plr)[myplr].HoldItem._iCurs;
			uGp00001bd0 = (uint)bVar1;
			iVar8 = (&InvRect)[iGp00001bb4].X;
			iVar6 = (&InvRect)[iGp00001bb4].Y;
			uGp00001bc8 = (uint)(s__8010d524[uGp00001bd0] >> 4);
			bVar3 = s__0000000000000000000_00000000000_8010d5d8[uGp00001bd0] >> 4;
			uGp00001bcc = (uint)bVar3;
			this = pTGp00001b8c;
			if (bVar1 < 0x32) {
				this = pTGp00001b88;
			}
			if (((iGp00001bb4 == 7) || (iGp00001bb4 == 0x13)) || (iGp00001bb4 == 0xd)) {
				if (s__8010d524[uGp00001bd0] >> 4 == 1) {
					iVar8 = iVar8 + 8;
				}
				if (bVar3 == 1) {
					iVar6 = iVar6 + 0x10;
				}
				if (bVar3 == 2) {
					iVar6 = iVar6 + 8;
				}
			}
			pPVar5 = PrintFt4__7TextDatiiiiii
												 (this,InvGfxTable[uGp00001bd0],iVar8 + 0x7a,(iVar6 - iGp00001bb0) + 0x1a,0,
													iGp00001b84 + 1,0);
			pPVar5->code = pPVar5->code & 0xfc;
			if ((&plr)[myplr].HoldItem._iStatFlag == '\0') {
				pPVar5->r0 = -0x80;
				pPVar5->g0 = '\0';
				pPVar5->b0 = '\0';
			}
			else {
				pPVar5->r0 = -0x80;
				pPVar5->g0 = -0x80;
				pPVar5->b0 = -0x80;
			}
			pPVar5 = PrintFt4__7TextDatiiiiii
												 (this,InvGfxTable[uGp00001bd0],iVar8 + 0x82,(iVar6 - iGp00001bb0) + 0x22,0,
													iGp00001b84 + 1,0);
			pPVar5->r0 = '\x10';
			pPVar5->g0 = '\x10';
			pPVar5->b0 = '\x10';
			pPVar5->code = pPVar5->code & 0xfe | 2;
			(&InvSlotTable)[iGp00001bb4] = (&InvSlotTable)[iGp00001bb4] | 2;
		}
	}
	if ((0x18 < iGp00001bb4) && (iVar6 = 0, 0 < (int)uGp00001bcc)) {
		iVar8 = 0;
		do {
			iVar7 = 0;
			if (0 < (int)uGp00001bc8) {
				do {
					(&InvSlotTable)[iVar8 + iGp00001bb4 + iVar7] =
							 (&InvSlotTable)[iVar8 + iGp00001bb4 + iVar7] | 2;
					iVar7 = iVar7 + 1;
				} while (iVar7 < (int)uGp00001bc8);
			}
			iVar6 = iVar6 + 1;
			iVar8 = iVar8 + 10;
		} while (iVar6 < (int)uGp00001bcc);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80158c00(void);
 // line -1, offset 0x80158c00
// function 'FUN_80158c00' @0x80158C00 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80158c00(void)

{
	int Depth;
	POLY_FT4 *pPVar1;
	RECT local_30;
	Dialog DStack40;
	
	FUN_80161ea8(&DStack40);
	Depth = SetOTpos__5CFonti(&MediumFont,0xfa);
	SetOTpos__5CFonti(&MediumFont,Depth + -1);
	PRIM_FullScreen__Fi(Depth);
	local_30.x = 0x80;
	local_30.y = 0x81;
	local_30.w = 0xb0;
	local_30.h = 0x4e;
	if (cGp00001bac != '\0') {
		DrawInfoBox__FP4RECT(&local_30);
	}
	SetOTpos__6Dialogi(&DStack40,0xf9);
	FUN_80161e78(&DStack40,5);
	FUN_80161e58(&DStack40,(uint)BORDERR,(uint)BORDERG,(uint)BORDERB);
	Back__6Dialogiiii(&DStack40,0x80,0x80,0xb0,0x50);
	pPVar1 = PrintFt4__7TextDatiiiiii(pTGp00001b88,0x94,0,0,0,Depth,0);
	pPVar1->y2 = 0xd0;
	pPVar1->y3 = 0xd0;
	pPVar1->r0 = ' ';
	pPVar1->g0 = ' ';
	pPVar1->b0 = ' ';
	pPVar1->x1 = 0x130;
	pPVar1->x3 = 0x130;
	pPVar1->x0 = 0x80;
	pPVar1->y0 = 0x80;
	pPVar1->y1 = 0x80;
	pPVar1->x2 = 0x80;
	pPVar1->tpage = pPVar1->tpage | 0x40;
	pPVar1->u1 = pPVar1->u0 + '\x01';
	pPVar1->u3 = pPVar1->u0 + '\x01';
	pPVar1->v2 = pPVar1->v0 + '\x01';
	pPVar1->v3 = pPVar1->v0 + '\x01';
	pPVar1->code = pPVar1->code & 0xfe | 2;
	SetOTpos__5CFonti(&MediumFont,Depth);
	PRIM_Clip__FP4RECTi(&local_30,Depth);
	FUN_80161e80(&DStack40,2);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80158dcc(void);
 // line -1, offset 0x80158dcc
// function 'FUN_80158dcc' @0x80158DCC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80158dcc(void)

{
	LANG_TYPE LVar1;
	char *pcVar2;
	char *pcVar3;
	char *__format;
	int StrId;
	char local_88 [128];
	
	local_88[0] = '\0';
	LVar1 = LANG_GetLang__Fv();
	if (LVar1 == LANG_FRENCH) {
		StrId = (&_pcurs)[myplr];
		if (StrId == 2) {
			pcVar2 = GetStr__Fi(0x331);
			pcVar3 = GetStr__Fi(0x208);
			__format = "%s  _ %s";
		}
		else {
			if (StrId == 3) {
				pcVar2 = GetStr__Fi(0x331);
				pcVar3 = GetStr__Fi(0x35a);
				__format = "%s  _ %s";
			}
			else {
				if (StrId == 4) {
					pcVar2 = GetStr__Fi(0x331);
					pcVar3 = GetStr__Fi(0x34c);
					__format = "%s  _ %s";
				}
				else {
					if (StrId < 0xc) {
LAB_80158f9c:
						__format = GetStr__Fi(0x4e6);
						sprintf(local_88,(char *)&PTR_DAT_8011c320,__format);
						goto LAB_80158fb8;
					}
					pcVar2 = GetStr__Fi(0x4e6);
					pcVar3 = GetStr__Fi(0x11d);
					__format = "%s  < %s";
				}
			}
		}
	}
	else {
		StrId = (&_pcurs)[myplr];
		if (StrId == 2) {
			pcVar2 = GetStr__Fi(0x208);
			pcVar3 = GetStr__Fi(0x331);
			__format = "_ %s  %s";
		}
		else {
			if (StrId == 3) {
				pcVar2 = GetStr__Fi(0x35a);
				pcVar3 = GetStr__Fi(0x331);
				__format = "_ %s  %s";
			}
			else {
				if (StrId == 4) {
					pcVar2 = GetStr__Fi(0x34c);
					pcVar3 = GetStr__Fi(0x331);
					__format = "_ %s  %s";
				}
				else {
					if (StrId < 0xc) goto LAB_80158f9c;
					pcVar2 = GetStr__Fi(0x11d);
					pcVar3 = GetStr__Fi(0x4e6);
					__format = "< %s  %s";
				}
			}
		}
	}
	sprintf(local_88,__format,pcVar2,pcVar3);
LAB_80158fb8:
	if (iGp00001bb0 == 0) {
		SetChar__5CFontiUs(&MediumFont,0x2e,0x80);
		StrId = 0x2fe;
	}
	else {
		SetChar__5CFontiUs(&MediumFont,0x2e,0x7f);
		StrId = 0x132;
	}
	__format = GetStr__Fi(StrId);
	sprintf(local_88,"%s  . %s ",local_88,__format);
	if (iGp00001bbc != 0) {
		__format = GetStr__Fi(0x2a4);
		sprintf(local_88,"%s  | %s ",local_88,__format);
	}
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,0,0xe0,local_88,JustCentre,(RECT *)0x0,(uint)WHITER,(uint)WHITEG,
						 (uint)WHITEB);
	SetChar__5CFontiUs(&MediumFont,0x2e,0x6d);
	return;
}



// decompiled code
// original method signature: 
// void FUN_801590b4(void);
 // line -1, offset 0x801590b4
// function 'FUN_801590b4' @0x801590B4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801590b4(void)

{
	if (iGp00001ba4 == 0) {
		iGp00001ba4 = 1;
		uGp00001bbc = 0;
		uGp00001bb8 = 0;
		TSK_AddTask(0,FUN_801590fc,0x1000,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_801590fc(void);
 // line -1, offset 0x801590fc
// function 'FUN_801590fc' @0x801590FC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801590fc(void)

{
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	uchar uVar5;
	CPad *this;
	int Id;
	CBlocks *this_00;
	int OT;
	uint uVar6;
	
	iVar4 = myplr;
	iVar3 = sel_data;
	if ((cGp00001bac == '\0') || (options_pad == -1)) {
		options_pad = -1;
		uGp00001ba4 = 0;
		cGp00001bac = 0;
		return;
	}
	myplr = options_pad;
	this = PAD_GetPad__FiUc(options_pad,'\0');
	Flush__4CPad(this);
	CDWAIT = &DAT_00000001;
	PauseMode = '\x01';
	GLUE_SuspendGame__Fv();
	if (sghMusic != (SFXHDR *)0x0) {
		Id = sghMusic->sec_num;
		while (Id < 4) {
			PauseMode = '\x01';
			GLUE_SuspendGame__Fv();
			TSK_Sleep(1);
			Id = sghMusic->sec_num;
		}
	}
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	TSK_Sleep(1);
	stream_stop__Fv();
	while (SFXHDR_800b9c64.used != '\0') {
		stream_stop__Fv();
		TSK_Sleep(1);
	}
	GLUE_SuspendGame__Fv();
	GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
	TSK_Sleep(1);
	VID_SetDBuffer__Fb(&DAT_00000001);
	if (_spselflag2 != (TASK *)0x0) {
		TSK_Kill(_spselflag2);
	}
	if (PTR_8011b654 != (TASK *)0x0) {
		TSK_Kill(PTR_8011b654);
	}
	_spselflag2 = (TASK *)0x0;
	PTR_8011b654 = (TASK *)0x0;
	_trigflag[sel_data] = '\0';
	ClrCursor__Fi(0);
	ClrCursor__Fi(1);
	this_00 = BL_GetCurrentBlocks__Fv();
	if (leveltype == '\0') {
		FUN_80161f28(this_00);
	}
	if (pTGp00001b8c == (TextDat *)0x0) {
		pTGp00001b8c = GM_UseTexData__Fi(0xcf);
	}
	if ((&_pcurs)[myplr] == 9) {
		(&_pcurs)[myplr] = 1;
	}
	bVar1 = true;
	FUN_8016135c();
	VID_SetDBuffer__Fb((void *)0x0);
	TSK_Sleep(1);
	Id = options_pad;
	CDWAIT = (void *)0x0;
	PauseMode = '\0';
LAB_8015938c:
	do {
		bVar2 = !bVar1;
		bVar1 = false;
		if (bVar2) {
			ClearPanel__Fv();
			stream_stop__Fv();
			while (SFXHDR_800b9c64.used != '\0') {
				stream_stop__Fv();
				TSK_Sleep(1);
			}
			VID_SetDBuffer__Fb(&DAT_00000001);
			CDWAIT = &DAT_00000001;
			PauseMode = '\x01';
			GM_FinishedUsing__FP7TextDat(pTGp00001b8c);
			pTGp00001b8c = (TextDat *)0x0;
			if (leveltype == '\0') {
				SetTownersGraphics__7CBlocks(this_00);
				Id = 0xcd;
			}
			else {
				Id = 0xd0;
			}
			GM_ForceTpLoad__Fi(Id);
			CDWAIT = (void *)0x0;
			PauseMode = '\0';
			VID_SetDBuffer__Fb((void *)0x0);
			ClearPanel__Fv();
			uGp00001ba4 = 0;
			if ((options_pad < 0) || ((&ScrollFlag)[options_pad] == 0)) {
				(&_pcurs)[myplr] = 1;
			}
			else {
				PostGamePad__Fiiii(5,0,0,0);
				options_pad = -1;
			}
			ClrCursor__Fi(0);
			ClrCursor__Fi(1);
			cGp00001bac = 0;
			sel_data = iVar3;
			myplr = iVar4;
			GLUE_ResumeGame__Fv();
			GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
			GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
			GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
			return;
		}
		cGp00001bac = '\x01';
		options_pad = Id;
		do {
			if ((cGp00001bac == '\0') || (options_pad < 0)) goto LAB_8015949c;
			OT = SetOTpos__5CFonti(&MediumFont,0xfc);
			myplr = options_pad;
			sel_data = options_pad;
			FUN_80160cf4();
			if (options_pad != -1) {
				myplr = options_pad;
				sel_data = options_pad;
				FUN_80159714();
			}
			SetOTpos__5CFonti(&MediumFont,OT);
			GLUE_SuspendGame__Fv();
			TSK_Sleep(1);
		} while (0 < (&plr)[options_pad]._pHitPoints >> 6);
		PostGamePad__Fiiii(5,0,0,0);
		options_pad = -1;
LAB_8015949c:
		OT = (&_pcurs)[myplr];
		if ((OT - 2U < 2) || (OT == 4)) {
			(&_pcurs)[myplr] = 1;
		}
	} while ((&_pcurs)[myplr] < 0xc);
	uVar6 = FUN_8015f020();
	if ((uVar6 & 0xff) == 0) goto code_r0x8015951c;
	goto LAB_80159558;
code_r0x8015951c:
	uVar5 = StoreAutoPlace__Fv();
	if (uVar5 == '\0') {
		if (numitems < 0x7a) {
LAB_80159558:
			NetSendCmdPItem__FUcUcUcUc('\x01','\n','\0','\0');
		}
		else {
			PlaySFX__Fi(IS_TITERR);
			bVar1 = true;
		}
	}
	goto LAB_8015938c;
}



// decompiled code
// original method signature: 
// void FUN_80159590(void);
 // line -1, offset 0x80159590
// function 'FUN_80159590' @0x80159590 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80159590(void)

{
	int Id;
	CBlocks *this;
	int unaff_s6;
	int unaff_s7;
	
	do {
		stream_stop__Fv();
		TSK_Sleep(1);
	} while (SFXHDR_800b9c64.used != '\0');
	VID_SetDBuffer__Fb(&DAT_00000001);
	CDWAIT = &DAT_00000001;
	PauseMode = '\x01';
	GM_FinishedUsing__FP7TextDat(pTGp00001b8c);
	pTGp00001b8c = (TextDat *)0x0;
	if (leveltype == '\0') {
		SetTownersGraphics__7CBlocks(this);
		Id = 0xcd;
	}
	else {
		Id = 0xd0;
	}
	GM_ForceTpLoad__Fi(Id);
	CDWAIT = (void *)0x0;
	PauseMode = '\0';
	VID_SetDBuffer__Fb((void *)0x0);
	ClearPanel__Fv();
	uGp00001ba4 = 0;
	if ((options_pad < 0) || ((&ScrollFlag)[options_pad] == 0)) {
		(&_pcurs)[myplr] = 1;
	}
	else {
		PostGamePad__Fiiii(5,0,0,0);
		options_pad = -1;
	}
	ClrCursor__Fi(0);
	ClrCursor__Fi(1);
	uGp00001bac = 0;
	sel_data = unaff_s7;
	myplr = unaff_s6;
	GLUE_ResumeGame__Fv();
	GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
	GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
	GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
	return;
}



// decompiled code
// original method signature: 
// void FUN_801595d4(TextDat *pTParm1);
 // line -1, offset 0x801595d4
// function 'FUN_801595d4' @0x801595D4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801595d4(TextDat *pTParm1)

{
	int Id;
	CBlocks *this;
	int unaff_s6;
	int unaff_s7;
	
	GM_FinishedUsing__FP7TextDat(pTParm1);
	uGp00001b8c = 0;
	if (leveltype == '\0') {
		SetTownersGraphics__7CBlocks(this);
		Id = 0xcd;
	}
	else {
		Id = 0xd0;
	}
	GM_ForceTpLoad__Fi(Id);
	CDWAIT = (void *)0x0;
	PauseMode = '\0';
	VID_SetDBuffer__Fb((void *)0x0);
	ClearPanel__Fv();
	uGp00001ba4 = 0;
	if ((options_pad < 0) || ((&ScrollFlag)[options_pad] == 0)) {
		(&_pcurs)[myplr] = 1;
	}
	else {
		PostGamePad__Fiiii(5,0,0,0);
		options_pad = -1;
	}
	ClrCursor__Fi(0);
	ClrCursor__Fi(1);
	uGp00001bac = 0;
	sel_data = unaff_s7;
	myplr = unaff_s6;
	GLUE_ResumeGame__Fv();
	GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
	GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
	GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80159650(void);
 // line -1, offset 0x80159650
// function 'FUN_80159650' @0x80159650 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80159650(void)

{
	int in_at;
	int unaff_s6;
	int unaff_s7;
	
	if (*(int *)(in_at + -0x4748) == 0) {
		(&_pcurs)[myplr] = 1;
	}
	else {
		PostGamePad__Fiiii(5,0,0,0);
		options_pad = -1;
	}
	ClrCursor__Fi(0);
	ClrCursor__Fi(1);
	uGp00001bac = 0;
	sel_data = unaff_s7;
	myplr = unaff_s6;
	GLUE_ResumeGame__Fv();
	GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
	GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
	GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80159678(void);
 // line -1, offset 0x80159678
// function 'FUN_80159678' @0x80159678 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80159678(void)

{
	int in_at;
	undefined4 in_v0;
	int unaff_s6;
	int unaff_s7;
	
	*(undefined4 *)(in_at + -0x4db0) = in_v0;
	ClrCursor__Fi(0);
	ClrCursor__Fi(1);
	uGp00001bac = 0;
	sel_data = unaff_s7;
	myplr = unaff_s6;
	GLUE_ResumeGame__Fv();
	GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
	GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
	GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80159714(void);
 // line -1, offset 0x80159714
// function 'FUN_80159714' @0x80159714 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80159714(void)

{
	uchar *puVar1;
	int iVar2;
	int iVar3;
	uint uVar4;
	undefined4 uVar5;
	int iVar6;
	int iVar7;
	RECT local_20;
	
	PRIM_FullScreen__Fi(0xfb);
	uGp00001bbc = 0;
	GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	iVar6 = 0x48;
	puVar1 = &UCHAR_00h_8010d6c8;
	do {
		*puVar1 = '\0';
		iVar6 = iVar6 + -1;
		puVar1 = puVar1 + -1;
	} while (-1 < iVar6);
	FUN_80158588();
	local_20.x = 0x7e;
	local_20.y = 0x1e;
	local_20.w = 0xb8;
	local_20.h = 0x60;
	PRIM_Clip__FP4RECTi(&local_20,iGp00001b74);
	FUN_80157a6c();
	FUN_80158c00();
	FUN_80158dcc();
	if ((&plr)[myplr].InvBody[0]._itype != -1) {
		InvSlotTable = '\x01';
		FUN_801575b8(InvRect.X,InvRect.Y,(uint)(&plr)[myplr].InvBody[0]._iCurs,
								 (uint)((&plr)[myplr].InvBody[0]._iStatFlag == '\x01'),0);
	}
	if ((&plr)[myplr].InvBody[1]._itype != -1) {
		UCHAR_00h_8010d684 = '\x01';
		FUN_801575b8(InvXY_8010d050.X,InvXY_8010d050.Y,(uint)(&plr)[myplr].InvBody[1]._iCurs,
								 (uint)((&plr)[myplr].InvBody[1]._iStatFlag == '\x01'),0);
	}
	if ((&plr)[myplr].InvBody[2]._itype != -1) {
		UCHAR_00h_8010d685 = '\x01';
		FUN_801575b8(InvXY_8010d058.X,InvXY_8010d058.Y,(uint)(&plr)[myplr].InvBody[2]._iCurs,
								 (uint)((&plr)[myplr].InvBody[2]._iStatFlag == '\x01'),0);
	}
	if ((&plr)[myplr].InvBody[3]._itype != -1) {
		UCHAR_00h_8010d686 = '\x01';
		FUN_801575b8(InvXY_8010d060.X,InvXY_8010d060.Y,(uint)(&plr)[myplr].InvBody[3]._iCurs,
								 (uint)((&plr)[myplr].InvBody[3]._iStatFlag == '\x01'),0);
	}
	if ((&plr)[myplr].InvBody[4]._itype != -1) {
		s__8010d687[0] = '\x01';
		uVar4 = (uint)(&plr)[myplr].InvBody[4]._iCurs;
		iVar6 = InvXY_ARRAY_8010d068[0].X;
		if (s__8010d524[uVar4] == '\x10') {
			iVar6 = InvXY_ARRAY_8010d068[0].X + 8;
		}
		iVar3 = InvXY_ARRAY_8010d068[0].Y;
		if (s__0000000000000000000_00000000000_8010d5d8[uVar4] == ' ') {
			iVar3 = InvXY_ARRAY_8010d068[0].Y + 8;
		}
		FUN_801575b8(iVar6,iVar3,uVar4,(uint)((&plr)[myplr].InvBody[4]._iStatFlag == '\x01'),0);
		if ((&plr)[myplr].InvBody[4]._iLoc == '\x02') {
			s__8010d68d[0] = '\x01';
			uVar4 = (uint)(&plr)[myplr].InvBody[4]._iCurs;
			iVar6 = InvXY_ARRAY_8010d098[0].X;
			if (s__8010d524[uVar4] == '\x10') {
				iVar6 = InvXY_ARRAY_8010d098[0].X + 8;
			}
			iVar3 = InvXY_ARRAY_8010d098[0].Y;
			if (s__0000000000000000000_00000000000_8010d5d8[uVar4] == ' ') {
				iVar3 = InvXY_ARRAY_8010d098[0].Y + 8;
			}
			FUN_801575b8(iVar6,iVar3,uVar4,(uint)((&plr)[myplr].InvBody[5]._iStatFlag == '\x01'),1);
		}
	}
	if ((&plr)[myplr].InvBody[5]._itype != -1) {
		s__8010d68d[0] = '\x01';
		uVar4 = (uint)(&plr)[myplr].InvBody[5]._iCurs;
		iVar6 = InvXY_ARRAY_8010d098[0].X;
		if (s__8010d524[uVar4] == '\x10') {
			iVar6 = InvXY_ARRAY_8010d098[0].X + 8;
		}
		iVar3 = InvXY_ARRAY_8010d098[0].Y;
		if (s__0000000000000000000_00000000000_8010d5d8[uVar4] == ' ') {
			iVar3 = InvXY_ARRAY_8010d098[0].Y + 8;
		}
		FUN_801575b8(iVar6,iVar3,uVar4,(uint)((&plr)[myplr].InvBody[5]._iStatFlag == '\x01'),0);
	}
	if ((&plr)[myplr].InvBody[6]._itype != -1) {
		s__8010d693[0] = '\x01';
		FUN_801575b8(InvXY_ARRAY_8010d0c8[0].X,InvXY_ARRAY_8010d0c8[0].Y,
								 (uint)(&plr)[myplr].InvBody[6]._iCurs,
								 (uint)((&plr)[myplr].InvBody[6]._iStatFlag == '\x01'),0);
	}
	iVar6 = 0;
	iVar3 = 200;
	iVar7 = 0x19;
	do {
		*(bool *)(&InvSlotTable + iVar7) = *(char *)(myplr * 0x19e8 + -0x7ff24540 + iVar6) != '\0';
		iVar2 = (int)*(char *)(myplr * 0x19e8 + -0x7ff24540 + iVar6);
		if ((0 < iVar2) && (iVar2 <= (&plr)[myplr]._pNumInv)) {
			uVar4 = (uint)(&plr)[myplr].InvList[iVar2 + -1]._iCurs;
			FUN_801575b8(*(undefined4 *)((int)&InvRect.X + iVar3),
									 (*(int *)((int)&InvRect.Y + iVar3) + 0x10) -
									 (uint)s__0000000000000000000_00000000000_8010d5d8[uVar4],uVar4,
									 (uint)((&plr)[myplr].InvList[iVar2 + -1]._iStatFlag == '\x01'),0);
		}
		iVar3 = iVar3 + 8;
		iVar6 = iVar6 + 1;
		iVar7 = iVar7 + 1;
	} while (iVar6 < 0x28);
	iVar6 = 0;
	iVar7 = 0x208;
	iVar2 = 0x41;
	iVar3 = 0;
	do {
		if (*(short *)((int)&(&plr)[myplr].SpdList[0]._itype + iVar3) != -1) {
			uVar5 = *(undefined4 *)((int)&InvRect.X + iVar7);
			(&InvSlotTable)[iVar2] = '\x01';
			FUN_801575b8(uVar5,*(undefined4 *)((int)&InvRect.Y + iVar7),
									 (uint)(&(&plr)[myplr].SpdList[0]._iCurs)[iVar3],
									 (uint)((&(&plr)[myplr].SpdList[0]._iStatFlag)[iVar3] == '\x01'),0);
		}
		iVar7 = iVar7 + 8;
		iVar2 = iVar2 + 1;
		iVar6 = iVar6 + 1;
		iVar3 = iVar3 + 0x6c;
	} while (iVar6 < 8);
	FUN_80158634();
	FUN_80157688();
	return;
}



// decompiled code
// original method signature: 
// void FUN_80159c74(int param_1);
 // line -1, offset 0x80159c74
// function 'FUN_80159c74' @0x80159C74 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80159c74(int param_1)

{
	uchar in_v0;
	int iVar1;
	uint uVar2;
	int in_t0;
	undefined4 uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	undefined4 param_5;
	
	param_5 = 0;
	s__8010d693[0] = in_v0;
	FUN_801575b8(*(undefined4 *)(in_t0 + -0x2f38),InvXY_ARRAY_8010d0c8[0].Y,
							 (uint)(&plr.InvBody[6]._iCurs)[param_1],
							 (uint)((&plr.InvBody[6]._iStatFlag)[param_1] == '\x01'));
	iVar4 = 0;
	iVar5 = 200;
	iVar6 = 0x19;
	do {
		*(bool *)(&InvSlotTable + iVar6) = *(char *)(myplr * 0x19e8 + -0x7ff24540 + iVar4) != '\0';
		iVar1 = (int)*(char *)(myplr * 0x19e8 + -0x7ff24540 + iVar4);
		if ((0 < iVar1) && (iVar1 <= (&plr)[myplr]._pNumInv)) {
			uVar2 = (uint)(&plr)[myplr].InvList[iVar1 + -1]._iCurs;
			param_5 = 0;
			FUN_801575b8(*(undefined4 *)((int)&InvRect.X + iVar5),
									 (*(int *)((int)&InvRect.Y + iVar5) + 0x10) -
									 (uint)s__0000000000000000000_00000000000_8010d5d8[uVar2],uVar2,
									 (uint)((&plr)[myplr].InvList[iVar1 + -1]._iStatFlag == '\x01'));
		}
		iVar5 = iVar5 + 8;
		iVar4 = iVar4 + 1;
		iVar6 = iVar6 + 1;
	} while (iVar4 < 0x28);
	iVar4 = 0;
	iVar6 = 0x208;
	iVar1 = 0x41;
	iVar5 = 0;
	do {
		if (*(short *)((int)&(&plr)[myplr].SpdList[0]._itype + iVar5) != -1) {
			uVar3 = *(undefined4 *)((int)&InvRect.X + iVar6);
			(&InvSlotTable)[iVar1] = '\x01';
			param_5 = 0;
			FUN_801575b8(uVar3,*(undefined4 *)((int)&InvRect.Y + iVar6),
									 (uint)(&(&plr)[myplr].SpdList[0]._iCurs)[iVar5],
									 (uint)((&(&plr)[myplr].SpdList[0]._iStatFlag)[iVar5] == '\x01'));
		}
		iVar6 = iVar6 + 8;
		iVar1 = iVar1 + 1;
		iVar4 = iVar4 + 1;
		iVar5 = iVar5 + 0x6c;
	} while (iVar4 < 8);
	FUN_80158634();
	FUN_80157688();
	return;
}



// decompiled code
// original method signature: 
// void FUN_80159edc(void);
 // line -1, offset 0x80159edc
// function 'FUN_80159edc' @0x80159EDC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80159edc(void)

{
	undefined4 uVar1;
	int unaff_s0;
	int unaff_s1;
	int iVar2;
	int unaff_s2;
	int iVar3;
	int unaff_s3;
	int iVar4;
	
	while( true ) {
		iVar4 = unaff_s3;
		iVar3 = unaff_s2;
		iVar2 = unaff_s1;
		unaff_s3 = iVar4 + 1;
		unaff_s0 = unaff_s0 + 1;
		if (7 < unaff_s0) break;
		unaff_s1 = iVar2 + 0x6c;
		unaff_s2 = iVar3 + 8;
		if (*(short *)((int)&(&plr)[myplr].SpdList[1]._itype + iVar2) != -1) {
			uVar1 = *(undefined4 *)((int)&InvXY_ARRAY_8010d038[0].X + iVar3);
			s__8010d681[iVar4] = '\x01';
			FUN_801575b8(uVar1,*(undefined4 *)((int)&InvXY_ARRAY_8010d038[0].Y + iVar3),
									 (uint)(&(&plr)[myplr].SpdList[1]._iCurs)[iVar2],
									 (uint)((&(&plr)[myplr].SpdList[1]._iStatFlag)[iVar2] == '\x01'));
			unaff_s1 = iVar2 + 0x6c;
			unaff_s2 = iVar3 + 8;
		}
	}
	FUN_80158634();
	FUN_80157688();
	return;
}



// decompiled code
// original method signature: 
// uint FUN_80159f24(int param_1,int param_2,int param_3,int param_4,char param_5);
 // line -1, offset 0x80159f24
// function 'FUN_80159f24' @0x80159F24 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_80159f24(int param_1,int param_2,int param_3,int param_4,char param_5)

{
	int *piVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int *piVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	uint uVar12;
	
	iVar2 = param_2 >> 0x1f;
	iVar3 = param_2 / 10 + iVar2;
	iVar10 = (iVar3 - iVar2) * 10;
	uVar12 = 1;
	if (iVar10 < 0) {
		iVar10 = 0;
	}
	iVar11 = 0;
	if (0 < param_4) {
		do {
			if (uVar12 == 0) {
				return 0;
			}
			if (0x27 < iVar10) {
				uVar12 = 0;
			}
			iVar4 = param_2 + (iVar3 - iVar2) * -10;
			if (iVar4 < 0) {
				iVar4 = 0;
			}
			iVar5 = 0;
			if (0 < param_3) {
				do {
					if (uVar12 == 0) break;
					if (iVar4 < 10) {
						uVar12 = (uint)(*(char *)(param_1 * 0x19e8 + -0x7ff24540 + iVar4 + iVar10) == '\0');
					}
					else {
						uVar12 = 0;
					}
					iVar5 = iVar5 + 1;
					iVar4 = iVar4 + 1;
				} while (iVar5 < param_3);
			}
			iVar11 = iVar11 + 1;
			iVar10 = iVar10 + 10;
		} while (iVar11 < param_4);
	}
	if ((uVar12 != 0) && (param_5 != '\0')) {
		piVar1 = (int *)((&plr)[param_1]._pNumInv * 0x6c + param_1 * 0x19e8 + -0x7ff25624);
		pIVar8 = &(&plr)[param_1].HoldItem;
		do {
			pIVar7 = pIVar8;
			piVar6 = piVar1;
			iVar3 = pIVar7->_iVMult1;
			iVar10 = pIVar7->_iVAdd2;
			iVar11 = pIVar7->_iVMult2;
			*piVar6 = pIVar7->_iVAdd1;
			piVar6[1] = iVar3;
			piVar6[2] = iVar10;
			piVar6[3] = iVar11;
			pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
			piVar1 = piVar6 + 4;
		} while (pIVar8 != (ItemStruct *)&(&plr)[param_1].HoldItem._iSufPower);
		iVar3 = pIVar7->_ivalue;
		iVar10 = pIVar7->_iIvalue;
		piVar6[4] = pIVar8->_iVAdd1;
		piVar6[5] = iVar3;
		piVar6[6] = iVar10;
		(&plr)[param_1]._pNumInv = (&plr)[param_1]._pNumInv + 1;
		iVar3 = param_2 / 10 + iVar2;
		iVar10 = (iVar3 - iVar2) * 10;
		if (iVar10 < 0) {
			iVar10 = 0;
		}
		iVar11 = 0;
		if (0 < param_4) {
			do {
				iVar4 = param_2 + (iVar3 - iVar2) * -10;
				if (iVar4 < 0) {
					iVar4 = 0;
				}
				iVar5 = 0;
				if (0 < param_3) {
					iVar9 = param_1 * 0x19e8 + -0x7ff24540;
					iVar4 = iVar4 + iVar10;
					do {
						if ((iVar5 == 0) && (iVar11 == param_4 + -1)) {
							*(undefined *)(iVar9 + iVar4) = (char)(&plr)[param_1]._pNumInv;
						}
						else {
							*(char *)(iVar9 + iVar4) = -(char)(&plr)[param_1]._pNumInv;
						}
						iVar5 = iVar5 + 1;
						iVar4 = iVar4 + 1;
					} while (iVar5 < param_3);
				}
				iVar11 = iVar11 + 1;
				iVar10 = iVar10 + 10;
			} while (iVar11 < param_4);
		}
		CalcPlrScrolls__Fi(param_1);
	}
	return uVar12;
}



// decompiled code
// original method signature: 
// void FUN_8015a068(undefined4 param_1,undefined4 param_2,int param_3,int param_4);
 // line -1, offset 0x8015a068
// function 'FUN_8015a068' @0x8015A068 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015a068(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
	int *piVar1;
	int in_v1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int *piVar8;
	int *piVar9;
	int *piVar10;
	int iVar11;
	int p;
	int in_t6;
	
	iVar2 = in_v1 * 4 + p;
	piVar1 = (int *)((&plr._pNumInv)[iVar2 * 2] * 0x6c + iVar2 * 8 + -0x7ff25624);
	piVar10 = &plr.HoldItem._iVAdd1 + iVar2 * 2;
	do {
		piVar9 = piVar10;
		piVar8 = piVar1;
		iVar3 = piVar9[1];
		iVar4 = piVar9[2];
		iVar6 = piVar9[3];
		*piVar8 = *piVar9;
		piVar8[1] = iVar3;
		piVar8[2] = iVar4;
		piVar8[3] = iVar6;
		piVar10 = piVar9 + 4;
		piVar1 = piVar8 + 4;
	} while (piVar10 != (int *)(&plr.HoldItem._iSufPower + iVar2 * 8));
	iVar2 = piVar9[5];
	iVar3 = piVar9[6];
	piVar8[4] = *piVar10;
	piVar8[5] = iVar2;
	piVar8[6] = iVar3;
	iVar3 = in_t6 >> 0x1f;
	(&plr)[p]._pNumInv = (&plr)[p]._pNumInv + 1;
	iVar2 = in_t6 / 10 + iVar3;
	iVar4 = (iVar2 - iVar3) * 10;
	if (iVar4 < 0) {
		iVar4 = 0;
	}
	iVar6 = 0;
	if (0 < param_4) {
		do {
			iVar5 = in_t6 + (iVar2 - iVar3) * -10;
			if (iVar5 < 0) {
				iVar5 = 0;
			}
			iVar7 = 0;
			if (0 < param_3) {
				iVar11 = p * 0x19e8 + -0x7ff24540;
				iVar5 = iVar5 + iVar4;
				do {
					if ((iVar7 == 0) && (iVar6 == param_4 + -1)) {
						*(undefined *)(iVar11 + iVar5) = (char)(&plr)[p]._pNumInv;
					}
					else {
						*(char *)(iVar11 + iVar5) = -(char)(&plr)[p]._pNumInv;
					}
					iVar7 = iVar7 + 1;
					iVar5 = iVar5 + 1;
				} while (iVar7 < param_3);
			}
			iVar6 = iVar6 + 1;
			iVar4 = iVar4 + 10;
		} while (iVar6 < param_4);
	}
	CalcPlrScrolls__Fi(p);
	return;
}



// decompiled code
// original method signature: 
// uint FUN_8015a24c(int param_1,int param_2,int param_3,int param_4,char param_5);
 // line -1, offset 0x8015a24c
// function 'FUN_8015a24c' @0x8015A24C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8015a24c(int param_1,int param_2,int param_3,int param_4,char param_5)

{
	int *piVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int *piVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	uint uVar12;
	
	iVar2 = param_2 >> 0x1f;
	iVar3 = param_2 / 10 + iVar2;
	iVar10 = (iVar3 - iVar2) * 10;
	uVar12 = 1;
	if (iVar10 < 0) {
		iVar10 = 0;
	}
	iVar11 = 0;
	if (0 < param_4) {
		do {
			if (uVar12 == 0) goto LAB_8015a374;
			if (0x27 < iVar10) {
				uVar12 = 0;
			}
			iVar4 = param_2 + (iVar3 - iVar2) * -10;
			if (iVar4 < 0) {
				iVar4 = 0;
			}
			iVar5 = 0;
			if (0 < param_3) {
				do {
					if (uVar12 == 0) break;
					if (iVar4 < 10) {
						uVar12 = (uint)(*(char *)(param_1 * 0x19e8 + -0x7ff24540 + iVar4 + iVar10) == '\0');
					}
					else {
						uVar12 = 0;
					}
					iVar5 = iVar5 + 1;
					iVar4 = iVar4 + 1;
				} while (iVar5 < param_3);
			}
			iVar11 = iVar11 + 1;
			iVar10 = iVar10 + 10;
		} while (iVar11 < param_4);
	}
	if (uVar12 == 0) {
LAB_8015a374:
		if ((param_3 < 2) && (param_4 < 2)) {
			iVar10 = 0;
			iVar3 = param_1 * 0x19e8;
			do {
				iVar10 = iVar10 + 1;
				if (*(short *)((int)&plr.SpdList[0]._itype + iVar3) == -1) {
					uVar12 = 1;
					break;
				}
				iVar3 = iVar3 + 0x6c;
			} while (iVar10 < 8);
		}
		else {
			uVar12 = 0;
		}
		if (uVar12 == 0) {
			return 0;
		}
	}
	if (param_5 != '\0') {
		piVar1 = (int *)((&plr)[param_1]._pNumInv * 0x6c + param_1 * 0x19e8 + -0x7ff25624);
		pIVar8 = &(&plr)[param_1].HoldItem;
		do {
			pIVar7 = pIVar8;
			piVar6 = piVar1;
			iVar3 = pIVar7->_iVMult1;
			iVar10 = pIVar7->_iVAdd2;
			iVar11 = pIVar7->_iVMult2;
			*piVar6 = pIVar7->_iVAdd1;
			piVar6[1] = iVar3;
			piVar6[2] = iVar10;
			piVar6[3] = iVar11;
			pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
			piVar1 = piVar6 + 4;
		} while (pIVar8 != (ItemStruct *)&(&plr)[param_1].HoldItem._iSufPower);
		iVar3 = pIVar7->_ivalue;
		iVar10 = pIVar7->_iIvalue;
		piVar6[4] = pIVar8->_iVAdd1;
		piVar6[5] = iVar3;
		piVar6[6] = iVar10;
		(&plr)[param_1]._pNumInv = (&plr)[param_1]._pNumInv + 1;
		iVar3 = param_2 / 10 + iVar2;
		iVar10 = (iVar3 - iVar2) * 10;
		if (iVar10 < 0) {
			iVar10 = 0;
		}
		iVar11 = 0;
		if (0 < param_4) {
			do {
				iVar4 = param_2 + (iVar3 - iVar2) * -10;
				if (iVar4 < 0) {
					iVar4 = 0;
				}
				iVar5 = 0;
				if (0 < param_3) {
					iVar9 = param_1 * 0x19e8 + -0x7ff24540;
					iVar4 = iVar4 + iVar10;
					do {
						if ((iVar5 == 0) && (iVar11 == param_4 + -1)) {
							*(undefined *)(iVar9 + iVar4) = (char)(&plr)[param_1]._pNumInv;
						}
						else {
							*(char *)(iVar9 + iVar4) = -(char)(&plr)[param_1]._pNumInv;
						}
						iVar5 = iVar5 + 1;
						iVar4 = iVar4 + 1;
					} while (iVar5 < param_3);
				}
				iVar11 = iVar11 + 1;
				iVar10 = iVar10 + 10;
			} while (iVar11 < param_4);
		}
		CalcPlrScrolls__Fi(param_1);
	}
	return uVar12;
}



// decompiled code
// original method signature: 
// uint FUN_8015a3bc(int iParm1,int iParm2,int iParm3,int iParm4);
 // line -1, offset 0x8015a3bc
// function 'FUN_8015a3bc' @0x8015A3BC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8015a3bc(int iParm1,int iParm2,int iParm3,int iParm4)

{
	int *piVar1;
	int in_v0;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int *piVar7;
	ItemStruct *pIVar8;
	ItemStruct *pIVar9;
	int iVar10;
	int iVar11;
	int p;
	int in_t5;
	int in_t6;
	uint unaff_s0;
	
	iVar2 = in_v0 << 3;
	do {
		iParm2 = iParm2 + 1;
		if ((int)*(short *)((int)&plr.SpdList[0]._itype + iVar2) == iParm1) {
			unaff_s0 = 1;
			break;
		}
		iVar2 = iVar2 + 0x6c;
	} while (iParm2 < 8);
	if (((unaff_s0 & 0xff) != 0) && (in_t5 != 0)) {
		piVar1 = (int *)((&plr)[p]._pNumInv * 0x6c + p * 0x19e8 + -0x7ff25624);
		pIVar9 = &(&plr)[p].HoldItem;
		do {
			pIVar8 = pIVar9;
			piVar7 = piVar1;
			iVar2 = pIVar8->_iVMult1;
			iVar3 = pIVar8->_iVAdd2;
			iVar5 = pIVar8->_iVMult2;
			*piVar7 = pIVar8->_iVAdd1;
			piVar7[1] = iVar2;
			piVar7[2] = iVar3;
			piVar7[3] = iVar5;
			pIVar9 = (ItemStruct *)&pIVar8->_iSeed;
			piVar1 = piVar7 + 4;
		} while (pIVar9 != (ItemStruct *)&(&plr)[p].HoldItem._iSufPower);
		iVar2 = pIVar8->_ivalue;
		iVar3 = pIVar8->_iIvalue;
		piVar7[4] = pIVar9->_iVAdd1;
		piVar7[5] = iVar2;
		piVar7[6] = iVar3;
		iVar3 = in_t6 >> 0x1f;
		(&plr)[p]._pNumInv = (&plr)[p]._pNumInv + 1;
		iVar2 = in_t6 / 10 + iVar3;
		iVar5 = (iVar2 - iVar3) * 10;
		if (iVar5 < 0) {
			iVar5 = 0;
		}
		iVar11 = 0;
		if (0 < iParm4) {
			do {
				iVar4 = in_t6 + (iVar2 - iVar3) * -10;
				if (iVar4 < 0) {
					iVar4 = 0;
				}
				iVar6 = 0;
				if (0 < iParm3) {
					iVar10 = p * 0x19e8 + -0x7ff24540;
					iVar4 = iVar4 + iVar5;
					do {
						if ((iVar6 == 0) && (iVar11 == iParm4 + -1)) {
							*(undefined *)(iVar10 + iVar4) = (char)(&plr)[p]._pNumInv;
						}
						else {
							*(char *)(iVar10 + iVar4) = -(char)(&plr)[p]._pNumInv;
						}
						iVar6 = iVar6 + 1;
						iVar4 = iVar4 + 1;
					} while (iVar6 < iParm3);
				}
				iVar11 = iVar11 + 1;
				iVar5 = iVar5 + 10;
			} while (iVar11 < iParm4);
		}
		CalcPlrScrolls__Fi(p);
	}
	return unaff_s0;
}



// decompiled code
// original method signature: 
// void FUN_8015a5c8(void);
 // line -1, offset 0x8015a5c8
// function 'FUN_8015a5c8' @0x8015A5C8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015a5c8(void)

{
	int p;
	
	CalcPlrScrolls__Fi(p);
	return;
}



// decompiled code
// original method signature: 
// int FUN_8015a5f0(int iParm1);
 // line -1, offset 0x8015a5f0
// function 'FUN_8015a5f0' @0x8015A5F0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_8015a5f0(int iParm1)

{
	int *piVar1;
	uchar uVar2;
	long lVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int *piVar8;
	ItemStruct *pIVar9;
	ItemStruct *pIVar10;
	int iVar11;
	int iVar12;
	
	iVar7 = 0;
	iVar11 = 0;
	if (0 < (&plr)[iParm1]._pNumInv) {
		iVar12 = 0;
		do {
			if (*(short *)((int)&(&plr)[iParm1].InvList[0]._itype + iVar12) == 0xb) {
				iVar4 = (&plr)[iParm1].HoldItem._ivalue +
								*(int *)((int)&(&plr)[iParm1].InvList[0]._ivalue + iVar12);
				if (iVar4 < 0x1389) {
					*(int *)((int)&(&plr)[iParm1].InvList[0]._ivalue + iVar12) = iVar4;
					if (iVar4 < 0x9c4) {
						uVar2 = '\x04';
						if (1000 < iVar4) {
							uVar2 = '\x05';
						}
					}
					else {
						uVar2 = '\x06';
					}
					(&(&plr)[iParm1].InvList[0]._iCurs)[iVar12] = uVar2;
					lVar3 = FUN_80160b64(iParm1);
					(&plr)[iParm1]._pGold = lVar3;
					iVar7 = 1;
				}
			}
			iVar11 = iVar11 + 1;
			iVar12 = iVar12 + 0x6c;
		} while ((iVar11 < (&plr)[iParm1]._pNumInv) && (iVar7 == 0));
	}
	if (iVar7 == 0) {
		iVar11 = 0;
		if (0 < (&plr)[iParm1]._pNumInv) {
			iVar12 = 0;
			do {
				if ((*(short *)((int)&(&plr)[iParm1].InvList[0]._itype + iVar12) == 0xb) &&
					 (iVar4 = *(int *)((int)&(&plr)[iParm1].InvList[0]._ivalue + iVar12), iVar4 < 5000)) {
					iVar4 = iVar4 + (&plr)[iParm1].HoldItem._ivalue;
					if (iVar4 < 0x1389) {
						*(int *)((int)&(&plr)[iParm1].InvList[0]._ivalue + iVar12) = iVar4;
						if (iVar4 < 0x9c4) {
							uVar2 = '\x04';
							if (1000 < iVar4) {
								uVar2 = '\x05';
							}
						}
						else {
							uVar2 = '\x06';
						}
						(&(&plr)[iParm1].InvList[0]._iCurs)[iVar12] = uVar2;
						lVar3 = FUN_80160b64(iParm1);
						(&plr)[iParm1]._pGold = lVar3;
						iVar7 = 1;
					}
				}
				iVar11 = iVar11 + 1;
				iVar12 = iVar12 + 0x6c;
			} while ((iVar11 < (&plr)[iParm1]._pNumInv) && (iVar7 == 0));
		}
		if (iVar7 == 0) {
			iVar12 = 0x27;
			iVar11 = iParm1 * 0x19e8;
			do {
				if (*(char *)(iVar12 + iVar11 + -0x7ff24540) == '\0') {
					iVar7 = (&plr)[iParm1]._pNumInv;
					piVar1 = (int *)(iVar7 * 0x6c + iVar11 + -0x7ff25624);
					pIVar10 = &(&plr)[iParm1].HoldItem;
					do {
						pIVar9 = pIVar10;
						piVar8 = piVar1;
						iVar4 = pIVar9->_iVMult1;
						iVar5 = pIVar9->_iVAdd2;
						iVar6 = pIVar9->_iVMult2;
						*piVar8 = pIVar9->_iVAdd1;
						piVar8[1] = iVar4;
						piVar8[2] = iVar5;
						piVar8[3] = iVar6;
						pIVar10 = (ItemStruct *)&pIVar9->_iSeed;
						piVar1 = piVar8 + 4;
					} while (pIVar10 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
					iVar4 = pIVar9->_ivalue;
					iVar5 = pIVar9->_iIvalue;
					piVar8[4] = pIVar10->_iVAdd1;
					piVar8[5] = iVar4;
					piVar8[6] = iVar5;
					(&plr)[iParm1]._pNumInv = (&plr)[iParm1]._pNumInv + 1;
					*(undefined *)(iVar11 + -0x7ff24540 + iVar12) = (char)(&plr)[iParm1]._pNumInv;
					iVar4 = (&plr)[iParm1].HoldItem._ivalue;
					if (iVar4 < 0x9c4) {
						if (iVar4 < 0x3e9) {
							iVar7 = iVar7 * 0x6c + iVar11;
							uVar2 = '\x04';
						}
						else {
							iVar7 = iVar7 * 0x6c + iVar11;
							uVar2 = '\x05';
						}
					}
					else {
						iVar7 = iVar7 * 0x6c + iVar11;
						uVar2 = '\x06';
					}
					(&plr.InvList[0]._iCurs)[iVar7] = uVar2;
					lVar3 = FUN_80160b64(iParm1);
					(&plr)[iParm1]._pGold = lVar3;
					iVar7 = 1;
				}
				iVar12 = iVar12 + -1;
			} while ((-1 < iVar12) && (iVar7 == 0));
		}
	}
	return iVar7;
}



// decompiled code
// original method signature: 
// uint FUN_8015a67c(undefined4 uParm1,int iParm2,uint uParm3);
 // line -1, offset 0x8015a67c
// function 'FUN_8015a67c' @0x8015A67C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8015a67c(undefined4 uParm1,int iParm2,uint uParm3)

{
	int *piVar1;
	uchar uVar2;
	undefined4 uVar3;
	long lVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int *piVar11;
	ItemStruct *pIVar12;
	ItemStruct *pIVar13;
	int unaff_s0;
	int unaff_s1;
	int unaff_s2;
	int unaff_s3;
	
	while( true ) {
		iVar8 = unaff_s1 + iParm2;
		if (*(short *)((int)&plr.InvList[0]._itype + iVar8) == 0xb) {
			iVar5 = *(int *)((int)&plr.HoldItem._ivalue + iParm2) +
							*(int *)((int)&plr.InvList[0]._ivalue + iVar8);
			if (iVar5 < 0x1389) {
				*(int *)((int)&plr.InvList[0]._ivalue + iVar8) = iVar5;
				if (iVar5 < 0x9c4) {
					uVar2 = '\x04';
					if (1000 < iVar5) {
						uVar2 = '\x05';
					}
				}
				else {
					uVar2 = '\x06';
				}
				(&plr.InvList[0]._iCurs)[iVar8] = uVar2;
				uVar3 = FUN_80160b64();
				*(undefined4 *)((int)&plr._pGold + unaff_s3) = uVar3;
				uParm3 = 1;
			}
		}
		unaff_s0 = unaff_s0 + 1;
		unaff_s1 = unaff_s1 + 0x6c;
		if (((&plr)[unaff_s2]._pNumInv <= unaff_s0) || ((uParm3 & 0xff) != 0)) break;
		iParm2 = unaff_s2 * 0x19e8;
	}
	if ((uParm3 & 0xff) == 0) {
		iVar8 = 0;
		if (0 < (&plr)[unaff_s2]._pNumInv) {
			iVar5 = 0;
			do {
				if ((*(short *)((int)&(&plr)[unaff_s2].InvList[0]._itype + iVar5) == 0xb) &&
					 (iVar6 = *(int *)((int)&(&plr)[unaff_s2].InvList[0]._ivalue + iVar5), iVar6 < 5000)) {
					iVar6 = iVar6 + (&plr)[unaff_s2].HoldItem._ivalue;
					if (iVar6 < 0x1389) {
						*(int *)((int)&(&plr)[unaff_s2].InvList[0]._ivalue + iVar5) = iVar6;
						if (iVar6 < 0x9c4) {
							uVar2 = '\x04';
							if (1000 < iVar6) {
								uVar2 = '\x05';
							}
						}
						else {
							uVar2 = '\x06';
						}
						(&(&plr)[unaff_s2].InvList[0]._iCurs)[iVar5] = uVar2;
						lVar4 = FUN_80160b64();
						(&plr)[unaff_s2]._pGold = lVar4;
						uParm3 = 1;
					}
				}
				iVar8 = iVar8 + 1;
				iVar5 = iVar5 + 0x6c;
			} while ((iVar8 < (&plr)[unaff_s2]._pNumInv) && ((uParm3 & 0xff) == 0));
		}
		if ((uParm3 & 0xff) == 0) {
			iVar5 = 0x27;
			iVar8 = unaff_s2 * 0x19e8;
			do {
				if (*(char *)(iVar5 + iVar8 + -0x7ff24540) == '\0') {
					iVar6 = (&plr)[unaff_s2]._pNumInv;
					piVar1 = (int *)(iVar6 * 0x6c + iVar8 + -0x7ff25624);
					pIVar13 = &(&plr)[unaff_s2].HoldItem;
					do {
						pIVar12 = pIVar13;
						piVar11 = piVar1;
						iVar7 = pIVar12->_iVMult1;
						iVar9 = pIVar12->_iVAdd2;
						iVar10 = pIVar12->_iVMult2;
						*piVar11 = pIVar12->_iVAdd1;
						piVar11[1] = iVar7;
						piVar11[2] = iVar9;
						piVar11[3] = iVar10;
						pIVar13 = (ItemStruct *)&pIVar12->_iSeed;
						piVar1 = piVar11 + 4;
					} while (pIVar13 != (ItemStruct *)&(&plr)[unaff_s2].HoldItem._iSufPower);
					iVar7 = pIVar12->_ivalue;
					iVar9 = pIVar12->_iIvalue;
					piVar11[4] = pIVar13->_iVAdd1;
					piVar11[5] = iVar7;
					piVar11[6] = iVar9;
					(&plr)[unaff_s2]._pNumInv = (&plr)[unaff_s2]._pNumInv + 1;
					*(undefined *)(iVar8 + -0x7ff24540 + iVar5) = (char)(&plr)[unaff_s2]._pNumInv;
					iVar7 = (&plr)[unaff_s2].HoldItem._ivalue;
					if (iVar7 < 0x9c4) {
						if (iVar7 < 0x3e9) {
							iVar6 = iVar6 * 0x6c + iVar8;
							uVar2 = '\x04';
						}
						else {
							iVar6 = iVar6 * 0x6c + iVar8;
							uVar2 = '\x05';
						}
					}
					else {
						iVar6 = iVar6 * 0x6c + iVar8;
						uVar2 = '\x06';
					}
					(&plr.InvList[0]._iCurs)[iVar6] = uVar2;
					lVar4 = FUN_80160b64();
					(&plr)[unaff_s2]._pGold = lVar4;
					uParm3 = 1;
				}
				iVar5 = iVar5 + -1;
			} while ((-1 < iVar5) && ((uParm3 & 0xff) == 0));
		}
	}
	return uParm3;
}



// decompiled code
// original method signature: 
// uint FUN_8015a79c(int iParm1,undefined4 uParm2,uint uParm3);
 // line -1, offset 0x8015a79c
// function 'FUN_8015a79c' @0x8015A79C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8015a79c(int iParm1,undefined4 uParm2,uint uParm3)

{
	int *piVar1;
	uchar uVar2;
	int in_v0;
	int iVar3;
	undefined4 uVar4;
	long lVar5;
	int in_v1;
	int iVar6;
	int iVar7;
	int iVar8;
	int *piVar9;
	ItemStruct *pIVar10;
	ItemStruct *pIVar11;
	int iVar12;
	int iVar13;
	int unaff_s2;
	
	iVar12 = 0;
	if (0 < in_v0) {
		iVar13 = 0;
		iVar3 = in_v1 + unaff_s2;
		do {
			iVar3 = iVar3 * 0x100 + unaff_s2 * 0x3d;
			iVar7 = iVar13 + iVar3 * 8;
			if ((*(short *)((int)&plr.InvList[0]._itype + iVar7) == 0xb) &&
				 (iVar6 = *(int *)((int)&plr.InvList[0]._ivalue + iVar7), iVar6 < 5000)) {
				iVar6 = iVar6 + (&plr.HoldItem._ivalue)[iVar3 * 2];
				if (iVar6 < 0x1389) {
					*(int *)((int)&plr.InvList[0]._ivalue + iVar7) = iVar6;
					if (iVar6 < 0x9c4) {
						uVar2 = '\x04';
						if (1000 < iVar6) {
							uVar2 = '\x05';
						}
					}
					else {
						uVar2 = '\x06';
					}
					(&plr.InvList[0]._iCurs)[iVar7] = uVar2;
					uVar4 = FUN_80160b64();
					*(undefined4 *)((int)&plr._pGold + iParm1) = uVar4;
					uParm3 = 1;
				}
			}
			iVar12 = iVar12 + 1;
			iVar13 = iVar13 + 0x6c;
		} while ((iVar12 < (&plr)[unaff_s2]._pNumInv) && (iVar3 = unaff_s2 * 3, (uParm3 & 0xff) == 0));
	}
	if ((uParm3 & 0xff) == 0) {
		iVar3 = 0x27;
		iVar12 = unaff_s2 * 0x19e8;
		do {
			if (*(char *)(iVar3 + iVar12 + -0x7ff24540) == '\0') {
				iVar13 = (&plr)[unaff_s2]._pNumInv;
				piVar1 = (int *)(iVar13 * 0x6c + iVar12 + -0x7ff25624);
				pIVar11 = &(&plr)[unaff_s2].HoldItem;
				do {
					pIVar10 = pIVar11;
					piVar9 = piVar1;
					iVar7 = pIVar10->_iVMult1;
					iVar6 = pIVar10->_iVAdd2;
					iVar8 = pIVar10->_iVMult2;
					*piVar9 = pIVar10->_iVAdd1;
					piVar9[1] = iVar7;
					piVar9[2] = iVar6;
					piVar9[3] = iVar8;
					pIVar11 = (ItemStruct *)&pIVar10->_iSeed;
					piVar1 = piVar9 + 4;
				} while (pIVar11 != (ItemStruct *)&(&plr)[unaff_s2].HoldItem._iSufPower);
				iVar7 = pIVar10->_ivalue;
				iVar6 = pIVar10->_iIvalue;
				piVar9[4] = pIVar11->_iVAdd1;
				piVar9[5] = iVar7;
				piVar9[6] = iVar6;
				(&plr)[unaff_s2]._pNumInv = (&plr)[unaff_s2]._pNumInv + 1;
				*(undefined *)(iVar12 + -0x7ff24540 + iVar3) = (char)(&plr)[unaff_s2]._pNumInv;
				iVar7 = (&plr)[unaff_s2].HoldItem._ivalue;
				if (iVar7 < 0x9c4) {
					if (iVar7 < 0x3e9) {
						iVar13 = iVar13 * 0x6c + iVar12;
						uVar2 = '\x04';
					}
					else {
						iVar13 = iVar13 * 0x6c + iVar12;
						uVar2 = '\x05';
					}
				}
				else {
					iVar13 = iVar13 * 0x6c + iVar12;
					uVar2 = '\x06';
				}
				(&plr.InvList[0]._iCurs)[iVar13] = uVar2;
				lVar5 = FUN_80160b64();
				(&plr)[unaff_s2]._pGold = lVar5;
				uParm3 = 1;
			}
			iVar3 = iVar3 + -1;
		} while ((-1 < iVar3) && ((uParm3 & 0xff) == 0));
	}
	return uParm3;
}



// decompiled code
// original method signature: 
// uint FUN_8015a90c(undefined4 param_1,undefined4 param_2,uint param_3);
 // line -1, offset 0x8015a90c
// function 'FUN_8015a90c' @0x8015A90C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8015a90c(undefined4 param_1,undefined4 param_2,uint param_3)

{
	undefined4 *puVar1;
	uchar uVar2;
	undefined4 uVar3;
	int iVar4;
	undefined4 uVar5;
	undefined4 uVar6;
	undefined4 *puVar7;
	undefined4 *puVar8;
	undefined4 *puVar9;
	int iVar10;
	int unaff_s1;
	int unaff_s3;
	int unaff_s4;
	int unaff_s5;
	
	do {
		if (*(char *)(unaff_s3 + unaff_s1 + unaff_s4) == '\0') {
			iVar10 = *(int *)((int)&plr._pNumInv + unaff_s1);
			puVar1 = (undefined4 *)(iVar10 * 0x6c + unaff_s1 + unaff_s4 + -0x10e4);
			puVar9 = (undefined4 *)(unaff_s1 + unaff_s5);
			do {
				puVar8 = puVar9;
				puVar7 = puVar1;
				uVar3 = puVar8[1];
				uVar5 = puVar8[2];
				uVar6 = puVar8[3];
				*puVar7 = *puVar8;
				puVar7[1] = uVar3;
				puVar7[2] = uVar5;
				puVar7[3] = uVar6;
				puVar9 = puVar8 + 4;
				puVar1 = puVar7 + 4;
			} while (puVar9 != (undefined4 *)(unaff_s1 + unaff_s5) + 0x18);
			uVar3 = puVar8[5];
			uVar5 = puVar8[6];
			puVar7[4] = *puVar9;
			puVar7[5] = uVar3;
			puVar7[6] = uVar5;
			*(int *)((int)&plr._pNumInv + unaff_s1) = *(int *)((int)&plr._pNumInv + unaff_s1) + 1;
			*(undefined *)(unaff_s1 + unaff_s4 + unaff_s3) =
					 (char)*(undefined4 *)((int)&plr._pNumInv + unaff_s1);
			iVar4 = *(int *)((int)&plr.HoldItem._ivalue + unaff_s1);
			if (iVar4 < 0x9c4) {
				if (iVar4 < 0x3e9) {
					iVar10 = iVar10 * 0x6c + unaff_s1;
					uVar2 = '\x04';
				}
				else {
					iVar10 = iVar10 * 0x6c + unaff_s1;
					uVar2 = '\x05';
				}
			}
			else {
				iVar10 = iVar10 * 0x6c + unaff_s1;
				uVar2 = '\x06';
			}
			(&plr.InvList[0]._iCurs)[iVar10] = uVar2;
			uVar3 = FUN_80160b64();
			*(undefined4 *)((int)&plr._pGold + unaff_s1) = uVar3;
			param_3 = 1;
		}
		unaff_s3 = unaff_s3 + -1;
	} while ((-1 < unaff_s3) && ((param_3 & 0xff) == 0));
	return param_3;
}



// decompiled code
// original method signature: 
// undefined4 FUN_8015aac8(int iParm1);
 // line -1, offset 0x8015aac8
// function 'FUN_8015aac8' @0x8015AAC8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8015aac8(int iParm1)

{
	int iVar1;
	int iVar2;
	int iVar3;
	ItemStruct *pIVar4;
	ItemStruct *pIVar5;
	
	if ((&plr)[iParm1].HoldItem._iLoc == '\x02') {
		if ((&plr)[iParm1].InvBody[4]._itype != -1) {
			return 0;
		}
		if ((&plr)[iParm1].InvBody[5]._itype != -1) {
			return 0;
		}
		NetSendCmdChItem__FUcUc('\x01','\x04');
		pIVar5 = (&plr)[iParm1].InvBody + 4;
		pIVar4 = &(&plr)[iParm1].HoldItem;
		do {
			iVar1 = pIVar4->_iVMult1;
			iVar2 = pIVar4->_iVAdd2;
			iVar3 = pIVar4->_iVMult2;
			pIVar5->_iVAdd1 = pIVar4->_iVAdd1;
			pIVar5->_iVMult1 = iVar1;
			pIVar5->_iVAdd2 = iVar2;
			pIVar5->_iVMult2 = iVar3;
			pIVar4 = (ItemStruct *)&pIVar4->_iSeed;
			pIVar5 = (ItemStruct *)&pIVar5->_iSeed;
		} while (pIVar4 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
	}
	else {
		if (((&plr)[iParm1].InvBody[4]._itype != -1) && ((&plr)[iParm1].InvBody[4]._iClass == '\x01')) {
			return 0;
		}
		if (((&plr)[iParm1].InvBody[5]._itype != -1) && ((&plr)[iParm1].InvBody[5]._iClass == '\x01')) {
			return 0;
		}
		if ((&plr)[iParm1].InvBody[4]._itype == -1) {
			NetSendCmdChItem__FUcUc('\x01','\x04');
			pIVar5 = (&plr)[iParm1].InvBody + 4;
			pIVar4 = &(&plr)[iParm1].HoldItem;
			do {
				iVar1 = pIVar4->_iVMult1;
				iVar2 = pIVar4->_iVAdd2;
				iVar3 = pIVar4->_iVMult2;
				pIVar5->_iVAdd1 = pIVar4->_iVAdd1;
				pIVar5->_iVMult1 = iVar1;
				pIVar5->_iVAdd2 = iVar2;
				pIVar5->_iVMult2 = iVar3;
				pIVar4 = (ItemStruct *)&pIVar4->_iSeed;
				pIVar5 = (ItemStruct *)&pIVar5->_iSeed;
			} while (pIVar4 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
		}
		else {
			if ((&plr)[iParm1].InvBody[5]._itype != -1) {
				return 0;
			}
			if ((&plr)[iParm1].InvBody[4]._iLoc == '\x02') {
				return 0;
			}
			NetSendCmdChItem__FUcUc('\x01','\x05');
			pIVar5 = (&plr)[iParm1].InvBody + 5;
			pIVar4 = &(&plr)[iParm1].HoldItem;
			do {
				iVar1 = pIVar4->_iVMult1;
				iVar2 = pIVar4->_iVAdd2;
				iVar3 = pIVar4->_iVMult2;
				pIVar5->_iVAdd1 = pIVar4->_iVAdd1;
				pIVar5->_iVMult1 = iVar1;
				pIVar5->_iVAdd2 = iVar2;
				pIVar5->_iVMult2 = iVar3;
				pIVar4 = (ItemStruct *)&pIVar4->_iSeed;
				pIVar5 = (ItemStruct *)&pIVar5->_iSeed;
			} while (pIVar4 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
		}
	}
	iVar1 = pIVar4->_iVMult1;
	iVar2 = pIVar4->_iVAdd2;
	pIVar5->_iVAdd1 = pIVar4->_iVAdd1;
	pIVar5->_iVMult1 = iVar1;
	pIVar5->_iVAdd2 = iVar2;
	return 1;
}



// decompiled code
// original method signature: 
// int FUN_8015ad5c(undefined4 *puParm1,undefined4 *puParm2);
 // line -1, offset 0x8015ad5c
// function 'FUN_8015ad5c' @0x8015AD5C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_8015ad5c(undefined4 *puParm1,undefined4 *puParm2)

{
	undefined4 uVar1;
	undefined4 uVar2;
	undefined4 uVar3;
	undefined4 *puVar4;
	undefined4 *puVar5;
	undefined4 *puVar6;
	undefined4 *puVar7;
	undefined4 local_70 [19];
	byte local_24;
	undefined4 auStack16 [4];
	
	puVar5 = puParm1;
	puVar6 = local_70;
	do {
		puVar7 = puVar6;
		puVar4 = puVar5;
		uVar1 = puVar4[1];
		uVar2 = puVar4[2];
		uVar3 = puVar4[3];
		*puVar7 = *puVar4;
		puVar7[1] = uVar1;
		puVar7[2] = uVar2;
		puVar7[3] = uVar3;
		puVar5 = puVar4 + 4;
		puVar6 = puVar7 + 4;
	} while (puVar5 != puParm1 + 0x18);
	uVar1 = puVar4[5];
	uVar2 = puVar4[6];
	puVar7[4] = *puVar5;
	puVar7[5] = uVar1;
	puVar7[6] = uVar2;
	puVar5 = puParm2;
	do {
		puVar4 = puParm1;
		puVar6 = puVar5;
		uVar1 = puVar6[1];
		uVar2 = puVar6[2];
		uVar3 = puVar6[3];
		*puVar4 = *puVar6;
		puVar4[1] = uVar1;
		puVar4[2] = uVar2;
		puVar4[3] = uVar3;
		puVar5 = puVar6 + 4;
		puParm1 = puVar4 + 4;
	} while (puVar5 != puParm2 + 0x18);
	uVar1 = puVar6[5];
	uVar2 = puVar6[6];
	puVar4[4] = *puVar5;
	puVar4[5] = uVar1;
	puVar4[6] = uVar2;
	puVar5 = local_70;
	do {
		puVar4 = puParm2;
		puVar6 = puVar5;
		uVar1 = puVar6[1];
		uVar2 = puVar6[2];
		uVar3 = puVar6[3];
		*puVar4 = *puVar6;
		puVar4[1] = uVar1;
		puVar4[2] = uVar2;
		puVar4[3] = uVar3;
		puVar5 = puVar6 + 4;
		puParm2 = puVar4 + 4;
	} while (puVar5 != auStack16);
	uVar1 = puVar6[5];
	uVar2 = puVar6[6];
	puVar4[4] = *puVar5;
	puVar4[5] = uVar1;
	puVar4[6] = uVar2;
	return (uint)local_24 + 0xc;
}



// decompiled code
// original method signature: 
// void FUN_8015ae70(int iParm1);
 // line -1, offset 0x8015ae70
// function 'FUN_8015ae70' @0x8015AE70 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015ae70(int iParm1)

{
	char cVar1;
	short sVar2;
	byte bVar3;
	byte bVar4;
	uint uVar5;
	uint uVar6;
	long lVar7;
	int i;
	_135fake psfx;
	char *pcVar8;
	ItemStruct *pIVar9;
	ItemStruct *pIVar10;
	int *piVar11;
	int *piVar12;
	int iVar13;
	ItemStruct *pIVar14;
	ItemStruct *pIVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	char cVar19;
	uint uVar20;
	int iVar21;
	uint uVar22;
	uint uVar23;
	uint uVar24;
	int aiStack264 [24];
	int aiStack168 [4];
	bool local_98;
	
	SetICursor__Fi((uint)(&plr)[iParm1].HoldItem._iCurs + 0xc);
	uGp00001bd0 = (uint)(&plr)[myplr].HoldItem._iCurs;
	uVar20 = 0;
	bVar3 = s__0000000000000000000_00000000000_8010d5d8[uGp00001bd0] >> 4;
	uVar24 = (uint)bVar3;
	bVar4 = s__8010d524[uGp00001bd0] >> 4;
	uVar23 = (uint)bVar4;
	uVar22 = uGp00001bb4;
	if ((bVar3 == 3) && (uVar22 = uGp00001bb4, uGp00001bb4 - 0x19 < 0x28)) {
		uVar22 = uGp00001bb4 + 10;
	}
	iVar21 = 7;
	if (uVar22 < 4) {
		iVar21 = 4;
	}
	if (uVar22 - 4 < 2) {
		iVar21 = 5;
	}
	if (uVar22 == 6) {
		iVar21 = 6;
	}
	if (uVar22 - 7 < 0xc) {
		iVar21 = 1;
	}
	if (uVar22 - 0x13 < 6) {
		iVar21 = 3;
	}
	if (uVar22 - 0x41 < 8) {
		iVar21 = 8;
	}
	i = (int)(&plr)[iParm1].HoldItem._iLoc;
	local_98 = i == iVar21;
	if ((iVar21 == 1) && (i == 2)) {
		iVar21 = 2;
		local_98 = true;
	}
	if (((((&plr)[iParm1].HoldItem._iLoc == '\a') && (iVar21 == 8)) && (bVar4 == 1)) &&
		 ((uVar24 == uVar23 &&
			(local_98 = (&plr)[iParm1].HoldItem._iStatFlag != '\0' &&
									(&AllItemsUseable)[(int)(&plr)[iParm1].HoldItem.IDidx] != '\0',
			(&plr)[iParm1].HoldItem._itype == 0xb)))) {
		local_98 = false;
	}
	if (iVar21 == 7) {
		i = uVar22 - 0x19;
		local_98 = true;
		uVar20 = 0;
		if ((&plr)[iParm1].HoldItem._itype == 0xb) {
			uVar5 = SEXT14(*(char *)(iParm1 * 0x19e8 + -0x7ff24540 + i));
			if (uVar5 != 0) {
				if ((int)uVar5 < 1) {
					uVar20 = -uVar5;
				}
				else {
					uVar20 = uVar5 & -(uint)((&plr)[iParm1].InvList[uVar5 - 1]._itype != 0xb);
				}
			}
		}
		else {
			iVar17 = (i / 10 - ((int)(uVar24 - 1) >> 1)) * 10;
			if (iVar17 < 0) {
				iVar17 = 0;
			}
			iVar16 = 0;
			if (bVar3 != 0) {
				do {
					if (local_98 == false) goto LAB_8015cbbc;
					iVar13 = i % 10 - ((int)(uVar23 - 1) >> 1);
					if (0x27 < iVar17) {
						local_98 = false;
					}
					if (iVar13 < 0) {
						iVar13 = 0;
					}
					iVar18 = 0;
					if (bVar4 != 0) {
						uVar5 = uVar20;
						do {
							uVar20 = uVar5;
							if (local_98 == false) break;
							if (iVar13 < 10) {
								uVar6 = SEXT14(*(char *)(iParm1 * 0x19e8 + -0x7ff24540 + iVar13 + iVar17));
								uVar20 = uVar5;
								if (uVar6 != 0) {
									if ((int)uVar6 < 0) {
										uVar6 = -uVar6;
									}
									uVar20 = uVar6;
									if ((uVar5 != 0) && (uVar20 = uVar5, uVar5 != uVar6)) goto LAB_8015b280;
								}
							}
							else {
LAB_8015b280:
								local_98 = false;
								uVar20 = uVar5;
							}
							iVar18 = iVar18 + 1;
							iVar13 = iVar13 + 1;
							uVar5 = uVar20;
						} while (iVar18 < (int)uVar23);
					}
					iVar16 = iVar16 + 1;
					iVar17 = iVar17 + 10;
				} while (iVar16 < (int)uVar24);
			}
		}
	}
	cVar19 = (char)uVar20;
	if (local_98 == false) goto LAB_8015cbbc;
	if ((1 < iVar21 - 7U) && ((&plr)[iParm1].HoldItem._iStatFlag == '\0')) {
		cVar1 = (&plr)[iParm1]._pClass;
		local_98 = false;
		if (cVar1 == '\0') {
			psfx = PS_WARR13;
		}
		else {
			if (cVar1 == '\x01') {
				psfx = PS_ROGUE13;
			}
			else {
				psfx = PS_MAGE13;
				if (cVar1 != '\x02') goto LAB_8015b344;
			}
		}
		PlaySFX__Fi(psfx);
	}
LAB_8015b344:
	if (local_98 == false) goto LAB_8015cbbc;
	if (iParm1 == myplr) {
		PlaySFX__Fi(ItemInvSnds[(uint)ItemCAnimTbl[(uint)(&plr)[iParm1].HoldItem._iCurs]]);
	}
	i = 1;
	switch(iVar21) {
	case 1:
		if ((int)uVar22 < 0xd) {
			iVar17 = iParm1 * 0x19e8;
			if ((&plr)[iParm1].InvBody[4]._itype == -1) {
				if (((&plr)[iParm1].InvBody[5]._itype == -1) ||
					 ((&plr)[iParm1].InvBody[5]._iClass != (&plr)[iParm1].HoldItem._iClass)) {
					NetSendCmdChItem__FUcUc('\0','\x04');
					pIVar10 = &(&plr)[iParm1].HoldItem;
					pIVar15 = (&plr)[iParm1].InvBody + 4;
					do {
						pIVar14 = pIVar15;
						pIVar9 = pIVar10;
						iVar21 = pIVar9->_iVMult1;
						iVar17 = pIVar9->_iVAdd2;
						iVar16 = pIVar9->_iVMult2;
						pIVar14->_iVAdd1 = pIVar9->_iVAdd1;
						pIVar14->_iVMult1 = iVar21;
						pIVar14->_iVAdd2 = iVar17;
						pIVar14->_iVMult2 = iVar16;
						pIVar10 = (ItemStruct *)&pIVar9->_iSeed;
						pIVar15 = (ItemStruct *)&pIVar14->_iSeed;
					} while (pIVar10 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
					iVar21 = pIVar9->_ivalue;
					iVar17 = pIVar9->_iIvalue;
					((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = pIVar10->_iVAdd1;
					pIVar14->_ivalue = iVar21;
					pIVar14->_iIvalue = iVar17;
					break;
				}
				NetSendCmdChItem__FUcUc('\0','\x05');
				iVar21 = iVar17 + -0x7ff256fc;
				iVar17 = iVar17 + -0x7ff241b8;
			}
			else {
				if (((&plr)[iParm1].InvBody[5]._itype == -1) ||
					 ((&plr)[iParm1].InvBody[5]._iClass != (&plr)[iParm1].HoldItem._iClass)) {
					NetSendCmdChItem__FUcUc('\0','\x04');
					iVar21 = iParm1 * 0x19e8 + -0x7ff25768;
					iVar17 = iParm1 * 0x19e8 + -0x7ff241b8;
				}
				else {
					NetSendCmdChItem__FUcUc('\0','\x05');
					iVar21 = iVar17 + -0x7ff256fc;
					iVar17 = iVar17 + -0x7ff241b8;
				}
			}
		}
		else {
			iVar17 = iParm1 * 0x19e8;
			if ((&plr)[iParm1].InvBody[5]._itype == -1) {
				if ((&plr)[iParm1].InvBody[4]._itype == -1) {
LAB_8015b994:
					NetSendCmdChItem__FUcUc('\0','\x05');
					pIVar10 = &(&plr)[iParm1].HoldItem;
					pIVar15 = (&plr)[iParm1].InvBody + 5;
					do {
						pIVar14 = pIVar15;
						pIVar9 = pIVar10;
						iVar21 = pIVar9->_iVMult1;
						iVar17 = pIVar9->_iVAdd2;
						iVar16 = pIVar9->_iVMult2;
						pIVar14->_iVAdd1 = pIVar9->_iVAdd1;
						pIVar14->_iVMult1 = iVar21;
						pIVar14->_iVAdd2 = iVar17;
						pIVar14->_iVMult2 = iVar16;
						pIVar10 = (ItemStruct *)&pIVar9->_iSeed;
						pIVar15 = (ItemStruct *)&pIVar14->_iSeed;
					} while (pIVar10 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
					iVar21 = pIVar9->_ivalue;
					iVar17 = pIVar9->_iIvalue;
					((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = pIVar10->_iVAdd1;
					pIVar14->_ivalue = iVar21;
					pIVar14->_iIvalue = iVar17;
					break;
				}
				if ((&plr)[iParm1].InvBody[4]._iLoc == '\x02') {
					NetSendCmdChItem__FUcUc('\0','\x04');
					iVar21 = iVar17 + -0x7ff256fc;
					FUN_8015ad5c(iVar21,iVar17 + -0x7ff25768);
					iVar17 = iVar17 + -0x7ff241b8;
				}
				else {
					if ((&plr)[iParm1].InvBody[4]._iClass != (&plr)[iParm1].HoldItem._iClass)
					goto LAB_8015b994;
					NetSendCmdChItem__FUcUc('\0','\x04');
					iVar21 = iVar17 + -0x7ff25768;
					iVar17 = iVar17 + -0x7ff241b8;
				}
			}
			else {
				if (((&plr)[iParm1].InvBody[4]._itype == -1) ||
					 ((&plr)[iParm1].InvBody[4]._iClass != (&plr)[iParm1].HoldItem._iClass)) {
					NetSendCmdChItem__FUcUc('\0','\x05');
					iVar21 = iParm1 * 0x19e8 + -0x7ff256fc;
					iVar17 = iParm1 * 0x19e8 + -0x7ff241b8;
				}
				else {
					NetSendCmdChItem__FUcUc('\0','\x04');
					iVar21 = iVar17 + -0x7ff25768;
					iVar17 = iVar17 + -0x7ff241b8;
				}
			}
		}
LAB_8015c140:
		i = FUN_8015ad5c(iVar21,iVar17);
		break;
	case 2:
		NetSendCmdDelItem__FUcUc('\0','\x05');
		if ((&plr)[iParm1].InvBody[4]._itype == -1) {
LAB_8015becc:
			if ((&plr)[iParm1].InvBody[5]._itype != -1) goto LAB_8015bf6c;
			NetSendCmdChItem__FUcUc('\0','\x04');
			pIVar10 = &(&plr)[iParm1].HoldItem;
			pIVar15 = (&plr)[iParm1].InvBody + 4;
			do {
				pIVar14 = pIVar15;
				pIVar9 = pIVar10;
				iVar21 = pIVar9->_iVMult1;
				iVar17 = pIVar9->_iVAdd2;
				iVar16 = pIVar9->_iVMult2;
				pIVar14->_iVAdd1 = pIVar9->_iVAdd1;
				pIVar14->_iVMult1 = iVar21;
				pIVar14->_iVAdd2 = iVar17;
				pIVar14->_iVMult2 = iVar16;
				pIVar10 = (ItemStruct *)&pIVar9->_iSeed;
				pIVar15 = (ItemStruct *)&pIVar14->_iSeed;
			} while (pIVar10 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
			iVar21 = pIVar9->_ivalue;
			iVar17 = pIVar9->_iIvalue;
			((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = pIVar10->_iVAdd1;
			pIVar14->_ivalue = iVar21;
			pIVar14->_iIvalue = iVar17;
		}
		else {
			if ((&plr)[iParm1].InvBody[5]._itype != -1) {
				pIVar10 = &(&plr)[iParm1].HoldItem;
				piVar12 = aiStack264;
				do {
					piVar11 = piVar12;
					pIVar15 = pIVar10;
					iVar21 = pIVar15->_iVMult1;
					iVar17 = pIVar15->_iVAdd2;
					iVar16 = pIVar15->_iVMult2;
					*piVar11 = pIVar15->_iVAdd1;
					piVar11[1] = iVar21;
					piVar11[2] = iVar17;
					piVar11[3] = iVar16;
					pIVar10 = (ItemStruct *)&pIVar15->_iSeed;
					piVar12 = piVar11 + 4;
				} while (pIVar10 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
				iVar21 = pIVar15->_ivalue;
				iVar17 = pIVar15->_iIvalue;
				piVar11[4] = pIVar10->_iVAdd1;
				piVar11[5] = iVar21;
				piVar11[6] = iVar17;
				if ((&plr)[iParm1].InvBody[5]._itype == 5) {
					pIVar15 = &(&plr)[iParm1].HoldItem;
					pIVar10 = (&plr)[iParm1].InvBody + 5;
					do {
						iVar21 = pIVar10->_iVMult1;
						iVar17 = pIVar10->_iVAdd2;
						iVar16 = pIVar10->_iVMult2;
						pIVar15->_iVAdd1 = pIVar10->_iVAdd1;
						pIVar15->_iVMult1 = iVar21;
						pIVar15->_iVAdd2 = iVar17;
						pIVar15->_iVMult2 = iVar16;
						pIVar10 = (ItemStruct *)&pIVar10->_iSeed;
						pIVar15 = (ItemStruct *)&pIVar15->_iSeed;
					} while (pIVar10 != (ItemStruct *)&(&plr)[iParm1].InvBody[5]._iSufPower);
				}
				else {
					pIVar15 = &(&plr)[iParm1].HoldItem;
					pIVar10 = (&plr)[iParm1].InvBody + 4;
					do {
						iVar21 = pIVar10->_iVMult1;
						iVar17 = pIVar10->_iVAdd2;
						iVar16 = pIVar10->_iVMult2;
						pIVar15->_iVAdd1 = pIVar10->_iVAdd1;
						pIVar15->_iVMult1 = iVar21;
						pIVar15->_iVAdd2 = iVar17;
						pIVar15->_iVMult2 = iVar16;
						pIVar10 = (ItemStruct *)&pIVar10->_iSeed;
						pIVar15 = (ItemStruct *)&pIVar15->_iSeed;
					} while (pIVar10 != (ItemStruct *)&(&plr)[iParm1].InvBody[4]._iSufPower);
				}
				iVar21 = pIVar10->_iVMult1;
				iVar17 = pIVar10->_iVAdd2;
				pIVar15->_iVAdd1 = pIVar10->_iVAdd1;
				pIVar15->_iVMult1 = iVar21;
				pIVar15->_iVAdd2 = iVar17;
				if (iParm1 == myplr) {
					SetCursor__Fi((uint)(&plr)[iParm1].HoldItem._iCurs + 0xc);
				}
				else {
					SetICursor__Fi((uint)(&plr)[iParm1].HoldItem._iCurs + 0xc);
				}
				iVar21 = 0;
				do {
					uVar20 = FUN_80159f24(iParm1,iVar21,icursW28,icursH28,1);
					if (0x27 < iVar21 + 1) break;
					iVar21 = iVar21 + 1;
				} while ((uVar20 & 0xff) == 0);
				piVar12 = aiStack264;
				pIVar10 = &(&plr)[iParm1].HoldItem;
				do {
					pIVar15 = pIVar10;
					piVar11 = piVar12;
					iVar21 = piVar11[1];
					iVar17 = piVar11[2];
					iVar16 = piVar11[3];
					pIVar15->_iVAdd1 = *piVar11;
					pIVar15->_iVMult1 = iVar21;
					pIVar15->_iVAdd2 = iVar17;
					pIVar15->_iVMult2 = iVar16;
					piVar12 = piVar11 + 4;
					pIVar10 = (ItemStruct *)&pIVar15->_iSeed;
				} while (piVar12 != aiStack168);
				iVar21 = piVar11[5];
				iVar17 = piVar11[6];
				((ItemStruct *)&pIVar15->_iSeed)->_iVAdd1 = *piVar12;
				pIVar15->_ivalue = iVar21;
				pIVar15->_iIvalue = iVar17;
				if (iParm1 == myplr) {
					SetCursor__Fi((uint)(&plr)[iParm1].HoldItem._iCurs + 0xc);
				}
				else {
					SetICursor__Fi((uint)(&plr)[iParm1].HoldItem._iCurs + 0xc);
				}
				if ((uVar20 & 0xff) == 0) {
					return;
				}
				if ((&plr)[iParm1].InvBody[5]._itype == 5) {
					(&plr)[iParm1].InvBody[5]._itype = -1;
				}
				else {
					(&plr)[iParm1].InvBody[4]._itype = -1;
				}
			}
			if ((&plr)[iParm1].InvBody[4]._itype == -1) goto LAB_8015becc;
LAB_8015bf6c:
			NetSendCmdChItem__FUcUc('\0','\x04');
			iVar21 = iParm1 * 0x19e8;
			if ((&plr)[iParm1].InvBody[4]._itype == -1) {
				FUN_8015ad5c(iVar21 + -0x7ff25768,iVar21 + -0x7ff256fc);
			}
			i = FUN_8015ad5c(iVar21 + -0x7ff25768,iVar21 + -0x7ff241b8);
		}
		if ((((&plr)[iParm1].InvBody[4]._itype == 10) &&
				(iVar21 = (int)(&plr)[iParm1].InvBody[4]._iSpell, iVar21 != 0)) &&
			 ((&plr)[iParm1].InvBody[4]._iCharges != '\0')) {
			(&plr)[iParm1]._pRSplType = '\x03';
			(&plr)[iParm1]._pRSpell = iVar21;
			force_redraw = 0xff;
		}
		break;
	case 3:
		NetSendCmdChItem__FUcUc('\0','\x06');
		if ((&plr)[iParm1].InvBody[6]._itype != -1) {
			iVar21 = iParm1 * 0x19e8 + -0x7ff25690;
LAB_8015c138:
			iVar17 = iParm1 * 0x19e8 + -0x7ff241b8;
			goto LAB_8015c140;
		}
		pIVar10 = &(&plr)[iParm1].HoldItem;
		pIVar15 = (&plr)[iParm1].InvBody + 6;
		do {
			pIVar14 = pIVar15;
			pIVar9 = pIVar10;
			iVar21 = pIVar9->_iVMult1;
			iVar17 = pIVar9->_iVAdd2;
			iVar16 = pIVar9->_iVMult2;
			pIVar14->_iVAdd1 = pIVar9->_iVAdd1;
			pIVar14->_iVMult1 = iVar21;
			pIVar14->_iVAdd2 = iVar17;
			pIVar14->_iVMult2 = iVar16;
			pIVar10 = (ItemStruct *)&pIVar9->_iSeed;
			pIVar15 = (ItemStruct *)&pIVar14->_iSeed;
		} while (pIVar10 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
		iVar21 = pIVar9->_ivalue;
		iVar17 = pIVar9->_iIvalue;
		((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = pIVar10->_iVAdd1;
		pIVar14->_ivalue = iVar21;
		pIVar14->_iIvalue = iVar17;
		break;
	case 4:
		NetSendCmdChItem__FUcUc('\0','\0');
		if ((&plr)[iParm1].InvBody[0]._itype != -1) {
			iVar21 = iParm1 * 0x19e8 + -0x7ff25918;
			goto LAB_8015c138;
		}
		pIVar10 = &(&plr)[iParm1].HoldItem;
		pIVar15 = (&plr)[iParm1].InvBody;
		do {
			pIVar14 = pIVar15;
			pIVar9 = pIVar10;
			iVar21 = pIVar9->_iVMult1;
			iVar17 = pIVar9->_iVAdd2;
			iVar16 = pIVar9->_iVMult2;
			pIVar14->_iVAdd1 = pIVar9->_iVAdd1;
			pIVar14->_iVMult1 = iVar21;
			pIVar14->_iVAdd2 = iVar17;
			pIVar14->_iVMult2 = iVar16;
			pIVar10 = (ItemStruct *)&pIVar9->_iSeed;
			pIVar15 = (ItemStruct *)&pIVar14->_iSeed;
		} while (pIVar10 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
		iVar21 = pIVar9->_ivalue;
		iVar17 = pIVar9->_iIvalue;
		((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = pIVar10->_iVAdd1;
		pIVar14->_ivalue = iVar21;
		pIVar14->_iIvalue = iVar17;
		break;
	case 5:
		if (uVar22 == 4) {
			NetSendCmdChItem__FUcUc('\0','\x01');
			if ((&plr)[iParm1].InvBody[1]._itype != -1) {
				iVar21 = iParm1 * 0x19e8 + -0x7ff258ac;
				goto LAB_8015c138;
			}
			pIVar10 = &(&plr)[iParm1].HoldItem;
			pIVar15 = (&plr)[iParm1].InvBody + 1;
			do {
				pIVar14 = pIVar15;
				pIVar9 = pIVar10;
				iVar21 = pIVar9->_iVMult1;
				iVar17 = pIVar9->_iVAdd2;
				iVar16 = pIVar9->_iVMult2;
				pIVar14->_iVAdd1 = pIVar9->_iVAdd1;
				pIVar14->_iVMult1 = iVar21;
				pIVar14->_iVAdd2 = iVar17;
				pIVar14->_iVMult2 = iVar16;
				pIVar10 = (ItemStruct *)&pIVar9->_iSeed;
				pIVar15 = (ItemStruct *)&pIVar14->_iSeed;
			} while (pIVar10 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
			iVar21 = pIVar9->_ivalue;
			iVar17 = pIVar9->_iIvalue;
			((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = pIVar10->_iVAdd1;
			pIVar14->_ivalue = iVar21;
			pIVar14->_iIvalue = iVar17;
		}
		else {
			NetSendCmdChItem__FUcUc('\0','\x02');
			if ((&plr)[iParm1].InvBody[2]._itype != -1) {
				iVar21 = iParm1 * 0x19e8 + -0x7ff25840;
				goto LAB_8015c138;
			}
			pIVar10 = &(&plr)[iParm1].HoldItem;
			pIVar15 = (&plr)[iParm1].InvBody + 2;
			do {
				pIVar14 = pIVar15;
				pIVar9 = pIVar10;
				iVar21 = pIVar9->_iVMult1;
				iVar17 = pIVar9->_iVAdd2;
				iVar16 = pIVar9->_iVMult2;
				pIVar14->_iVAdd1 = pIVar9->_iVAdd1;
				pIVar14->_iVMult1 = iVar21;
				pIVar14->_iVAdd2 = iVar17;
				pIVar14->_iVMult2 = iVar16;
				pIVar10 = (ItemStruct *)&pIVar9->_iSeed;
				pIVar15 = (ItemStruct *)&pIVar14->_iSeed;
			} while (pIVar10 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
			iVar21 = pIVar9->_ivalue;
			iVar17 = pIVar9->_iIvalue;
			((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = pIVar10->_iVAdd1;
			pIVar14->_ivalue = iVar21;
			pIVar14->_iIvalue = iVar17;
		}
		break;
	case 6:
		NetSendCmdChItem__FUcUc('\0','\x03');
		if ((&plr)[iParm1].InvBody[3]._itype != -1) {
			iVar21 = iParm1 * 0x19e8 + -0x7ff257d4;
			goto LAB_8015c138;
		}
		pIVar10 = &(&plr)[iParm1].HoldItem;
		pIVar15 = (&plr)[iParm1].InvBody + 3;
		do {
			pIVar14 = pIVar15;
			pIVar9 = pIVar10;
			iVar21 = pIVar9->_iVMult1;
			iVar17 = pIVar9->_iVAdd2;
			iVar16 = pIVar9->_iVMult2;
			pIVar14->_iVAdd1 = pIVar9->_iVAdd1;
			pIVar14->_iVMult1 = iVar21;
			pIVar14->_iVAdd2 = iVar17;
			pIVar14->_iVMult2 = iVar16;
			pIVar10 = (ItemStruct *)&pIVar9->_iSeed;
			pIVar15 = (ItemStruct *)&pIVar14->_iSeed;
		} while (pIVar10 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
		iVar21 = pIVar9->_ivalue;
		iVar17 = pIVar9->_iIvalue;
		((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = pIVar10->_iVAdd1;
		pIVar14->_ivalue = iVar21;
		pIVar14->_iIvalue = iVar17;
		break;
	case 7:
		iVar21 = iParm1 * 0x19e8;
		if ((&plr)[iParm1].HoldItem._itype == 0xb) {
			if (uVar20 == 0) {
				iVar17 = (int)*(char *)((uVar22 - 0x19) + iVar21 + -0x7ff24540);
				if (iVar17 < 1) {
					iVar17 = (&plr)[iParm1]._pNumInv;
					piVar12 = (int *)(iVar17 * 0x6c + iVar21 + -0x7ff25624);
					pIVar10 = &(&plr)[iParm1].HoldItem;
					do {
						pIVar15 = pIVar10;
						piVar11 = piVar12;
						iVar21 = pIVar15->_iVMult1;
						iVar16 = pIVar15->_iVAdd2;
						iVar13 = pIVar15->_iVMult2;
						*piVar11 = pIVar15->_iVAdd1;
						piVar11[1] = iVar21;
						piVar11[2] = iVar16;
						piVar11[3] = iVar13;
						pIVar10 = (ItemStruct *)&pIVar15->_iSeed;
						piVar12 = piVar11 + 4;
					} while (pIVar10 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
					iVar21 = pIVar15->_ivalue;
					iVar16 = pIVar15->_iIvalue;
					piVar11[4] = pIVar10->_iVAdd1;
					piVar11[5] = iVar21;
					piVar11[6] = iVar16;
					(&plr)[iParm1]._pNumInv = (&plr)[iParm1]._pNumInv + 1;
					*(undefined *)(iParm1 * 0x19e8 + -0x7ff24540 + (uVar22 - 0x19)) =
							 (char)(&plr)[iParm1]._pNumInv;
					iVar21 = (&plr)[iParm1].HoldItem._ivalue;
					(&plr)[iParm1]._pGold = (&plr)[iParm1]._pGold + (&plr)[iParm1].HoldItem._ivalue;
					if (iVar21 < 0x1389) {
						if (iVar21 < 0x9c4) {
							if (iVar21 < 0x3e9) {
								(&plr)[iParm1].InvList[iVar17]._iCurs = '\x04';
							}
							else {
								(&plr)[iParm1].InvList[iVar17]._iCurs = '\x05';
							}
						}
						else {
							(&plr)[iParm1].InvList[iVar17]._iCurs = '\x06';
						}
					}
				}
				else {
					iVar17 = iVar17 + -1;
					iVar21 = (&plr)[iParm1].InvList[iVar17]._ivalue;
					iVar16 = iVar21 + (&plr)[iParm1].HoldItem._ivalue;
					if (iVar16 < 0x1389) {
						(&plr)[iParm1].InvList[iVar17]._ivalue = iVar16;
						(&plr)[iParm1]._pGold = (&plr)[iParm1]._pGold + (&plr)[iParm1].HoldItem._ivalue;
						if (iVar16 < 0x9c4) {
							if (iVar16 < 0x3e9) {
								(&plr)[iParm1].InvList[iVar17]._iCurs = '\x04';
							}
							else {
								(&plr)[iParm1].InvList[iVar17]._iCurs = '\x05';
							}
						}
						else {
							(&plr)[iParm1].InvList[iVar17]._iCurs = '\x06';
						}
					}
					else {
						i = (&plr)[iParm1].HoldItem._ivalue;
						*(undefined **)&(&plr)[iParm1]._pGold = &DAT_00001388 + -iVar21 + (&plr)[iParm1]._pGold;
						(&plr)[iParm1].HoldItem._ivalue = i - (int)(&DAT_00001388 + -iVar21);
						(&plr)[iParm1].InvList[iVar17]._ivalue = 5000;
						(&plr)[iParm1].InvList[iVar17]._iCurs = '\x06';
						iVar21 = (&plr)[iParm1].HoldItem._ivalue;
						if (iVar21 < 0x9c4) {
							i = 0x11;
							if (iVar21 < 0x3e9) {
								i = 0x10;
							}
						}
						else {
							i = 0x12;
						}
					}
				}
				break;
			}
LAB_8015c5dc:
			iVar21 = iParm1 * 0x19e8;
			if ((&plr)[iParm1].HoldItem._itype == 0xb) {
				(&plr)[iParm1]._pGold = (&plr)[iParm1]._pGold + (&plr)[iParm1].HoldItem._ivalue;
			}
			i = FUN_8015ad5c(iVar21 + -0x7ff25624 + (uVar20 - 1) * 0x6c,iVar21 + -0x7ff241b8);
			if ((&plr)[iParm1].HoldItem._itype == 0xb) {
				lVar7 = FUN_80160b64(iParm1);
				(&plr)[iParm1]._pGold = lVar7;
			}
			pcVar8 = (&plr)[iParm1].InvGrid;
			do {
				if ((int)*pcVar8 == uVar20) {
					*pcVar8 = '\0';
				}
				if ((int)*pcVar8 == -uVar20) {
					*pcVar8 = '\0';
				}
				pcVar8 = pcVar8 + 1;
			} while ((int)pcVar8 < iVar21 + -0x7ff24518);
		}
		else {
			if (uVar20 != 0) goto LAB_8015c5dc;
			piVar12 = (int *)((&plr)[iParm1]._pNumInv * 0x6c + iVar21 + -0x7ff25624);
			pIVar10 = &(&plr)[iParm1].HoldItem;
			do {
				pIVar15 = pIVar10;
				piVar11 = piVar12;
				iVar21 = pIVar15->_iVMult1;
				iVar17 = pIVar15->_iVAdd2;
				iVar16 = pIVar15->_iVMult2;
				*piVar11 = pIVar15->_iVAdd1;
				piVar11[1] = iVar21;
				piVar11[2] = iVar17;
				piVar11[3] = iVar16;
				pIVar10 = (ItemStruct *)&pIVar15->_iSeed;
				piVar12 = piVar11 + 4;
			} while (pIVar10 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
			iVar21 = pIVar15->_ivalue;
			iVar17 = pIVar15->_iIvalue;
			piVar11[4] = pIVar10->_iVAdd1;
			piVar11[5] = iVar21;
			piVar11[6] = iVar17;
			(&plr)[iParm1]._pNumInv = (&plr)[iParm1]._pNumInv + 1;
			cVar19 = (char)(&plr)[iParm1]._pNumInv;
		}
		iVar21 = ((int)(uVar22 - 0x19) / 10 - ((int)(uVar24 - 1) >> 1)) * 10;
		if (iVar21 < 0) {
			iVar21 = 0;
		}
		iVar17 = 0;
		if (bVar3 != 0) {
			do {
				iVar16 = (int)(uVar22 - 0x19) % 10 - ((int)(uVar23 - 1) >> 1);
				if (iVar16 < 0) {
					iVar16 = 0;
				}
				iVar13 = 0;
				if (bVar4 != 0) {
					iVar18 = iParm1 * 0x19e8 + -0x7ff24540;
					iVar16 = iVar16 + iVar21;
					do {
						if ((iVar13 == 0) && (iVar17 == uVar24 - 1)) {
							*(char *)(iVar18 + iVar16) = cVar19;
						}
						else {
							*(char *)(iVar18 + iVar16) = -cVar19;
						}
						iVar13 = iVar13 + 1;
						iVar16 = iVar16 + 1;
					} while (iVar13 < (int)uVar23);
				}
				iVar17 = iVar17 + 1;
				iVar21 = iVar21 + 10;
			} while (iVar17 < (int)uVar24);
		}
		break;
	case 8:
		iVar17 = iParm1 * 0x19e8;
		iVar21 = uVar22 - 0x41;
		if ((&plr)[iParm1].HoldItem._itype == 0xb) {
			sVar2 = (&plr)[iParm1].SpdList[iVar21]._itype;
			if (sVar2 == -1) {
				pIVar10 = &(&plr)[iParm1].HoldItem;
				piVar12 = (int *)(iVar21 * 0x6c + iVar17 + -0x7ff24518);
				do {
					piVar11 = piVar12;
					pIVar15 = pIVar10;
					iVar21 = pIVar15->_iVMult1;
					iVar17 = pIVar15->_iVAdd2;
					iVar16 = pIVar15->_iVMult2;
					*piVar11 = pIVar15->_iVAdd1;
					piVar11[1] = iVar21;
					piVar11[2] = iVar17;
					piVar11[3] = iVar16;
					pIVar10 = (ItemStruct *)&pIVar15->_iSeed;
					piVar12 = piVar11 + 4;
				} while (pIVar10 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
				iVar21 = pIVar15->_ivalue;
				iVar17 = pIVar15->_iIvalue;
				piVar11[4] = pIVar10->_iVAdd1;
				piVar11[5] = iVar21;
				piVar11[6] = iVar17;
				(&plr)[iParm1]._pGold = (&plr)[iParm1]._pGold + (&plr)[iParm1].HoldItem._ivalue;
			}
			else {
				if (sVar2 == 0xb) {
					iVar17 = (&plr)[iParm1].SpdList[iVar21]._ivalue;
					iVar16 = iVar17 + (&plr)[iParm1].HoldItem._ivalue;
					if (iVar16 < 0x1389) {
						(&plr)[iParm1].SpdList[iVar21]._ivalue = iVar16;
						(&plr)[iParm1]._pGold = (&plr)[iParm1]._pGold + (&plr)[iParm1].HoldItem._ivalue;
						if (iVar16 < 0x9c4) {
							if (iVar16 < 0x3e9) {
								(&plr)[iParm1].SpdList[iVar21]._iCurs = '\x04';
							}
							else {
								(&plr)[iParm1].SpdList[iVar21]._iCurs = '\x05';
							}
						}
						else {
							(&plr)[iParm1].SpdList[iVar21]._iCurs = '\x06';
						}
					}
					else {
						i = (&plr)[iParm1].HoldItem._ivalue;
						*(undefined **)&(&plr)[iParm1]._pGold = &DAT_00001388 + -iVar17 + (&plr)[iParm1]._pGold;
						(&plr)[iParm1].HoldItem._ivalue = i - (int)(&DAT_00001388 + -iVar17);
						(&plr)[iParm1].SpdList[iVar21]._ivalue = 5000;
						(&plr)[iParm1].SpdList[iVar21]._iCurs = '\x06';
						iVar21 = (&plr)[iParm1].HoldItem._ivalue;
						if (iVar21 < 0x9c4) {
							i = 0x11;
							if (iVar21 < 0x3e9) {
								i = 0x10;
							}
						}
						else {
							i = 0x12;
						}
					}
				}
				else {
					(&plr)[iParm1]._pGold = (&plr)[iParm1]._pGold + (&plr)[iParm1].HoldItem._ivalue;
					i = FUN_8015ad5c(iVar17 + -0x7ff24518 + iVar21 * 0x6c,iVar17 + -0x7ff241b8);
				}
			}
		}
		else {
			if ((&plr)[iParm1].SpdList[iVar21]._itype == -1) {
				pIVar10 = &(&plr)[iParm1].HoldItem;
				piVar12 = (int *)(iVar21 * 0x6c + iVar17 + -0x7ff24518);
				do {
					piVar11 = piVar12;
					pIVar15 = pIVar10;
					iVar21 = pIVar15->_iVMult1;
					iVar17 = pIVar15->_iVAdd2;
					iVar16 = pIVar15->_iVMult2;
					*piVar11 = pIVar15->_iVAdd1;
					piVar11[1] = iVar21;
					piVar11[2] = iVar17;
					piVar11[3] = iVar16;
					pIVar10 = (ItemStruct *)&pIVar15->_iSeed;
					piVar12 = piVar11 + 4;
				} while (pIVar10 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
				iVar21 = pIVar15->_ivalue;
				iVar17 = pIVar15->_iIvalue;
				piVar11[4] = pIVar10->_iVAdd1;
				piVar11[5] = iVar21;
				piVar11[6] = iVar17;
			}
			else {
				i = FUN_8015ad5c(iVar17 + -0x7ff24518 + iVar21 * 0x6c,iVar17 + -0x7ff241b8);
				if ((&plr)[iParm1].HoldItem._itype == 0xb) {
					lVar7 = FUN_80160b64(iParm1);
					(&plr)[iParm1]._pGold = lVar7;
				}
			}
		}
		uGp00001bad = 1;
	}
	CalcPlrInv__FiUc(iParm1,'\x01');
	if (iParm1 == myplr) {
		SetCursor__Fi(i);
	}
	if (local_98 != false) {
		return;
	}
LAB_8015cbbc:
	PlaySFX__Fi(IS_TITERR);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015b37c(void);
 // line -1, offset 0x8015b37c
// function 'FUN_8015b37c' @0x8015B37C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015b37c(void)

{
	short sVar1;
	int in_at;
	uint uVar2;
	long lVar3;
	int iVar4;
	char *pcVar5;
	int iVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	int *piVar9;
	int *piVar10;
	int iVar11;
	ItemStruct *pIVar12;
	ItemStruct *pIVar13;
	int iVar14;
	int iVar15;
	char cVar16;
	int unaff_s1;
	int p;
	undefined4 unaff_s3;
	int unaff_s4;
	int i;
	int unaff_s6;
	int unaff_s7;
	char in_stack_00000088;
	
	cVar16 = (char)unaff_s1;
	if (p == myplr) {
		PlaySFX__Fi(ItemInvSnds[(uint)ItemCAnimTbl[(uint)*(byte *)(in_at + -0x416c)]]);
	}
	i = 1;
	switch(unaff_s3) {
	case 1:
		if (unaff_s4 < 0xd) {
			iVar14 = p * 0x19e8;
			if ((&plr)[p].InvBody[4]._itype == -1) {
				if (((&plr)[p].InvBody[5]._itype == -1) ||
					 ((&plr)[p].InvBody[5]._iClass != (&plr)[p].HoldItem._iClass)) {
					NetSendCmdChItem__FUcUc('\0','\x04');
					pIVar8 = &(&plr)[p].HoldItem;
					pIVar13 = (&plr)[p].InvBody + 4;
					do {
						pIVar12 = pIVar13;
						pIVar7 = pIVar8;
						iVar14 = pIVar7->_iVMult1;
						iVar15 = pIVar7->_iVAdd2;
						iVar6 = pIVar7->_iVMult2;
						pIVar12->_iVAdd1 = pIVar7->_iVAdd1;
						pIVar12->_iVMult1 = iVar14;
						pIVar12->_iVAdd2 = iVar15;
						pIVar12->_iVMult2 = iVar6;
						pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
						pIVar13 = (ItemStruct *)&pIVar12->_iSeed;
					} while (pIVar8 != (ItemStruct *)&(&plr)[p].HoldItem._iSufPower);
					iVar14 = pIVar7->_ivalue;
					iVar15 = pIVar7->_iIvalue;
					((ItemStruct *)&pIVar12->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
					pIVar12->_ivalue = iVar14;
					pIVar12->_iIvalue = iVar15;
					goto switchD_8015b3d8_caseD_8;
				}
				NetSendCmdChItem__FUcUc('\0','\x05');
				i = iVar14 + -0x7ff256fc;
				iVar14 = iVar14 + -0x7ff241b8;
			}
			else {
				if (((&plr)[p].InvBody[5]._itype == -1) ||
					 ((&plr)[p].InvBody[5]._iClass != (&plr)[p].HoldItem._iClass)) {
					NetSendCmdChItem__FUcUc('\0','\x04');
					i = p * 0x19e8 + -0x7ff25768;
					iVar14 = p * 0x19e8 + -0x7ff241b8;
				}
				else {
					NetSendCmdChItem__FUcUc('\0','\x05');
					i = iVar14 + -0x7ff256fc;
					iVar14 = iVar14 + -0x7ff241b8;
				}
			}
		}
		else {
			iVar14 = p * 0x19e8;
			if ((&plr)[p].InvBody[5]._itype == -1) {
				if ((&plr)[p].InvBody[4]._itype == -1) {
LAB_8015b994:
					NetSendCmdChItem__FUcUc('\0','\x05');
					pIVar8 = &(&plr)[p].HoldItem;
					pIVar13 = (&plr)[p].InvBody + 5;
					do {
						pIVar12 = pIVar13;
						pIVar7 = pIVar8;
						iVar14 = pIVar7->_iVMult1;
						iVar15 = pIVar7->_iVAdd2;
						iVar6 = pIVar7->_iVMult2;
						pIVar12->_iVAdd1 = pIVar7->_iVAdd1;
						pIVar12->_iVMult1 = iVar14;
						pIVar12->_iVAdd2 = iVar15;
						pIVar12->_iVMult2 = iVar6;
						pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
						pIVar13 = (ItemStruct *)&pIVar12->_iSeed;
					} while (pIVar8 != (ItemStruct *)&(&plr)[p].HoldItem._iSufPower);
					iVar14 = pIVar7->_ivalue;
					iVar15 = pIVar7->_iIvalue;
					((ItemStruct *)&pIVar12->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
					pIVar12->_ivalue = iVar14;
					pIVar12->_iIvalue = iVar15;
					goto switchD_8015b3d8_caseD_8;
				}
				if ((&plr)[p].InvBody[4]._iLoc == '\x02') {
					NetSendCmdChItem__FUcUc('\0','\x04');
					i = iVar14 + -0x7ff256fc;
					FUN_8015ad5c(i,iVar14 + -0x7ff25768);
					iVar14 = iVar14 + -0x7ff241b8;
				}
				else {
					if ((&plr)[p].InvBody[4]._iClass != (&plr)[p].HoldItem._iClass) goto LAB_8015b994;
					NetSendCmdChItem__FUcUc('\0','\x04');
					i = iVar14 + -0x7ff25768;
					iVar14 = iVar14 + -0x7ff241b8;
				}
			}
			else {
				if (((&plr)[p].InvBody[4]._itype == -1) ||
					 ((&plr)[p].InvBody[4]._iClass != (&plr)[p].HoldItem._iClass)) {
					NetSendCmdChItem__FUcUc('\0','\x05');
					i = p * 0x19e8 + -0x7ff256fc;
					iVar14 = p * 0x19e8 + -0x7ff241b8;
				}
				else {
					NetSendCmdChItem__FUcUc('\0','\x04');
					i = iVar14 + -0x7ff25768;
					iVar14 = iVar14 + -0x7ff241b8;
				}
			}
		}
		goto LAB_8015c140;
	case 2:
		NetSendCmdDelItem__FUcUc('\0','\x05');
		if ((&plr)[p].InvBody[4]._itype == -1) {
LAB_8015becc:
			if ((&plr)[p].InvBody[5]._itype != -1) goto LAB_8015bf6c;
			NetSendCmdChItem__FUcUc('\0','\x04');
			pIVar8 = &(&plr)[p].HoldItem;
			pIVar13 = (&plr)[p].InvBody + 4;
			do {
				pIVar12 = pIVar13;
				pIVar7 = pIVar8;
				iVar14 = pIVar7->_iVMult1;
				iVar15 = pIVar7->_iVAdd2;
				iVar6 = pIVar7->_iVMult2;
				pIVar12->_iVAdd1 = pIVar7->_iVAdd1;
				pIVar12->_iVMult1 = iVar14;
				pIVar12->_iVAdd2 = iVar15;
				pIVar12->_iVMult2 = iVar6;
				pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
				pIVar13 = (ItemStruct *)&pIVar12->_iSeed;
			} while (pIVar8 != (ItemStruct *)&(&plr)[p].HoldItem._iSufPower);
			iVar14 = pIVar7->_ivalue;
			iVar15 = pIVar7->_iIvalue;
			((ItemStruct *)&pIVar12->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
			pIVar12->_ivalue = iVar14;
			pIVar12->_iIvalue = iVar15;
		}
		else {
			if ((&plr)[p].InvBody[5]._itype != -1) {
				pIVar8 = &(&plr)[p].HoldItem;
				piVar10 = (int *)&stack0x00000018;
				do {
					piVar9 = piVar10;
					pIVar13 = pIVar8;
					iVar14 = pIVar13->_iVMult1;
					iVar15 = pIVar13->_iVAdd2;
					iVar6 = pIVar13->_iVMult2;
					*piVar9 = pIVar13->_iVAdd1;
					piVar9[1] = iVar14;
					piVar9[2] = iVar15;
					piVar9[3] = iVar6;
					pIVar8 = (ItemStruct *)&pIVar13->_iSeed;
					piVar10 = piVar9 + 4;
				} while (pIVar8 != (ItemStruct *)&(&plr)[p].HoldItem._iSufPower);
				iVar14 = pIVar13->_ivalue;
				iVar15 = pIVar13->_iIvalue;
				piVar9[4] = pIVar8->_iVAdd1;
				piVar9[5] = iVar14;
				piVar9[6] = iVar15;
				if ((&plr)[p].InvBody[5]._itype == 5) {
					pIVar13 = &(&plr)[p].HoldItem;
					pIVar8 = (&plr)[p].InvBody + 5;
					do {
						iVar14 = pIVar8->_iVMult1;
						iVar15 = pIVar8->_iVAdd2;
						iVar6 = pIVar8->_iVMult2;
						pIVar13->_iVAdd1 = pIVar8->_iVAdd1;
						pIVar13->_iVMult1 = iVar14;
						pIVar13->_iVAdd2 = iVar15;
						pIVar13->_iVMult2 = iVar6;
						pIVar8 = (ItemStruct *)&pIVar8->_iSeed;
						pIVar13 = (ItemStruct *)&pIVar13->_iSeed;
					} while (pIVar8 != (ItemStruct *)&(&plr)[p].InvBody[5]._iSufPower);
				}
				else {
					pIVar13 = &(&plr)[p].HoldItem;
					pIVar8 = (&plr)[p].InvBody + 4;
					do {
						iVar14 = pIVar8->_iVMult1;
						iVar15 = pIVar8->_iVAdd2;
						iVar6 = pIVar8->_iVMult2;
						pIVar13->_iVAdd1 = pIVar8->_iVAdd1;
						pIVar13->_iVMult1 = iVar14;
						pIVar13->_iVAdd2 = iVar15;
						pIVar13->_iVMult2 = iVar6;
						pIVar8 = (ItemStruct *)&pIVar8->_iSeed;
						pIVar13 = (ItemStruct *)&pIVar13->_iSeed;
					} while (pIVar8 != (ItemStruct *)&(&plr)[p].InvBody[4]._iSufPower);
				}
				iVar14 = pIVar8->_iVMult1;
				iVar15 = pIVar8->_iVAdd2;
				pIVar13->_iVAdd1 = pIVar8->_iVAdd1;
				pIVar13->_iVMult1 = iVar14;
				pIVar13->_iVAdd2 = iVar15;
				if (p == myplr) {
					SetCursor__Fi((uint)(&plr)[p].HoldItem._iCurs + 0xc);
				}
				else {
					SetICursor__Fi((uint)(&plr)[p].HoldItem._iCurs + 0xc);
				}
				iVar14 = 0;
				do {
					iVar14 = iVar14 + 1;
					uVar2 = FUN_80159f24();
					if (0x27 < iVar14) break;
				} while ((uVar2 & 0xff) == 0);
				piVar10 = (int *)&stack0x00000018;
				pIVar8 = &(&plr)[p].HoldItem;
				do {
					pIVar13 = pIVar8;
					piVar9 = piVar10;
					iVar14 = piVar9[1];
					iVar15 = piVar9[2];
					iVar6 = piVar9[3];
					pIVar13->_iVAdd1 = *piVar9;
					pIVar13->_iVMult1 = iVar14;
					pIVar13->_iVAdd2 = iVar15;
					pIVar13->_iVMult2 = iVar6;
					piVar10 = piVar9 + 4;
					pIVar8 = (ItemStruct *)&pIVar13->_iSeed;
				} while (piVar10 != (int *)&stack0x00000078);
				iVar14 = piVar9[5];
				iVar15 = piVar9[6];
				((ItemStruct *)&pIVar13->_iSeed)->_iVAdd1 = *piVar10;
				pIVar13->_ivalue = iVar14;
				pIVar13->_iIvalue = iVar15;
				if (p == myplr) {
					SetCursor__Fi((uint)(&plr)[p].HoldItem._iCurs + 0xc);
				}
				else {
					SetICursor__Fi((uint)(&plr)[p].HoldItem._iCurs + 0xc);
				}
				if ((uVar2 & 0xff) == 0) {
					return;
				}
				if ((&plr)[p].InvBody[5]._itype == 5) {
					(&plr)[p].InvBody[5]._itype = -1;
				}
				else {
					(&plr)[p].InvBody[4]._itype = -1;
				}
			}
			if ((&plr)[p].InvBody[4]._itype == -1) goto LAB_8015becc;
LAB_8015bf6c:
			NetSendCmdChItem__FUcUc('\0','\x04');
			i = p * 0x19e8;
			if ((&plr)[p].InvBody[4]._itype == -1) {
				FUN_8015ad5c(i + -0x7ff25768,i + -0x7ff256fc);
			}
			i = FUN_8015ad5c(i + -0x7ff25768,i + -0x7ff241b8);
		}
		if ((((&plr)[p].InvBody[4]._itype == 10) &&
				(iVar14 = (int)(&plr)[p].InvBody[4]._iSpell, iVar14 != 0)) &&
			 ((&plr)[p].InvBody[4]._iCharges != '\0')) {
			(&plr)[p]._pRSplType = '\x03';
			(&plr)[p]._pRSpell = iVar14;
			force_redraw = 0xff;
		}
		goto switchD_8015b3d8_caseD_8;
	case 3:
		NetSendCmdChItem__FUcUc('\0','\x06');
		if ((&plr)[p].InvBody[6]._itype == -1) {
			pIVar8 = &(&plr)[p].HoldItem;
			pIVar13 = (&plr)[p].InvBody + 6;
			do {
				pIVar12 = pIVar13;
				pIVar7 = pIVar8;
				iVar14 = pIVar7->_iVMult1;
				iVar15 = pIVar7->_iVAdd2;
				iVar6 = pIVar7->_iVMult2;
				pIVar12->_iVAdd1 = pIVar7->_iVAdd1;
				pIVar12->_iVMult1 = iVar14;
				pIVar12->_iVAdd2 = iVar15;
				pIVar12->_iVMult2 = iVar6;
				pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
				pIVar13 = (ItemStruct *)&pIVar12->_iSeed;
			} while (pIVar8 != (ItemStruct *)&(&plr)[p].HoldItem._iSufPower);
			iVar14 = pIVar7->_ivalue;
			iVar15 = pIVar7->_iIvalue;
			((ItemStruct *)&pIVar12->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
			pIVar12->_ivalue = iVar14;
			pIVar12->_iIvalue = iVar15;
			goto switchD_8015b3d8_caseD_8;
		}
		i = p * 0x19e8 + -0x7ff25690;
		break;
	case 4:
		NetSendCmdChItem__FUcUc('\0','\0');
		if ((&plr)[p].InvBody[0]._itype == -1) {
			pIVar8 = &(&plr)[p].HoldItem;
			pIVar13 = (&plr)[p].InvBody;
			do {
				pIVar12 = pIVar13;
				pIVar7 = pIVar8;
				iVar14 = pIVar7->_iVMult1;
				iVar15 = pIVar7->_iVAdd2;
				iVar6 = pIVar7->_iVMult2;
				pIVar12->_iVAdd1 = pIVar7->_iVAdd1;
				pIVar12->_iVMult1 = iVar14;
				pIVar12->_iVAdd2 = iVar15;
				pIVar12->_iVMult2 = iVar6;
				pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
				pIVar13 = (ItemStruct *)&pIVar12->_iSeed;
			} while (pIVar8 != (ItemStruct *)&(&plr)[p].HoldItem._iSufPower);
			iVar14 = pIVar7->_ivalue;
			iVar15 = pIVar7->_iIvalue;
			((ItemStruct *)&pIVar12->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
			pIVar12->_ivalue = iVar14;
			pIVar12->_iIvalue = iVar15;
			goto switchD_8015b3d8_caseD_8;
		}
		i = p * 0x19e8 + -0x7ff25918;
		break;
	case 5:
		if (unaff_s4 == 4) {
			NetSendCmdChItem__FUcUc('\0','\x01');
			if ((&plr)[p].InvBody[1]._itype == -1) {
				pIVar8 = &(&plr)[p].HoldItem;
				pIVar13 = (&plr)[p].InvBody + 1;
				do {
					pIVar12 = pIVar13;
					pIVar7 = pIVar8;
					iVar14 = pIVar7->_iVMult1;
					iVar15 = pIVar7->_iVAdd2;
					iVar6 = pIVar7->_iVMult2;
					pIVar12->_iVAdd1 = pIVar7->_iVAdd1;
					pIVar12->_iVMult1 = iVar14;
					pIVar12->_iVAdd2 = iVar15;
					pIVar12->_iVMult2 = iVar6;
					pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
					pIVar13 = (ItemStruct *)&pIVar12->_iSeed;
				} while (pIVar8 != (ItemStruct *)&(&plr)[p].HoldItem._iSufPower);
				iVar14 = pIVar7->_ivalue;
				iVar15 = pIVar7->_iIvalue;
				((ItemStruct *)&pIVar12->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
				pIVar12->_ivalue = iVar14;
				pIVar12->_iIvalue = iVar15;
				goto switchD_8015b3d8_caseD_8;
			}
			i = p * 0x19e8 + -0x7ff258ac;
		}
		else {
			NetSendCmdChItem__FUcUc('\0','\x02');
			if ((&plr)[p].InvBody[2]._itype == -1) {
				pIVar8 = &(&plr)[p].HoldItem;
				pIVar13 = (&plr)[p].InvBody + 2;
				do {
					pIVar12 = pIVar13;
					pIVar7 = pIVar8;
					iVar14 = pIVar7->_iVMult1;
					iVar15 = pIVar7->_iVAdd2;
					iVar6 = pIVar7->_iVMult2;
					pIVar12->_iVAdd1 = pIVar7->_iVAdd1;
					pIVar12->_iVMult1 = iVar14;
					pIVar12->_iVAdd2 = iVar15;
					pIVar12->_iVMult2 = iVar6;
					pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
					pIVar13 = (ItemStruct *)&pIVar12->_iSeed;
				} while (pIVar8 != (ItemStruct *)&(&plr)[p].HoldItem._iSufPower);
				iVar14 = pIVar7->_ivalue;
				iVar15 = pIVar7->_iIvalue;
				((ItemStruct *)&pIVar12->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
				pIVar12->_ivalue = iVar14;
				pIVar12->_iIvalue = iVar15;
				goto switchD_8015b3d8_caseD_8;
			}
			i = p * 0x19e8 + -0x7ff25840;
		}
		break;
	case 6:
		NetSendCmdChItem__FUcUc('\0','\x03');
		if ((&plr)[p].InvBody[3]._itype == -1) {
			pIVar8 = &(&plr)[p].HoldItem;
			pIVar13 = (&plr)[p].InvBody + 3;
			do {
				pIVar12 = pIVar13;
				pIVar7 = pIVar8;
				iVar14 = pIVar7->_iVMult1;
				iVar15 = pIVar7->_iVAdd2;
				iVar6 = pIVar7->_iVMult2;
				pIVar12->_iVAdd1 = pIVar7->_iVAdd1;
				pIVar12->_iVMult1 = iVar14;
				pIVar12->_iVAdd2 = iVar15;
				pIVar12->_iVMult2 = iVar6;
				pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
				pIVar13 = (ItemStruct *)&pIVar12->_iSeed;
			} while (pIVar8 != (ItemStruct *)&(&plr)[p].HoldItem._iSufPower);
			iVar14 = pIVar7->_ivalue;
			iVar15 = pIVar7->_iIvalue;
			((ItemStruct *)&pIVar12->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
			pIVar12->_ivalue = iVar14;
			pIVar12->_iIvalue = iVar15;
			goto switchD_8015b3d8_caseD_8;
		}
		i = p * 0x19e8 + -0x7ff257d4;
		break;
	case 7:
		iVar14 = p * 0x19e8;
		if ((&plr)[p].HoldItem._itype == 0xb) {
			if (unaff_s1 == 0) {
				iVar15 = (int)*(char *)(unaff_s4 + -0x19 + iVar14 + -0x7ff24540);
				if (iVar15 < 1) {
					iVar15 = (&plr)[p]._pNumInv;
					piVar10 = (int *)(iVar15 * 0x6c + iVar14 + -0x7ff25624);
					pIVar8 = &(&plr)[p].HoldItem;
					do {
						pIVar13 = pIVar8;
						piVar9 = piVar10;
						iVar14 = pIVar13->_iVMult1;
						iVar6 = pIVar13->_iVAdd2;
						iVar4 = pIVar13->_iVMult2;
						*piVar9 = pIVar13->_iVAdd1;
						piVar9[1] = iVar14;
						piVar9[2] = iVar6;
						piVar9[3] = iVar4;
						pIVar8 = (ItemStruct *)&pIVar13->_iSeed;
						piVar10 = piVar9 + 4;
					} while (pIVar8 != (ItemStruct *)&(&plr)[p].HoldItem._iSufPower);
					iVar14 = pIVar13->_ivalue;
					iVar6 = pIVar13->_iIvalue;
					piVar9[4] = pIVar8->_iVAdd1;
					piVar9[5] = iVar14;
					piVar9[6] = iVar6;
					(&plr)[p]._pNumInv = (&plr)[p]._pNumInv + 1;
					*(undefined *)(p * 0x19e8 + -0x7ff24540 + unaff_s4 + -0x19) = (char)(&plr)[p]._pNumInv;
					iVar14 = (&plr)[p].HoldItem._ivalue;
					(&plr)[p]._pGold = (&plr)[p]._pGold + (&plr)[p].HoldItem._ivalue;
					if (iVar14 < 0x1389) {
						if (iVar14 < 0x9c4) {
							if (iVar14 < 0x3e9) {
								(&plr)[p].InvList[iVar15]._iCurs = '\x04';
							}
							else {
								(&plr)[p].InvList[iVar15]._iCurs = '\x05';
							}
						}
						else {
							(&plr)[p].InvList[iVar15]._iCurs = '\x06';
						}
					}
				}
				else {
					iVar15 = iVar15 + -1;
					iVar14 = (&plr)[p].InvList[iVar15]._ivalue;
					iVar6 = iVar14 + (&plr)[p].HoldItem._ivalue;
					if (iVar6 < 0x1389) {
						(&plr)[p].InvList[iVar15]._ivalue = iVar6;
						(&plr)[p]._pGold = (&plr)[p]._pGold + (&plr)[p].HoldItem._ivalue;
						if (iVar6 < 0x9c4) {
							if (iVar6 < 0x3e9) {
								(&plr)[p].InvList[iVar15]._iCurs = '\x04';
							}
							else {
								(&plr)[p].InvList[iVar15]._iCurs = '\x05';
							}
						}
						else {
							(&plr)[p].InvList[iVar15]._iCurs = '\x06';
						}
					}
					else {
						i = (&plr)[p].HoldItem._ivalue;
						*(undefined **)&(&plr)[p]._pGold = &DAT_00001388 + -iVar14 + (&plr)[p]._pGold;
						(&plr)[p].HoldItem._ivalue = i - (int)(&DAT_00001388 + -iVar14);
						(&plr)[p].InvList[iVar15]._ivalue = 5000;
						(&plr)[p].InvList[iVar15]._iCurs = '\x06';
						iVar14 = (&plr)[p].HoldItem._ivalue;
						if (iVar14 < 0x9c4) {
							i = 0x11;
							if (iVar14 < 0x3e9) {
								i = 0x10;
							}
						}
						else {
							i = 0x12;
						}
					}
				}
				goto switchD_8015b3d8_caseD_8;
			}
LAB_8015c5dc:
			iVar14 = p * 0x19e8;
			if ((&plr)[p].HoldItem._itype == 0xb) {
				(&plr)[p]._pGold = (&plr)[p]._pGold + (&plr)[p].HoldItem._ivalue;
			}
			i = FUN_8015ad5c(iVar14 + -0x7ff25624 + (unaff_s1 + -1) * 0x6c,iVar14 + -0x7ff241b8);
			if ((&plr)[p].HoldItem._itype == 0xb) {
				lVar3 = FUN_80160b64();
				(&plr)[p]._pGold = lVar3;
			}
			pcVar5 = (&plr)[p].InvGrid;
			do {
				if ((int)*pcVar5 == unaff_s1) {
					*pcVar5 = '\0';
				}
				if ((int)*pcVar5 == -unaff_s1) {
					*pcVar5 = '\0';
				}
				pcVar5 = pcVar5 + 1;
			} while ((int)pcVar5 < iVar14 + -0x7ff24518);
		}
		else {
			if (unaff_s1 != 0) goto LAB_8015c5dc;
			piVar10 = (int *)((&plr)[p]._pNumInv * 0x6c + iVar14 + -0x7ff25624);
			pIVar8 = &(&plr)[p].HoldItem;
			do {
				pIVar13 = pIVar8;
				piVar9 = piVar10;
				iVar14 = pIVar13->_iVMult1;
				iVar15 = pIVar13->_iVAdd2;
				iVar6 = pIVar13->_iVMult2;
				*piVar9 = pIVar13->_iVAdd1;
				piVar9[1] = iVar14;
				piVar9[2] = iVar15;
				piVar9[3] = iVar6;
				pIVar8 = (ItemStruct *)&pIVar13->_iSeed;
				piVar10 = piVar9 + 4;
			} while (pIVar8 != (ItemStruct *)&(&plr)[p].HoldItem._iSufPower);
			iVar14 = pIVar13->_ivalue;
			iVar15 = pIVar13->_iIvalue;
			piVar9[4] = pIVar8->_iVAdd1;
			piVar9[5] = iVar14;
			piVar9[6] = iVar15;
			(&plr)[p]._pNumInv = (&plr)[p]._pNumInv + 1;
			cVar16 = (char)(&plr)[p]._pNumInv;
		}
		iVar14 = ((unaff_s4 + -0x19) / 10 - (unaff_s7 + -1 >> 1)) * 10;
		if (iVar14 < 0) {
			iVar14 = 0;
		}
		iVar15 = 0;
		if (unaff_s7 != 0) {
			do {
				iVar6 = (unaff_s4 + -0x19) % 10 - (unaff_s6 + -1 >> 1);
				if (iVar6 < 0) {
					iVar6 = 0;
				}
				iVar4 = 0;
				if (unaff_s6 != 0) {
					iVar11 = p * 0x19e8 + -0x7ff24540;
					iVar6 = iVar6 + iVar14;
					do {
						if ((iVar4 == 0) && (iVar15 == unaff_s7 + -1)) {
							*(char *)(iVar11 + iVar6) = cVar16;
						}
						else {
							*(char *)(iVar11 + iVar6) = -cVar16;
						}
						iVar4 = iVar4 + 1;
						iVar6 = iVar6 + 1;
					} while (iVar4 < unaff_s6);
				}
				iVar15 = iVar15 + 1;
				iVar14 = iVar14 + 10;
			} while (iVar15 < unaff_s7);
		}
		goto switchD_8015b3d8_caseD_8;
	case 8:
		iVar15 = p * 0x19e8;
		iVar14 = unaff_s4 + -0x41;
		if ((&plr)[p].HoldItem._itype == 0xb) {
			sVar1 = (&plr)[p].SpdList[iVar14]._itype;
			if (sVar1 == -1) {
				pIVar8 = &(&plr)[p].HoldItem;
				piVar10 = (int *)(iVar14 * 0x6c + iVar15 + -0x7ff24518);
				do {
					piVar9 = piVar10;
					pIVar13 = pIVar8;
					iVar14 = pIVar13->_iVMult1;
					iVar15 = pIVar13->_iVAdd2;
					iVar6 = pIVar13->_iVMult2;
					*piVar9 = pIVar13->_iVAdd1;
					piVar9[1] = iVar14;
					piVar9[2] = iVar15;
					piVar9[3] = iVar6;
					pIVar8 = (ItemStruct *)&pIVar13->_iSeed;
					piVar10 = piVar9 + 4;
				} while (pIVar8 != (ItemStruct *)&(&plr)[p].HoldItem._iSufPower);
				iVar14 = pIVar13->_ivalue;
				iVar15 = pIVar13->_iIvalue;
				piVar9[4] = pIVar8->_iVAdd1;
				piVar9[5] = iVar14;
				piVar9[6] = iVar15;
				(&plr)[p]._pGold = (&plr)[p]._pGold + (&plr)[p].HoldItem._ivalue;
			}
			else {
				if (sVar1 == 0xb) {
					iVar15 = (&plr)[p].SpdList[iVar14]._ivalue;
					iVar6 = iVar15 + (&plr)[p].HoldItem._ivalue;
					if (iVar6 < 0x1389) {
						(&plr)[p].SpdList[iVar14]._ivalue = iVar6;
						(&plr)[p]._pGold = (&plr)[p]._pGold + (&plr)[p].HoldItem._ivalue;
						if (iVar6 < 0x9c4) {
							if (iVar6 < 0x3e9) {
								(&plr)[p].SpdList[iVar14]._iCurs = '\x04';
							}
							else {
								(&plr)[p].SpdList[iVar14]._iCurs = '\x05';
							}
						}
						else {
							(&plr)[p].SpdList[iVar14]._iCurs = '\x06';
						}
					}
					else {
						i = (&plr)[p].HoldItem._ivalue;
						*(undefined **)&(&plr)[p]._pGold = &DAT_00001388 + -iVar15 + (&plr)[p]._pGold;
						(&plr)[p].HoldItem._ivalue = i - (int)(&DAT_00001388 + -iVar15);
						(&plr)[p].SpdList[iVar14]._ivalue = 5000;
						(&plr)[p].SpdList[iVar14]._iCurs = '\x06';
						iVar14 = (&plr)[p].HoldItem._ivalue;
						if (iVar14 < 0x9c4) {
							i = 0x11;
							if (iVar14 < 0x3e9) {
								i = 0x10;
							}
						}
						else {
							i = 0x12;
						}
					}
				}
				else {
					(&plr)[p]._pGold = (&plr)[p]._pGold + (&plr)[p].HoldItem._ivalue;
					i = FUN_8015ad5c(iVar15 + -0x7ff24518 + iVar14 * 0x6c,iVar15 + -0x7ff241b8);
				}
			}
		}
		else {
			if ((&plr)[p].SpdList[iVar14]._itype == -1) {
				pIVar8 = &(&plr)[p].HoldItem;
				piVar10 = (int *)(iVar14 * 0x6c + iVar15 + -0x7ff24518);
				do {
					piVar9 = piVar10;
					pIVar13 = pIVar8;
					iVar14 = pIVar13->_iVMult1;
					iVar15 = pIVar13->_iVAdd2;
					iVar6 = pIVar13->_iVMult2;
					*piVar9 = pIVar13->_iVAdd1;
					piVar9[1] = iVar14;
					piVar9[2] = iVar15;
					piVar9[3] = iVar6;
					pIVar8 = (ItemStruct *)&pIVar13->_iSeed;
					piVar10 = piVar9 + 4;
				} while (pIVar8 != (ItemStruct *)&(&plr)[p].HoldItem._iSufPower);
				iVar14 = pIVar13->_ivalue;
				iVar15 = pIVar13->_iIvalue;
				piVar9[4] = pIVar8->_iVAdd1;
				piVar9[5] = iVar14;
				piVar9[6] = iVar15;
			}
			else {
				i = FUN_8015ad5c(iVar15 + -0x7ff24518 + iVar14 * 0x6c,iVar15 + -0x7ff241b8);
				if ((&plr)[p].HoldItem._itype == 0xb) {
					lVar3 = FUN_80160b64();
					(&plr)[p]._pGold = lVar3;
				}
			}
		}
		uGp00001bad = 1;
	default:
		goto switchD_8015b3d8_caseD_8;
	}
	iVar14 = p * 0x19e8 + -0x7ff241b8;
LAB_8015c140:
	i = FUN_8015ad5c(i,iVar14);
switchD_8015b3d8_caseD_8:
	CalcPlrInv__FiUc(p,'\x01');
	if (p == myplr) {
		SetCursor__Fi(i);
	}
	if (in_stack_00000088 == '\0') {
		PlaySFX__Fi(IS_TITERR);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015bbc8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
 // line -1, offset 0x8015bbc8
// function 'FUN_8015bbc8' @0x8015BBC8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015bbc8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
	int in_v0;
	uint uVar1;
	undefined4 uVar2;
	undefined4 uVar3;
	int iVar4;
	undefined4 uVar5;
	int iVar6;
	undefined4 *puVar7;
	undefined4 *puVar8;
	int *piVar9;
	int *piVar10;
	ItemStruct *pIVar11;
	ItemStruct *pIVar12;
	undefined4 *puVar13;
	ItemStruct *pIVar14;
	ItemStruct *pIVar15;
	int iVar16;
	int p;
	int i;
	char in_stack_00000088;
	
	puVar8 = (undefined4 *)(param_1 + in_v0);
	do {
		puVar13 = param_4;
		puVar7 = puVar8;
		uVar2 = puVar7[1];
		uVar3 = puVar7[2];
		uVar5 = puVar7[3];
		*puVar13 = *puVar7;
		puVar13[1] = uVar2;
		puVar13[2] = uVar3;
		puVar13[3] = uVar5;
		puVar8 = puVar7 + 4;
		param_4 = puVar13 + 4;
	} while (puVar8 != (undefined4 *)(param_1 + in_v0) + 0x18);
	uVar2 = puVar7[5];
	uVar3 = puVar7[6];
	puVar13[4] = *puVar8;
	puVar13[5] = uVar2;
	puVar13[6] = uVar3;
	if (p == myplr) {
		SetCursor__Fi((uint)(&plr)[p].HoldItem._iCurs + 0xc);
	}
	else {
		SetICursor__Fi((uint)(&plr)[p].HoldItem._iCurs + 0xc);
	}
	iVar16 = 0;
	do {
		iVar16 = iVar16 + 1;
		uVar1 = FUN_80159f24();
		if (0x27 < iVar16) break;
	} while ((uVar1 & 0xff) == 0);
	piVar10 = (int *)&stack0x00000018;
	pIVar12 = &(&plr)[p].HoldItem;
	do {
		pIVar14 = pIVar12;
		piVar9 = piVar10;
		iVar16 = piVar9[1];
		iVar4 = piVar9[2];
		iVar6 = piVar9[3];
		pIVar14->_iVAdd1 = *piVar9;
		pIVar14->_iVMult1 = iVar16;
		pIVar14->_iVAdd2 = iVar4;
		pIVar14->_iVMult2 = iVar6;
		piVar10 = piVar9 + 4;
		pIVar12 = (ItemStruct *)&pIVar14->_iSeed;
	} while (piVar10 != (int *)&stack0x00000078);
	iVar16 = piVar9[5];
	iVar4 = piVar9[6];
	((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = *piVar10;
	pIVar14->_ivalue = iVar16;
	pIVar14->_iIvalue = iVar4;
	if (p == myplr) {
		SetCursor__Fi((uint)(&plr)[p].HoldItem._iCurs + 0xc);
	}
	else {
		SetICursor__Fi((uint)(&plr)[p].HoldItem._iCurs + 0xc);
	}
	if ((uVar1 & 0xff) != 0) {
		if ((&plr)[p].InvBody[5]._itype == 5) {
			(&plr)[p].InvBody[5]._itype = -1;
		}
		else {
			(&plr)[p].InvBody[4]._itype = -1;
		}
		if (((&plr)[p].InvBody[4]._itype == -1) && ((&plr)[p].InvBody[5]._itype == -1)) {
			NetSendCmdChItem__FUcUc('\0','\x04');
			pIVar12 = &(&plr)[p].HoldItem;
			pIVar14 = (&plr)[p].InvBody + 4;
			do {
				pIVar15 = pIVar14;
				pIVar11 = pIVar12;
				iVar16 = pIVar11->_iVMult1;
				iVar4 = pIVar11->_iVAdd2;
				iVar6 = pIVar11->_iVMult2;
				pIVar15->_iVAdd1 = pIVar11->_iVAdd1;
				pIVar15->_iVMult1 = iVar16;
				pIVar15->_iVAdd2 = iVar4;
				pIVar15->_iVMult2 = iVar6;
				pIVar12 = (ItemStruct *)&pIVar11->_iSeed;
				pIVar14 = (ItemStruct *)&pIVar15->_iSeed;
			} while (pIVar12 != (ItemStruct *)&(&plr)[p].HoldItem._iSufPower);
			iVar16 = pIVar11->_ivalue;
			iVar4 = pIVar11->_iIvalue;
			((ItemStruct *)&pIVar15->_iSeed)->_iVAdd1 = pIVar12->_iVAdd1;
			pIVar15->_ivalue = iVar16;
			pIVar15->_iIvalue = iVar4;
		}
		else {
			NetSendCmdChItem__FUcUc('\0','\x04');
			iVar16 = p * 0x19e8;
			if ((&plr)[p].InvBody[4]._itype == -1) {
				FUN_8015ad5c(iVar16 + -0x7ff25768,iVar16 + -0x7ff256fc);
			}
			i = FUN_8015ad5c(iVar16 + -0x7ff25768,iVar16 + -0x7ff241b8);
		}
		if ((((&plr)[p].InvBody[4]._itype == 10) &&
				(iVar16 = (int)(&plr)[p].InvBody[4]._iSpell, iVar16 != 0)) &&
			 ((&plr)[p].InvBody[4]._iCharges != '\0')) {
			(&plr)[p]._pRSplType = '\x03';
			(&plr)[p]._pRSpell = iVar16;
			force_redraw = 0xff;
		}
		CalcPlrInv__FiUc(p,'\x01');
		if (p == myplr) {
			SetCursor__Fi(i);
		}
		if (in_stack_00000088 == '\0') {
			PlaySFX__Fi(IS_TITERR);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015c1bc(undefined4 uParm1,undefined4 uParm2,int iParm3);
 // line -1, offset 0x8015c1bc
// function 'FUN_8015c1bc' @0x8015C1BC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015c1bc(undefined4 uParm1,undefined4 uParm2,int iParm3)

{
	undefined4 *puVar1;
	int iVar2;
	int iVar3;
	undefined4 uVar4;
	undefined4 uVar5;
	int iVar6;
	undefined4 uVar7;
	undefined4 *puVar8;
	int in_t0;
	undefined4 *puVar9;
	undefined4 *puVar10;
	int p;
	int i;
	char in_stack_00000088;
	
	iVar2 = (int)*(char *)(in_t0 + iParm3 + -0x7ff24540);
	if (iVar2 < 1) {
		iVar2 = *(int *)((int)&plr._pNumInv + iParm3);
		puVar1 = (undefined4 *)(iVar2 * 0x6c + iParm3 + -0x7ff25624);
		puVar10 = (undefined4 *)((int)&plr.HoldItem._iVAdd1 + iParm3);
		do {
			puVar9 = puVar10;
			puVar8 = puVar1;
			uVar4 = puVar9[1];
			uVar5 = puVar9[2];
			uVar7 = puVar9[3];
			*puVar8 = *puVar9;
			puVar8[1] = uVar4;
			puVar8[2] = uVar5;
			puVar8[3] = uVar7;
			puVar10 = puVar9 + 4;
			puVar1 = puVar8 + 4;
		} while (puVar10 != (undefined4 *)(&plr.HoldItem._iSufPower + iParm3));
		uVar4 = puVar9[5];
		uVar5 = puVar9[6];
		puVar8[4] = *puVar10;
		puVar8[5] = uVar4;
		puVar8[6] = uVar5;
		(&plr)[p]._pNumInv = (&plr)[p]._pNumInv + 1;
		*(undefined *)(p * 0x19e8 + -0x7ff24540 + in_t0) = (char)(&plr)[p]._pNumInv;
		iVar3 = (&plr)[p].HoldItem._ivalue;
		(&plr)[p]._pGold = (&plr)[p]._pGold + (&plr)[p].HoldItem._ivalue;
		if (iVar3 < 0x1389) {
			if (iVar3 < 0x9c4) {
				if (iVar3 < 0x3e9) {
					(&plr)[p].InvList[iVar2]._iCurs = '\x04';
				}
				else {
					(&plr)[p].InvList[iVar2]._iCurs = '\x05';
				}
			}
			else {
				(&plr)[p].InvList[iVar2]._iCurs = '\x06';
			}
		}
	}
	else {
		iVar2 = iVar2 + -1;
		iVar3 = *(int *)((int)&plr.InvList[iVar2]._ivalue + iParm3);
		iVar6 = iVar3 + *(int *)((int)&plr.HoldItem._ivalue + iParm3);
		if (iVar6 < 0x1389) {
			*(int *)((int)&plr.InvList[iVar2]._ivalue + iParm3) = iVar6;
			*(int *)((int)&plr._pGold + iParm3) =
					 *(int *)((int)&plr._pGold + iParm3) + *(int *)((int)&plr.HoldItem._ivalue + iParm3);
			if (iVar6 < 0x9c4) {
				if (iVar6 < 0x3e9) {
					(&plr.InvList[iVar2]._iCurs)[iParm3] = '\x04';
				}
				else {
					(&plr.InvList[iVar2]._iCurs)[iParm3] = '\x05';
				}
			}
			else {
				(&plr.InvList[iVar2]._iCurs)[iParm3] = '\x06';
			}
		}
		else {
			iVar6 = *(int *)((int)&plr.HoldItem._ivalue + iParm3);
			*(undefined **)((int)&plr._pGold + iParm3) =
					 &DAT_00001388 + -iVar3 + *(int *)((int)&plr._pGold + iParm3);
			*(int *)((int)&plr.HoldItem._ivalue + iParm3) = iVar6 - (int)(&DAT_00001388 + -iVar3);
			*(undefined4 *)((int)&plr.InvList[iVar2]._ivalue + iParm3) = 5000;
			(&plr.InvList[iVar2]._iCurs)[iParm3] = '\x06';
			iVar2 = *(int *)((int)&plr.HoldItem._ivalue + iParm3);
			if (iVar2 < 0x9c4) {
				i = 0x11;
				if (iVar2 < 0x3e9) {
					i = 0x10;
				}
			}
			else {
				i = 0x12;
			}
		}
	}
	CalcPlrInv__FiUc(p,'\x01');
	if (p == myplr) {
		SetCursor__Fi(i);
	}
	if (in_stack_00000088 == '\0') {
		PlaySFX__Fi(IS_TITERR);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015c388(undefined4 uParm1,undefined4 uParm2,undefined4 *puParm3,int iParm4);
 // line -1, offset 0x8015c388
// function 'FUN_8015c388' @0x8015C388 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015c388(undefined4 uParm1,undefined4 uParm2,undefined4 *puParm3,int iParm4)

{
	undefined4 in_v0;
	undefined4 in_v1;
	undefined4 uVar1;
	undefined4 uVar2;
	int iVar3;
	int in_t0;
	undefined4 *in_t1;
	undefined4 *puVar4;
	int in_t2;
	undefined4 *in_t3;
	int p;
	int i;
	char in_stack_00000088;
	
	while( true ) {
		uVar2 = in_t1[3];
		*puParm3 = in_v0;
		puParm3[1] = in_v1;
		puParm3[2] = uParm1;
		puParm3[3] = uVar2;
		puVar4 = in_t1 + 4;
		if (puVar4 == in_t3) break;
		in_v0 = *puVar4;
		in_v1 = in_t1[5];
		uParm1 = in_t1[6];
		puParm3 = puParm3 + 4;
		in_t1 = puVar4;
	}
	uVar2 = in_t1[5];
	uVar1 = in_t1[6];
	puParm3[4] = *puVar4;
	puParm3[5] = uVar2;
	puParm3[6] = uVar1;
	(&plr)[p]._pNumInv = (&plr)[p]._pNumInv + 1;
	*(undefined *)(p * 0x19e8 + -0x7ff24540 + iParm4 + in_t2) = (char)(&plr)[p]._pNumInv;
	iVar3 = (&plr)[p].HoldItem._ivalue;
	(&plr)[p]._pGold = (&plr)[p]._pGold + (&plr)[p].HoldItem._ivalue;
	if (iVar3 < 0x1389) {
		if (iVar3 < 0x9c4) {
			if (iVar3 < 0x3e9) {
				(&plr)[p].InvList[in_t0]._iCurs = '\x04';
			}
			else {
				(&plr)[p].InvList[in_t0]._iCurs = '\x05';
			}
		}
		else {
			(&plr)[p].InvList[in_t0]._iCurs = '\x06';
		}
	}
	CalcPlrInv__FiUc(p,'\x01');
	if (p == myplr) {
		SetCursor__Fi(i);
	}
	if (in_stack_00000088 == '\0') {
		PlaySFX__Fi(IS_TITERR);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015c3b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4);
 // line -1, offset 0x8015c3b0
// function 'FUN_8015c3b0' @0x8015C3B0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015c3b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
	undefined4 in_v0;
	undefined4 in_v1;
	undefined4 uVar1;
	int iVar2;
	int in_t0;
	int in_t1;
	int in_t2;
	int p;
	int i;
	char param_11;
	
	uVar1 = *(undefined4 *)(in_t1 + 8);
	*param_3 = in_v0;
	param_3[1] = in_v1;
	param_3[2] = uVar1;
	(&plr)[p]._pNumInv = (&plr)[p]._pNumInv + 1;
	*(undefined *)(p * 0x19e8 + -0x7ff24540 + param_4 + in_t2) = (char)(&plr)[p]._pNumInv;
	iVar2 = (&plr)[p].HoldItem._ivalue;
	(&plr)[p]._pGold = (&plr)[p]._pGold + (&plr)[p].HoldItem._ivalue;
	if (iVar2 < 0x1389) {
		if (iVar2 < 0x9c4) {
			if (iVar2 < 0x3e9) {
				(&plr)[p].InvList[in_t0]._iCurs = '\x04';
			}
			else {
				(&plr)[p].InvList[in_t0]._iCurs = '\x05';
			}
		}
		else {
			(&plr)[p].InvList[in_t0]._iCurs = '\x06';
		}
	}
	CalcPlrInv__FiUc(p,'\x01');
	if (p == myplr) {
		SetCursor__Fi(i);
	}
	if (param_11 == '\0') {
		PlaySFX__Fi(IS_TITERR);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015c6d4(int iParm1,char *pcParm2);
 // line -1, offset 0x8015c6d4
// function 'FUN_8015c6d4' @0x8015C6D4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015c6d4(int iParm1,char *pcParm2)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int unaff_s1;
	int p;
	int unaff_s4;
	int i;
	int unaff_s6;
	int unaff_s7;
	char in_stack_00000088;
	
	while ((int)pcParm2 < iParm1) {
		if ((int)*pcParm2 == unaff_s1) {
			*pcParm2 = '\0';
		}
		if ((int)*pcParm2 == -unaff_s1) {
			*pcParm2 = '\0';
		}
		pcParm2 = pcParm2 + 1;
	}
	iVar4 = ((unaff_s4 + -0x19) / 10 - (unaff_s7 + -1 >> 1)) * 10;
	if (iVar4 < 0) {
		iVar4 = 0;
	}
	iVar3 = 0;
	if (unaff_s7 != 0) {
		do {
			iVar2 = (unaff_s4 + -0x19) % 10 - (unaff_s6 + -1 >> 1);
			if (iVar2 < 0) {
				iVar2 = 0;
			}
			iVar5 = 0;
			if (unaff_s6 != 0) {
				iVar1 = p * 0x19e8 + -0x7ff24540;
				iVar2 = iVar2 + iVar4;
				do {
					if ((iVar5 == 0) && (iVar3 == unaff_s7 + -1)) {
						*(char *)(iVar1 + iVar2) = (char)unaff_s1;
					}
					else {
						*(char *)(iVar1 + iVar2) = -(char)unaff_s1;
					}
					iVar5 = iVar5 + 1;
					iVar2 = iVar2 + 1;
				} while (iVar5 < unaff_s6);
			}
			iVar3 = iVar3 + 1;
			iVar4 = iVar4 + 10;
		} while (iVar3 < unaff_s7);
	}
	CalcPlrInv__FiUc(p,'\x01');
	if (p == myplr) {
		SetCursor__Fi(i);
	}
	if (in_stack_00000088 == '\0') {
		PlaySFX__Fi(IS_TITERR);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015c980(void);
 // line -1, offset 0x8015c980
// function 'FUN_8015c980' @0x8015C980 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015c980(void)

{
	int p;
	char in_stack_00000088;
	
	uGp00001bad = 1;
	CalcPlrInv__FiUc(p,'\x01');
	if (p == myplr) {
		SetCursor__Fi(0x12);
	}
	if (in_stack_00000088 == '\0') {
		PlaySFX__Fi(IS_TITERR);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015c9cc(undefined4 uParm1,int iParm2);
 // line -1, offset 0x8015c9cc
// function 'FUN_8015c9cc' @0x8015C9CC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015c9cc(undefined4 uParm1,int iParm2)

{
	undefined4 in_v0;
	int i;
	int unaff_s0;
	int p;
	char in_stack_00000088;
	
	*(undefined4 *)((int)&plr._pGold + unaff_s0) = in_v0;
	i = FUN_8015ad5c(uParm1,unaff_s0 + iParm2);
	uGp00001bad = 1;
	CalcPlrInv__FiUc(p,'\x01');
	if (p == myplr) {
		SetCursor__Fi(i);
	}
	if (in_stack_00000088 == '\0') {
		PlaySFX__Fi(IS_TITERR);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015cbf8(int iParm1);
 // line -1, offset 0x8015cbf8
// function 'FUN_8015cbf8' @0x8015CBF8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015cbf8(int iParm1)

{
	short sVar1;
	uint uVar2;
	undefined4 *puVar3;
	long lVar4;
	int iVar5;
	char *pcVar6;
	undefined4 uVar7;
	int iVar8;
	int iVar9;
	undefined4 uVar10;
	int iVar11;
	int iVar12;
	undefined4 uVar13;
	ItemStruct *pIVar14;
	ItemStruct *pIVar15;
	int *piVar16;
	int *piVar17;
	int *piVar18;
	undefined4 *puVar19;
	undefined4 *puVar20;
	undefined4 *puVar21;
	ItemStruct *pIVar22;
	ItemStruct *pIVar23;
	undefined4 *puVar24;
	
	uVar2 = uGp00001bb4;
	if (dropGoldFlag != '\0') {
		dropGoldFlag = '\0';
		dropGoldValue = 0;
	}
	(&plr)[iParm1].HoldItem._itype = -1;
	if ((uGp00001bb4 < 4) && ((&plr)[iParm1].InvBody[0]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\0');
		pIVar14 = (&plr)[iParm1].InvBody;
		pIVar23 = &(&plr)[iParm1].HoldItem;
		do {
			pIVar22 = pIVar23;
			pIVar15 = pIVar14;
			iVar5 = pIVar15->_iVMult1;
			iVar8 = pIVar15->_iVAdd2;
			iVar11 = pIVar15->_iVMult2;
			pIVar22->_iVAdd1 = pIVar15->_iVAdd1;
			pIVar22->_iVMult1 = iVar5;
			pIVar22->_iVAdd2 = iVar8;
			pIVar22->_iVMult2 = iVar11;
			pIVar14 = (ItemStruct *)&pIVar15->_iSeed;
			pIVar23 = (ItemStruct *)&pIVar22->_iSeed;
		} while (pIVar14 != (ItemStruct *)&(&plr)[iParm1].InvBody[0]._iSufPower);
		iVar5 = pIVar15->_ivalue;
		iVar8 = pIVar15->_iIvalue;
		((ItemStruct *)&pIVar22->_iSeed)->_iVAdd1 = pIVar14->_iVAdd1;
		pIVar22->_ivalue = iVar5;
		pIVar22->_iIvalue = iVar8;
		(&plr)[iParm1].InvBody[0]._itype = -1;
	}
	if ((uVar2 == 4) && ((&plr)[iParm1].InvBody[1]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x01');
		pIVar14 = (&plr)[iParm1].InvBody + 1;
		pIVar23 = &(&plr)[iParm1].HoldItem;
		do {
			pIVar22 = pIVar23;
			pIVar15 = pIVar14;
			iVar5 = pIVar15->_iVMult1;
			iVar8 = pIVar15->_iVAdd2;
			iVar11 = pIVar15->_iVMult2;
			pIVar22->_iVAdd1 = pIVar15->_iVAdd1;
			pIVar22->_iVMult1 = iVar5;
			pIVar22->_iVAdd2 = iVar8;
			pIVar22->_iVMult2 = iVar11;
			pIVar14 = (ItemStruct *)&pIVar15->_iSeed;
			pIVar23 = (ItemStruct *)&pIVar22->_iSeed;
		} while (pIVar14 != (ItemStruct *)&(&plr)[iParm1].InvBody[1]._iSufPower);
		iVar5 = pIVar15->_ivalue;
		iVar8 = pIVar15->_iIvalue;
		((ItemStruct *)&pIVar22->_iSeed)->_iVAdd1 = pIVar14->_iVAdd1;
		pIVar22->_ivalue = iVar5;
		pIVar22->_iIvalue = iVar8;
		(&plr)[iParm1].InvBody[1]._itype = -1;
	}
	if ((uVar2 == 5) && ((&plr)[iParm1].InvBody[2]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x02');
		pIVar14 = (&plr)[iParm1].InvBody + 2;
		pIVar23 = &(&plr)[iParm1].HoldItem;
		do {
			pIVar22 = pIVar23;
			pIVar15 = pIVar14;
			iVar5 = pIVar15->_iVMult1;
			iVar8 = pIVar15->_iVAdd2;
			iVar11 = pIVar15->_iVMult2;
			pIVar22->_iVAdd1 = pIVar15->_iVAdd1;
			pIVar22->_iVMult1 = iVar5;
			pIVar22->_iVAdd2 = iVar8;
			pIVar22->_iVMult2 = iVar11;
			pIVar14 = (ItemStruct *)&pIVar15->_iSeed;
			pIVar23 = (ItemStruct *)&pIVar22->_iSeed;
		} while (pIVar14 != (ItemStruct *)&(&plr)[iParm1].InvBody[2]._iSufPower);
		iVar5 = pIVar15->_ivalue;
		iVar8 = pIVar15->_iIvalue;
		((ItemStruct *)&pIVar22->_iSeed)->_iVAdd1 = pIVar14->_iVAdd1;
		pIVar22->_ivalue = iVar5;
		pIVar22->_iIvalue = iVar8;
		(&plr)[iParm1].InvBody[2]._itype = -1;
	}
	if ((uVar2 == 6) && ((&plr)[iParm1].InvBody[3]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x03');
		pIVar14 = (&plr)[iParm1].InvBody + 3;
		pIVar23 = &(&plr)[iParm1].HoldItem;
		do {
			pIVar22 = pIVar23;
			pIVar15 = pIVar14;
			iVar5 = pIVar15->_iVMult1;
			iVar8 = pIVar15->_iVAdd2;
			iVar11 = pIVar15->_iVMult2;
			pIVar22->_iVAdd1 = pIVar15->_iVAdd1;
			pIVar22->_iVMult1 = iVar5;
			pIVar22->_iVAdd2 = iVar8;
			pIVar22->_iVMult2 = iVar11;
			pIVar14 = (ItemStruct *)&pIVar15->_iSeed;
			pIVar23 = (ItemStruct *)&pIVar22->_iSeed;
		} while (pIVar14 != (ItemStruct *)&(&plr)[iParm1].InvBody[3]._iSufPower);
		iVar5 = pIVar15->_ivalue;
		iVar8 = pIVar15->_iIvalue;
		((ItemStruct *)&pIVar22->_iSeed)->_iVAdd1 = pIVar14->_iVAdd1;
		pIVar22->_ivalue = iVar5;
		pIVar22->_iIvalue = iVar8;
		(&plr)[iParm1].InvBody[3]._itype = -1;
	}
	if ((uVar2 - 7 < 6) && ((&plr)[iParm1].InvBody[4]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x04');
		pIVar14 = (&plr)[iParm1].InvBody + 4;
		pIVar23 = &(&plr)[iParm1].HoldItem;
		do {
			pIVar22 = pIVar23;
			pIVar15 = pIVar14;
			iVar5 = pIVar15->_iVMult1;
			iVar8 = pIVar15->_iVAdd2;
			iVar11 = pIVar15->_iVMult2;
			pIVar22->_iVAdd1 = pIVar15->_iVAdd1;
			pIVar22->_iVMult1 = iVar5;
			pIVar22->_iVAdd2 = iVar8;
			pIVar22->_iVMult2 = iVar11;
			pIVar14 = (ItemStruct *)&pIVar15->_iSeed;
			pIVar23 = (ItemStruct *)&pIVar22->_iSeed;
		} while (pIVar14 != (ItemStruct *)&(&plr)[iParm1].InvBody[4]._iSufPower);
		iVar5 = pIVar15->_ivalue;
		iVar8 = pIVar15->_iIvalue;
		((ItemStruct *)&pIVar22->_iSeed)->_iVAdd1 = pIVar14->_iVAdd1;
		pIVar22->_ivalue = iVar5;
		pIVar22->_iIvalue = iVar8;
		(&plr)[iParm1].InvBody[4]._itype = -1;
	}
	if ((uVar2 - 0xd < 6) && ((&plr)[iParm1].InvBody[5]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x05');
		pIVar14 = (&plr)[iParm1].InvBody + 5;
		pIVar23 = &(&plr)[iParm1].HoldItem;
		do {
			pIVar22 = pIVar23;
			pIVar15 = pIVar14;
			iVar5 = pIVar15->_iVMult1;
			iVar8 = pIVar15->_iVAdd2;
			iVar11 = pIVar15->_iVMult2;
			pIVar22->_iVAdd1 = pIVar15->_iVAdd1;
			pIVar22->_iVMult1 = iVar5;
			pIVar22->_iVAdd2 = iVar8;
			pIVar22->_iVMult2 = iVar11;
			pIVar14 = (ItemStruct *)&pIVar15->_iSeed;
			pIVar23 = (ItemStruct *)&pIVar22->_iSeed;
		} while (pIVar14 != (ItemStruct *)&(&plr)[iParm1].InvBody[5]._iSufPower);
		iVar5 = pIVar15->_ivalue;
		iVar8 = pIVar15->_iIvalue;
		((ItemStruct *)&pIVar22->_iSeed)->_iVAdd1 = pIVar14->_iVAdd1;
		pIVar22->_ivalue = iVar5;
		pIVar22->_iIvalue = iVar8;
		(&plr)[iParm1].InvBody[5]._itype = -1;
	}
	if ((uVar2 - 0x13 < 6) && ((&plr)[iParm1].InvBody[6]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x06');
		pIVar14 = (&plr)[iParm1].InvBody + 6;
		pIVar23 = &(&plr)[iParm1].HoldItem;
		do {
			pIVar22 = pIVar23;
			pIVar15 = pIVar14;
			iVar5 = pIVar15->_iVMult1;
			iVar8 = pIVar15->_iVAdd2;
			iVar11 = pIVar15->_iVMult2;
			pIVar22->_iVAdd1 = pIVar15->_iVAdd1;
			pIVar22->_iVMult1 = iVar5;
			pIVar22->_iVAdd2 = iVar8;
			pIVar22->_iVMult2 = iVar11;
			pIVar14 = (ItemStruct *)&pIVar15->_iSeed;
			pIVar23 = (ItemStruct *)&pIVar22->_iSeed;
		} while (pIVar14 != (ItemStruct *)&(&plr)[iParm1].InvBody[6]._iSufPower);
		iVar5 = pIVar15->_ivalue;
		iVar8 = pIVar15->_iIvalue;
		((ItemStruct *)&pIVar22->_iSeed)->_iVAdd1 = pIVar14->_iVAdd1;
		pIVar22->_ivalue = iVar5;
		pIVar22->_iIvalue = iVar8;
		(&plr)[iParm1].InvBody[6]._itype = -1;
	}
	if ((uVar2 - 0x19 < 0x28) &&
		 (iVar5 = (int)*(char *)(iParm1 * 0x19e8 + -0x7ff24540 + (uVar2 - 0x19)), iVar5 != 0)) {
		if (iVar5 < 1) {
			iVar5 = -iVar5;
		}
		pcVar6 = (&plr)[iParm1].InvGrid;
		do {
			if (((int)*pcVar6 == iVar5) || ((int)*pcVar6 == -iVar5)) {
				*pcVar6 = '\0';
			}
			pcVar6 = pcVar6 + 1;
		} while ((int)pcVar6 < iParm1 * 0x19e8 + -0x7ff24518);
		iVar8 = iVar5 + -1;
		piVar16 = (int *)(iVar8 * 0x6c + iParm1 * 0x19e8 + -0x7ff25624);
		piVar18 = piVar16;
		pIVar14 = &(&plr)[iParm1].HoldItem;
		do {
			pIVar23 = pIVar14;
			piVar17 = piVar18;
			iVar11 = piVar17[1];
			iVar9 = piVar17[2];
			iVar12 = piVar17[3];
			pIVar23->_iVAdd1 = *piVar17;
			pIVar23->_iVMult1 = iVar11;
			pIVar23->_iVAdd2 = iVar9;
			pIVar23->_iVMult2 = iVar12;
			piVar18 = piVar17 + 4;
			pIVar14 = (ItemStruct *)&pIVar23->_iSeed;
		} while (piVar18 != piVar16 + 0x18);
		iVar11 = piVar17[5];
		iVar9 = piVar17[6];
		((ItemStruct *)&pIVar23->_iSeed)->_iVAdd1 = *piVar18;
		pIVar23->_ivalue = iVar11;
		pIVar23->_iIvalue = iVar9;
		(&plr)[iParm1]._pNumInv = (&plr)[iParm1]._pNumInv + -1;
		iVar11 = (&plr)[iParm1]._pNumInv;
		if ((0 < iVar11) && (iVar11 != iVar8)) {
			iVar9 = iParm1 * 0x19e8 + -0x7ff25624;
			puVar19 = (undefined4 *)(iVar11 * 0x6c + iVar9);
			puVar21 = puVar19;
			puVar3 = (undefined4 *)(iVar8 * 0x6c + iVar9);
			do {
				puVar24 = puVar3;
				puVar20 = puVar21;
				uVar7 = puVar20[1];
				uVar10 = puVar20[2];
				uVar13 = puVar20[3];
				*puVar24 = *puVar20;
				puVar24[1] = uVar7;
				puVar24[2] = uVar10;
				puVar24[3] = uVar13;
				puVar21 = puVar20 + 4;
				puVar3 = puVar24 + 4;
			} while (puVar21 != puVar19 + 0x18);
			uVar7 = puVar20[5];
			uVar10 = puVar20[6];
			puVar24[4] = *puVar21;
			puVar24[5] = uVar7;
			puVar24[6] = uVar10;
			pcVar6 = (&plr)[iParm1].InvGrid;
			do {
				if ((int)*pcVar6 == (&plr)[iParm1]._pNumInv + 1) {
					*pcVar6 = (char)iVar5;
				}
				if ((int)*pcVar6 == ~(&plr)[iParm1]._pNumInv) {
					*pcVar6 = -(char)iVar5;
				}
				pcVar6 = pcVar6 + 1;
			} while ((int)pcVar6 < iParm1 * 0x19e8 + -0x7ff24518);
		}
	}
	if (0x40 < (int)uVar2) {
		iVar5 = uVar2 - 0x41;
		if ((&plr)[iParm1].SpdList[iVar5]._itype != -1) {
			piVar16 = (int *)(iVar5 * 0x6c + iParm1 * 0x19e8 + -0x7ff24518);
			piVar18 = piVar16;
			pIVar14 = &(&plr)[iParm1].HoldItem;
			do {
				pIVar23 = pIVar14;
				piVar17 = piVar18;
				iVar8 = piVar17[1];
				iVar11 = piVar17[2];
				iVar9 = piVar17[3];
				pIVar23->_iVAdd1 = *piVar17;
				pIVar23->_iVMult1 = iVar8;
				pIVar23->_iVAdd2 = iVar11;
				pIVar23->_iVMult2 = iVar9;
				piVar18 = piVar17 + 4;
				pIVar14 = (ItemStruct *)&pIVar23->_iSeed;
			} while (piVar18 != piVar16 + 0x18);
			iVar8 = piVar17[5];
			iVar11 = piVar17[6];
			((ItemStruct *)&pIVar23->_iSeed)->_iVAdd1 = *piVar18;
			pIVar23->_ivalue = iVar8;
			pIVar23->_iIvalue = iVar11;
			(&plr)[iParm1].SpdList[iVar5]._itype = -1;
			uGp00001bad = 1;
		}
	}
	sVar1 = (&plr)[iParm1].HoldItem._itype;
	if (sVar1 != -1) {
		if (sVar1 == 0xb) {
			lVar4 = FUN_80160b64(iParm1);
			(&plr)[iParm1]._pGold = lVar4;
		}
		CalcPlrInv__FiUc(iParm1,'\x01');
		FUN_8015db18(iParm1);
		if (iParm1 == myplr) {
			PlaySFX__Fi(IS_IGRAB);
			SetCursor__Fi((uint)(&plr)[iParm1].HoldItem._iCurs + 0xc);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015cccc(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4);
 // line -1, offset 0x8015cccc
// function 'FUN_8015cccc' @0x8015CCCC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015cccc(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
	short sVar1;
	undefined4 *puVar2;
	long lVar3;
	undefined4 uVar4;
	int iVar5;
	char *pcVar6;
	undefined4 uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	undefined4 uVar12;
	ItemStruct *pIVar13;
	ItemStruct *pIVar14;
	int *piVar15;
	int *piVar16;
	int *piVar17;
	undefined4 *puVar18;
	undefined4 *puVar19;
	undefined4 *puVar20;
	ItemStruct *pIVar21;
	ItemStruct *pIVar22;
	undefined4 *puVar23;
	undefined4 *in_t0;
	int p;
	int unaff_s2;
	
	while (puVar20 = param_4 + 4, param_3 != in_t0) {
		uVar4 = param_3[1];
		uVar7 = param_3[2];
		uVar12 = param_3[3];
		*puVar20 = *param_3;
		param_4[5] = uVar4;
		param_4[6] = uVar7;
		param_4[7] = uVar12;
		param_3 = param_3 + 4;
		param_4 = puVar20;
	}
	uVar4 = param_3[1];
	uVar7 = param_3[2];
	*puVar20 = *param_3;
	param_4[5] = uVar4;
	param_4[6] = uVar7;
	(&plr)[p].InvBody[0]._itype = -1;
	if ((unaff_s2 == 4) && ((&plr)[p].InvBody[1]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x01');
		pIVar13 = (&plr)[p].InvBody + 1;
		pIVar22 = &(&plr)[p].HoldItem;
		do {
			pIVar21 = pIVar22;
			pIVar14 = pIVar13;
			iVar5 = pIVar14->_iVMult1;
			iVar8 = pIVar14->_iVAdd2;
			iVar10 = pIVar14->_iVMult2;
			pIVar21->_iVAdd1 = pIVar14->_iVAdd1;
			pIVar21->_iVMult1 = iVar5;
			pIVar21->_iVAdd2 = iVar8;
			pIVar21->_iVMult2 = iVar10;
			pIVar13 = (ItemStruct *)&pIVar14->_iSeed;
			pIVar22 = (ItemStruct *)&pIVar21->_iSeed;
		} while (pIVar13 != (ItemStruct *)&(&plr)[p].InvBody[1]._iSufPower);
		iVar5 = pIVar14->_ivalue;
		iVar8 = pIVar14->_iIvalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar5;
		pIVar21->_iIvalue = iVar8;
		(&plr)[p].InvBody[1]._itype = -1;
	}
	if ((unaff_s2 == 5) && ((&plr)[p].InvBody[2]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x02');
		pIVar13 = (&plr)[p].InvBody + 2;
		pIVar22 = &(&plr)[p].HoldItem;
		do {
			pIVar21 = pIVar22;
			pIVar14 = pIVar13;
			iVar5 = pIVar14->_iVMult1;
			iVar8 = pIVar14->_iVAdd2;
			iVar10 = pIVar14->_iVMult2;
			pIVar21->_iVAdd1 = pIVar14->_iVAdd1;
			pIVar21->_iVMult1 = iVar5;
			pIVar21->_iVAdd2 = iVar8;
			pIVar21->_iVMult2 = iVar10;
			pIVar13 = (ItemStruct *)&pIVar14->_iSeed;
			pIVar22 = (ItemStruct *)&pIVar21->_iSeed;
		} while (pIVar13 != (ItemStruct *)&(&plr)[p].InvBody[2]._iSufPower);
		iVar5 = pIVar14->_ivalue;
		iVar8 = pIVar14->_iIvalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar5;
		pIVar21->_iIvalue = iVar8;
		(&plr)[p].InvBody[2]._itype = -1;
	}
	if ((unaff_s2 == 6) && ((&plr)[p].InvBody[3]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x03');
		pIVar13 = (&plr)[p].InvBody + 3;
		pIVar22 = &(&plr)[p].HoldItem;
		do {
			pIVar21 = pIVar22;
			pIVar14 = pIVar13;
			iVar5 = pIVar14->_iVMult1;
			iVar8 = pIVar14->_iVAdd2;
			iVar10 = pIVar14->_iVMult2;
			pIVar21->_iVAdd1 = pIVar14->_iVAdd1;
			pIVar21->_iVMult1 = iVar5;
			pIVar21->_iVAdd2 = iVar8;
			pIVar21->_iVMult2 = iVar10;
			pIVar13 = (ItemStruct *)&pIVar14->_iSeed;
			pIVar22 = (ItemStruct *)&pIVar21->_iSeed;
		} while (pIVar13 != (ItemStruct *)&(&plr)[p].InvBody[3]._iSufPower);
		iVar5 = pIVar14->_ivalue;
		iVar8 = pIVar14->_iIvalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar5;
		pIVar21->_iIvalue = iVar8;
		(&plr)[p].InvBody[3]._itype = -1;
	}
	if ((unaff_s2 - 7U < 6) && ((&plr)[p].InvBody[4]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x04');
		pIVar13 = (&plr)[p].InvBody + 4;
		pIVar22 = &(&plr)[p].HoldItem;
		do {
			pIVar21 = pIVar22;
			pIVar14 = pIVar13;
			iVar5 = pIVar14->_iVMult1;
			iVar8 = pIVar14->_iVAdd2;
			iVar10 = pIVar14->_iVMult2;
			pIVar21->_iVAdd1 = pIVar14->_iVAdd1;
			pIVar21->_iVMult1 = iVar5;
			pIVar21->_iVAdd2 = iVar8;
			pIVar21->_iVMult2 = iVar10;
			pIVar13 = (ItemStruct *)&pIVar14->_iSeed;
			pIVar22 = (ItemStruct *)&pIVar21->_iSeed;
		} while (pIVar13 != (ItemStruct *)&(&plr)[p].InvBody[4]._iSufPower);
		iVar5 = pIVar14->_ivalue;
		iVar8 = pIVar14->_iIvalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar5;
		pIVar21->_iIvalue = iVar8;
		(&plr)[p].InvBody[4]._itype = -1;
	}
	if ((unaff_s2 - 0xdU < 6) && ((&plr)[p].InvBody[5]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x05');
		pIVar13 = (&plr)[p].InvBody + 5;
		pIVar22 = &(&plr)[p].HoldItem;
		do {
			pIVar21 = pIVar22;
			pIVar14 = pIVar13;
			iVar5 = pIVar14->_iVMult1;
			iVar8 = pIVar14->_iVAdd2;
			iVar10 = pIVar14->_iVMult2;
			pIVar21->_iVAdd1 = pIVar14->_iVAdd1;
			pIVar21->_iVMult1 = iVar5;
			pIVar21->_iVAdd2 = iVar8;
			pIVar21->_iVMult2 = iVar10;
			pIVar13 = (ItemStruct *)&pIVar14->_iSeed;
			pIVar22 = (ItemStruct *)&pIVar21->_iSeed;
		} while (pIVar13 != (ItemStruct *)&(&plr)[p].InvBody[5]._iSufPower);
		iVar5 = pIVar14->_ivalue;
		iVar8 = pIVar14->_iIvalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar5;
		pIVar21->_iIvalue = iVar8;
		(&plr)[p].InvBody[5]._itype = -1;
	}
	if ((unaff_s2 - 0x13U < 6) && ((&plr)[p].InvBody[6]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x06');
		pIVar13 = (&plr)[p].InvBody + 6;
		pIVar22 = &(&plr)[p].HoldItem;
		do {
			pIVar21 = pIVar22;
			pIVar14 = pIVar13;
			iVar5 = pIVar14->_iVMult1;
			iVar8 = pIVar14->_iVAdd2;
			iVar10 = pIVar14->_iVMult2;
			pIVar21->_iVAdd1 = pIVar14->_iVAdd1;
			pIVar21->_iVMult1 = iVar5;
			pIVar21->_iVAdd2 = iVar8;
			pIVar21->_iVMult2 = iVar10;
			pIVar13 = (ItemStruct *)&pIVar14->_iSeed;
			pIVar22 = (ItemStruct *)&pIVar21->_iSeed;
		} while (pIVar13 != (ItemStruct *)&(&plr)[p].InvBody[6]._iSufPower);
		iVar5 = pIVar14->_ivalue;
		iVar8 = pIVar14->_iIvalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar5;
		pIVar21->_iIvalue = iVar8;
		(&plr)[p].InvBody[6]._itype = -1;
	}
	if ((unaff_s2 - 0x19U < 0x28) &&
		 (iVar5 = (int)*(char *)(p * 0x19e8 + -0x7ff24540 + (unaff_s2 - 0x19U)), iVar5 != 0)) {
		if (iVar5 < 1) {
			iVar5 = -iVar5;
		}
		pcVar6 = (&plr)[p].InvGrid;
		do {
			if (((int)*pcVar6 == iVar5) || ((int)*pcVar6 == -iVar5)) {
				*pcVar6 = '\0';
			}
			pcVar6 = pcVar6 + 1;
		} while ((int)pcVar6 < p * 0x19e8 + -0x7ff24518);
		iVar8 = iVar5 + -1;
		piVar15 = (int *)(iVar8 * 0x6c + p * 0x19e8 + -0x7ff25624);
		piVar17 = piVar15;
		pIVar13 = &(&plr)[p].HoldItem;
		do {
			pIVar22 = pIVar13;
			piVar16 = piVar17;
			iVar10 = piVar16[1];
			iVar9 = piVar16[2];
			iVar11 = piVar16[3];
			pIVar22->_iVAdd1 = *piVar16;
			pIVar22->_iVMult1 = iVar10;
			pIVar22->_iVAdd2 = iVar9;
			pIVar22->_iVMult2 = iVar11;
			piVar17 = piVar16 + 4;
			pIVar13 = (ItemStruct *)&pIVar22->_iSeed;
		} while (piVar17 != piVar15 + 0x18);
		iVar10 = piVar16[5];
		iVar9 = piVar16[6];
		((ItemStruct *)&pIVar22->_iSeed)->_iVAdd1 = *piVar17;
		pIVar22->_ivalue = iVar10;
		pIVar22->_iIvalue = iVar9;
		(&plr)[p]._pNumInv = (&plr)[p]._pNumInv + -1;
		iVar10 = (&plr)[p]._pNumInv;
		if ((0 < iVar10) && (iVar10 != iVar8)) {
			iVar9 = p * 0x19e8 + -0x7ff25624;
			puVar18 = (undefined4 *)(iVar10 * 0x6c + iVar9);
			puVar20 = puVar18;
			puVar2 = (undefined4 *)(iVar8 * 0x6c + iVar9);
			do {
				puVar23 = puVar2;
				puVar19 = puVar20;
				uVar4 = puVar19[1];
				uVar7 = puVar19[2];
				uVar12 = puVar19[3];
				*puVar23 = *puVar19;
				puVar23[1] = uVar4;
				puVar23[2] = uVar7;
				puVar23[3] = uVar12;
				puVar20 = puVar19 + 4;
				puVar2 = puVar23 + 4;
			} while (puVar20 != puVar18 + 0x18);
			uVar4 = puVar19[5];
			uVar7 = puVar19[6];
			puVar23[4] = *puVar20;
			puVar23[5] = uVar4;
			puVar23[6] = uVar7;
			pcVar6 = (&plr)[p].InvGrid;
			do {
				if ((int)*pcVar6 == (&plr)[p]._pNumInv + 1) {
					*pcVar6 = (char)iVar5;
				}
				if ((int)*pcVar6 == ~(&plr)[p]._pNumInv) {
					*pcVar6 = -(char)iVar5;
				}
				pcVar6 = pcVar6 + 1;
			} while ((int)pcVar6 < p * 0x19e8 + -0x7ff24518);
		}
	}
	if (0x40 < unaff_s2) {
		iVar5 = unaff_s2 + -0x41;
		if ((&plr)[p].SpdList[iVar5]._itype != -1) {
			piVar15 = (int *)(iVar5 * 0x6c + p * 0x19e8 + -0x7ff24518);
			piVar17 = piVar15;
			pIVar13 = &(&plr)[p].HoldItem;
			do {
				pIVar22 = pIVar13;
				piVar16 = piVar17;
				iVar8 = piVar16[1];
				iVar10 = piVar16[2];
				iVar9 = piVar16[3];
				pIVar22->_iVAdd1 = *piVar16;
				pIVar22->_iVMult1 = iVar8;
				pIVar22->_iVAdd2 = iVar10;
				pIVar22->_iVMult2 = iVar9;
				piVar17 = piVar16 + 4;
				pIVar13 = (ItemStruct *)&pIVar22->_iSeed;
			} while (piVar17 != piVar15 + 0x18);
			iVar8 = piVar16[5];
			iVar10 = piVar16[6];
			((ItemStruct *)&pIVar22->_iSeed)->_iVAdd1 = *piVar17;
			pIVar22->_ivalue = iVar8;
			pIVar22->_iIvalue = iVar10;
			(&plr)[p].SpdList[iVar5]._itype = -1;
			uGp00001bad = 1;
		}
	}
	sVar1 = (&plr)[p].HoldItem._itype;
	if (sVar1 != -1) {
		if (sVar1 == 0xb) {
			lVar3 = FUN_80160b64();
			(&plr)[p]._pGold = lVar3;
		}
		CalcPlrInv__FiUc(p,'\x01');
		FUN_8015db18();
		if (p == myplr) {
			PlaySFX__Fi(IS_IGRAB);
			SetCursor__Fi((uint)(&plr)[p].HoldItem._iCurs + 0xc);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015d6fc(int iParm1,int iParm2);
 // line -1, offset 0x8015d6fc
// function 'FUN_8015d6fc' @0x8015D6FC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015d6fc(int iParm1,int iParm2)

{
	char cVar1;
	undefined4 *puVar2;
	char *pcVar3;
	int iVar4;
	undefined4 uVar5;
	int iVar6;
	undefined4 uVar7;
	uint uVar8;
	undefined4 uVar9;
	undefined4 *puVar10;
	undefined4 *puVar11;
	undefined4 *puVar12;
	undefined4 *puVar13;
	
	pcVar3 = (&plr)[iParm1].InvGrid;
	do {
		if (((int)*pcVar3 == iParm2 + 1) || ((int)*pcVar3 == -(iParm2 + 1))) {
			*pcVar3 = '\0';
		}
		pcVar3 = pcVar3 + 1;
	} while ((int)pcVar3 < iParm1 * 0x19e8 + -0x7ff24518);
	(&plr)[iParm1]._pNumInv = (&plr)[iParm1]._pNumInv + -1;
	iVar6 = (&plr)[iParm1]._pNumInv;
	if ((0 < iVar6) && (iVar6 != iParm2)) {
		iVar4 = iParm1 * 0x19e8 + -0x7ff25624;
		puVar10 = (undefined4 *)(iVar6 * 0x6c + iVar4);
		puVar12 = puVar10;
		puVar2 = (undefined4 *)(iParm2 * 0x6c + iVar4);
		do {
			puVar13 = puVar2;
			puVar11 = puVar12;
			uVar5 = puVar11[1];
			uVar7 = puVar11[2];
			uVar9 = puVar11[3];
			*puVar13 = *puVar11;
			puVar13[1] = uVar5;
			puVar13[2] = uVar7;
			puVar13[3] = uVar9;
			puVar12 = puVar11 + 4;
			puVar2 = puVar13 + 4;
		} while (puVar12 != puVar10 + 0x18);
		uVar5 = puVar11[5];
		uVar7 = puVar11[6];
		puVar13[4] = *puVar12;
		puVar13[5] = uVar5;
		puVar13[6] = uVar7;
		cVar1 = (char)iParm2 + '\x01';
		pcVar3 = (&plr)[iParm1].InvGrid;
		do {
			if ((int)*pcVar3 == (&plr)[iParm1]._pNumInv + 1) {
				*pcVar3 = cVar1;
			}
			if ((int)*pcVar3 == ~(&plr)[iParm1]._pNumInv) {
				*pcVar3 = -cVar1;
			}
			pcVar3 = pcVar3 + 1;
		} while ((int)pcVar3 < iParm1 * 0x19e8 + -0x7ff24518);
	}
	CalcPlrScrolls__Fi(iParm1);
	if (((&plr)[iParm1]._pRSplType == '\x02') && ((&plr)[iParm1]._pRSpell != -1)) {
		uVar8 = 1 << ((&plr)[iParm1]._pRSpell - 1U & 0x1f);
		if (((*(uint *)&(&plr)[iParm1]._pScrlSpells & uVar8) == 0) &&
			 ((*(uint *)((int)&(&plr)[iParm1]._pScrlSpells + 4) & (int)uVar8 >> 0x1f) == 0)) {
			(&plr)[iParm1]._pRSpell = -1;
		}
		force_redraw = 0xff;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015d9ac(int iParm1,int iParm2);
 // line -1, offset 0x8015d9ac
// function 'FUN_8015d9ac' @0x8015D9AC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015d9ac(int iParm1,int iParm2)

{
	uint uVar1;
	
	(&plr)[iParm1].SpdList[iParm2]._itype = -1;
	CalcPlrScrolls__Fi(iParm1);
	if (((((&plr)[iParm1]._pRSplType == '\x02') && ((&plr)[iParm1]._pRSpell != -1)) &&
			(uVar1 = 1 << ((&plr)[iParm1]._pRSpell - 1U & 0x1f),
			(*(uint *)&(&plr)[iParm1]._pScrlSpells & uVar1) == 0)) &&
		 ((*(uint *)((int)&(&plr)[iParm1]._pScrlSpells + 4) & (int)uVar1 >> 0x1f) == 0)) {
		(&plr)[iParm1]._pRSpell = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015daa0(void);
 // line -1, offset 0x8015daa0
// function 'FUN_8015daa0' @0x8015DAA0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015daa0(void)

{
	if ((&_pcurs)[myplr] < 0xc) {
		FUN_8015cbf8(myplr,MouseX,MouseY);
	}
	else {
		FUN_8015ae70(myplr,MouseX,MouseY);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015db18(int iParm1);
 // line -1, offset 0x8015db18
// function 'FUN_8015db18' @0x8015DB18 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015db18(int iParm1)

{
	byte bVar1;
	short sVar2;
	
	sVar2 = (&plr)[iParm1]._pStrength;
	bVar1 = (&plr)[iParm1].HoldItem._iMinStr;
	(&plr)[iParm1].HoldItem._iStatFlag = '\0';
	if ((((int)(uint)bVar1 <= (int)sVar2) &&
			((int)(uint)(&plr)[iParm1].HoldItem._iMinMag <= (int)(&plr)[iParm1]._pMagic)) &&
		 ((int)(uint)(&plr)[iParm1].HoldItem._iMinDex <= (int)(&plr)[iParm1]._pDexterity)) {
		(&plr)[iParm1].HoldItem._iStatFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015db9c(int iParm1);
 // line -1, offset 0x8015db9c
// function 'FUN_8015db9c' @0x8015DB9C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015db9c(int iParm1)

{
	char cVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	
	if ((&plr)[iParm1].HoldItem._iMiscId == '\x18') {
		cVar1 = (&plr)[iParm1].HoldItem._iSpell;
		(&plr)[iParm1].HoldItem._iMinMag =
				 (uchar)(&spelldata)[(int)(&plr)[iParm1].HoldItem._iSpell].sMinInt;
		iVar4 = (int)*(char *)(iParm1 * 0x19e8 + -0x7ff25a57 + (int)cVar1);
		while (iVar4 != 0) {
			uVar3 = (uint)(&plr)[iParm1].HoldItem._iMinMag;
			uVar3 = uVar3 + (int)uVar3 / 5;
			uVar2 = uVar3 & 0xff;
			(&plr)[iParm1].HoldItem._iMinMag = (uchar)uVar3;
			iVar4 = iVar4 + -1;
			if (0xff < (int)(uVar2 + (int)uVar2 / 5)) {
				(&plr)[iParm1].HoldItem._iMinMag = -1;
				iVar4 = 0;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015dcd0(int iParm1);
 // line -1, offset 0x8015dcd0
// function 'FUN_8015dcd0' @0x8015DCD0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015dcd0(int iParm1)

{
	char cVar1;
	int iVar2;
	uint uVar3;
	
	if ((&plr)[iParm1].HoldItem.IDidx == 10) {
		QuestStruct_ARRAY_800dda90[4]._qactive = '\x03';
		QuestStruct_ARRAY_800dda90[4].pad_for_laz = '\x01';
	}
	if ((&plr)[iParm1].HoldItem.IDidx == 0x11) {
		QuestStruct_ARRAY_800dda54[0].pad_for_laz = '\x01';
		if ((QuestStruct_ARRAY_800dda54[0]._qactive == '\x02') &&
			 (QuestStruct_ARRAY_800dda54[0]._qvar1 == '\x03')) {
			sfxdelay = 10;
			uVar3 = SEXT14((&plr)[iParm1]._pClass);
			if (uVar3 == 0) {
				iVar2 = 0x331;
			}
			else {
				iVar2 = 0x2c3;
				if ((uVar3 != 1) && (iVar2 = sfxdnum, uVar3 == (uint)QuestStruct_ARRAY_800dda54[0]._qactive)
					 ) {
					iVar2 = 0x25b;
				}
			}
			sfxdnum = iVar2;
			QuestStruct_ARRAY_800dda54[0]._qvar1 = '\x04';
		}
		NetSendCmdQuest__FUcUc('\x01','\x01');
	}
	if ((&plr)[iParm1].HoldItem.IDidx == 0x10) {
		QuestStruct_ARRAY_800dda90[6].pad_for_laz = '\x01';
		if (QuestStruct_ARRAY_800dda90[6]._qactive == '\x01') {
			QuestStruct_ARRAY_800dda90[6]._qactive = '\x02';
			QuestStruct_ARRAY_800dda90[6]._qvar1 = '\x01';
		}
		iVar2 = sfxdnum;
		if (QuestStruct_ARRAY_800dda90[6]._qlog == '\x01') {
			sfxdelay = 10;
			uVar3 = SEXT14((&plr)[myplr]._pClass);
			iVar2 = 0x32b;
			if (uVar3 != 0) {
				if (uVar3 == (uint)QuestStruct_ARRAY_800dda90[6]._qlog) {
					iVar2 = 0x2bd;
				}
				else {
					iVar2 = sfxdnum;
					if (uVar3 == 2) {
						iVar2 = 0x255;
					}
				}
			}
		}
		sfxdnum = iVar2;
		NetSendCmdQuest__FUcUc('\x01','\n');
	}
	if (((&plr)[iParm1].HoldItem.IDidx == 0xf) && (QuestStruct_ARRAY_800dda90[0]._qactive != '\x03'))
	{
		sfxdelay = 0x1e;
		cVar1 = (&plr)[myplr]._pClass;
		if (cVar1 == '\0') {
			sfxdnum = 0x32a;
		}
		else {
			if (cVar1 == '\x01') {
				sfxdnum = 700;
			}
			else {
				if (cVar1 == '\x02') {
					sfxdnum = 0x254;
				}
			}
		}
	}
	if ((&plr)[iParm1].HoldItem.IDidx == 9) {
		quests.pad_for_laz = '\x01';
		if (quests._qactive == '\x01') {
			quests._qactive = '\x02';
			quests._qvar1 = '\x02';
		}
		iVar2 = sfxdnum;
		if (quests._qlog == '\x01') {
			sfxdelay = 10;
			uVar3 = SEXT14((&plr)[myplr]._pClass);
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
		sfxdnum = iVar2;
		NetSendCmdQuest__FUcUc('\x01','\0');
	}
	iVar2 = sfxdnum;
	if ((&plr)[iParm1].HoldItem.IDidx == 0x1c) {
		QuestStruct_ARRAY_800dda90[5].pad_for_laz = '\x01';
		QuestStruct_ARRAY_800dda90[5]._qactive = '\x03';
		NetSendCmdQuest__FUcUc('\x01','\t');
		sfxdelay = 0x14;
		cVar1 = (&plr)[myplr]._pClass;
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
// void FUN_8015e180(int iParm1,int iParm2);
 // line -1, offset 0x8015e180
// function 'FUN_8015e180' @0x8015E180 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015e180(int iParm1,int iParm2)

{
	int *piVar1;
	int i;
	int iVar2;
	int iVar3;
	ItemStruct *pIVar4;
	ItemStruct *pIVar5;
	int *piVar6;
	
	if (dropGoldFlag != '\0') {
		dropGoldFlag = '\0';
		dropGoldValue = 0;
	}
	if ((&dung_map)[(int)item[iParm2]._ix * 0x70 + (int)item[iParm2]._iy].dItem != '\0') {
		i = iParm1 << 1;
		if ((myplr == iParm1) && (i = iParm1 * 2, 0xb < (&_pcurs)[iParm1])) {
			NetSendCmdPItem__FUcUcUcUc
								('\x01','V',*(uchar *)&(&plr)[iParm1]._px,*(uchar *)&(&plr)[iParm1]._py);
			i = iParm1 << 1;
		}
		item[iParm2]._iCreateInfo = item[iParm2]._iCreateInfo & 0x7fff;
		pIVar5 = item + iParm2;
		piVar1 = (int *)((int)&plr.HoldItem + i * 0x800 + iParm1 * 0x9e8);
		do {
			piVar6 = piVar1;
			pIVar4 = pIVar5;
			i = pIVar4->_iVMult1;
			iVar2 = pIVar4->_iVAdd2;
			iVar3 = pIVar4->_iVMult2;
			*piVar6 = pIVar4->_iVAdd1;
			piVar6[1] = i;
			piVar6[2] = iVar2;
			piVar6[3] = iVar3;
			pIVar5 = (ItemStruct *)&pIVar4->_iSeed;
			piVar1 = piVar6 + 4;
		} while (pIVar5 != (ItemStruct *)&item[iParm2]._iSufPower);
		i = pIVar4->_ivalue;
		iVar2 = pIVar4->_iIvalue;
		piVar6[4] = pIVar5->_iVAdd1;
		piVar6[5] = i;
		piVar6[6] = iVar2;
		FUN_8015dcd0(iParm1);
		FUN_8015db9c(iParm1);
		FUN_8015db18(iParm1);
		(&dung_map)[(int)item[iParm2]._ix * 0x70 + (int)item[iParm2]._iy].dItem = '\0';
		i = 0;
		if (0 < numitems) {
			do {
				if ((int)(&itemactive)[i] == iParm2) {
					DeleteItem__Fii((int)(&itemactive)[i],i);
					i = 0;
				}
				else {
					i = i + 1;
				}
			} while (i < numitems);
		}
		(&_pcursitem)[sel_data] = -1;
		NewCursor__Fi((uint)(&plr)[iParm1].HoldItem._iCurs + 0xc);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015e45c(int iParm1,int iParm2);
 // line -1, offset 0x8015e45c
// function 'FUN_8015e45c' @0x8015E45C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015e45c(int iParm1,int iParm2)

{
	char cVar1;
	uint uVar2;
	uint uVar3;
	long lVar4;
	int i;
	int iVar5;
	int iVar6;
	int iVar7;
	_135fake psfx;
	int iVar8;
	int iVar9;
	ItemStruct *pIVar10;
	ItemStruct *pIVar11;
	ItemStruct *pIVar12;
	ItemStruct *pIVar13;
	int *piVar14;
	int iVar15;
	int *piVar16;
	int iVar17;
	
	if (dropGoldFlag != '\0') {
		dropGoldFlag = '\0';
		dropGoldValue = 0;
	}
	if ((iParm2 != 0x7f) &&
		 ((&dung_map)[(int)item[iParm2]._ix * 0x70 + (int)item[iParm2]._iy].dItem == '\0')) {
		return;
	}
	item[iParm2]._iCreateInfo = item[iParm2]._iCreateInfo & 0x7fff;
	pIVar11 = item + iParm2;
	pIVar12 = &(&plr)[iParm1].HoldItem;
	do {
		pIVar13 = pIVar12;
		pIVar10 = pIVar11;
		i = pIVar10->_iVMult1;
		iVar6 = pIVar10->_iVAdd2;
		iVar8 = pIVar10->_iVMult2;
		pIVar13->_iVAdd1 = pIVar10->_iVAdd1;
		pIVar13->_iVMult1 = i;
		pIVar13->_iVAdd2 = iVar6;
		pIVar13->_iVMult2 = iVar8;
		pIVar11 = (ItemStruct *)&pIVar10->_iSeed;
		pIVar12 = (ItemStruct *)&pIVar13->_iSeed;
	} while (pIVar11 != (ItemStruct *)&item[iParm2]._iSufPower);
	i = pIVar10->_ivalue;
	iVar6 = pIVar10->_iIvalue;
	((ItemStruct *)&pIVar13->_iSeed)->_iVAdd1 = pIVar11->_iVAdd1;
	pIVar13->_ivalue = i;
	pIVar13->_iIvalue = iVar6;
	FUN_8015dcd0(iParm1);
	FUN_8015db9c(iParm1);
	FUN_8015db18(iParm1);
	SetICursor__Fi((uint)(&plr)[iParm1].HoldItem._iCurs + 0xc);
	PlaySFX__Fi(IS_TITLEMOV);
	if ((&plr)[iParm1].HoldItem._itype == 0xb) {
		uVar2 = FUN_8015a5f0(iParm1);
LAB_8015ec2c:
		uVar2 = uVar2 & 0xff;
	}
	else {
		uVar2 = 0;
		if (((&plr)[iParm1]._pgfxnum & 0xfU) < 2) {
			uVar3 = 0;
			if (3 < (int)(&plr)[iParm1]._pmode) goto LAB_8015e6d0;
			if ((&plr)[iParm1].HoldItem._iStatFlag == '\0') goto LAB_8015e6cc;
			uVar3 = 0;
			if ((&plr)[iParm1].HoldItem._iClass != '\x01') goto LAB_8015e6d0;
			uVar2 = FUN_8015aac8(iParm1);
			if ((uVar2 & 0xff) != 0) {
				CalcPlrInv__FiUc(iParm1,'\x01');
				goto LAB_8015e6cc;
			}
		}
		else {
LAB_8015e6cc:
			uVar3 = uVar2 & 0xff;
LAB_8015e6d0:
			if (uVar3 != 0) goto LAB_8015ec3c;
		}
		iVar6 = icursH28;
		i = icursW28;
		if (icursW28 == 1) {
			if (icursH28 == 1) {
				uVar3 = uVar2 & 0xff;
				if ((&plr)[iParm1].HoldItem._iStatFlag != '\0') {
					uVar3 = uVar2 & 0xff;
					if ((&AllItemsUseable)[(int)(&plr)[iParm1].HoldItem.IDidx] != '\0') {
						iVar8 = 0;
						if (uVar3 != 0) goto LAB_8015e81c;
						iVar17 = 0;
						iVar15 = iParm1 * 0x19e8;
						do {
							if (*(short *)((int)&plr.SpdList[0]._itype + iVar15) == -1) {
								pIVar11 = &(&plr)[iParm1].HoldItem;
								piVar16 = (int *)(iVar17 + iParm1 * 0x19e8 + -0x7ff24518);
								do {
									piVar14 = piVar16;
									pIVar12 = pIVar11;
									iVar5 = pIVar12->_iVMult1;
									iVar7 = pIVar12->_iVAdd2;
									iVar9 = pIVar12->_iVMult2;
									*piVar14 = pIVar12->_iVAdd1;
									piVar14[1] = iVar5;
									piVar14[2] = iVar7;
									piVar14[3] = iVar9;
									pIVar11 = (ItemStruct *)&pIVar12->_iSeed;
									piVar16 = piVar14 + 4;
								} while (pIVar11 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
								iVar5 = pIVar12->_ivalue;
								iVar7 = pIVar12->_iIvalue;
								piVar14[4] = pIVar11->_iVAdd1;
								piVar14[5] = iVar5;
								piVar14[6] = iVar7;
								CalcPlrScrolls__Fi(iParm1);
								uGp00001bad = 1;
								uVar2 = 1;
							}
							iVar15 = iVar15 + 0x6c;
							iVar8 = iVar8 + 1;
							iVar17 = iVar17 + 0x6c;
						} while ((iVar8 < 8) && ((uVar2 & 0xff) == 0));
					}
					uVar3 = uVar2 & 0xff;
				}
LAB_8015e81c:
				iVar8 = 0x1e;
				do {
					if (uVar3 != 0) break;
					uVar2 = FUN_80159f24(iParm1,iVar8,1,1,1);
					iVar8 = iVar8 + 1;
					uVar3 = uVar2 & 0xff;
				} while (iVar8 < 0x28);
				uVar3 = uVar2 & 0xff;
				iVar8 = 0x14;
				if (uVar3 == 0) {
					do {
						uVar2 = FUN_80159f24(iParm1,iVar8,1,1,1);
						iVar8 = iVar8 + 1;
						if (0x1d < iVar8) break;
					} while ((uVar2 & 0xff) == 0);
					uVar3 = uVar2 & 0xff;
				}
				iVar8 = 10;
				do {
					if (uVar3 != 0) break;
					uVar2 = FUN_80159f24(iParm1,iVar8,1,1,1);
					iVar8 = iVar8 + 1;
					uVar3 = uVar2 & 0xff;
				} while (iVar8 < 0x14);
				iVar8 = 0;
				do {
					if ((uVar2 & 0xff) != 0) break;
					uVar2 = FUN_80159f24(iParm1,iVar8,1,1,1);
					iVar8 = iVar8 + 1;
				} while (iVar8 < 10);
			}
			if (iVar6 == 2) {
				uVar3 = uVar2 & 0xff;
				iVar8 = 0x1d;
				if (uVar3 == 0) {
					do {
						uVar2 = FUN_80159f24(iParm1,iVar8,1,2,1);
						iVar8 = iVar8 + -1;
						if (iVar8 < 0x14) break;
					} while ((uVar2 & 0xff) == 0);
					uVar3 = uVar2 & 0xff;
				}
				iVar8 = 9;
				while (uVar3 == 0) {
					uVar2 = FUN_80159f24(iParm1,iVar8,1,2,1);
					iVar8 = iVar8 + -1;
					if (iVar8 < 0) break;
					uVar3 = uVar2 & 0xff;
				}
				iVar8 = 0x13;
				do {
					if ((uVar2 & 0xff) != 0) break;
					uVar2 = FUN_80159f24(iParm1,iVar8,1,2,1);
					iVar8 = iVar8 + -1;
				} while (9 < iVar8);
			}
			if (iVar6 == 3) {
				iVar8 = 0;
				do {
					if ((uVar2 & 0xff) != 0) break;
					uVar2 = FUN_80159f24(iParm1,iVar8,1,3,1);
					iVar8 = iVar8 + 1;
				} while (iVar8 < 0x14);
			}
		}
		if (i != 2) goto LAB_8015ec2c;
		if (iVar6 == 2) {
			uVar3 = uVar2 & 0xff;
			i = 0;
			if (uVar3 == 0) {
				piVar16 = &AP2x2Tbl;
				do {
					iVar8 = *piVar16;
					piVar16 = piVar16 + 1;
					i = i + 1;
					uVar2 = FUN_80159f24(iParm1,iVar8,2,2,1);
					if (9 < i) break;
				} while ((uVar2 & 0xff) == 0);
				uVar3 = uVar2 & 0xff;
			}
			i = 0x15;
			do {
				if (uVar3 != 0) break;
				uVar2 = FUN_80159f24(iParm1,i,2,2,1);
				i = i + 2;
				uVar3 = uVar2 & 0xff;
			} while (i < 0x1d);
			uVar3 = uVar2 & 0xff;
			i = 1;
			if (uVar3 == 0) {
				do {
					uVar2 = FUN_80159f24(iParm1,i,2,2,1);
					i = i + 2;
					if (8 < i) break;
				} while ((uVar2 & 0xff) == 0);
				uVar3 = uVar2 & 0xff;
			}
			i = 10;
			do {
				if (uVar3 != 0) break;
				uVar2 = FUN_80159f24(iParm1,i,2,2,1);
				i = i + 1;
				uVar3 = uVar2 & 0xff;
			} while (i < 0x13);
		}
		uVar2 = uVar2 & 0xff;
		if (iVar6 == 3) {
			i = 0;
			if (uVar2 == 0) {
				do {
					uVar2 = FUN_80159f24(iParm1,i,2,3,1);
					i = i + 1;
					if (8 < i) break;
				} while ((uVar2 & 0xff) == 0);
				uVar2 = uVar2 & 0xff;
			}
			i = 10;
			if (uVar2 != 0) goto LAB_8015ec3c;
			do {
				uVar2 = FUN_80159f24(iParm1,i,2,3,1);
				i = i + 1;
				if (0x12 < i) break;
			} while ((uVar2 & 0xff) == 0);
			goto LAB_8015ec2c;
		}
	}
	if (uVar2 != 0) {
LAB_8015ec3c:
		(&dung_map)[(int)item[iParm2]._ix * 0x70 + (int)item[iParm2]._iy].dItem = '\0';
		i = 0;
		if (0 < numitems) {
			do {
				if ((int)(&itemactive)[i] == iParm2) {
					DeleteItem__Fii(iParm2,i);
					i = 0;
				}
				else {
					i = i + 1;
				}
			} while (i < numitems);
		}
		return;
	}
	i = iParm1 * 2;
	if (iParm1 == myplr) {
		cVar1 = (&plr)[iParm1]._pClass;
		if (cVar1 == '\0') {
			lVar4 = ENG_random__Fl(3);
			psfx = lVar4 + PS_WARR14;
		}
		else {
			if (cVar1 == '\x01') {
				lVar4 = ENG_random__Fl(3);
				psfx = lVar4 + PS_ROGUE14;
			}
			else {
				i = iParm1 << 1;
				if (cVar1 != '\x02') goto LAB_8015ed78;
				lVar4 = ENG_random__Fl(3);
				psfx = lVar4 + PS_MAGE14;
			}
		}
		PlaySFX__Fi(psfx);
		i = iParm1 << 1;
	}
LAB_8015ed78:
	pIVar11 = item + iParm2;
	piVar16 = (int *)((int)&plr.HoldItem + i * 0x800 + iParm1 * 0x9e8);
	do {
		piVar14 = piVar16;
		pIVar12 = pIVar11;
		i = pIVar12->_iVMult1;
		iVar6 = pIVar12->_iVAdd2;
		iVar8 = pIVar12->_iVMult2;
		*piVar14 = pIVar12->_iVAdd1;
		piVar14[1] = i;
		piVar14[2] = iVar6;
		piVar14[3] = iVar8;
		pIVar11 = (ItemStruct *)&pIVar12->_iSeed;
		piVar16 = piVar14 + 4;
	} while (pIVar11 != (ItemStruct *)&item[iParm2]._iSufPower);
	i = pIVar12->_ivalue;
	iVar6 = pIVar12->_iIvalue;
	piVar14[4] = pIVar11->_iVAdd1;
	piVar14[5] = i;
	piVar14[6] = iVar6;
	RespawnItem__FiUc(iParm2,'\x01');
	NetSendCmdPItem__FUcUcUcUc('\x01','\v',item[iParm2]._ix,item[iParm2]._iy);
	(&plr)[iParm1].HoldItem._itype = -1;
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015e598(undefined4 uParm1,undefined4 uParm2,undefined4 *puParm3,undefined4 *puParm4);
 // line -1, offset 0x8015e598
// function 'FUN_8015e598' @0x8015E598 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015e598(undefined4 uParm1,undefined4 uParm2,undefined4 *puParm3,undefined4 *puParm4)

{
	char cVar1;
	int *piVar2;
	uint uVar3;
	uint uVar4;
	long lVar5;
	undefined4 uVar6;
	int iVar7;
	undefined4 uVar8;
	int iVar9;
	_135fake psfx;
	int iVar10;
	int iVar11;
	int i;
	int iVar12;
	undefined4 *puVar13;
	ItemStruct *pIVar14;
	ItemStruct *pIVar15;
	undefined4 *puVar16;
	int *piVar17;
	undefined4 *in_t0;
	int iVar18;
	int p;
	int iVar19;
	int i_00;
	
	while( true ) {
		puParm4[3] = uParm2;
		puVar13 = puParm3 + 4;
		puVar16 = puParm4 + 4;
		if (puVar13 == in_t0) break;
		uVar6 = puParm3[5];
		uVar8 = puParm3[6];
		uParm2 = puParm3[7];
		*puVar16 = *puVar13;
		puParm4[5] = uVar6;
		puParm4[6] = uVar8;
		puParm3 = puVar13;
		puParm4 = puVar16;
	}
	uVar6 = puParm3[5];
	uVar8 = puParm3[6];
	*puVar16 = *puVar13;
	puParm4[5] = uVar6;
	puParm4[6] = uVar8;
	FUN_8015dcd0();
	FUN_8015db9c();
	FUN_8015db18();
	SetICursor__Fi((uint)(&plr)[p].HoldItem._iCurs + 0xc);
	PlaySFX__Fi(IS_TITLEMOV);
	if ((&plr)[p].HoldItem._itype == 0xb) {
		uVar3 = FUN_8015a5f0();
LAB_8015ec2c:
		uVar3 = uVar3 & 0xff;
	}
	else {
		uVar3 = 0;
		if (((&plr)[p]._pgfxnum & 0xfU) < 2) {
			uVar4 = 0;
			if (3 < (int)(&plr)[p]._pmode) goto LAB_8015e6d0;
			if ((&plr)[p].HoldItem._iStatFlag == '\0') goto LAB_8015e6cc;
			uVar4 = 0;
			if ((&plr)[p].HoldItem._iClass != '\x01') goto LAB_8015e6d0;
			uVar3 = FUN_8015aac8();
			if ((uVar3 & 0xff) != 0) {
				CalcPlrInv__FiUc(p,'\x01');
				goto LAB_8015e6cc;
			}
		}
		else {
LAB_8015e6cc:
			uVar4 = uVar3 & 0xff;
LAB_8015e6d0:
			if (uVar4 != 0) goto LAB_8015ec3c;
		}
		iVar10 = icursH28;
		i = icursW28;
		if (icursW28 == 1) {
			if (icursH28 == 1) {
				uVar4 = uVar3 & 0xff;
				if ((&plr)[p].HoldItem._iStatFlag != '\0') {
					uVar4 = uVar3 & 0xff;
					if ((&AllItemsUseable)[(int)(&plr)[p].HoldItem.IDidx] != '\0') {
						iVar12 = 0;
						if (uVar4 != 0) goto LAB_8015e81c;
						iVar19 = 0;
						iVar18 = p * 0x19e8;
						do {
							if (*(short *)((int)&plr.SpdList[0]._itype + iVar18) == -1) {
								pIVar15 = &(&plr)[p].HoldItem;
								piVar2 = (int *)(iVar19 + p * 0x19e8 + -0x7ff24518);
								do {
									piVar17 = piVar2;
									pIVar14 = pIVar15;
									iVar7 = pIVar14->_iVMult1;
									iVar9 = pIVar14->_iVAdd2;
									iVar11 = pIVar14->_iVMult2;
									*piVar17 = pIVar14->_iVAdd1;
									piVar17[1] = iVar7;
									piVar17[2] = iVar9;
									piVar17[3] = iVar11;
									pIVar15 = (ItemStruct *)&pIVar14->_iSeed;
									piVar2 = piVar17 + 4;
								} while (pIVar15 != (ItemStruct *)&(&plr)[p].HoldItem._iSufPower);
								iVar7 = pIVar14->_ivalue;
								iVar9 = pIVar14->_iIvalue;
								piVar17[4] = pIVar15->_iVAdd1;
								piVar17[5] = iVar7;
								piVar17[6] = iVar9;
								CalcPlrScrolls__Fi(p);
								uGp00001bad = 1;
								uVar3 = 1;
							}
							iVar18 = iVar18 + 0x6c;
							iVar12 = iVar12 + 1;
							iVar19 = iVar19 + 0x6c;
						} while ((iVar12 < 8) && ((uVar3 & 0xff) == 0));
					}
					uVar4 = uVar3 & 0xff;
				}
LAB_8015e81c:
				iVar12 = 0x1e;
				do {
					if (uVar4 != 0) break;
					uVar3 = FUN_80159f24();
					iVar12 = iVar12 + 1;
					uVar4 = uVar3 & 0xff;
				} while (iVar12 < 0x28);
				uVar4 = uVar3 & 0xff;
				iVar12 = 0x14;
				if (uVar4 == 0) {
					do {
						uVar3 = FUN_80159f24();
						iVar12 = iVar12 + 1;
						if (0x1d < iVar12) break;
					} while ((uVar3 & 0xff) == 0);
					uVar4 = uVar3 & 0xff;
				}
				iVar12 = 10;
				do {
					if (uVar4 != 0) break;
					uVar3 = FUN_80159f24();
					iVar12 = iVar12 + 1;
					uVar4 = uVar3 & 0xff;
				} while (iVar12 < 0x14);
				iVar12 = 0;
				do {
					if ((uVar3 & 0xff) != 0) break;
					uVar3 = FUN_80159f24();
					iVar12 = iVar12 + 1;
				} while (iVar12 < 10);
			}
			if (iVar10 == 2) {
				uVar4 = uVar3 & 0xff;
				iVar12 = 0x1d;
				if (uVar4 == 0) {
					do {
						uVar3 = FUN_80159f24();
						iVar12 = iVar12 + -1;
						if (iVar12 < 0x14) break;
					} while ((uVar3 & 0xff) == 0);
					uVar4 = uVar3 & 0xff;
				}
				iVar12 = 9;
				while (uVar4 == 0) {
					uVar3 = FUN_80159f24();
					iVar12 = iVar12 + -1;
					if (iVar12 < 0) break;
					uVar4 = uVar3 & 0xff;
				}
				iVar12 = 0x13;
				do {
					if ((uVar3 & 0xff) != 0) break;
					uVar3 = FUN_80159f24();
					iVar12 = iVar12 + -1;
				} while (9 < iVar12);
			}
			if (iVar10 == 3) {
				iVar12 = 0;
				do {
					if ((uVar3 & 0xff) != 0) break;
					uVar3 = FUN_80159f24();
					iVar12 = iVar12 + 1;
				} while (iVar12 < 0x14);
			}
		}
		if (i != 2) goto LAB_8015ec2c;
		if (iVar10 == 2) {
			uVar4 = uVar3 & 0xff;
			i = 0;
			if (uVar4 == 0) {
				do {
					i = i + 1;
					uVar3 = FUN_80159f24();
					if (9 < i) break;
				} while ((uVar3 & 0xff) == 0);
				uVar4 = uVar3 & 0xff;
			}
			i = 0x15;
			do {
				if (uVar4 != 0) break;
				uVar3 = FUN_80159f24();
				i = i + 2;
				uVar4 = uVar3 & 0xff;
			} while (i < 0x1d);
			uVar4 = uVar3 & 0xff;
			i = 1;
			if (uVar4 == 0) {
				do {
					uVar3 = FUN_80159f24();
					i = i + 2;
					if (8 < i) break;
				} while ((uVar3 & 0xff) == 0);
				uVar4 = uVar3 & 0xff;
			}
			i = 10;
			do {
				if (uVar4 != 0) break;
				uVar3 = FUN_80159f24();
				i = i + 1;
				uVar4 = uVar3 & 0xff;
			} while (i < 0x13);
		}
		uVar3 = uVar3 & 0xff;
		if (iVar10 == 3) {
			i = 0;
			if (uVar3 == 0) {
				do {
					uVar3 = FUN_80159f24();
					i = i + 1;
					if (8 < i) break;
				} while ((uVar3 & 0xff) == 0);
				uVar3 = uVar3 & 0xff;
			}
			i = 10;
			if (uVar3 != 0) goto LAB_8015ec3c;
			do {
				uVar3 = FUN_80159f24();
				i = i + 1;
				if (0x12 < i) break;
			} while ((uVar3 & 0xff) == 0);
			goto LAB_8015ec2c;
		}
	}
	if (uVar3 != 0) {
LAB_8015ec3c:
		(&dung_map)[(int)item[i_00]._ix * 0x70 + (int)item[i_00]._iy].dItem = '\0';
		i = 0;
		if (0 < numitems) {
			do {
				if ((int)(&itemactive)[i] == i_00) {
					DeleteItem__Fii(i_00,i);
					i = 0;
				}
				else {
					i = i + 1;
				}
			} while (i < numitems);
		}
		return;
	}
	i = p * 2;
	if (p == myplr) {
		cVar1 = (&plr)[p]._pClass;
		if (cVar1 == '\0') {
			lVar5 = ENG_random__Fl(3);
			psfx = lVar5 + PS_WARR14;
		}
		else {
			if (cVar1 == '\x01') {
				lVar5 = ENG_random__Fl(3);
				psfx = lVar5 + PS_ROGUE14;
			}
			else {
				i = p << 1;
				if (cVar1 != '\x02') goto LAB_8015ed78;
				lVar5 = ENG_random__Fl(3);
				psfx = lVar5 + PS_MAGE14;
			}
		}
		PlaySFX__Fi(psfx);
		i = p << 1;
	}
LAB_8015ed78:
	pIVar15 = item + i_00;
	piVar2 = (int *)((int)&plr.HoldItem + i * 0x800 + p * 0x9e8);
	do {
		piVar17 = piVar2;
		pIVar14 = pIVar15;
		i = pIVar14->_iVMult1;
		iVar10 = pIVar14->_iVAdd2;
		iVar12 = pIVar14->_iVMult2;
		*piVar17 = pIVar14->_iVAdd1;
		piVar17[1] = i;
		piVar17[2] = iVar10;
		piVar17[3] = iVar12;
		pIVar15 = (ItemStruct *)&pIVar14->_iSeed;
		piVar2 = piVar17 + 4;
	} while (pIVar15 != (ItemStruct *)&item[i_00]._iSufPower);
	i = pIVar14->_ivalue;
	iVar10 = pIVar14->_iIvalue;
	piVar17[4] = pIVar15->_iVAdd1;
	piVar17[5] = i;
	piVar17[6] = iVar10;
	RespawnItem__FiUc(i_00,'\x01');
	NetSendCmdPItem__FUcUcUcUc('\x01','\v',item[i_00]._ix,item[i_00]._iy);
	(&plr)[p].HoldItem._itype = -1;
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015e77c(void);
 // line -1, offset 0x8015e77c
// function 'FUN_8015e77c' @0x8015E77C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015e77c(void)

{
	char cVar1;
	int *piVar2;
	undefined4 *puVar3;
	int in_v0;
	uint uVar4;
	long lVar5;
	int in_v1;
	undefined4 uVar6;
	undefined4 uVar7;
	_135fake psfx;
	int iVar8;
	undefined4 uVar9;
	int iVar10;
	undefined4 *puVar11;
	undefined4 *puVar12;
	ItemStruct *pIVar13;
	ItemStruct *pIVar14;
	undefined4 *puVar15;
	int *piVar16;
	int unaff_s0;
	int i;
	uint unaff_s1;
	int unaff_s2;
	int p;
	int unaff_s4;
	int unaff_s5;
	int unaff_s6;
	int unaff_s7;
	int i_00;
	
	while( true ) {
		if (in_v1 == in_v0) {
			puVar12 = (undefined4 *)((int)&plr.HoldItem._iVAdd1 + unaff_s7);
			puVar3 = (undefined4 *)(unaff_s6 + unaff_s7 + -0x7ff24518);
			do {
				puVar15 = puVar3;
				puVar11 = puVar12;
				uVar6 = puVar11[1];
				uVar7 = puVar11[2];
				uVar9 = puVar11[3];
				*puVar15 = *puVar11;
				puVar15[1] = uVar6;
				puVar15[2] = uVar7;
				puVar15[3] = uVar9;
				puVar12 = puVar11 + 4;
				puVar3 = puVar15 + 4;
			} while (puVar12 != (undefined4 *)(&plr.HoldItem._iSufPower + unaff_s7));
			uVar6 = puVar11[5];
			uVar7 = puVar11[6];
			puVar15[4] = *puVar12;
			puVar15[5] = uVar6;
			puVar15[6] = uVar7;
			CalcPlrScrolls__Fi(p);
			uGp00001bad = 1;
			unaff_s1 = 1;
		}
		unaff_s0 = unaff_s0 + 1;
		unaff_s6 = unaff_s6 + 0x6c;
		if ((7 < unaff_s0) || ((unaff_s1 & 0xff) != 0)) break;
		in_v1 = (int)*(short *)((int)&plr.SpdList[1]._itype + unaff_s2);
		in_v0 = -1;
		unaff_s2 = unaff_s2 + 0x6c;
	}
	i = 0x1e;
	do {
		if ((unaff_s1 & 0xff) != 0) break;
		unaff_s1 = FUN_80159f24();
		i = i + 1;
	} while (i < 0x28);
	uVar4 = unaff_s1 & 0xff;
	i = 0x14;
	if (uVar4 == 0) {
		do {
			unaff_s1 = FUN_80159f24();
			i = i + 1;
			if (0x1d < i) break;
		} while ((unaff_s1 & 0xff) == 0);
		uVar4 = unaff_s1 & 0xff;
	}
	i = 10;
	do {
		if (uVar4 != 0) break;
		unaff_s1 = FUN_80159f24();
		i = i + 1;
		uVar4 = unaff_s1 & 0xff;
	} while (i < 0x14);
	i = 0;
	do {
		if ((unaff_s1 & 0xff) != 0) break;
		unaff_s1 = FUN_80159f24();
		i = i + 1;
	} while (i < 10);
	if (unaff_s4 == 1) {
		if (unaff_s5 == 2) {
			uVar4 = unaff_s1 & 0xff;
			i = 0x1d;
			if (uVar4 == 0) {
				do {
					unaff_s1 = FUN_80159f24();
					i = i + -1;
					if (i < 0x14) break;
				} while ((unaff_s1 & 0xff) == 0);
				uVar4 = unaff_s1 & 0xff;
			}
			i = 9;
			while (uVar4 == 0) {
				unaff_s1 = FUN_80159f24();
				i = i + -1;
				if (i < 0) break;
				uVar4 = unaff_s1 & 0xff;
			}
			i = 0x13;
			do {
				if ((unaff_s1 & 0xff) != 0) break;
				unaff_s1 = FUN_80159f24();
				i = i + -1;
			} while (9 < i);
		}
		if (unaff_s5 == 3) {
			i = 0;
			do {
				if ((unaff_s1 & 0xff) != 0) break;
				unaff_s1 = FUN_80159f24();
				i = i + 1;
			} while (i < 0x14);
		}
	}
	if (unaff_s4 == 2) {
		if (unaff_s5 == 2) {
			uVar4 = unaff_s1 & 0xff;
			i = 0;
			if (uVar4 == 0) {
				do {
					i = i + 1;
					unaff_s1 = FUN_80159f24();
					if (9 < i) break;
				} while ((unaff_s1 & 0xff) == 0);
				uVar4 = unaff_s1 & 0xff;
			}
			i = 0x15;
			do {
				if (uVar4 != 0) break;
				unaff_s1 = FUN_80159f24();
				i = i + 2;
				uVar4 = unaff_s1 & 0xff;
			} while (i < 0x1d);
			uVar4 = unaff_s1 & 0xff;
			i = 1;
			if (uVar4 == 0) {
				do {
					unaff_s1 = FUN_80159f24();
					i = i + 2;
					if (8 < i) break;
				} while ((unaff_s1 & 0xff) == 0);
				uVar4 = unaff_s1 & 0xff;
			}
			i = 10;
			do {
				if (uVar4 != 0) break;
				unaff_s1 = FUN_80159f24();
				i = i + 1;
				uVar4 = unaff_s1 & 0xff;
			} while (i < 0x13);
		}
		uVar4 = unaff_s1 & 0xff;
		if (unaff_s5 == 3) {
			i = 0;
			if (uVar4 == 0) {
				do {
					uVar4 = FUN_80159f24();
					i = i + 1;
					if (8 < i) break;
				} while ((uVar4 & 0xff) == 0);
				uVar4 = uVar4 & 0xff;
			}
			i = 10;
			if (uVar4 != 0) goto LAB_8015ec38;
			do {
				unaff_s1 = FUN_80159f24();
				i = i + 1;
				if (0x12 < i) break;
			} while ((unaff_s1 & 0xff) == 0);
			goto LAB_8015ec2c;
		}
	}
	else {
LAB_8015ec2c:
		uVar4 = unaff_s1 & 0xff;
	}
	if (uVar4 != 0) {
LAB_8015ec38:
		(&dung_map)[(int)item[i_00]._ix * 0x70 + (int)item[i_00]._iy].dItem = '\0';
		i = 0;
		if (0 < numitems) {
			do {
				if ((int)(&itemactive)[i] == i_00) {
					DeleteItem__Fii(i_00,i);
					i = 0;
				}
				else {
					i = i + 1;
				}
			} while (i < numitems);
		}
		return;
	}
	i = p * 2;
	if (p == myplr) {
		cVar1 = (&plr)[p]._pClass;
		if (cVar1 == '\0') {
			lVar5 = ENG_random__Fl(3);
			psfx = lVar5 + PS_WARR14;
		}
		else {
			if (cVar1 == '\x01') {
				lVar5 = ENG_random__Fl(3);
				psfx = lVar5 + PS_ROGUE14;
			}
			else {
				i = p << 1;
				if (cVar1 != '\x02') goto LAB_8015ed78;
				lVar5 = ENG_random__Fl(3);
				psfx = lVar5 + PS_MAGE14;
			}
		}
		PlaySFX__Fi(psfx);
		i = p << 1;
	}
LAB_8015ed78:
	pIVar14 = item + i_00;
	piVar2 = (int *)((int)&plr.HoldItem + i * 0x800 + p * 0x9e8);
	do {
		piVar16 = piVar2;
		pIVar13 = pIVar14;
		i = pIVar13->_iVMult1;
		iVar8 = pIVar13->_iVAdd2;
		iVar10 = pIVar13->_iVMult2;
		*piVar16 = pIVar13->_iVAdd1;
		piVar16[1] = i;
		piVar16[2] = iVar8;
		piVar16[3] = iVar10;
		pIVar14 = (ItemStruct *)&pIVar13->_iSeed;
		piVar2 = piVar16 + 4;
	} while (pIVar14 != (ItemStruct *)&item[i_00]._iSufPower);
	i = pIVar13->_ivalue;
	iVar8 = pIVar13->_iIvalue;
	piVar16[4] = pIVar14->_iVAdd1;
	piVar16[5] = i;
	piVar16[6] = iVar8;
	RespawnItem__FiUc(i_00,'\x01');
	NetSendCmdPItem__FUcUcUcUc('\x01','\v',item[i_00]._ix,item[i_00]._iy);
	(&plr)[p].HoldItem._itype = -1;
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015eeb8(int param_1,int param_2,int param_3,ushort param_4,int param_5);
 // line -1, offset 0x8015eeb8
// function 'FUN_8015eeb8' @0x8015EEB8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015eeb8(int param_1,int param_2,int param_3,ushort param_4,int param_5)

{
	int i;
	int iVar1;
	
	iVar1 = (int)(&dung_map)[param_1 * 0x70 + param_2].dItem + -1;
	if (((((int)(&dung_map)[param_1 * 0x70 + param_2].dItem == 0) ||
			 ((int)item[iVar1].IDidx != param_3)) || (item[iVar1]._iSeed != param_5)) ||
		 (item[iVar1]._iCreateInfo != param_4)) {
		iVar1 = FindGetItem__FiUsi(param_3,param_4,param_5);
	}
	if (iVar1 != -1) {
		(&dung_map)[(int)item[iVar1]._ix * 0x70 + (int)item[iVar1]._iy].dItem = '\0';
		i = 0;
		if (0 < numitems) {
			do {
				if ((int)(&itemactive)[i] == iVar1) {
					DeleteItem__Fii((int)(&itemactive)[i],i);
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
// undefined4 FUN_8015f020(void);
 // line -1, offset 0x8015f020
// function 'FUN_8015f020' @0x8015F020 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8015f020(void)

{
	bool bVar1;
	uchar uVar2;
	undefined4 uVar3;
	int iVar4;
	
	if (numitems < 0x7a) {
		uVar2 = CanPut__Fii((int)(&plr)[myplr]._px,(int)(&plr)[myplr]._py);
		if (uVar2 == '\0') {
			iVar4 = 0;
			bVar1 = true;
			while (uVar3 = 0, bVar1) {
				uVar2 = CanPut__Fii((int)(&plr)[myplr]._px + (int)(&offset_x)[iVar4],
														(int)(&plr)[myplr]._py + (int)(&offset_y)[iVar4]);
				iVar4 = iVar4 + 1;
				if (uVar2 != '\0') goto LAB_8015f0ac;
				bVar1 = iVar4 < 8;
			}
		}
		else {
LAB_8015f0ac:
			uVar3 = 1;
		}
	}
	else {
		PlaySFX__Fi(IS_TITERR);
		uVar3 = 0;
	}
	return uVar3;
}



// decompiled code
// original method signature: 
// int FUN_8015f16c(int iParm1,undefined4 uParm2,undefined4 uParm3);
 // line -1, offset 0x8015f16c
// function 'FUN_8015f16c' @0x8015F16C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_8015f16c(int iParm1,undefined4 uParm2,undefined4 uParm3)

{
	bool bVar1;
	ItemStruct *pIVar2;
	char cVar3;
	uchar uVar4;
	int i;
	int i_00;
	int iVar5;
	int iVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	ItemStruct *pIVar9;
	int iVar10;
	int j;
	
	if (numitems < 0x7a) {
		i_00 = FindGetItem__FiUsi((int)(&plr)[iParm1].HoldItem.IDidx,
															(&plr)[iParm1].HoldItem._iCreateInfo,(&plr)[iParm1].HoldItem._iSeed);
		if (i_00 != -1) {
			FUN_8015eeb8(uParm2,uParm3,(int)(&plr)[iParm1].HoldItem.IDidx,
									 (uint)(&plr)[iParm1].HoldItem._iCreateInfo,(&plr)[iParm1].HoldItem._iSeed);
		}
		bVar1 = false;
		i_00 = (int)(&plr)[myplr]._px;
		j = (int)(&plr)[myplr]._py;
		uVar4 = CanPut__Fii(i_00,j);
		if (uVar4 == '\0') {
			i = 1;
			while ((i < 8 && (iVar10 = 0, !bVar1))) {
				do {
					i_00 = (int)(&plr)[myplr]._px + (int)(&offset_x)[iVar10] * i;
					j = (int)(&plr)[myplr]._py + (int)(&offset_y)[iVar10] * i;
					uVar4 = CanPut__Fii(i_00,j);
					if (uVar4 != '\0') {
						bVar1 = true;
					}
					iVar10 = iVar10 + 1;
				} while ((iVar10 < 8) && (!bVar1));
				i = i + 1;
			}
		}
		uVar4 = CanPut__Fii(i_00,j);
		if (uVar4 == '\0') {
			i = -1;
		}
		else {
			i = (int)itemavail;
			(&dung_map)[i_00 * 0x70 + j].dItem = itemavail + '\x01';
			cVar3 = s__800d53d5[0x7d - numitems];
			(&itemactive)[numitems] = itemavail;
			itemavail = cVar3;
			pIVar2 = item + i;
			pIVar9 = &(&plr)[iParm1].HoldItem;
			do {
				pIVar8 = pIVar9;
				pIVar7 = pIVar2;
				iVar10 = pIVar8->_iVMult1;
				iVar5 = pIVar8->_iVAdd2;
				iVar6 = pIVar8->_iVMult2;
				pIVar7->_iVAdd1 = pIVar8->_iVAdd1;
				pIVar7->_iVMult1 = iVar10;
				pIVar7->_iVAdd2 = iVar5;
				pIVar7->_iVMult2 = iVar6;
				pIVar9 = (ItemStruct *)&pIVar8->_iSeed;
				pIVar2 = (ItemStruct *)&pIVar7->_iSeed;
			} while (pIVar9 != (ItemStruct *)&(&plr)[iParm1].HoldItem._iSufPower);
			iVar10 = pIVar8->_ivalue;
			iVar5 = pIVar8->_iIvalue;
			((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = pIVar9->_iVAdd1;
			pIVar7->_ivalue = iVar10;
			pIVar7->_iIvalue = iVar5;
			item[i]._ix = (char)i_00;
			item[i]._iy = (char)j;
			RespawnItem__FiUc(i,'\x01');
			numitems = numitems + 1;
			NewCursor__Fi(1);
			PlaySFX__Fi(IS_IGRAB);
		}
	}
	else {
		PlaySFX__Fi(IS_TITERR);
		i = -1;
	}
	return i;
}



// decompiled code
// original method signature: 
// void FUN_8015f470(undefined4 uParm1,undefined4 uParm2,undefined4 uParm3,int iParm4);
 // line -1, offset 0x8015f470
// function 'FUN_8015f470' @0x8015F470 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015f470(undefined4 uParm1,undefined4 uParm2,undefined4 uParm3,int iParm4)

{
	undefined4 in_v1;
	int i;
	char unaff_s3;
	char unaff_s4;
	
	*(undefined4 *)(iParm4 + 4) = in_v1;
	*(undefined4 *)(iParm4 + 8) = uParm1;
	item[i]._ix = unaff_s3;
	item[i]._iy = unaff_s4;
	RespawnItem__FiUc(i,'\x01');
	numitems = numitems + 1;
	NewCursor__Fi(1);
	PlaySFX__Fi(IS_IGRAB);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015f4c4(void);
 // line -1, offset 0x8015f4c4
// function 'FUN_8015f4c4' @0x8015F4C4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015f4c4(void)

{
	int in_at;
	undefined4 in_v0;
	
	*(undefined4 *)(in_at + -0x4778) = in_v0;
	NewCursor__Fi(1);
	PlaySFX__Fi(IS_IGRAB);
	return;
}



// decompiled code
// original method signature: 
// int FUN_8015f504(int param_1,int param_2,int param_3,int param_4,ushort param_5,int param_6,uchar param_7,int iParm8,int iParm9,int iParm10,int iParm11,int iParm12,int iParm13);
 // line -1, offset 0x8015f504
// function 'FUN_8015f504' @0x8015F504 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
/* WARNING: Could not reconcile some variable overlaps */

int FUN_8015f504(int param_1,int param_2,int param_3,int param_4,ushort param_5,int param_6,
								uchar param_7,int iParm8,int iParm9,int iParm10,int iParm11,int iParm12,int iParm13)

{
	short sVar1;
	bool bVar2;
	char cVar3;
	uchar uVar4;
	int ii;
	int iVar5;
	int i;
	uint uVar6;
	int iVar7;
	int j;
	int local_50;
	
	if (numitems < 0x7a) {
		ii = FindGetItem__FiUsi(param_4,param_5,param_6);
		if (ii != -1) {
			FUN_8015eeb8(param_2,param_3,param_4,(uint)param_5,param_6);
		}
		bVar2 = false;
		ii = GetDirection__Fiiii((int)(&plr)[param_1]._px,(int)(&plr)[param_1]._py,param_2,param_3);
		sVar1 = (&plr)[param_1]._py;
		iVar5 = abs(param_2 - (int)(&plr)[param_1]._px);
		if ((1 < iVar5) || (iVar5 = abs(param_3 - (int)sVar1), 1 < iVar5)) {
			bVar2 = true;
		}
		local_50 = param_3;
		if (bVar2) {
			param_2 = (int)(&plr)[param_1]._px + (int)(&offset_x)[ii];
			local_50 = (int)(&plr)[param_1]._py + (int)(&offset_y)[ii];
		}
		uVar4 = CanPut__Fii(param_2,local_50);
		if (uVar4 == '\0') {
			uVar6 = ii - 1U & 7;
			param_2 = (int)(&plr)[param_1]._px + (int)(&offset_x)[uVar6];
			local_50 = (int)(&plr)[param_1]._py + (int)(&offset_y)[uVar6];
			uVar4 = CanPut__Fii(param_2,local_50);
			if (uVar4 == '\0') {
				uVar6 = uVar6 + 2 & 7;
				param_2 = (int)(&plr)[param_1]._px + (int)(&offset_x)[uVar6];
				local_50 = (int)(&plr)[param_1]._py + (int)(&offset_y)[uVar6];
				uVar4 = CanPut__Fii(param_2,local_50);
				bVar2 = false;
				if (uVar4 == '\0') {
					ii = 1;
					while (ii < 0x32) {
						iVar5 = -ii;
						if (bVar2) goto LAB_8015f85c;
						while ((iVar5 <= ii && (iVar7 = -ii, !bVar2))) {
							j = (int)(&plr)[param_1]._py + iVar5;
							while ((iVar7 <= ii && (!bVar2))) {
								i = (int)(&plr)[param_1]._px + iVar7;
								uVar4 = CanPut__Fii(i,j);
								if (uVar4 != '\0') {
									bVar2 = true;
									param_2 = i;
									local_50 = j;
								}
								iVar7 = iVar7 + 1;
							}
							iVar5 = iVar5 + 1;
						}
						ii = ii + 1;
					}
					if (!bVar2) {
						return 0xffffffff;
					}
				}
			}
		}
LAB_8015f85c:
		ii = (int)itemavail;
		(&dung_map)[param_2 * 0x70 + local_50].dItem = itemavail + '\x01';
		cVar3 = s__800d53d5[0x7d - numitems];
		(&itemactive)[numitems] = itemavail;
		itemavail = cVar3;
		if (param_4 == 0x17) {
			RecreateEar__FiUsiUciiiiii
								(ii,param_5,param_6,param_7,iParm8,iParm9,iParm10,iParm11,iParm12,iParm13);
		}
		else {
			RecreateItem__FiiUsiii(ii,param_4,param_5,param_6,iParm12,iParm13);
			if (param_7 != '\0') {
				item[ii]._iIdentified = '\x01';
			}
			item[ii]._iDurability = (short)iParm8;
			item[ii]._iMaxDur = (short)iParm9;
			item[ii]._iCharges = (uchar)iParm10;
			item[ii]._iMaxCharges = (uchar)iParm11;
		}
		item[ii]._ix = (char)param_2;
		item[ii]._iy = (char)local_50;
		RespawnItem__FiUc(ii,'\x01');
		numitems = numitems + 1;
	}
	else {
		PlaySFX__Fi(IS_TITERR);
		ii = -1;
	}
	return ii;
}



// decompiled code
// original method signature: 
// int FUN_8015f6bc(void);
 // line -1, offset 0x8015f6bc
// function 'FUN_8015f6bc' @0x8015F6BC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_8015f6bc(void)

{
	bool bVar1;
	char cVar2;
	uchar uVar3;
	int i;
	int unaff_s1;
	uint uVar4;
	int iVar5;
	int ii;
	int j;
	int iVar6;
	int unaff_s7;
	int i_00;
	char param_11_00;
	int param_11;
	int param_12;
	ushort param_13;
	uchar param_14;
	int param_26;
	short param_27_00;
	int param_27;
	short param_28_00;
	int param_28;
	uchar param_29_00;
	int param_29;
	uchar param_30_00;
	int param_30;
	int param_31;
	int param_32;
	
	uVar4 = unaff_s1 - 1U & 7;
	i_00 = (int)(&plr)[unaff_s7]._px + (int)(&offset_x)[uVar4];
	param_11 = (int)(&plr)[unaff_s7]._py + (int)(&offset_y)[uVar4];
	uVar3 = CanPut__Fii(i_00,param_11);
	if (uVar3 == '\0') {
		uVar4 = uVar4 + 2 & 7;
		i_00 = (int)(&plr)[unaff_s7]._px + (int)(&offset_x)[uVar4];
		param_11 = (int)(&plr)[unaff_s7]._py + (int)(&offset_y)[uVar4];
		uVar3 = CanPut__Fii(i_00,param_11);
		bVar1 = false;
		if (uVar3 == '\0') {
			ii = 1;
			while (ii < 0x32) {
				iVar6 = -ii;
				if (bVar1) goto LAB_8015f85c;
				while ((iVar6 <= ii && (iVar5 = -ii, !bVar1))) {
					j = (int)(&plr)[unaff_s7]._py + iVar6;
					while ((iVar5 <= ii && (!bVar1))) {
						i = (int)(&plr)[unaff_s7]._px + iVar5;
						uVar3 = CanPut__Fii(i,j);
						if (uVar3 != '\0') {
							bVar1 = true;
							i_00 = i;
							param_11 = j;
						}
						iVar5 = iVar5 + 1;
					}
					iVar6 = iVar6 + 1;
				}
				ii = ii + 1;
			}
			if (!bVar1) {
				return 0xffffffff;
			}
		}
	}
LAB_8015f85c:
	ii = (int)itemavail;
	(&dung_map)[i_00 * 0x70 + param_11].dItem = itemavail + '\x01';
	cVar2 = s__800d53d5[0x7d - numitems];
	(&itemactive)[numitems] = itemavail;
	itemavail = cVar2;
	if (param_12 == 0x17) {
		RecreateEar__FiUsiUciiiiii
							(ii,param_13,param_26,param_14,param_27,param_28,param_29,param_30,param_31,param_32);
	}
	else {
		RecreateItem__FiiUsiii(ii,param_12,param_13,param_26,param_31,param_32);
		if (param_14 != '\0') {
			item[ii]._iIdentified = '\x01';
		}
		item[ii]._iDurability = param_27_00;
		item[ii]._iMaxDur = param_28_00;
		item[ii]._iCharges = param_29_00;
		item[ii]._iMaxCharges = param_30_00;
	}
	item[ii]._ix = (char)i_00;
	item[ii]._iy = param_11_00;
	RespawnItem__FiUc(ii,'\x01');
	numitems = numitems + 1;
	return ii;
}



// decompiled code
// original method signature: 
// int FUN_8015fa64(void);
 // line -1, offset 0x8015fa64
// function 'FUN_8015fa64' @0x8015FA64 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_8015fa64(void)

{
	uint uVar1;
	char cVar2;
	char *__src;
	char *pcVar3;
	char cVar4;
	ItemStruct *ItemPtr;
	int nGold;
	PlayerStruct *pPVar5;
	char cVar6;
	
	uVar1 = uGp00001bb4;
	if (0x48 < (int)uGp00001bb4) {
		return 0xffffffff;
	}
	_infoclr[sel_data] = '\0';
	nGold = myplr;
	pPVar5 = &plr + myplr;
	ClearPanel__Fv();
	cVar6 = -1;
	ItemPtr = (ItemStruct *)0x0;
	if ((&_pcurs)[myplr] < 0xc) {
		if (uVar1 < 4) {
			cVar6 = '\0';
			ItemPtr = (&plr)[nGold].InvBody;
		}
		else {
			if (uVar1 == 4) {
				cVar6 = '\x01';
				ItemPtr = (&plr)[nGold].InvBody + 1;
			}
			else {
				if (uVar1 == 5) {
					cVar6 = '\x02';
					ItemPtr = (&plr)[nGold].InvBody + 2;
				}
				else {
					if (uVar1 == 6) {
						cVar6 = '\x03';
						ItemPtr = (&plr)[nGold].InvBody + 3;
					}
					else {
						if (uVar1 - 7 < 6) {
							cVar6 = '\x04';
							ItemPtr = (&plr)[nGold].InvBody + 4;
						}
						else {
							if (uVar1 - 0xd < 6) {
								ItemPtr = (&plr)[nGold].InvBody + 4;
								if (((&plr)[nGold].InvBody[4]._itype == -1) ||
									 ((&plr)[nGold].InvBody[4]._iLoc != '\x02')) {
									cVar6 = '\x05';
									ItemPtr = (&plr)[nGold].InvBody + 5;
								}
								else {
									cVar6 = '\x04';
								}
							}
							else {
								if (uVar1 - 0x13 < 6) {
									cVar6 = '\x06';
									ItemPtr = (&plr)[nGold].InvBody + 6;
								}
								else {
									if (uVar1 - 0x19 < 0x28) {
										nGold = abs((int)(char)(&DAT_0000156f)[(int)&pPVar5->_pmode + uVar1]);
										if (nGold == 0) {
											return 0xffffffff;
										}
										cVar6 = (char)nGold + '\x06';
										ItemPtr = pPVar5->InvList + nGold + -1;
									}
									else {
										if (0x40 < (int)uVar1) {
											ItemPtr = pPVar5->SpdList + (uVar1 - 0x41);
											uGp00001bad = 1;
											cVar6 = (char)uVar1 + -0x12;
											if (ItemPtr->_itype == -1) {
												uGp00001bad = 1;
												return 0xffffffff;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else {
		ItemPtr = &(&plr)[nGold].HoldItem;
	}
	if (ItemPtr->_itype == -1) {
		return 0xffffffff;
	}
	if (ItemPtr->_itype == 0xb) {
		nGold = ItemPtr->_ivalue;
		__src = GetStr__Fi(0x4ff);
		pcVar3 = get_pieces_str__Fi(nGold);
		sprintf(_infostr + sel_data * 0x100,__src,nGold,pcVar3);
		goto LAB_8015fdd8;
	}
	if (cGp00001bac == '\0') {
		cVar4 = ItemPtr->_iMagical;
		if (cVar4 == '\x01') {
			cVar2 = '\x01';
			goto LAB_8015fd4c;
		}
LAB_8015fd3c:
		cVar2 = '\x03';
		if (cVar4 == '\x02') goto LAB_8015fd4c;
	}
	else {
		if (ItemPtr->_iStatFlag == '\0') {
			cVar2 = '\x02';
		}
		else {
			cVar4 = ItemPtr->_iMagical;
			if (cVar4 != '\x01') goto LAB_8015fd3c;
			cVar2 = '\x01';
		}
LAB_8015fd4c:
		_infoclr[sel_data] = cVar2;
	}
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
LAB_8015fdd8:
	return (int)cVar6;
}



// decompiled code
// original method signature: 
// int FUN_8015fc80(void);
 // line -1, offset 0x8015fc80
// function 'FUN_8015fc80' @0x8015FC80 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_8015fc80(void)

{
	char *__format;
	char *pcVar1;
	int unaff_s1;
	int nGold;
	char unaff_s3;
	
	nGold = *(int *)(unaff_s1 + 0x14);
	__format = GetStr__Fi(0x4ff);
	pcVar1 = get_pieces_str__Fi(nGold);
	sprintf(_infostr + sel_data * 0x100,__format,nGold,pcVar1);
	return (int)unaff_s3;
}



// decompiled code
// original method signature: 
// int FUN_8015fd04(void);
 // line -1, offset 0x8015fd04
// function 'FUN_8015fd04' @0x8015FD04 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_8015fd04(void)

{
	char cVar1;
	int in_v0;
	char *__src;
	int in_v1;
	ItemStruct *ItemPtr;
	char unaff_s3;
	
	if (in_v1 == in_v0) {
		cVar1 = '\x01';
	}
	else {
		cVar1 = '\x03';
		if (in_v1 != 2) goto LAB_8015fd58;
	}
	_infoclr[sel_data] = cVar1;
LAB_8015fd58:
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
	return (int)unaff_s3;
}



// decompiled code
// original method signature: 
// void FUN_8015fdfc(int iParm1);
 // line -1, offset 0x8015fdfc
// function 'FUN_8015fdfc' @0x8015FDFC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015fdfc(int iParm1)

{
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (0 < (&plr)[iParm1]._pNumInv) {
		iVar2 = 0;
		do {
			if (((*(short *)((int)&(&plr)[iParm1].InvList[0]._itype + iVar2) != -1) &&
					((uint)(&(&plr)[iParm1].InvList[0]._iMiscId)[iVar2] - 0x15 < 2)) &&
				 ((&(&plr)[iParm1].InvList[0]._iSpell)[iVar2] == (&plr)[iParm1]._pSpell)) {
				FUN_8015d6fc(iParm1);
				goto LAB_8015ffac;
			}
			iVar1 = iVar1 + 1;
			iVar2 = iVar2 + 0x6c;
		} while (iVar1 < (&plr)[iParm1]._pNumInv);
	}
	iVar2 = 0;
	iVar1 = iParm1 * 0x19e8;
	while (((*(short *)((int)&plr.SpdList[0]._itype + iVar1) == -1 ||
					(1 < (uint)(&plr.SpdList[0]._iMiscId)[iVar1] - 0x15)) ||
				 ((&plr.SpdList[0]._iSpell)[iVar1] != (&plr)[iParm1]._pSpell))) {
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 0x6c;
		if (7 < iVar2) {
			return;
		}
	}
	FUN_8015d9ac(iParm1);
LAB_8015ffac:
	CalcPlrScrolls__Fi(iParm1);
	return;
}



// decompiled code
// original method signature: 
// undefined4 FUN_8015ffe0(void);
 // line -1, offset 0x8015ffe0
// function 'FUN_8015ffe0' @0x8015FFE0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8015ffe0(void)

{
	int iVar1;
	int iVar2;
	
	if ((&_pcurs)[myplr] == 1) {
		if ((leveltype == '\0') && ((&spelldata)[(&plr)[myplr]._pRSpell].sTownSpell == '\0')) {
			return 0;
		}
		iVar1 = 0;
		if (0 < (&plr)[myplr]._pNumInv) {
			iVar2 = 0;
			do {
				if (((*(short *)((int)&(&plr)[myplr].InvList[0]._itype + iVar2) != -1) &&
						((uint)(&(&plr)[myplr].InvList[0]._iMiscId)[iVar2] - 0x15 < 2)) &&
					 ((int)(&(&plr)[myplr].InvList[0]._iSpell)[iVar2] == (&plr)[myplr]._pRSpell)) {
					return 1;
				}
				iVar1 = iVar1 + 1;
				iVar2 = iVar2 + 0x6c;
			} while (iVar1 < (&plr)[myplr]._pNumInv);
		}
		iVar2 = 0;
		iVar1 = myplr * 0x19e8;
		do {
			if (((*(short *)((int)&plr.SpdList[0]._itype + iVar1) != -1) &&
					((uint)(&plr.SpdList[0]._iMiscId)[iVar1] - 0x15 < 2)) &&
				 ((int)(&plr.SpdList[0]._iSpell)[iVar1] == (&plr)[myplr]._pRSpell)) {
				return 1;
			}
			iVar2 = iVar2 + 1;
			iVar1 = iVar1 + 0x6c;
		} while (iVar2 < 8);
	}
	return 0;
}



// decompiled code
// original method signature: 
// void FUN_80160248(PlayerStruct *pPParm1);
 // line -1, offset 0x80160248
// function 'FUN_80160248' @0x80160248 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80160248(PlayerStruct *pPParm1)

{
	uchar uVar1;
	
	if ((((pPParm1->InvBody[4]._itype != -1) && (pPParm1->InvBody[4]._iMiscId == '\x17')) &&
			((int)pPParm1->InvBody[4]._iSpell == pPParm1->_pRSpell)) &&
		 (uVar1 = pPParm1->InvBody[4]._iCharges, uVar1 != '\0')) {
		pPParm1->InvBody[4]._iCharges = uVar1 + -1;
		CalcPlrStaff__FP12PlayerStruct(pPParm1);
	}
	return;
}



// decompiled code
// original method signature: 
// uint FUN_801602ac(void);
 // line -1, offset 0x801602ac
// function 'FUN_801602ac' @0x801602AC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_801602ac(void)

{
	uint uVar1;
	
	if ((&_pcurs)[myplr] == 1) {
		uVar1 = 0;
		if ((((&plr)[myplr].InvBody[4]._itype != -1) && ((&plr)[myplr].InvBody[4]._iMiscId == '\x17'))
			 && ((int)(&plr)[myplr].InvBody[4]._iSpell == (&plr)[myplr]._pRSpell)) {
			uVar1 = (uint)((&plr)[myplr].InvBody[4]._iCharges != '\0');
		}
	}
	else {
		uVar1 = 0;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void FUN_8016036c(void);
 // line -1, offset 0x8016036c
// function 'FUN_8016036c' @0x8016036C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8016036c(void)

{
	int iVar1;
	
	iVar1 = (int)_pcursinvitem[sel_data];
	if (iVar1 < 0x2f) {
		initialDropGoldValue = (&plr)[myplr].InvList[iVar1 + -7]._ivalue;
	}
	else {
		initialDropGoldValue = (&plr)[myplr].SpdList[iVar1 + -0x2f]._ivalue;
	}
	dropGoldFlag = '\x01';
	dropGoldValue = 0;
	initialDropGoldIndex = (int)_pcursinvitem[sel_data];
	return;
}



// decompiled code
// original method signature: 
// undefined4 FUN_80160470(uint uParm1,int iParm2);
 // line -1, offset 0x80160470
// function 'FUN_80160470' @0x80160470 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_80160470(uint uParm1,int iParm2)

{
	char cVar1;
	bool bVar2;
	int iVar3;
	_135fake psfx;
	int iVar4;
	int iVar5;
	
	if ((((&plr)[uParm1]._pInvincible != '\0') && ((&plr)[uParm1]._pHitPoints == 0)) &&
		 (uParm1 == myplr)) {
		return 1;
	}
	if ((&_pcurs)[myplr] != 1) {
		return 1;
	}
	if (stextflag != '\0') {
		return 1;
	}
	if (iParm2 < 6) {
		return 0;
	}
	iVar5 = iParm2 + -7;
	if (iParm2 < 0x2f) {
		iVar4 = uParm1 * 0x19e8 + -0x7ff25624 + iVar5 * 0x6c;
		bVar2 = false;
	}
	else {
		if (talkflag != '\0') {
			return 1;
		}
		iVar5 = iParm2 + -0x2f;
		iVar4 = uParm1 * 0x19e8 + -0x7ff24518 + iVar5 * 0x6c;
		bVar2 = true;
	}
	iVar3 = (int)*(short *)(iVar4 + 0x2e);
	if (iVar3 == 0x11) {
		cVar1 = (&plr)[uParm1]._pClass;
		if (cVar1 == '\0') {
			sfxdnum = 0x331;
		}
		else {
			if (cVar1 == '\x01') {
				sfxdnum = 0x2c3;
			}
			else {
				if (cVar1 != '\x02') {
					sfxdelay = 10;
					return 1;
				}
				sfxdnum = 0x25b;
			}
		}
		sfxdelay = 10;
		return 1;
	}
	if (iVar3 == 0x13) {
		PlaySFX__Fi(IS_IBOOK);
		cVar1 = (&plr)[uParm1]._pClass;
		if (cVar1 == '\0') {
			sfxdelay = 10;
			sfxdnum = 0x2ee;
			return 1;
		}
		if (cVar1 == '\x01') {
			sfxdelay = 10;
			sfxdnum = 0x280;
			return 1;
		}
		if (cVar1 == '\x02') {
			sfxdelay = 10;
			sfxdnum = 0x218;
			return 1;
		}
		sfxdelay = 10;
		return 1;
	}
	if ((&AllItemsUseable)[iVar3] == '\0') {
		return 0;
	}
	if (*(char *)(iVar4 + 0x66) == '\0') {
		cVar1 = (&plr)[uParm1]._pClass;
		if (cVar1 == '\0') {
			psfx = PS_WARR13;
		}
		else {
			if (cVar1 == '\x01') {
				psfx = PS_ROGUE13;
			}
			else {
				if (cVar1 != '\x02') {
					return 1;
				}
				psfx = PS_MAGE13;
			}
		}
		PlaySFX__Fi(psfx);
		return 1;
	}
	if ((*(char *)(iVar4 + 0x4d) == '\0') && (*(short *)(iVar4 + 0x2c) == 0xb)) {
		FUN_8016036c();
		return 1;
	}
	if (dropGoldFlag != '\0') {
		dropGoldFlag = '\0';
		dropGoldValue = 0;
	}
	if ((uint)*(byte *)(iVar4 + 0x4d) - 0x15 < 2) {
		if (((gbMaxPlayers == '\x02') && (*(char *)(iVar4 + 0x3d) == ' ')) &&
			 ((&plr)[uParm1 ^ 1].plractive != '\0')) {
			return 0;
		}
		if ((((uint)*(byte *)(iVar4 + 0x4d) - 0x15 < 2) && (currlevel == '\0')) &&
			 ((&spelldata)[(int)*(char *)(iVar4 + 0x3d)].sTownSpell == '\0')) {
			cVar1 = (&plr)[uParm1]._pClass;
			if (cVar1 == '\0') {
				psfx = PS_WARR27;
			}
			else {
				if (cVar1 == '\x01') {
					psfx = PS_ROGUE27;
				}
				else {
					if (cVar1 != '\x02') {
						return 0;
					}
					psfx = PS_MAGE27;
				}
			}
			PlaySFX__Fi(psfx);
			return 0;
		}
	}
	psfx = IS_RBOOK;
	if (*(char *)(iVar4 + 0x4d) != '\x18') {
		if (uParm1 != myplr) goto LAB_80160988;
		psfx = ItemInvSnds[(uint)ItemCAnimTbl[(uint)*(byte *)(iVar4 + 0x4c)]];
	}
	PlaySFX__Fi(psfx);
LAB_80160988:
	UseItem__Fiii(uParm1,(uint)*(byte *)(iVar4 + 0x4d),(int)*(char *)(iVar4 + 0x3d));
	if (bVar2) {
		FUN_8015d9ac(uParm1,iVar5);
		return 1;
	}
	if ((&plr)[uParm1].InvList[iVar5]._iMiscId != '*') {
		FUN_8015d6fc(uParm1,iVar5);
		return 1;
	}
	return 1;
}



// decompiled code
// original method signature: 
// void FUN_80160a34(void);
 // line -1, offset 0x80160a34
// function 'FUN_80160a34' @0x80160A34 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80160a34(void)

{
	uchar uVar1;
	
	if ((&_pcursobj)[sel_data] != -1) {
		NetSendCmdParam1__FUcUcUs('\x01','\x1b',(short)(&_pcursobj)[sel_data]);
	}
	if ((int)(&_pcursitem)[sel_data] != 0xffffffff) {
		NetSendCmdGItem__FUcUcUcUcUc
							('\x01','(',(uchar)myplr,(uchar)myplr,(int)(&_pcursitem)[sel_data] & 0xff);
	}
	if ((((&_pcursmonst)[sel_data] != -1) &&
			(uVar1 = M_Talker__Fi((&_pcursmonst)[sel_data]), uVar1 == '\0')) &&
		 (monster[(&_pcursmonst)[sel_data]].mtalkmsg == 0)) {
		NetSendCmdParam1__FUcUcUs('\x01','\x1c',(ushort)(&_pcursmonst)[sel_data]);
	}
	NewCursor__Fi(1);
	return;
}



// decompiled code
// original method signature: 
// int FUN_80160b64(int iParm1);
 // line -1, offset 0x80160b64
// function 'FUN_80160b64' @0x80160B64 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_80160b64(int iParm1)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar2 = 0;
	iVar1 = iParm1 * 0x19e8;
	do {
		if (*(short *)((int)&plr.SpdList[0]._itype + iVar1) == 0xb) {
			force_redraw = 0xff;
			iVar3 = iVar3 + *(int *)((int)&plr.SpdList[0]._ivalue + iVar1);
		}
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 0x6c;
	} while (iVar2 < 8);
	iVar1 = 0;
	if (0 < (&plr)[iParm1]._pNumInv) {
		iVar2 = 0;
		do {
			if (*(short *)((int)&(&plr)[iParm1].InvList[0]._itype + iVar2) == 0xb) {
				iVar3 = iVar3 + *(int *)((int)&(&plr)[iParm1].InvList[0]._ivalue + iVar2);
			}
			iVar1 = iVar1 + 1;
			iVar2 = iVar2 + 0x6c;
		} while (iVar1 < (&plr)[iParm1]._pNumInv);
	}
	return iVar3;
}



// decompiled code
// original method signature: 
// uint FUN_80160c9c(void);
 // line -1, offset 0x80160c9c
// function 'FUN_80160c9c' @0x80160C9C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_80160c9c(void)

{
	bool bVar1;
	uint uVar2;
	
	uVar2 = FUN_8015f020();
	bVar1 = (uVar2 & 0xff) != 0;
	if (bVar1) {
		NetSendCmdPItem__FUcUcUcUc('\x01','\n',(uchar)cursmx,(uchar)cursmy);
		NewCursor__Fi(1);
	}
	return (uint)bVar1;
}



// decompiled code
// original method signature: 
// void FUN_80160cf4(void);
 // line -1, offset 0x80160cf4
// function 'FUN_80160cf4' @0x80160CF4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80160cf4(void)

{
	bool bVar1;
	char cVar2;
	int iVar3;
	uint uVar4;
	
	CheckNewPath__Fi(myplr);
	FUN_8016135c();
	iVar3 = sfxdelay + -1;
	if ((0 < sfxdelay) && (sfxdelay = iVar3, iVar3 == 0)) {
		sfxdelay = iVar3;
		PlaySFX__Fi(sfxdnum);
	}
	(&_pcursitem)[sel_data] = -1;
	uitemflag = '\0';
	ReadPad__Fi(-1);
	if ((&_pcurs)[myplr] == 9) {
		cGp00001bac = '\0';
	}
	if (iGp00001bb4 < 0x19) {
		iGp00001bc0 = 0;
	}
	else {
		iGp00001bc0 = 0x60;
	}
	if (iGp00001bc0 < iGp00001bb0) {
		bVar1 = iGp00001bb0 + -0x10 < iGp00001bc0;
		iGp00001bb0 = iGp00001bb0 + -0x10;
LAB_80160df8:
		if (bVar1) {
			iGp00001bb0 = iGp00001bc0;
		}
	}
	else {
		if (iGp00001bb0 < iGp00001bc0) {
			bVar1 = iGp00001bc0 < iGp00001bb0 + 0x10;
			iGp00001bb0 = iGp00001bb0 + 0x10;
			goto LAB_80160df8;
		}
	}
	if (cGp00001bac == '\0') {
		ClearPanel__Fv();
	}
	else {
		cVar2 = FUN_8015fa64();
		_pcursinvitem[sel_data] = cVar2;
		if (_pcursinvitem[sel_data] == -1) {
			ClrCursor__Fi(options_pad);
		}
	}
	if (iGp00001bbc != 0) {
		if ((DavesPad & 0x400U) == 0) goto LAB_80160ec0;
		PlaySFX__Fi(IS_TITLEMOV);
		if (iGp00001bb8 == 0) {
			iGp00001bb8 = 1;
			goto LAB_80160ec0;
		}
	}
	iGp00001bb8 = 0;
LAB_80160ec0:
	if (uitemflag != '\0') {
		DrawUniqueInfo__Fv();
	}
	if ((DavesPad & 4U) != 0) {
		FUN_801614fc();
	}
	if ((DavesPad & 8U) != 0) {
		FUN_801616a4();
	}
	if ((DavesPad & 1U) != 0) {
		FUN_80161958();
	}
	if ((DavesPad & 2U) != 0) {
		FUN_80161b50();
	}
	if ((DavesPad & 0x40U) != 0) {
		if (((&_pcurs)[myplr] - 2U < 2) || ((&_pcurs)[myplr] == 4)) {
			TryIconCurs__Fv();
		}
		else {
			FUN_8015daa0();
		}
	}
	if ((DavesPad & 0x200U) != 0) {
		ignore_buttons = &DAT_00000001;
		FUN_80160470(myplr,(int)_pcursinvitem[sel_data]);
	}
	if (((DavesPad & 0x80U) != 0) && (0xb < (&_pcurs)[myplr])) {
		if ((numitems < 0x7a) && (uVar4 = FUN_8015f020(), (uVar4 & 0xff) != 0)) {
			NetSendCmdPItem__FUcUcUcUc('\x01','\n','\0','\0');
		}
		else {
			PlaySFX__Fi(IS_TITERR);
		}
	}
	FUN_801611a8();
	return;
}



// decompiled code
// original method signature: 
// void FUN_80160ed4(void);
 // line -1, offset 0x80160ed4
// function 'FUN_80160ed4' @0x80160ED4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80160ed4(void)

{
	uint uVar1;
	
	DrawUniqueInfo__Fv();
	if ((DavesPad & 4U) != 0) {
		FUN_801614fc();
	}
	if ((DavesPad & 8U) != 0) {
		FUN_801616a4();
	}
	if ((DavesPad & 1U) != 0) {
		FUN_80161958();
	}
	if ((DavesPad & 2U) != 0) {
		FUN_80161b50();
	}
	if ((DavesPad & 0x40U) != 0) {
		if (((&_pcurs)[myplr] - 2U < 2) || ((&_pcurs)[myplr] == 4)) {
			TryIconCurs__Fv();
		}
		else {
			FUN_8015daa0();
		}
	}
	if ((DavesPad & 0x200U) != 0) {
		ignore_buttons = &DAT_00000001;
		FUN_80160470(myplr,(int)_pcursinvitem[sel_data]);
	}
	if (((DavesPad & 0x80U) != 0) && (0xb < (&_pcurs)[myplr])) {
		if ((numitems < 0x7a) && (uVar1 = FUN_8015f020(), (uVar1 & 0xff) != 0)) {
			NetSendCmdPItem__FUcUcUcUc('\x01','\n','\0','\0');
		}
		else {
			PlaySFX__Fi(IS_TITERR);
		}
	}
	FUN_801611a8();
	return;
}



// decompiled code
// original method signature: 
// void FUN_801610b0(int iParm1);
 // line -1, offset 0x801610b0
// function 'FUN_801610b0' @0x801610B0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801610b0(int iParm1)

{
	int iVar1;
	
	iVar1 = (int)*(char *)(myplr * 0x19e8 + -0x7ff24540 + iParm1);
	if (iVar1 != 0) {
		if (iVar1 < 1) {
			iVar1 = -iVar1;
		}
		uGp00001bd0 = (uint)(&plr)[myplr].InvList[iVar1 + -1]._iCurs;
		uGp00001bc8 = (uint)(s__8010d524[uGp00001bd0] >> 4);
		uGp00001bcc = (uint)(s__0000000000000000000_00000000000_8010d5d8[uGp00001bd0] >> 4);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_801611a8(void);
 // line -1, offset 0x801611a8
// function 'FUN_801611a8' @0x801611A8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801611a8(void)

{
	int iVar1;
	uint uVar2;
	
	if ((iGp00001bb4 - 0x19U < 0x28) && (0xb < (&_pcurs)[myplr])) {
		uGp00001bd0 = (uint)(&plr)[myplr].HoldItem._iCurs;
		iGp00001bc8 = (uint)(s__8010d524[uGp00001bd0] >> 4) - 1;
		iGp00001bcc = (uint)(s__0000000000000000000_00000000000_8010d5d8[uGp00001bd0] >> 4) - 1;
		if ((iGp00001bb4 - 0x19U < 10) && (0x22 < iGp00001bb4 + iGp00001bc8)) {
			iGp00001bb4 = 0x22 - iGp00001bc8;
		}
		uVar2 = iGp00001bb4 - 0x2d;
		if ((iGp00001bb4 - 0x23U < 10) && (uVar2 = iGp00001bb4 - 0x2d, 0x2c < iGp00001bb4 + iGp00001bc8)
			 ) {
			iGp00001bb4 = -iGp00001bc8 + 0x2c;
			uVar2 = -iGp00001bc8 - 1;
		}
		if ((uVar2 < 10) && (0x36 < iGp00001bb4 + iGp00001bc8)) {
			iGp00001bb4 = 0x36 - iGp00001bc8;
		}
		if ((iGp00001bb4 - 0x37U < 10) && (0x40 < iGp00001bb4 + iGp00001bc8)) {
			iGp00001bb4 = 0x40 - iGp00001bc8;
		}
		iVar1 = iGp00001bb4;
		do {
			iGp00001bb4 = iVar1;
			iVar1 = iGp00001bb4 + -10;
		} while (0x40 < iGp00001bb4 + iGp00001bcc * 10);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8016135c(void);
 // line -1, offset 0x8016135c
// function 'FUN_8016135c' @0x8016135C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8016135c(void)

{
	char cVar1;
	int iVar2;
	
	iVar2 = (int)(&(&plr)[myplr].InvList[0x27]._iPLMag)[iGp00001bb4];
	if (((iVar2 != 0) && ((&_pcurs)[myplr] < 0xc)) && (iGp00001bb4 - 0x19U < 0x28)) {
		if (0x19 < iGp00001bb4) {
			cVar1 = (&(&plr)[myplr].InvList[0x27]._iPLStr)[iGp00001bb4];
			while (((int)cVar1 == iVar2 || ((int)cVar1 == -iVar2))) {
				cVar1 = (&(&plr)[myplr].InvList[0x27]._iClass)[iGp00001bb4];
				iGp00001bb4 = iGp00001bb4 + -1;
			}
		}
		if (0x22 < iGp00001bb4) {
			cVar1 = (&DAT_000010c1)[(int)&(&plr)[myplr].InvList[0]._iVAdd1 + iGp00001bb4];
			while ((((int)cVar1 == iVar2 || ((int)cVar1 == -iVar2)) && (0x22 < iGp00001bb4))) {
				cVar1 = (&(&plr)[myplr].InvList[0x27]._iPLLight)[iGp00001bb4];
				iGp00001bb4 = iGp00001bb4 + -10;
			}
		}
		if (iGp00001bb4 < 0x19) {
			iGp00001bb4 = 0x19;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_801614fc(void);
 // line -1, offset 0x801614fc
// function 'FUN_801614fc' @0x801614FC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801614fc(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = iGp00001bb4;
	iVar2 = 0;
	if ((&_pcurs)[myplr] < 0xc) {
		switch(iGp00001bb4) {
		case 0:
		case 4:
		case 6:
switchD_80161580_caseD_d:
			iGp00001bb4 = 7;
			break;
		default:
switchD_80161580_caseD_1:
			if ((iGp00001bb4 - 0x19U < 0x28) || (0x40 < iGp00001bb4)) {
				iVar2 = 1;
			}
			break;
		case 5:
			iGp00001bb4 = 0x13;
			break;
		case 7:
switchD_80161580_caseD_7:
			iGp00001bb4 = 0xd;
			break;
		case 0xd:
switchD_80161580_caseD_4:
			iGp00001bb4 = 5;
			break;
		case 0x13:
switchD_80161580_caseD_5:
			iGp00001bb4 = 4;
		}
switchD_80161580_caseD_0:
		if (iGp00001bb4 - 0x19U < 0x28) {
			iVar3 = iGp00001bb4 - iVar2;
			iVar2 = (iVar3 + -0x19) % 10;
			if ((iVar2 == 9) || (iVar2 == -1)) {
				iVar3 = iVar3 + 10;
			}
		}
		else {
			iVar3 = iGp00001bb4;
			if ((0x40 < iGp00001bb4) && (iVar3 = iGp00001bb4 + 7, 0x41 < iGp00001bb4)) {
				iVar3 = iGp00001bb4 - iVar2;
			}
		}
		iGp00001bb4 = iVar3;
		FUN_8016135c();
		if (iVar1 != iGp00001bb4) {
			PlaySFX__Fi(IS_TITLEMOV);
		}
		return;
	}
	switch(iGp00001bb4) {
	case 0:
	case 6:
	case 0x13:
		goto switchD_80161580_caseD_0;
	default:
		goto switchD_80161580_caseD_1;
	case 4:
		goto switchD_80161580_caseD_4;
	case 5:
		goto switchD_80161580_caseD_5;
	case 7:
		goto switchD_80161580_caseD_7;
	case 0xd:
		goto switchD_80161580_caseD_d;
	}
}



// decompiled code
// original method signature: 
// void FUN_801616a4(void);
 // line -1, offset 0x801616a4
// function 'FUN_801616a4' @0x801616A4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801616a4(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = iGp00001bb4;
	iVar2 = 0;
	if ((&_pcurs)[myplr] < 0xc) {
		switch(iGp00001bb4) {
		case 0:
			iGp00001bb4 = 6;
			break;
		default:
			if (iGp00001bb4 - 0x19U < 0x28) {
				iVar2 = 1;
				if ((&(&plr)[myplr].InvList[0x27]._iPLMag)[iGp00001bb4] != '\0') {
					FUN_801610b0(iGp00001bb4 - 0x19U);
					iVar2 = iGp00001bc8;
				}
				break;
			}
LAB_80161810:
			if (iGp00001bb4 < 0x41) break;
			goto LAB_80161818;
		case 4:
			iGp00001bb4 = 0x13;
			break;
		case 5:
		case 6:
switchD_801617b0_caseD_7:
			iGp00001bb4 = 0xd;
			break;
		case 7:
switchD_801617b0_caseD_5:
			iGp00001bb4 = 4;
			break;
		case 0xd:
switchD_801617b0_caseD_d:
			iGp00001bb4 = 7;
			break;
		case 0x13:
switchD_801617b0_caseD_4:
			iGp00001bb4 = 5;
		}
	}
	else {
		switch(iGp00001bb4) {
		case 0:
		case 6:
		case 0x13:
			goto switchD_801617b0_caseD_0;
		default:
			if (0x27 < iGp00001bb4 - 0x19U) goto LAB_80161810;
			break;
		case 4:
			goto switchD_801617b0_caseD_4;
		case 5:
			goto switchD_801617b0_caseD_5;
		case 7:
			goto switchD_801617b0_caseD_7;
		case 0xd:
			goto switchD_801617b0_caseD_d;
		}
LAB_80161818:
		iVar2 = 1;
	}
switchD_801617b0_caseD_0:
	if (iGp00001bb4 - 0x19U < 0x28) {
		if ((&_pcurs)[myplr] < 0xc) {
			iGp00001bc8 = 0;
		}
		else {
			uGp00001bd0 = (uint)(&plr)[myplr].HoldItem._iCurs;
			iGp00001bc8 = (uint)(s__8010d524[uGp00001bd0] >> 4) - 1;
		}
		iVar3 = iGp00001bb4 + iVar2;
		iVar2 = iVar3 + iGp00001bc8 + -0x19;
		if (iVar2 == (iVar2 / 10) * 10) {
			iVar3 = iVar3 + -10 + iGp00001bc8;
		}
	}
	else {
		iVar3 = iGp00001bb4;
		if ((0x40 < iGp00001bb4) && (iVar3 = iGp00001bb4 + iVar2, 0x47 < iGp00001bb4)) {
			iVar3 = iGp00001bb4 + -7;
		}
	}
	iGp00001bb4 = iVar3;
	FUN_8016135c();
	if (iVar1 != iGp00001bb4) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80161958(void);
 // line -1, offset 0x80161958
// function 'FUN_80161958' @0x80161958 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80161958(void)

{
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar1 = iGp00001bb4;
	bVar3 = false;
	if (0xb < (&_pcurs)[myplr]) {
		switch(iGp00001bb4) {
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 0xd:
		case 0x13:
			goto switchD_80161a18_caseD_0;
		}
		if (iGp00001bb4 - 0x19U < 0x28) {
LAB_80161a38:
			bVar3 = true;
			goto switchD_80161a18_caseD_0;
		}
LAB_80161a44:
		iVar2 = iGp00001bb4 + -9;
		if (iGp00001bb4 < 0x41) goto switchD_80161a18_caseD_0;
		goto LAB_80161a4c;
	}
	switch(iGp00001bb4) {
	case 0:
		goto switchD_80161a18_caseD_0;
	default:
		if (0x27 < iGp00001bb4 - 0x19U) goto LAB_80161a44;
		iVar2 = 0x13;
		if (0x22 < iGp00001bb4) goto LAB_80161a38;
		break;
	case 4:
	case 6:
	case 7:
		iGp00001bb4 = 0;
		goto switchD_80161a18_caseD_0;
	case 5:
		iVar2 = 6;
		break;
	case 0xd:
		iVar2 = 6;
		break;
	case 0x13:
		iVar2 = 6;
	}
LAB_80161a4c:
	iGp00001bb4 = iVar2;
switchD_80161a18_caseD_0:
	iVar2 = iGp00001bb4;
	if (((iGp00001bb4 - 0x19U < 0x28) && (iVar2 = iGp00001bb4, bVar3)) &&
		 (iVar2 = iGp00001bb4 + -10, iGp00001bb4 < 0x23)) {
		iVar2 = iGp00001bb4;
		switch((int)(((uint)(byte)(&plr)[myplr].HoldItem._iLoc - 1) * 0x1000000) >> 0x18) {
		case 0:
			iVar2 = 7;
			break;
		case 1:
			iVar2 = 7;
			break;
		case 2:
			iVar2 = 0x13;
			break;
		case 3:
			iGp00001bb4 = 0;
			iVar2 = iGp00001bb4;
			break;
		case 4:
			iVar2 = 4;
			break;
		case 5:
			iVar2 = 6;
		}
	}
	iGp00001bb4 = iVar2;
	FUN_8016135c();
	if (iVar1 != iGp00001bb4) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80161b50(void);
 // line -1, offset 0x80161b50
// function 'FUN_80161b50' @0x80161B50 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80161b50(void)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = iGp00001bb4;
	bVar1 = false;
	if ((&_pcurs)[myplr] < 0xc) {
		switch(iGp00001bb4) {
		case 0:
			iGp00001bb4 = 6;
			break;
		default:
			if (0x27 < iGp00001bb4 - 0x19U) goto LAB_80161e08;
			if ((&(&plr)[myplr].InvList[0x27]._iPLMag)[iGp00001bb4] == '\0') {
				if (iGp00001bb4 < 0x38) {
					if (iGp00001bb4 < 0x41) {
						iGp00001bb4 = iGp00001bb4 + 10;
					}
				}
				else {
					iGp00001bb4 = iGp00001bb4 + 9;
				}
			}
			else {
				FUN_801610b0();
				if (iGp00001bb4 < 0x39) {
					iVar3 = uGp00001bcc * 10;
				}
				else {
					iVar3 = uGp00001bcc * 9;
				}
				iGp00001bb4 = iGp00001bb4 + iVar3;
			}
			break;
		case 4:
		case 7:
switchD_80161ccc_caseD_4:
			iGp00001bb4 = 0x19;
			break;
		case 5:
		case 0xd:
switchD_80161ccc_caseD_5:
			iGp00001bb4 = 0x22;
			break;
		case 6:
			iGp00001bb4 = 0x13;
			break;
		case 0x13:
switchD_80161ccc_caseD_0:
			iGp00001bb4 = 0x1d;
		}
	}
	else {
		switch(iGp00001bb4) {
		case 0:
		case 6:
		case 0x13:
			goto switchD_80161ccc_caseD_0;
		default:
			if (iGp00001bb4 - 0x19U < 0x28) {
				bVar1 = true;
			}
			else {
				if (0x40 < iGp00001bb4) {
					bVar1 = false;
				}
			}
			break;
		case 4:
		case 7:
			goto switchD_80161ccc_caseD_4;
		case 5:
		case 0xd:
			goto switchD_80161ccc_caseD_5;
		}
	}
	if ((iGp00001bb4 - 0x19U < 0x28) && (bVar1)) {
		uGp00001bd0 = (uint)(&plr)[myplr].HoldItem._iCurs;
		uGp00001bc8 = (uint)(s__8010d524[uGp00001bd0] >> 4);
		uGp00001bcc = (uint)(s__0000000000000000000_00000000000_8010d5d8[uGp00001bd0] >> 4);
		if (iGp00001bb4 < 0x38) {
			iVar3 = iGp00001bb4 + 10;
			if (0x36 < (int)(iGp00001bb4 + (uGp00001bcc - 1) * 10)) goto LAB_80161e08;
		}
		else {
			iVar3 = iGp00001bb4 + 9;
			if (iGp00001bb4 == 0x37) {
				iVar3 = 0x41;
			}
		}
		iGp00001bb4 = iVar3;
	}
LAB_80161e08:
	if (0x48 < iGp00001bb4) {
		iGp00001bb4 = 0x48;
	}
	FUN_8016135c();
	if (iVar2 != iGp00001bb4) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80161e58(undefined4 uParm1,uchar uParm2,uchar uParm3,uchar uParm4);
 // line -1, offset 0x80161e58
// function 'FUN_80161e58' @0x80161E58 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80161e58(undefined4 uParm1,uchar uParm2,uchar uParm3,uchar uParm4)

{
	DialogRed = uParm2;
	DialogGreen = uParm3;
	DialogBlue = uParm4;
	return;
}



// decompiled code
// original method signature: 
// void FUN_80161e78(int iParm1,undefined4 uParm2);
 // line -1, offset 0x80161e78
// function 'FUN_80161e78' @0x80161E78 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80161e78(int iParm1,undefined4 uParm2)

{
	*(undefined4 *)(iParm1 + 8) = uParm2;
	return;
}



// decompiled code
// original method signature: 
// void FUN_80161e80(undefined4 uParm1,uint uParm2);
 // line -1, offset 0x80161e80
// function 'FUN_80161e80' @0x80161E80 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80161e80(undefined4 uParm1,uint uParm2)

{
	if ((uParm2 & 1) != 0) {
		__builtin_delete();
	}
	return;
}



// decompiled code
// original method signature: 
// undefined4 * FUN_80161ea8(undefined4 *puParm1);
 // line -1, offset 0x80161ea8
// function 'FUN_80161ea8' @0x80161EA8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 * FUN_80161ea8(undefined4 *puParm1)

{
	undefined4 uVar1;
	
	puParm1[2] = 0x94;
	*puParm1 = 0x1a;
	puParm1[1] = 0x1a;
	DialogRed = -0x80;
	DialogGreen = -0x80;
	DialogBlue = -0x80;
	DialogTRed = ' ';
	DialogTGreen = ' ';
	DialogTBlue = ' ';
	uVar1 = FUN_80161f50();
	puParm1[3] = uVar1;
	return puParm1;
}



// decompiled code
// original method signature: 
// void FUN_80161f28(CBlocks *pCParm1);
 // line -1, offset 0x80161f28
// function 'FUN_80161f28' @0x80161F28 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80161f28(CBlocks *pCParm1)

{
	pCParm1->MonsterList = (MonstList *)0x0;
	DumpGraphics__7CBlocksPP7TextDatPi(pCParm1,&pCParm1->MonstTexDat,&pCParm1->MonstTexId);
	return;
}



// decompiled code
// original method signature: 
// undefined4 FUN_80161f50(void);
 // line -1, offset 0x80161f50
// function 'FUN_80161f50' @0x80161F50 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_80161f50(void)

{
	return 0x1e8;
}



// decompiled code
// original method signature: 
// void FUN_80161f58(void);
 // line -1, offset 0x80161f58
// function 'FUN_80161f58' @0x80161F58 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80161f58(void)

{
	uGp00001bfb = 1;
	return;
}



