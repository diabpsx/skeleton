#include "THISDUST.H"
#include "OPTIONS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ PrintSelectBack__FUs(unsigned short Str /*$a0*/)
 // line 817, offset 0x800a68d0
	/* begin block 1 */
		// Start line: 818
		// Start offset: 0x800A68D0
	/* end block 1 */
	// End offset: 0x800A6950
	// End Line: 825

	/* begin block 2 */
		// Start line: 1634
	/* end block 2 */
	// End Line: 1635

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintSelectBack__FUs(ushort Str)

{
	char *Str_00;
	int Y;
	
	if (Str == 0x49e) {
		Str_00 = GetStr__Fi(0x49e);
		Y = 0xde;
	}
	else {
		Str_00 = GetStr__Fi((uint)Str);
		Y = 0xe0;
	}
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,0,Y,Str_00,JustCentre,(RECT *)0x0,(uint)WHITER,(uint)WHITEG,(uint)WHITEB);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawDialogBox__FiiP4RECTiiii(int e /*$s0*/, int f /*$s1*/, struct RECT *DRect /*$s2*/, int X /*$s3*/, int Y /*stack 16*/, int W /*stack 20*/, int H /*stack 24*/)
 // line 862, offset 0x800a6960
	/* begin block 1 */
		// Start line: 863
		// Start offset: 0x800A6960
		// Variables:
	// 		struct Dialog DBack; // stack offset -48
	/* end block 1 */
	// End offset: 0x800A6A18
	// End Line: 872

	/* begin block 2 */
		// Start line: 1724
	/* end block 2 */
	// End Line: 1725

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawDialogBox__FiiP4RECTiiii(int e,int f,RECT *DRect,int X,int Y,int W,int H)

{
	Dialog DStack48;
	
	__6Dialog(&DStack48);
	SetBorder__6Dialogi(&DStack48,e);
	SetBack__6Dialogi(&DStack48,f);
	SetRGB__6DialogUcUcUc(&DStack48,BORDERR,BORDERG,BORDERB);
	Back__6Dialogiiii(&DStack48,X,Y,W,H);
	if (DRect != (RECT *)0x0) {
		DRect->x = (short)X;
		DRect->y = (short)Y;
		DRect->w = (short)W;
		DRect->h = (short)H;
	}
	___6Dialog(&DStack48,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSpinner__FiiUcUcUciiibiT8T8Uc(int x /*$fp*/, int y /*stack -136*/, unsigned char SpinR /*$s2*/, unsigned char SpinG /*$s3*/, int SpinB /*stack 16*/, int spinradius /*stack 20*/, int spinbright /*stack 24*/, int angle /*stack 28*/, void * Sparkle /*stack 32*/, int OtPos /*stack 36*/, void * cross /*stack 40*/, void * iso /*stack 44*/, int SinStep /*stack 48*/)
 // line 898, offset 0x800a6a44
	/* begin block 1 */
		// Start line: 899
		// Start offset: 0x800A6A44
		// Variables:
	// 		struct POLY_FT4 *FT4; // $v0
	// 		struct POLY_GT4 *GT4; // $a0
	// 		struct TextDat *ThisDat; // stack offset -120
	// 		unsigned char rand; // $s0
	// 		int f; // $a1
	// 		unsigned short bright; // $a0
	// 		unsigned short r; // stack offset -112
	// 		unsigned short g; // stack offset -104
	// 		unsigned short b; // stack offset -96
	// 		unsigned short r2; // stack offset -88
	// 		unsigned short g2; // stack offset -80
	// 		unsigned short b2; // stack offset -72
	// 		int x1; // $s6
	// 		int y1; // $s4
	// 		int x2; // $s0
	// 		int y2; // $s1
	// 		int x3; // $s3
	// 		int y3; // $s2
	// 		int radius; // $s7

		/* begin block 1.1 */
			// Start line: 951
			// Start offset: 0x800A6BE0
			// Variables:
		// 		int i; // stack offset -64
		/* end block 1.1 */
		// End offset: 0x800A7080
		// End Line: 1052
	/* end block 1 */
	// End offset: 0x800A708C
	// End Line: 1054

	/* begin block 2 */
		// Start line: 1796
	/* end block 2 */
	// End Line: 1797

/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawSpinner__FiiUcUcUciiibiT8T8Uc
							 (int x,int y,uchar SpinR,uchar SpinG,int SpinB,int spinradius,int spinbright,
							 int angle,void *Sparkle,int OtPos,void *cross,void *iso,int SinStep)

{
	short sVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	TextDat *this;
	ulong uVar5;
	POLY_FT4 *pPVar6;
	POLY_GT4 *pPVar7;
	uint uVar8;
	int iVar9;
	uint uVar10;
	int iVar11;
	short sVar12;
	short sVar13;
	short local_88;
	ushort local_70;
	ushort local_68;
	ushort local_60;
	uchar local_58;
	uchar local_50;
	uchar local_48;
	int local_40;
	
	if (OtPos == 0xffff) {
		OtPos = GetOverlayOtBase__7CBlocks();
		OtPos = OtPos + 4;
	}
	this = GM_UseTexData__Fi(0);
	if ((PauseMode == '\0') || (uVar10 = 0x10, Sparkle != (void *)0x0)) {
		uVar5 = GU_GetRnd();
		uVar10 = uVar5 & 0x1f;
		uVar5 = VID_GetTick__Fv();
		uVar8 = uVar5 >> 2 & 7;
	}
	else {
		uVar8 = 4;
	}
	uVar10 = uVar10 + spinbright;
	spinradius = spinradius >> 1;
	if ((int)(uVar10 * 0x10000) < 0) {
		uVar10 = 0;
	}
	uVar10 = uVar10 & 0xffff;
	local_70 = (ushort)((uint)SpinR * uVar10 >> 8);
	local_68 = (ushort)((uint)SpinG * uVar10 >> 8);
	local_60 = (ushort)((SpinB & 0xffU) * uVar10 >> 8);
	if (0xff < (uint)SpinR * uVar10 >> 8) {
		local_70 = 0xff;
	}
	if (0xff < local_68) {
		local_68 = 0xff;
	}
	if (0xff < local_60) {
		local_60 = 0xff;
	}
	if (Sparkle != (void *)0x0) {
		pPVar6 = PrintFt4__7TextDatiiiiii(this,uVar8 + 0xd0,x,y,0,OtPos,0);
		pPVar6->r0 = SpinR;
		pPVar6->g0 = SpinG;
		pPVar6->b0 = (uchar)SpinB;
		pPVar6->code = pPVar6->code & 0xfe | 2;
	}
	y = y + -3;
	x = x + 3;
	uVar10 = SinStep & 0xff;
	local_40 = 0;
	iVar9 = uVar10 * 2;
	do {
		pPVar7 = PrintGt4__7TextDatiiiiii(this,0xd8,x,y,0,OtPos + 1,0);
		pPVar7->tpage = pPVar7->tpage | 0x20;
		pPVar7->v2 = pPVar7->v2 + -1;
		pPVar7->u1 = pPVar7->u1 + -1;
		pPVar7->v3 = pPVar7->v3 + -1;
		pPVar7->u3 = pPVar7->u3 + -1;
		local_88 = (short)y;
		if (iso == (void *)0x0) {
			sVar12 = (short)((uint)((int)Circle[angle & 0x3fU] * spinradius) >> 8);
			sVar1 = Circle[angle + uVar10 & 0x3f];
			sVar13 = (short)((uint)((int)Circle[angle + iVar9 & 0x3f] * spinradius) >> 8);
			iVar11 = (int)Circle[angle + uVar10 + 0x10 & 0x3f] * spinradius >> 8;
			sVar3 = (short)((uint)((int)Circle[angle + 0x10U & 0x3f] * spinradius) >> 8);
			sVar4 = (short)((uint)((int)Circle[angle + iVar9 + 0x10U & 0x3f] * spinradius) >> 8);
		}
		else {
			sVar12 = (short)((uint)((int)Circle[angle & 0x3fU] * spinradius) >> 8);
			sVar1 = Circle[angle + uVar10 & 0x3f];
			sVar13 = (short)((uint)((int)Circle[angle + iVar9 & 0x3f] * spinradius) >> 8);
			iVar11 = (int)Circle[angle + uVar10 + 0x10 & 0x3f] * spinradius >> 9;
			sVar3 = (short)((int)Circle[angle + 0x10U & 0x3f] * spinradius >> 9);
			sVar4 = (short)((int)Circle[angle + iVar9 + 0x10U & 0x3f] * spinradius >> 9);
		}
		sVar2 = (short)x;
		pPVar7->x0 = sVar2 + sVar12;
		pPVar7->y0 = local_88 + sVar3;
		pPVar7->x1 = sVar2;
		pPVar7->x2 = sVar2 + (short)((uint)((int)sVar1 * spinradius) >> 8);
		pPVar7->y1 = local_88;
		pPVar7->x3 = sVar2 + sVar13;
		pPVar7->y3 = local_88 + sVar4;
		pPVar7->r0 = '\0';
		pPVar7->g0 = '\0';
		pPVar7->b0 = '\0';
		pPVar7->y2 = local_88 + (short)iVar11;
		pPVar7->r1 = (uchar)local_70;
		pPVar7->g1 = (uchar)local_68;
		pPVar7->r2 = '\0';
		pPVar7->g2 = '\0';
		pPVar7->b2 = '\0';
		pPVar7->r3 = '\0';
		pPVar7->g3 = '\0';
		pPVar7->b3 = '\0';
		pPVar7->code = pPVar7->code & 0xfe | 2;
		pPVar7->b1 = (uchar)local_60;
		if (cross != (void *)0x0) {
			pPVar7 = PrintGt4__7TextDatiiiiii(this,0xd8,x,y,0,OtPos + 1,0);
			pPVar7->x0 = sVar2 + sVar12;
			pPVar7->y0 = local_88 + sVar3;
			pPVar7->x1 = sVar2;
			pPVar7->x2 = sVar2 + (short)(((int)sVar1 * spinradius >> 8) >> 3);
			pPVar7->y1 = local_88;
			pPVar7->x3 = sVar2 + sVar13;
			pPVar7->y3 = local_88 + sVar4;
			pPVar7->y2 = local_88 + (short)(iVar11 >> 3);
			local_58 = (uchar)(local_70 >> 2);
			pPVar7->r0 = local_58;
			local_50 = (uchar)(local_68 >> 2);
			pPVar7->g0 = local_50;
			local_48 = (uchar)(local_60 >> 2);
			pPVar7->b0 = local_48;
			pPVar7->r1 = (uchar)local_70;
			pPVar7->g1 = (uchar)local_68;
			pPVar7->b1 = (uchar)local_60;
			pPVar7->r2 = local_58;
			pPVar7->g2 = local_50;
			pPVar7->b2 = local_48;
			pPVar7->r3 = local_58;
			pPVar7->g3 = local_50;
			pPVar7->tpage = pPVar7->tpage | 0x20;
			pPVar7->u1 = pPVar7->u1 + -1;
			pPVar7->v2 = pPVar7->v2 + -1;
			pPVar7->u3 = pPVar7->u3 + -1;
			pPVar7->b3 = local_48;
			pPVar7->v3 = pPVar7->v3 + -1;
			pPVar7->code = pPVar7->code & 0xfe | 2;
		}
		angle = angle + iVar9;
		local_40 = local_40 + iVar9;
	} while (local_40 < 0x40);
	GM_FinishedUsing__FP7TextDat(this);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetLoadedLang__F9LANG_TYPE(enum LANG_TYPE LoadLang /*$s1*/)
 // line 1059, offset 0x800a70c0
	/* begin block 1 */
		// Start line: 1060
		// Start offset: 0x800A70C0
	/* end block 1 */
	// End offset: 0x800A7158
	// End Line: 1086

	/* begin block 2 */
		// Start line: 2335
	/* end block 2 */
	// End Line: 2336

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetLoadedLang__F9LANG_TYPE(LANG_TYPE LoadLang)

{
	LANG_TYPE LVar1;
	undefined *puVar2;
	
	LVar1 = LANG_GetLang__Fv();
	if (LoadLang != LVar1) {
		CDWAIT = &DAT_00000001;
		music_stop__Fv();
		LANG_SetLang__F9LANG_TYPE(LoadLang);
		if (FileSYS != 1) {
			BL_LoadStreamDir__Fv();
		}
		puVar2 = (undefined *)IsGameLoading__Fv();
		if (puVar2 != &DAT_00000001) {
			music_start__Fi(sgnMusicTrack);
			STR_pauseall__Fv();
			snd_stop_snd__FP4TSnd((TSnd *)0x0);
		}
		CDWAIT = (void *)0x0;
	}
	OrigLang = LoadLang;
	NewLang = LoadLang;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChangeLang__Fv()
 // line 1091, offset 0x800a7170
	/* begin block 1 */
		// Start line: 1092
		// Start offset: 0x800A7170
	/* end block 1 */
	// End offset: 0x800A7220
	// End Line: 1108

	/* begin block 2 */
		// Start line: 2400
	/* end block 2 */
	// End Line: 2401

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ChangeLang__Fv(void)

{
	if (NewLang != OrigLang) {
		music_fade__Fv();
		if (FileSYS != 1) {
			while (0 < sghMusic->volume) {
				TSK_Sleep(1);
			}
		}
		CDWAIT = &DAT_00000001;
		LANG_SetLang__F9LANG_TYPE(NewLang);
		if (FileSYS != 1) {
			BL_LoadStreamDir__Fv();
		}
		CDWAIT = (void *)0x0;
		music_start__Fi(5);
		OrigLang = NewLang;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawLeftRight__Fv()
 // line 1121, offset 0x800a7234
	/* begin block 1 */
		// Start line: 1122
		// Start offset: 0x800A7234
	/* end block 1 */
	// End offset: 0x800A7234
	// End Line: 1122

	/* begin block 2 */
		// Start line: 2473
	/* end block 2 */
	// End Line: 2474

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawLeftRight__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintMono__Fi(int ypos /*$s2*/)
 // line 1137, offset 0x800a723c
	/* begin block 1 */
		// Start line: 1138
		// Start offset: 0x800A723C
		// Variables:
	// 		char *String; // $s1
	// 		int len; // $a3
	/* end block 1 */
	// End offset: 0x800A72D8
	// End Line: 1150

	/* begin block 2 */
		// Start line: 2497
	/* end block 2 */
	// End Line: 2498

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintMono__Fi(int ypos)

{
	char *Str;
	int StrId;
	
	StrId = 0x29c;
	if (MONO != (void *)0x0) {
		StrId = 0x29a;
	}
	Str = GetStr__Fi(StrId);
	StrId = GetStrWidth__5CFontPc(&MediumFont,Str);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,MonoX - (StrId >> 1),ypos,Str,JustLeft,&ORect,(uint)WHITER,(uint)WHITEG,
						 (uint)WHITEB);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawMenu__Fi(int MenuNo /*stack -168*/)
 // line 1155, offset 0x800a72f4
	/* begin block 1 */
		// Start line: 1156
		// Start offset: 0x800A72F4
		// Variables:
	// 		struct OMENULIST *mptr; // stack offset -152
	// 		struct OMENUITEM *iptr; // stack offset -144
	// 		int sh; // stack offset -136
	// 		struct POLY_G4 *G4; // stack offset -176
	// 		int yoff; // stack offset -128
	// 		int len; // $s3
	// 		int depth; // stack offset -120
	// 		unsigned char r; // stack offset -112
	// 		unsigned char g; // stack offset -104
	// 		unsigned char b; // stack offset -96
	// 		int mx; // stack offset -88
	// 		int my; // stack offset -80
	// 		int BARFRAC; // stack offset -72
	// 		int mptrx; // $a3
	// 		int mptry; // $a2

		/* begin block 1.1 */
			// Start line: 1254
			// Start offset: 0x800A7610
			// Variables:
		// 		int i; // stack offset -64

			/* begin block 1.1.1 */
				// Start line: 1255
				// Start offset: 0x800A763C

				/* begin block 1.1.1.1 */
					// Start line: 1263
					// Start offset: 0x800A7698

					/* begin block 1.1.1.1.1 */
						// Start line: 1264
						// Start offset: 0x800A76A8
						// Variables:
					// 		int sxp; // $s4
					// 		int syp; // $s0
					// 		unsigned char barg; // $s2
					// 		unsigned char barr; // $s7
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A7A70
					// End Line: 1313
				/* end block 1.1.1.1 */
				// End offset: 0x800A7A70
				// End Line: 1313

				/* begin block 1.1.1.2 */
					// Start line: 1327
					// Start offset: 0x800A7AA4

					/* begin block 1.1.1.2.1 */
						// Start line: 1328
						// Start offset: 0x800A7AC8
						// Variables:
					// 		int cx; // $s2
					// 		int cy; // $s4
					/* end block 1.1.1.2.1 */
					// End offset: 0x800A7DD0
					// End Line: 1386
				/* end block 1.1.1.2 */
				// End offset: 0x800A7DD0
				// End Line: 1386
			/* end block 1.1.1 */
			// End offset: 0x800A8274
			// End Line: 1474
		/* end block 1.1 */
		// End offset: 0x800A8294
		// End Line: 1475
	/* end block 1 */
	// End offset: 0x800A82E0
	// End Line: 1494

	/* begin block 2 */
		// Start line: 2533
	/* end block 2 */
	// End Line: 2534

/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawMenu__Fi(int MenuNo)

{
	short sVar1;
	short sVar2;
	ulong *puVar3;
	FRAME_HDR *pFVar4;
	char *Str;
	uint uVar5;
	ushort Str_00;
	CFont *this;
	int Frm;
	uint *puVar6;
	int local_d8;
	short sVar7;
	int local_d4;
	uchar SpinG;
	int x;
	short sVar8;
	TXT_JUST TVar9;
	int iVar10;
	uchar uVar11;
	uchar uVar12;
	uchar uVar13;
	uint uVar14;
	TXT_JUST *pTVar15;
	int local_cc;
	undefined *local_c8;
	POLY_G4 *local_b0 [2];
	int local_a8;
	OMENULIST *local_98;
	OMENUITEM *local_90;
	uint local_88;
	int local_80;
	int local_78;
	byte local_70;
	byte local_68;
	byte local_60;
	int local_58;
	int local_50;
	int local_48;
	int local_40;
	int local_38;
	uint local_30;
	
	if (cmenu == 2) {
		OMENUITEM_800ccb50.y = FeFlag == '\0';
		if ((bool)OMENUITEM_800ccb50.y) {
			OMENUITEM_800ccb68.y = '\x02';
			OMENUITEM_800ccb80.y = '\x03';
			OMENUITEM_ARRAY_800ccb98[0].y = '\x04';
			OMENUITEM_800ccbc8.y = '\x06';
		}
		else {
			OMENUITEM_800ccb68.y = '\x01';
			OMENUITEM_800ccb80.y = '\x02';
			OMENUITEM_ARRAY_800ccb98[0].y = '\x03';
			OMENUITEM_800ccbc8.y = '\x05';
		}
	}
	local_a8 = MenuNo;
	if ((MenuNo == 0) && (local_a8 = MenuNo, FeFlag == '\0')) {
		if (deathflag == '\0') {
			local_a8 = 1;
			cmenu = MenuNo + 1;
		}
		else {
			cmenu = 8;
			local_a8 = 8;
		}
	}
	if ((local_a8 == 1) && (FeFlag != '\0')) {
		cmenu = 0;
		local_a8 = 0;
	}
	local_98 = MenuList + local_a8;
	local_90 = MenuList[local_a8].Item;
	pFVar4 = GetFr__7TextDati(Slider,0x96);
	local_88 = ((uint)pFVar4->Y >> 9 & 0x1ff) - 4;
	local_78 = GetOverlayOtBase__7CBlocks();
	local_78 = local_78 + 4;
	uVar5 = 0x100 - (uint)local_98->w;
	local_58 = ((int)(uVar5 + (uVar5 >> 0x1f)) >> 1) + 0x20;
	uVar5 = 0xb0 - (uint)local_98->h;
	local_d8 = ((int)(uVar5 + (uVar5 >> 0x1f)) >> 1) + 0x20;
	local_48 = 0x8000 / sw;
	local_50 = local_d8;
	if (FeFlag != '\0') {
		local_50 = 0x20;
	}
	Spacing = 0xd;
	if (local_a8 == 4) {
		DrawDialogBox__FiiP4RECTiiii(0x12,0x94,&ORect,10,0x14,0x129,0xcd);
		ORect.x = 10;
		ORect.y = 0x14;
		ORect.w = 0x129;
		ORect.h = 0xcd;
		local_58 = 10;
		local_50 = 0x14;
	}
	else {
		if (FeFlag == '\0') {
			DrawDialogBox__FiiP4RECTiiii
								(0x12,0x94,&ORect,local_58,local_d8,(uint)local_98->w,(uint)local_98->h);
			ORect.x = (short)local_58;
			ORect.y = (short)local_50;
			ORect.w = local_98->w;
			ORect.h = ZEXT12(local_98->h);
		}
		else {
			ORect.x = (short)local_58;
			ORect.y = (short)local_50;
			ORect.w = local_98->w;
			ORect.h = (ushort)local_98->h + 100;
		}
	}
	local_80 = 0xc;
	local_38 = local_78 << 2;
	local_40 = 0;
	local_30 = 0xffffff;
	pTVar15 = &local_90->Just;
	do {
		if ((int)(uint)local_98->NoEntries <= local_40) {
			if (local_a8 == 2) {
				Str_00 = 0x331;
			}
			else {
				if (local_a8 == 4) {
					Str_00 = 0x49e;
				}
				else {
					Str_00 = 0x4e6;
					if (local_a8 == 8) {
						Str_00 = 0x4e5;
					}
				}
			}
			PrintSelectBack__FUs(Str_00);
			return;
		}
		local_70 = WHITER;
		local_68 = WHITEG;
		local_60 = WHITEB;
		if (local_40 != 0) {
			local_80 = Spacing + 4;
		}
		if (pTVar15[2] != JustLeft) {
			local_d8 = (local_58 + (uint)local_98->w) - sw;
			local_d4 = local_50 + (uint)local_90->y * Spacing + local_80;
			if ((FeFlag != '\0') && (cmenu == 2)) {
				local_d4 = local_d4 + 0x20;
			}
			TVar9 = pTVar15[1];
			Frm = 0x98;
			if (local_40 == cs) {
				Frm = 0x97;
			}
			PrintFt4__7TextDatiiiiii(Slider,Frm,local_d8 + TVar9 + -0x11,local_d4 + -8,0,local_78,0);
			sVar7 = (short)local_d4 + -6;
			Frm = local_48 * TVar9;
			uVar5 = Frm >> 8;
			uVar14 = 0x80 - uVar5;
			DrawDialogBox__FiiP4RECTiiii
								(0x12,0x94,(RECT *)0x0,local_d8 + -0x10,local_d4 + -5,sw,local_88 - 2);
			PRIM_GetPrim__FPP7POLY_G4(local_b0);
			*(undefined *)((int)&local_b0[0]->tag + 3) = 8;
			local_b0[0]->code = '8';
			local_b0[0]->code = local_b0[0]->code & 0xfd;
			local_b0[0]->code = local_b0[0]->code & 0xfe;
			local_b0[0]->r0 = '@';
			local_b0[0]->g0 = '\0';
			local_b0[0]->b0 = '\0';
			uVar12 = (uchar)((uVar14 & 0xff) >> 1);
			local_b0[0]->r1 = uVar12;
			uVar11 = (uchar)((uVar5 & 0xff) >> 1);
			local_b0[0]->g1 = uVar11;
			local_b0[0]->b1 = '\0';
			local_b0[0]->r2 = -0x80;
			local_b0[0]->g2 = '\0';
			local_b0[0]->b2 = '\0';
			uVar13 = (uchar)uVar14;
			local_b0[0]->r3 = uVar13;
			SpinG = (uchar)((uint)Frm >> 8);
			local_b0[0]->g3 = SpinG;
			sVar1 = (short)local_d8 + -0x11;
			local_b0[0]->b3 = '\0';
			puVar3 = ThisOt;
			sVar8 = sVar1 + (short)TVar9;
			local_b0[0]->x0 = sVar1;
			local_b0[0]->y0 = sVar7;
			local_b0[0]->x1 = sVar8;
			local_b0[0]->y1 = sVar7;
			local_b0[0]->x2 = sVar1;
			local_b0[0]->x3 = sVar8;
			sVar2 = (short)((int)(local_88 + (local_88 >> 0x1f)) >> 1);
			sVar7 = sVar7 + sVar2;
			local_b0[0]->y2 = sVar7;
			local_b0[0]->y3 = sVar7;
			puVar6 = (uint *)(local_38 + (int)puVar3);
			local_b0[0]->tag = local_b0[0]->tag & 0xff000000 | *puVar6 & local_30;
			*puVar6 = *puVar6 & 0xff000000 | (uint)local_b0[0] & local_30;
			PRIM_GetPrim__FPP7POLY_G4(local_b0);
			*(undefined *)((int)&local_b0[0]->tag + 3) = 8;
			local_b0[0]->code = '8';
			local_b0[0]->code = local_b0[0]->code & 0xfd;
			local_b0[0]->code = local_b0[0]->code & 0xfe;
			local_b0[0]->r0 = -0x80;
			local_b0[0]->g0 = '\0';
			local_b0[0]->b0 = '\0';
			local_b0[0]->r1 = uVar13;
			local_b0[0]->g1 = SpinG;
			local_b0[0]->b1 = '\0';
			local_b0[0]->r2 = '@';
			local_b0[0]->g2 = '\0';
			local_b0[0]->b2 = '\0';
			local_b0[0]->r3 = uVar12;
			local_b0[0]->g3 = uVar11;
			local_b0[0]->b3 = '\0';
			puVar3 = ThisOt;
			local_b0[0]->y0 = sVar7;
			local_b0[0]->y1 = sVar7;
			sVar7 = sVar7 + sVar2;
			local_b0[0]->x0 = sVar1;
			local_b0[0]->x1 = sVar8;
			local_b0[0]->x2 = sVar1;
			local_b0[0]->y2 = sVar7;
			local_b0[0]->x3 = sVar8;
			local_b0[0]->y3 = sVar7;
			puVar6 = (uint *)(local_38 + (int)puVar3);
			local_b0[0]->tag = local_b0[0]->tag & 0xff000000 | *puVar6 & local_30;
			*puVar6 = *puVar6 & 0xff000000 | (uint)local_b0[0] & local_30;
		}
		if (local_40 == 0) {
			local_70 = BLUER;
			local_68 = BLUEG;
			local_60 = BLUEB;
		}
		if (local_40 == cs) {
			if (pTVar15[-1] != JustLeft) {
				local_68 = GOLDG;
				local_70 = GOLDR;
				local_60 = GOLDB;
				if ((local_a8 - 0xeU < 2) && (MemCardActive != (void *)0x0)) {
					local_d8 = 0x280;
					if (((&card_status)[current_card] == 0) && (CharacterBlockLoaded != (void *)0x0)) {
						local_d8 = FUN_8015b37c(local_40 + -1);
					}
				}
				else {
					if ((FeFlag == '\0') || (local_40 != 0)) {
						Str = GetStr__Fi(pTVar15[-1]);
						this = &MediumFont;
					}
					else {
						Str = GetStr__Fi(pTVar15[-1]);
						this = &LargeFont;
					}
					local_d8 = GetStrWidth__5CFontPc(this,Str);
				}
				local_d4 = local_50 + (uint)local_90->y * Spacing + local_80;
				Frm = local_d4 + -2;
				if ((cmenu == 2) && (cs != 7)) {
					iVar10 = local_d8 + 10;
					x = local_58 + 2;
					if (FeFlag != '\0') {
						x = local_58 + -8;
						goto code_r0x800a7c58;
					}
				}
				else {
					x = ((int)((0x100U - local_d8) + (0x100U - local_d8 >> 0x1f)) >> 1) + 0x14;
code_r0x800a7c58:
					iVar10 = local_d8 + 0x10;
					if ((FeFlag != '\0') && (cmenu == 2)) {
						Frm = local_d4 + 0x1e;
					}
				}
				if (local_a8 != 4) {
					if (AlertTxt == 0) {
						DrawSpinner__FiiUcUcUciiibiT8T8Uc
											(x,Frm,-0x60,'@',0xf0,0x20,0x40,0,&DAT_00000001,local_78,&DAT_00000001,
											 (void *)0x0,8);
						SpinG = '@';
						local_c8 = &DAT_00000001;
						local_d8 = 0xf0;
						local_d4 = 0x20;
						local_cc = 0;
					}
					else {
						if (FeFlag == '\0') goto LAB_800a7dd0;
						DrawSpinner__FiiUcUcUciiibiT8T8Uc
											(x,Frm,-0x60,-0x60,0x40,0x10,0x40,8,(void *)0x0,local_78,&DAT_00000001,
											 (void *)0x0,8);
						SpinG = -0x60;
						local_d8 = 0x40;
						local_cc = 8;
						local_d4 = 0x10;
						local_c8 = (undefined *)0x0;
					}
					DrawSpinner__FiiUcUcUciiibiT8T8Uc
										(x + iVar10,Frm,-0x60,SpinG,local_d8,local_d4,0x40,local_cc,local_c8,local_78,
										 &DAT_00000001,(void *)0x0,8);
				}
				goto LAB_800a7dd0;
			}
		}
		else {
LAB_800a7dd0:
			if (pTVar15[-1] != JustLeft) {
				if ((Adjust != '\0') && (local_40 == 3)) {
					local_70 = REDR;
					local_68 = REDG;
					local_60 = REDB;
				}
				if (((local_a8 == 3) && (pTVar15[1] != JustLeft)) && (pTVar15[3] != JustCentre)) {
					local_70 = REDR;
					local_68 = REDG;
					local_60 = REDB;
				}
				if (((local_a8 == 10) && (pTVar15[1] != JustLeft)) && (pTVar15[3] == ~JustCentre)) {
					local_70 = REDR;
					local_68 = REDG;
					local_60 = REDB;
				}
				if (DiabloDieFlag != (void *)0x0) {
					if ((local_a8 == 7) && (pTVar15[3] == 0xd)) {
						local_60 = 0x28;
						local_68 = 0x28;
						local_70 = 0x28;
					}
					if (((local_a8 == 1) && (local_40 != 0)) && (local_40 < 5)) {
						local_60 = 0x28;
						local_68 = 0x28;
						local_70 = 0x28;
					}
				}
				if (FeFlag == '\0') {
					if ((local_40 == 0) || (cmenu != 2)) {
						Str = GetStr__Fi(pTVar15[-1]);
						local_d8 = 0;
LAB_800a821c:
						Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
											(&MediumFont,local_d8,(uint)local_90->y * Spacing + local_80,Str,*pTVar15,
											 &ORect,(uint)local_70,(uint)local_68,(uint)local_60);
					}
					else {
						Str = GetStr__Fi(pTVar15[-1]);
						Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
											(&MediumFont,8,(uint)local_90->y * Spacing + local_80,Str,*pTVar15,&ORect,
											 (uint)local_70,(uint)local_68,(uint)local_60);
						if (local_40 == 5) {
							PrintMono__Fi((uint)local_90->y * Spacing + local_80);
						}
					}
				}
				else {
					if (local_40 == 0) {
						ORect.y = ORect.y + -0x20;
						if (pTVar15[-1] == 0x3b6) {
							ORect.x = ORect.x + -0x40;
							ORect.w = ORect.w + 0x80;
						}
						Str = GetStr__Fi(pTVar15[-1]);
						Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
											(&LargeFont,0,(uint)local_90->y * Spacing + local_80 + 0x22,Str,*pTVar15,
											 &ORect,(uint)BLUER,(uint)BLUEG,(uint)BLUEB);
						if (pTVar15[-1] == 0x3b6) {
							ORect.x = ORect.x + 0x40;
							ORect.w = ORect.w + -0x80;
						}
						ORect.y = ORect.y + 0x20;
					}
					else {
						if (cmenu != 2) {
							Str = GetStr__Fi(pTVar15[-1]);
							local_d8 = 8;
							goto LAB_800a821c;
						}
						Str = GetStr__Fi(pTVar15[-1]);
						Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
											(&MediumFont,0,(uint)local_90->y * Spacing + local_80 + 0x20,Str,*pTVar15,
											 &ORect,(uint)local_70,(uint)local_68,(uint)local_60);
						if (local_40 == 5) {
							PrintMono__Fi((uint)local_90->y * Spacing + local_80 + 0x20);
						}
					}
				}
			}
		}
		pTVar15 = pTVar15 + 6;
		local_90 = local_90 + 1;
		local_40 = local_40 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ who_pressed__Fi(int pval /*$s1*/)
 // line 1498, offset 0x800a8314
	/* begin block 1 */
		// Start line: 1499
		// Start offset: 0x800A8314
		// Variables:
	// 		struct CPad *Pad; // $s0
	// 		struct CPad *Pad1; // $s0
	/* end block 1 */
	// End offset: 0x800A8384
	// End Line: 1508

	/* begin block 2 */
		// Start line: 3317
	/* end block 2 */
	// End Line: 3318

/* WARNING: Unknown calling convention yet parameter storage is locked */

int who_pressed__Fi(int pval)

{
	ushort uVar1;
	CPad *this;
	CPad *this_00;
	int iVar2;
	
	this = PAD_GetPad__FiUc(0,'\0');
	this_00 = PAD_GetPad__FiUc(1,'\0');
	uVar1 = GetDown__C4CPad(this);
	if (((uint)uVar1 & pval) == 0) {
		uVar1 = GetDown__C4CPad(this_00);
		iVar2 = 1;
		if (((uint)uVar1 & pval) == 0) {
			iVar2 = -1;
		}
	}
	else {
		iVar2 = 0;
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CharacterLoadPad__Fv()
 // line 1522, offset 0x800a839c
	/* begin block 1 */
		// Start line: 1523
		// Start offset: 0x800A839C
		// Variables:
	// 		struct CPad *P; // $s1
	// 		struct OMENUITEM *iptr; // $s3
	/* end block 1 */
	// End offset: 0x800A88D0
	// End Line: 1709

	/* begin block 2 */
		// Start line: 3374
	/* end block 2 */
	// End Line: 3375

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CharacterLoadPad__Fv(void)

{
	bool bVar1;
	int iVar2;
	ushort uVar3;
	CPad *this;
	int iVar4;
	int iVar5;
	OMENUITEM *pOVar6;
	
	pOVar6 = MenuList[cmenu].Item;
	if (0 < cardondelay) {
		if (countdownloadcharblock != 0) {
			cardondelay = cardondelay + -1;
			ShowLoadingBox__Fi(card_side_read[current_card]);
			return;
		}
		cardondelay = cardondelay + -1;
		ShowLoadingBox__Fi(0x348);
		return;
	}
	if (countdownloadcharblock != 0) {
		ActivateCharacterMemcard__Fii((uint)(current_card == 0),(uint)(current_card == 1));
	}
	if (CharacterBlockLoaded == (void *)0x0) {
		ActivateCharacterMemcard__Fii((uint)(current_card == 0),(uint)(current_card == 1));
	}
	this = PAD_GetPad__FiUc(options_pad,'\0');
	if (AlertTxt != 0) {
		bVar1 = false;
		FUN_8015a3bc();
		uVar3 = GetDown__C4CPad(this);
		if (((uVar3 & 0x40) != 0) || (uVar3 = GetDown__C4CPad(this), (uVar3 & 0x10) != 0)) {
			bVar1 = true;
		}
		if (!bVar1) {
			return;
		}
		cs = (uint)MenuList[cmenu].NoEntries - 1;
		iVar5 = pOVar6[cs].Link;
		if (iVar5 != -2) {
			cs = 3;
			CharacterBlockLoaded = (void *)0x0;
			cmenu = iVar5 + -1;
		}
		PlaySFX__Fi(IS_TITLSLCT);
		saveflag = 0;
		loadflag = 0;
		AlertTxt = 0;
		StatusTxt = 0;
		return;
	}
	if ((&card_status)[current_card] == 2) {
		AlertTxt = card_side_empty[current_card];
		return;
	}
	ShowCardActionText__Fv();
	if ((&card_status)[current_card] == 0) {
		FUN_8015a90c(cs + -1,Spacing,CONCAT22(ORect.y,ORect.x),CONCAT22(ORect.h,ORect.w),0x58);
	}
	bVar1 = false;
	uVar3 = GetDown__C4CPad(this);
	if (((uVar3 & 0x40) != 0) || (uVar3 = GetDown__C4CPad(this), (uVar3 & 0x10) != 0)) {
		bVar1 = true;
	}
	if ((bVar1) && (saveflag == 0)) {
		if ((&card_status)[current_card] != 2) {
			PlaySFX__Fi(IS_TITLSLCT);
			iVar4 = FUN_8015a67c(1,DiabloCharacterFile);
			iVar2 = cmenu;
			iVar5 = cs;
			if (iVar4 != 0) {
				saveflag = 1;
				if ((&card_usable)[current_card] == 0) {
					saveflag = 1;
					formatflag = 0;
					cs = 2;
					lastcs = iVar5;
					cmenu = 0x10;
					ReturnMenu = iVar2;
					return;
				}
				if (*(char *)((cs + -1) * 0x4f8 + -0x7fea8498) != '\0') {
					ActivateMemcard__Fii((uint)(current_card == 0),(uint)(current_card == 1));
					ReturnMenu = cmenu;
					lastlastcs = cs;
					cs = 2;
					cmenu = 0x13;
					ReturnCards = 1;
					return;
				}
				goto LAB_800a8788;
			}
		}
		PlaySFX__Fi(IS_TITERR);
	}
	else {
LAB_800a8788:
		if (2 < saveflag) {
			ShowLoadingBox__Fi((&card_side_save)[current_card]);
		}
		iVar5 = saveflag + 1;
		if (saveflag == 0) {
			LAMBO_MovePad__FP4CPad(this);
			uVar3 = GetDown__C4CPad(this);
			if ((uVar3 & 0x100) != 0) {
				PlaySFX__Fi(IS_TITLSLCT);
				CharacterBlockLoaded = (void *)0x0;
				cs = (uint)MenuList[cmenu].NoEntries - 1;
				iVar5 = pOVar6[cs].Link;
				if (iVar5 != -2) {
					cs = current_card + 1;
					cmenu = iVar5 + -1;
				}
			}
		}
		else {
			saveflag = iVar5;
			if (iVar5 == 10) {
				saveflag = 0;
				iVar5 = FUN_8015a67c(1,DiabloCharacterFile);
				if (iVar5 != 0) {
					iVar5 = FUN_8015c3b0(current_card,cs + -1);
					if (iVar5 == 0) {
						AlertTxt = 0x506;
					}
					else {
						AlertTxt = 0x50f;
						ActivateMemcard__Fii(0,0);
					}
					ActivateMemcard__Fii(0,0);
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MemcardPad__Fv()
 // line 1719, offset 0x800a88f0
	/* begin block 1 */
		// Start line: 1720
		// Start offset: 0x800A88F0
		// Variables:
	// 		struct CPad *P; // $s1
	// 		int move; // $s0
	// 		struct OMENUITEM *iptr; // $s2

		/* begin block 1.1 */
			// Start line: 1757
			// Start offset: 0x800A8980

			/* begin block 1.1.1 */
				// Start line: 1758
				// Start offset: 0x800A89BC
				// Variables:
			// 		int lcs; // $a1
			/* end block 1.1.1 */
			// End offset: 0x800A903C
			// End Line: 1966
		/* end block 1.1 */
		// End offset: 0x800A9114
		// End Line: 1984
	/* end block 1 */
	// End offset: 0x800A91F8
	// End Line: 2000

	/* begin block 2 */
		// Start line: 3813
	/* end block 2 */
	// End Line: 3814

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MemcardPad__Fv(void)

{
	bool bVar1;
	OMENUITEM *pOVar2;
	int iVar3;
	ushort uVar4;
	CPad *this;
	int iVar5;
	uint uVar6;
	int iVar7;
	char *pcVar8;
	int iVar9;
	OMENUITEM *pOVar10;
	
	pOVar10 = MenuList[cmenu].Item;
	this = PAD_GetPad__FiUc(options_pad,'\0');
	SetPadTick__4CPadUs(this,8);
	SetPadTickMask__4CPadUs(this,3);
	iVar9 = 0;
	if (0 < cardondelay) {
		cardondelay = cardondelay + -1;
		if (cardondelay != 0) {
			ShowLoadingBox__Fi(0x348);
			return;
		}
		ActivateMemcard__Fii(1,1);
	}
	if (AlertTxt != 0) {
LAB_800a9080:
		bVar1 = saveflag < 3;
		if (saveflag != 0) goto LAB_800a9124;
		if (loadflag == 0) {
			bVar1 = false;
			FUN_8015a3bc();
			uVar4 = GetDown__C4CPad(this);
			if (((uVar4 & 0x40) != 0) || (uVar4 = GetDown__C4CPad(this), (uVar4 & 0x10) != 0)) {
				bVar1 = true;
			}
			if (bVar1) {
				loadflag = 0;
				saveflag = 0;
				formatflag = 0;
				AlertTxt = 0;
				StatusTxt = 0;
				PlaySFX__Fi(IS_TITLSLCT);
			}
		}
		goto LAB_800a9114;
	}
	bVar1 = saveflag < 3;
	if (saveflag != 0) goto LAB_800a9124;
	if (loadflag != 0) goto LAB_800a9080;
	ShowCardActionText__Fv();
	uVar4 = GetTick__C4CPad(this);
	if ((uVar4 & 1) != 0) {
		iVar9 = -1;
	}
	uVar4 = GetTick__C4CPad(this);
	iVar3 = cs;
	if ((uVar4 & 2) != 0) {
		iVar9 = 1;
	}
	iVar7 = pOVar10[cs + iVar9].Text;
	cs = cs + iVar9;
	while (iVar7 == 0) {
		if (iVar9 == 0) {
			iVar9 = 1;
		}
		if (cs < 0) {
			iVar9 = 1;
		}
		iVar5 = cs + iVar9;
		if ((int)(uint)MenuList[cmenu].NoEntries <= cs) {
			iVar9 = -1;
			iVar5 = cs + -1;
		}
		iVar7 = pOVar10[iVar5].Text;
		cs = iVar5;
	}
	if (cs < 1) {
		cs = (uint)MenuList[cmenu].NoEntries - 2;
	}
	if ((int)((uint)MenuList[cmenu].NoEntries - 1) <= cs) {
		cs = 1;
	}
	if (cs != iVar3) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	uVar4 = GetDown__C4CPad(this);
	if ((uVar4 & 0x100) != 0) {
		PlaySFX__Fi(IS_TITLSLCT);
		cs = (uint)MenuList[cmenu].NoEntries - 1;
		pOVar2 = pOVar10 + cs;
		if (pOVar2->Link != -2) {
			cardondelay = 5;
			cs = lastcs;
			cmenu = pOVar2->Link + -1;
			return;
		}
	}
	uVar4 = GetDown__C4CPad(this);
	if (((uVar4 & 0x40) == 0) || (saveflag != 0)) goto LAB_800a8fc8;
	if (loadflag != 0) goto LAB_800a9114;
	current_card = ZEXT14(cs != 1);
	PlaySFX__Fi(IS_TITLSLCT);
	iVar9 = cs;
	switch(cmenu) {
	case 9:
	case 0xb:
		if ((&card_status)[current_card] == 2) {
			AlertTxt = card_side_empty[current_card];
		}
		else {
			if ((&card_usable)[current_card] == 0) {
LAB_800a8e44:
				AlertTxt = 0x509;
				goto LAB_800a8e4c;
			}
			iVar9 = FUN_80159590(current_card,DiabloGameFile);
			pcVar8 = DiabloGameFile;
			if (iVar9 != -1) {
LAB_800a8eb4:
				loadflag = 4;
				Loadfilename = pcVar8;
				break;
			}
			AlertTxt = card_side_nogame[current_card];
		}
		goto LAB_800a8e94;
	default:
		pOVar10 = pOVar10 + cs;
		if (pOVar10->Link != -2) {
			cs = 1;
			lastcs = iVar9;
			cmenu = pOVar10->Link + -1;
			return;
		}
		break;
	case 0xc:
		save_blocks = 10;
		Savefilename = DiabloGameFile;
		iVar9 = FUN_8015a67c(10);
		if (iVar9 == 0) {
LAB_800a8e4c:
			PlaySFX__Fi(IS_TITERR);
		}
		else {
			saveflag = 1;
			iVar9 = FUN_80159590(current_card,Savefilename);
			if (iVar9 != -1) {
LAB_800a8da8:
				ActivateMemcard__Fii((uint)(current_card == 0),(uint)(current_card == 1));
				ReturnMenu = cmenu;
				lastlastcs = cs;
				cs = 2;
				cmenu = 0x13;
				ReturnCards = 2;
				return;
			}
		}
		break;
	case 0x11:
		save_blocks = 1;
		Savefilename = DiabloOptionFile;
		iVar9 = FUN_8015a67c(1);
		if (iVar9 == 0) goto LAB_800a8e4c;
		saveflag = 1;
		bVar1 = false;
		iVar9 = FUN_80142bf4(current_card);
		if (iVar9 != 0) {
			uVar6 = FUN_80159590(current_card,Savefilename);
			bVar1 = ~uVar6 != 0;
		}
		if (bVar1) goto LAB_800a8da8;
		break;
	case 0x12:
		if ((&card_status)[current_card] == 2) {
			AlertTxt = card_side_empty[current_card];
		}
		else {
			if ((&card_usable)[current_card] == 0) goto LAB_800a8e44;
			iVar9 = FUN_80159590(current_card,DiabloOptionFile);
			pcVar8 = DiabloOptionFile;
			if (iVar9 != -1) goto LAB_800a8eb4;
			AlertTxt = card_side_noopt[current_card];
		}
LAB_800a8e94:
		PlaySFX__Fi(IS_TITERR);
	}
	if (((saveflag != 0) && ((&card_status)[current_card] != 2)) &&
		 ((&card_usable)[current_card] == 0)) {
		iVar7 = read_card_block__Fii(current_card,0);
		iVar3 = cmenu;
		iVar9 = cs;
		if (((iVar7 != 0) && (block_buf != 'M')) && (s__800cc7e9[0] != 'C')) {
			formatflag = 0;
			cs = 2;
			lastlastcs = iVar9;
			cmenu = 0x10;
			ReturnMenu = iVar3;
			return;
		}
		saveflag = 0;
	}
LAB_800a8fc8:
	if (loadflag == 0) {
		bVar1 = saveflag < 3;
		if (saveflag != 0) goto LAB_800a9124;
		pcVar8 = DiabloGameFile;
		if (cmenu - 0x11U < 2) {
			pcVar8 = DiabloOptionFile;
		}
		FUN_8015a79c(pcVar8,0,0xd,CONCAT22(ORect.y,ORect.x),ORect._4_4_,0x1c);
	}
LAB_800a9114:
	bVar1 = saveflag < 3;
LAB_800a9124:
	if ((!bVar1) && (AlertTxt == 0)) {
		ShowLoadingBox__Fi((&card_side_save)[current_card]);
	}
	if (loadflag != 0) {
		if (AlertTxt == 0) {
			ShowLoadingBox__Fi((&card_side_load)[current_card]);
		}
		if (0 < loadflag) {
			loadflag = CountdownLoad__Fi(loadflag);
		}
	}
	if (0 < saveflag) {
		saveflag = CountdownSave__Fi(saveflag);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SwitchMONO__Fv()
 // line 2023, offset 0x800a9214
	/* begin block 1 */
		// Start line: 2024
		// Start offset: 0x800A9214
	/* end block 1 */
	// End offset: 0x800A9250
	// End Line: 2029

	/* begin block 2 */
		// Start line: 4483
	/* end block 2 */
	// End Line: 4484

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SwitchMONO__Fv(void)

{
	PlaySFX__Fi(IS_TITLSLCT);
	MONO = (void *)(uint)(MONO == (void *)0x0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SoundPad__Fv()
 // line 2043, offset 0x800a9260
	/* begin block 1 */
		// Start line: 2044
		// Start offset: 0x800A9260
		// Variables:
	// 		struct CPad *P; // $s1
	// 		int move; // $s0
	// 		struct OMENUITEM *iptr; // $s2
	// 		int lcs; // $a1

		/* begin block 1.1 */
			// Start line: 2119
			// Start offset: 0x800A955C

			/* begin block 1.1.1 */
				// Start line: 2120
				// Start offset: 0x800A9570

				/* begin block 1.1.1.1 */
					// Start line: 2121
					// Start offset: 0x800A9570
					// Variables:
				// 		int l; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x800A9580
				// End Line: 2124
			/* end block 1.1.1 */
			// End offset: 0x800A95C0
			// End Line: 2130
		/* end block 1.1 */
		// End offset: 0x800A95C0
		// End Line: 2130

		/* begin block 1.2 */
			// Start line: 2148
			// Start offset: 0x800A95C0

			/* begin block 1.2.1 */
				// Start line: 2166
				// Start offset: 0x800A9640

				/* begin block 1.2.1.1 */
					// Start line: 2167
					// Start offset: 0x800A9640

					/* begin block 1.2.1.1.1 */
						// Start line: 2168
						// Start offset: 0x800A9668
						// Variables:
					// 		int llen; // $s0
					/* end block 1.2.1.1.1 */
					// End offset: 0x800A9760
					// End Line: 2194
				/* end block 1.2.1.1 */
				// End offset: 0x800A9760
				// End Line: 2194
			/* end block 1.2.1 */
			// End offset: 0x800A9760
			// End Line: 2194
		/* end block 1.2 */
		// End offset: 0x800A9760
		// End Line: 2194
	/* end block 1 */
	// End offset: 0x800A9C4C
	// End Line: 2396

	/* begin block 2 */
		// Start line: 4523
	/* end block 2 */
	// End Line: 4524

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SoundPad__Fv(void)

{
	bool bVar1;
	ushort tick;
	CPad *this;
	uint uVar2;
	int iVar3;
	int iVar4;
	OMENUITEM *pOVar5;
	int iVar6;
	GM_SPEEDS GVar7;
	_135fake psfx;
	int iVar8;
	OMENUITEM *pOVar9;
	
	iVar8 = 0;
	this = PAD_GetPad__FiUc(options_pad,'\0');
	if (MemCardActive != (void *)0x0) {
		MemcardOFF__Fv();
		cardondelay = 5;
		INT_8011b204 = 0;
		card_active = 0;
	}
	if (CDWAIT != (void *)0x0) {
		return;
	}
	tick = GetDown__C4CPad(this);
	uVar2 = (uint)KeyPos + 1;
	if ((KeyTab[(uint)KeyPos] & tick) == 0) {
		tick = GetDown__C4CPad(this);
		if (tick != 0) {
			KeyPos = '\0';
		}
	}
	else {
		KeyPos = (uchar)uVar2;
		if (KeyTab[uVar2 & 0xff] == 0) {
			PlaySFX__Fi(PS_ROGUE75);
		}
	}
	if (FeFlag == '\0') {
		if (cmenu == 2) {
			tick = 4;
		}
		else {
			tick = 8;
		}
	}
	else {
		tick = 0xc;
	}
	SetPadTick__4CPadUs(this,tick);
	SetPadTickMask__4CPadUs(this,0xf);
	tick = GetTick__C4CPad(this);
	if ((tick & 1) != 0) {
		iVar8 = -1;
	}
	tick = GetTick__C4CPad(this);
	iVar6 = cs;
	if ((tick & 2) != 0) {
		iVar8 = 1;
	}
	pOVar9 = MenuList[cmenu].Item;
	iVar3 = pOVar9[cs + iVar8].Text;
	cs = cs + iVar8;
	while (iVar3 == 0) {
		if (iVar8 == 0) {
			iVar8 = 1;
		}
		if (cs < 0) {
			iVar8 = 1;
		}
		iVar4 = cs + iVar8;
		if ((int)((uint)MenuList[cmenu].NoEntries - 1) <= cs) {
			iVar8 = -1;
			iVar4 = cs + -1;
		}
		iVar3 = pOVar9[iVar4].Text;
		cs = iVar4;
	}
	if ((cmenu == 1) || (cmenu == 8)) {
		if (cs < 1) {
			cs = (uint)MenuList[cmenu].NoEntries - 1;
		}
		if ((int)(uint)MenuList[cmenu].NoEntries <= cs) {
			cs = 1;
		}
	}
	else {
		iVar8 = cmenu * 8;
		if (cs < 1) {
			cs = (uint)MenuList[cmenu].NoEntries - 2;
			iVar8 = cmenu << 3;
		}
		if ((int)((uint)(&MenuList[0].NoEntries)[iVar8] - 1) <= cs) {
			cs = 1;
		}
	}
	if (cs != iVar6) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	iVar8 = 4;
	pOVar5 = pOVar9 + 4;
	if (cmenu == 3) {
		do {
			pOVar5[1].len = 0;
			iVar8 = iVar8 + -1;
			pOVar5 = (OMENUITEM *)&pOVar5[-1].var;
		} while (-1 < iVar8);
		bVar1 = NewLang != OldLang;
		pOVar9[NewLang + LANG_FRENCH].len = 1;
		if (bVar1) {
			PlaySFX__Fi(IS_TITLSLCT);
			ChangeLang__Fv();
			OldLang = NewLang;
		}
	}
	bVar1 = false;
	if (cmenu == 6) {
		tick = GetDown__C4CPad(this);
		if (((tick & 0x40) != 0) || (tick = GetDown__C4CPad(this), (tick & 0x10) != 0)) {
			bVar1 = true;
		}
		if ((bVar1) && (cs == 1)) {
			optionsflag = (void *)0x0;
			options_pad = -1;
			PlaySFX__Fi(IS_TITLSLCT);
			TSK_Sleep(1);
			GO_DoGameOver__Fv();
		}
	}
	else {
		if (pOVar9[cs].var != (ulong *)0x0) {
			iVar8 = pOVar9[cs].len;
			tick = GetTick__C4CPad(this);
			if ((tick & 4) != 0) {
				pOVar5 = pOVar9 + cs;
				iVar6 = pOVar5->len + -2;
				pOVar5->len = iVar6;
				if (iVar6 < 0) {
					pOVar5->len = 0;
				}
			}
			tick = GetTick__C4CPad(this);
			iVar6 = sw;
			if ((tick & 8) != 0) {
				pOVar5 = pOVar9 + cs;
				iVar3 = pOVar5->len + 2;
				pOVar5->len = iVar3;
				if (iVar6 < iVar3) {
					pOVar5->len = iVar6;
				}
			}
			if (iVar8 != pOVar9[cs].len) {
				psfx = IS_TITLEMOV;
				if (cs == 4) {
					psfx = TSFX_BMAID1;
				}
				PlaySFX__Fi(psfx);
			}
			*pOVar9[cs].var = pOVar9[cs].len;
		}
	}
	bVar1 = false;
	tick = GetUp__C4CPad(this);
	if (((tick & 0x40) != 0) || (tick = GetUp__C4CPad(this), (tick & 0x10) != 0)) {
		bVar1 = true;
	}
	if (bVar1) {
		ignore_buttons = &DAT_00000001;
		debounce = &DAT_00000001;
	}
	bVar1 = false;
	tick = GetDown__C4CPad(this);
	if (((tick & 0x40) != 0) || (tick = GetDown__C4CPad(this), (tick & 0x10) != 0)) {
		bVar1 = true;
	}
	if ((bVar1) && (debounce != (void *)0x0)) {
		they_pressed = who_pressed__Fi(0x50);
		iVar8 = pOVar9[cs].Link;
		if (iVar8 == -1) {
			PlaySFX__Fi(IS_TITLSLCT);
			Adjust = '\0';
			ToggleOptions__Fv();
			if (optionsflag != (void *)0x0) {
				return;
			}
			ignore_buttons = &DAT_00000001;
			return;
		}
		if (iVar8 != -2) {
			if ((DiabloDieFlag == (void *)0x0) || ((iVar8 != 0xd && ((cmenu != 1 || (4 < cs)))))) {
				PlaySFX__Fi(IS_TITLSLCT);
				iVar8 = pOVar9[cs].Link;
				lastcs = cs;
				cmenu = iVar8 + -1;
				if ((iVar8 == 1) && (cmenu = iVar8 + -1, FeFlag == '\0')) {
					cmenu = iVar8;
				}
				if (cmenu == 0x17) {
					if ((Qfromoptions == '\0') || (cs != 4)) {
						Qfromoptions = (char)options_pad + '\x01';
					}
					else {
						GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
						cmenu = 0;
						Qfromoptions = '\0';
						debounce = &DAT_00000001;
					}
				}
				else {
					cs = 1;
				}
				if (cmenu == 10) {
					GVar7 = GetSpeed__Fv();
					iVar8 = 1;
					if ((GVar7 == GM_SLOW) || (iVar8 = 2, GVar7 == GM_FAST)) {
						cs = iVar8;
					}
				}
				if ((deathflag != '\0') && ((uint)cmenu < 2)) {
					cs = lastcs;
					cmenu = 8;
					Adjust = '\0';
					return;
				}
				if (cmenu - 5U < 2) {
					cs = 2;
				}
				Adjust = '\0';
				return;
			}
			goto LAB_800a9aa4;
		}
		if (cmenu == 3) {
			NewLang = cs + ~LANG_ENGLISH;
			return;
		}
	}
	if (((cmenu == 2) && (cs == 5)) && (tick = GetDown__C4CPad(this), (tick & 0xc) != 0)) {
		SwitchMONO__Fv();
	}
	tick = GetDown__C4CPad(this);
	if (((tick & 0x100) != 0) && (PadFrig != (void *)0x0)) {
		PadFrig = (void *)0x0;
		return;
	}
	tick = GetDown__C4CPad(this);
	if ((tick & 0x100) == 0) {
		return;
	}
	if (cmenu != 8) {
		if (Qfromoptions != '\0') {
			PlaySFX__Fi(IS_TITLSLCT);
			GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
			Qfromoptions = '\0';
			return;
		}
		cs = (uint)MenuList[cmenu].NoEntries - 1;
		iVar8 = pOVar9[cs].Link;
		if ((iVar8 == -1) || (iVar8 == 6)) {
			PlaySFX__Fi(IS_TITLSLCT);
			Adjust = '\0';
			ToggleOptions__Fv();
			if (optionsflag != (void *)0x0) {
				return;
			}
			ignore_buttons = (void *)0x0;
			return;
		}
		if (iVar8 == -2) {
			return;
		}
		PlaySFX__Fi(IS_TITLSLCT);
		if (deathflag == '\0') {
			if (cmenu == 7) {
				Adjust = '\0';
				pOVar9 = pOVar9 + cs;
				cs = 5;
				cmenu = pOVar9->Link + -1;
			}
			else {
				Adjust = '\0';
				cmenu = pOVar9[cs].Link + -1;
				cs = lastcs;
			}
		}
		else {
			if (cmenu == 6) {
				cmenu = 8;
				Adjust = '\0';
				cs = lastcs;
			}
		}
		if (MemcardOverlay == (void *)0x0) {
			return;
		}
		MemcardOverlay = (void *)0x0;
		if (FeFlag != '\0') {
			MemcardOverlay = (void *)0x0;
			return;
		}
		OVR_LoadGame__Fv();
		return;
	}
LAB_800a9aa4:
	PlaySFX__Fi(IS_TITERR);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CentrePad__Fv()
 // line 2409, offset 0x800a9c68
	/* begin block 1 */
		// Start line: 2410
		// Start offset: 0x800A9C68
		// Variables:
	// 		struct CPad *P; // $s0
	// 		struct OMENUITEM *iptr; // $s3
	// 		int osx; // $s1
	// 		int osy; // $s2
	/* end block 1 */
	// End offset: 0x800A9E8C
	// End Line: 2458

	/* begin block 2 */
		// Start line: 5293
	/* end block 2 */
	// End Line: 5294

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CentrePad__Fv(void)

{
	int iVar1;
	ushort tick;
	CPad *this;
	int iVar2;
	OMENUITEM *pOVar3;
	
	sx = VID_GetXOff__Fv();
	sy = VID_GetYOff__Fv();
	this = PAD_GetPad__FiUc(options_pad,'\0');
	if (FeFlag == '\0') {
		tick = 3;
	}
	else {
		tick = 10;
	}
	SetPadTick__4CPadUs(this,tick);
	SetPadTickMask__4CPadUs(this,0xf);
	iVar1 = sy;
	iVar2 = sx;
	pOVar3 = MenuList[cmenu].Item;
	tick = GetTick__C4CPad(this);
	if (((tick & 1) != 0) && (-3 < sy)) {
		sy = sy + -1;
	}
	tick = GetTick__C4CPad(this);
	if (((tick & 2) != 0) && (sy < 3)) {
		sy = sy + 1;
	}
	tick = GetTick__C4CPad(this);
	if (((tick & 4) != 0) && (-3 < sx)) {
		sx = sx + -1;
	}
	tick = GetTick__C4CPad(this);
	if (((tick & 8) != 0) && (sx < 3)) {
		sx = sx + 1;
	}
	if ((sx != iVar2) || (sy != iVar1)) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	tick = GetDown__C4CPad(this);
	if ((tick & 0x80) != 0) {
		PlaySFX__Fi(IS_TITLSLCT);
		sx = 0;
		sy = 0;
	}
	tick = GetDown__C4CPad(this);
	if (((tick & 0x100) != 0) && (Adjust == '\0')) {
		PlaySFX__Fi(IS_TITLSLCT);
		cs = (uint)MenuList[cmenu].NoEntries - 1;
		iVar2 = pOVar3[cs].Link;
		if (iVar2 != -2) {
			Adjust = '\0';
			cs = lastcs;
			cmenu = iVar2 + -1;
		}
	}
	DaveCentreStuff__Fv();
	VID_SetXYOff__Fii(sx,sy);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcVolumes__Fv()
 // line 2463, offset 0x800a9eac
	/* begin block 1 */
		// Start line: 2464
		// Start offset: 0x800A9EAC
	/* end block 1 */
	// End offset: 0x800A9FF8
	// End Line: 2492

	/* begin block 2 */
		// Start line: 5414
	/* end block 2 */
	// End Line: 5415

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CalcVolumes__Fv(void)

{
	SFXHDR *sfh;
	int iVar1;
	long lVar2;
	
	sfh = sghMusic;
	sglMasterVolume = MasterVol * (0xe6 / sw);
	sglMusicVolume = MusicVol * (0x1fff / sw);
	sglSoundVolume = SoundVol * (0x3fff / sw);
	sglSpeechVolume = SpeechVol * (0x3fff / sw);
	if (sghMusic != (SFXHDR *)0x0) {
		iVar1 = sglMusicVolume * sglMasterVolume >> 8;
		sghMusic->s_volume = iVar1;
		sfh->volume = iVar1;
		STR_setvolume__FP6SFXHDR(sfh);
	}
	sfh = sghStream;
	if (sghStream != (SFXHDR *)0x0) {
		lVar2 = sglSpeechVolume;
		if ((sgpStreamSFX->bFlags & 1) != 0) {
			lVar2 = sglSoundVolume;
		}
		iVar1 = lVar2 * sglMasterVolume >> 8;
		sghStream->s_volume = iVar1;
		sfh->volume = iVar1;
		if (sghStream->state != '\x03') {
			STR_setvolume__FP6SFXHDR(sghStream);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetLoadedVolumes__Fv()
 // line 2498, offset 0x800aa008
	/* begin block 1 */
		// Start line: 2499
		// Start offset: 0x800AA008
	/* end block 1 */
	// End offset: 0x800AA0B0
	// End Line: 2510

	/* begin block 2 */
		// Start line: 5498
	/* end block 2 */
	// End Line: 5499

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetLoadedVolumes__Fv(void)

{
	int iVar1;
	
	iVar1 = 0x3fff / sw;
	MasterVol = sglMasterVolume / (0xe6 / sw) & 0xfffffffe;
	MusicVol = (sglMusicVolume << 1) / iVar1 & 0xfffffffe;
	SoundVol = sglSoundVolume / iVar1 & 0xfffffffe;
	SpeechVol = sglSpeechVolume / iVar1 & 0xfffffffe;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetVolumes__Fv()
 // line 2514, offset 0x800aa0b8
	/* begin block 1 */
		// Start line: 2515
		// Start offset: 0x800AA0B8

		/* begin block 1.1 */
			// Start line: 2515
			// Start offset: 0x800AA0B8
			// Variables:
		// 		int i; // $a2

			/* begin block 1.1.1 */
				// Start line: 2518
				// Start offset: 0x800AA0D8
				// Variables:
			// 		struct OMENULIST *mptr; // $a1
			// 		struct OMENUITEM *iptr; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 2518
					// Start offset: 0x800AA0E4
					// Variables:
				// 		int s; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x800AA13C
				// End Line: 2531
			/* end block 1.1.1 */
			// End offset: 0x800AA13C
			// End Line: 2531
		/* end block 1.1 */
		// End offset: 0x800AA144
		// End Line: 2532
	/* end block 1 */
	// End offset: 0x800AA144
	// End Line: 2532

	/* begin block 2 */
		// Start line: 5542
	/* end block 2 */
	// End Line: 5543

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetVolumes__Fv(void)

{
	int iVar1;
	int iVar2;
	int *piVar3;
	int iVar4;
	int iVar5;
	
	SetLoadedVolumes__Fv();
	iVar1 = sw;
	iVar5 = 0;
	while (iVar5 < 10) {
		iVar4 = 0;
		if (MenuList[iVar5].NoEntries != '\0') {
			piVar3 = &(MenuList[iVar5].Item)->len;
			do {
				if (((int *)piVar3[1] != (int *)0x0) &&
					 (iVar2 = *(int *)piVar3[1], *piVar3 = iVar2, iVar1 < iVar2)) {
					*piVar3 = iVar1;
				}
				iVar4 = iVar4 + 1;
				piVar3 = piVar3 + 6;
			} while (iVar4 < (int)(uint)MenuList[iVar5].NoEntries);
		}
		iVar5 = iVar5 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AlterSpeedMenu__F9GM_SPEEDS(enum GM_SPEEDS gs /*$a0*/)
 // line 2621, offset 0x800aa154
	/* begin block 1 */
		// Start line: 2622
		// Start offset: 0x800AA154
		// Variables:
	// 		struct OMENUITEM *it; // $v1
	/* end block 1 */
	// End offset: 0x800AA1A0
	// End Line: 2638

	/* begin block 2 */
		// Start line: 5759
	/* end block 2 */
	// End Line: 5760

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AlterSpeedMenu__F9GM_SPEEDS(GM_SPEEDS gs)

{
	OMENUITEM *pOVar1;
	
	pOVar1 = MenuList[cmenu].Item;
	if (gs == GM_SLOW) {
		pOVar1[1].len = 1;
		pOVar1[2].len = 0;
	}
	else {
		if (gs == GM_FAST) {
			pOVar1[1].len = 0;
			pOVar1[2].len = 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GameSpeedPad__Fv()
 // line 2644, offset 0x800aa1a8
	/* begin block 1 */
		// Start line: 2645
		// Start offset: 0x800AA1A8
		// Variables:
	// 		int cp; // $s0
	// 		void * exit_flag; // $s1
	/* end block 1 */
	// End offset: 0x800AA2B8
	// End Line: 2689

	/* begin block 2 */
		// Start line: 5804
	/* end block 2 */
	// End Line: 5805

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GameSpeedPad__Fv(void)

{
	bool bVar1;
	ushort uVar2;
	CPad *this;
	GM_SPEEDS gs;
	
	this = PAD_GetPad__FiUc(options_pad,'\0');
	uVar2 = GetDown__C4CPad(this);
	gs = GetSpeed__Fv();
	AlterSpeedMenu__F9GM_SPEEDS(gs);
	bVar1 = (uVar2 & 0x100) != 0;
	if (bVar1) {
		PlaySFX__Fi(IS_TITLSLCT);
	}
	if ((uVar2 & 2) != 0) {
		PlaySFX__Fi(IS_TITLEMOV);
		cs = cs + 1;
		if (2 < cs) {
			cs = 1;
		}
	}
	if ((uVar2 & 1) != 0) {
		PlaySFX__Fi(IS_TITLEMOV);
		cs = cs + -1;
		if (cs == 0) {
			cs = 2;
		}
	}
	if ((uVar2 & 0x40) != 0) {
		PlaySFX__Fi(IS_TITLSLCT);
		if (cs == 1) {
			gs = GM_SLOW;
		}
		else {
			gs = GM_FAST;
			if (cs != 2) goto LAB_800aa2a4;
		}
		SetSpeed__F9GM_SPEEDS(gs);
	}
LAB_800aa2a4:
	if (bVar1) {
		cmenu = 1;
		cs = 10;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawOptions__FP4TASK(struct TASK *T /*$a0*/)
 // line 2703, offset 0x800aa2d0
	/* begin block 1 */
		// Start line: 2704
		// Start offset: 0x800AA2D0
		// Variables:
	// 		struct CPad *P; // $s2
	/* end block 1 */
	// End offset: 0x800AA9B0
	// End Line: 3146

	/* begin block 2 */
		// Start line: 5925
	/* end block 2 */
	// End Line: 5926

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawOptions__FP4TASK(TASK *T)

{
	bool bVar1;
	ushort uVar2;
	CPad *this;
	FRAME_HDR *pFVar3;
	uint uVar4;
	undefined *puVar5;
	void *pvVar6;
	TASK *pTVar7;
	_135fake psfx;
	
	if ((options_pad == -1) && (deathflag == '\0')) {
		ToggleOptions__Fv();
	}
	else {
		this = PAD_GetPad__FiUc(options_pad,'\0');
		Slider = GM_UseTexData__Fi(0);
		pFVar3 = GetFr__7TextDati(Slider,0x96);
		sw = (pFVar3->Y & 0x1ffU) - 2;
		cmenu = 8;
		if (deathflag == '\0') {
			cmenu = 1;
		}
		uVar4 = (uint)Qfromoptions;
		if (Qfromoptions == '\0') {
			if (FeFlag == '\0') {
				PlaySFX__Fi(IS_TITLSLCT);
			}
			cs = 1;
		}
		else {
			Qfromoptions = '\0';
			cs = uVar4;
		}
		qspin = '\0';
		lqspin = '\0';
		OptionsSetSeed = (void *)0x0;
		bVar1 = false;
		GetVolumes__Fv();
		GLUE_SetHomingScrollFlag__Fb((void *)0x0);
		GLUE_SetShowPanelFlag__Fb((void *)0x0);
		GLUE_SuspendGame__Fv();
		TSK_Sleep(1);
		debounce = &DAT_00000001;
		uVar2 = GetDown__C4CPad(this);
		if (((uVar2 & 0x40) != 0) || (uVar2 = GetDown__C4CPad(this), (uVar2 & 0x10) != 0)) {
			bVar1 = true;
		}
		if (bVar1) {
			debounce = (void *)0x0;
		}
		OrigLang = LANG_GetLang__Fv();
		PadFrig = (void *)0x0;
		OldLang = OrigLang;
		old_pad = options_pad;
		while ((msgflag != '\0' && (msgholdflag != '\0'))) {
			msgholdflag = '\0';
			TSK_Sleep(1);
		}
		while ((optionsflag != (void *)0x0 && (options_pad != -1))) {
			switch(cmenu) {
			case 0:
			case 1:
			case 3:
			case 5:
			case 6:
			case 7:
			case 8:
				DrawMenu__Fi(cmenu);
				SoundPad__Fv();
				break;
			case 2:
				DrawMenu__Fi(cmenu);
				CalcVolumes__Fv();
				SoundPad__Fv();
				break;
			case 4:
				DrawMenu__Fi(cmenu);
				CentrePad__Fv();
				break;
			case 9:
			case 0xb:
			case 0xc:
			case 0x11:
			case 0x12:
				MemcardPad__Fv();
				goto LAB_800aa710;
			case 10:
				GameSpeedPad__Fv();
				goto LAB_800aa710;
			case 0xd:
				CharCardSelectMemcardPad__Fv();
				goto LAB_800aa710;
			case 0xe:
				current_card = 0;
				CharacterLoadPad__Fv();
				goto LAB_800aa710;
			case 0xf:
				current_card = 1;
				CharacterLoadPad__Fv();
				goto LAB_800aa710;
			case 0x10:
				DrawMenu__Fi(cmenu);
				FormatPad__Fv();
				break;
			case 0x13:
				SaveOverwritePad__Fv();
LAB_800aa710:
				DrawMenu__Fi(cmenu);
				break;
			case 0x14:
				DrawCtrlSetup__Fv();
				if (FeFlag == '\0') {
					cs = 7;
				}
				else {
					cs = 2;
				}
				break;
			case 0x16:
				cmenu = 0;
				cs = 4;
				PaletteFadeOut__Fi(8);
				while (pvVar6 = GetFadeState__Fv(), pvVar6 != (void *)0x0) {
					DrawMenu__Fi(cmenu);
					TSK_Sleep(1);
				}
				FUN_8013d1b4();
				PaletteFadeIn__Fi(8);
				break;
			case 0x17:
				Qfromoptions = (char)options_pad + '\x01';
				ToggleOptions__Fv();
				pad_func_SplBook__Fi(options_pad);
				goto LAB_800aa6f8;
			case 0x18:
				Qfromoptions = (char)options_pad + '\x01';
				ToggleOptions__Fv();
				StartQuestlog__Fv();
				goto LAB_800aa6f8;
			case 0x19:
				DrawHelp__Fv();
				if (FeFlag == '\0') {
					cs = 9;
				}
				else {
					cs = 5;
				}
				break;
			case 0x1a:
				ToggleOptions__Fv();
				invflag = '\x01';
				goto LAB_800aa6f8;
			case 0x1b:
				ToggleOptions__Fv();
				pad_func_Chr__Fi(options_pad);
LAB_800aa6f8:
				cs = 4;
				options_pad = old_pad;
			}
			if ((Qfromoptions != '\0') && (cs == 4)) {
				debounce = &DAT_00000001;
			}
			TSK_Sleep(1);
			if (FeFlag == '\0') {
				uVar2 = GetDown__C4CPad(this);
				if (((uVar2 & 0x20) != 0) && (MemCardActive == (void *)0x0)) {
					if (cmenu == 1) {
						if (PadFrig == (void *)0x0) {
							psfx = IS_TITERR;
							if (ctrlflag == '\0') {
								psfx = IS_TITLSLCT;
							}
							PlaySFX__Fi(psfx);
							ToggleOptions__Fv();
							if (optionsflag == (void *)0x0) {
								ignore_buttons = &DAT_00000001;
							}
						}
						else {
							PadFrig = (void *)0x0;
						}
					}
					else {
						if (ctrlflag == '\0') {
							if (deathflag == '\0') {
								cs = 5;
								if (cmenu != 7) {
									cs = lastcs;
								}
								cmenu = 1;
								psfx = IS_TITLSLCT;
								goto LAB_800aa870;
							}
						}
						else {
							puVar5 = (undefined *)RemoveCtrlScreen__Fv();
							psfx = IS_TITERR;
							if (puVar5 == &DAT_00000001) {
								PlaySFX__Fi(IS_TITLSLCT);
								cmenu = 1;
								cs = lastcs;
							}
							else {
LAB_800aa870:
								PlaySFX__Fi(psfx);
							}
						}
					}
				}
				if ((FeFlag == '\0') && (pvVar6 = GLUE_Finished__Fv(), pvVar6 != (void *)0x0)) {
					optionsflag = (void *)0x0;
				}
			}
		}
		Adjust = '\0';
		if (MemCardActive != (void *)0x0) {
			MemcardOFF__Fv();
		}
		if (MemcardOverlay != (void *)0x0) {
			MemcardOverlay = (void *)0x0;
			if (FeFlag == '\0') {
				OVR_LoadGame__Fv();
			}
			music_start__Fi(sgnMusicTrack);
		}
		if (initchr == (void *)0x0) {
			pTVar7 = TSK_Exist((TASK *)0x0,(ulong)&DAT_00008001,0xffffffff);
			if ((pTVar7 == (TASK *)0x0) && (Qfromoptions == '\0')) {
				GLUE_ResumeGame__Fv();
				GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
				GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
				PauseMode = '\0';
				PostGamePad__Fiiii(5,0,0,0);
			}
			if (ctrlflag != '\0') {
				RemoveCtrlScreen__Fv();
			}
			if (Qfromoptions == '\0') {
				GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ToggleOptions__Fv()
 // line 3174, offset 0x800aa9cc
	/* begin block 1 */
		// Start line: 3175
		// Start offset: 0x800AA9CC
	/* end block 1 */
	// End offset: 0x800AAB64
	// End Line: 3227

	/* begin block 2 */
		// Start line: 6979
	/* end block 2 */
	// End Line: 6980

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ToggleOptions__Fv(void)

{
	void *pvVar1;
	undefined *puVar2;
	
	if ((deathflag != '\0') || (pvVar1 = IS_GameOver__Fv(), pvVar1 == (void *)0x0)) {
		if (optionsflag == (void *)0x0) {
			msgholdflag = '\x01';
			PauseMode = '\x01';
			optionsflag = &DAT_00000001;
			saveflag = 0;
			loadflag = 0;
			AlertTxt = 0;
			StatusTxt = 0;
			cardondelay = 5;
			INT_8011b204 = 0;
			card_active = 0;
			MemCardActive = (void *)0x0;
			stream_pause__Fv();
			DrawOptionsTask = TSK_AddTask(0,DrawOptions__FP4TASK,0x4000,0);
		}
		else {
			msgholdflag = '\0';
			if ((ctrlflag == '\0') ||
				 (puVar2 = (undefined *)RemoveCtrlScreen__Fv(), puVar2 == &DAT_00000001)) {
				if (MemCardActive != (void *)0x0) {
					MemcardOFF__Fv();
				}
				if (MemcardOverlay != (void *)0x0) {
					MemcardOverlay = (void *)0x0;
					if (FeFlag == '\0') {
						OVR_LoadGame__Fv();
					}
					if (sghMusic == (SFXHDR *)0x0) {
						music_start__Fi(sgnMusicTrack);
					}
				}
				PauseMode = '\0';
				optionsflag = (void *)0x0;
				stream_resume__Fv();
				if (sbookflag == '\0') {
					options_pad = -1;
				}
			}
			else {
				PlaySFX__Fi(IS_TITERR);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FormatPad__Fv()
 // line 3234, offset 0x800aab74
	/* begin block 1 */
		// Start line: 3235
		// Start offset: 0x800AAB74
		// Variables:
	// 		struct CPad *P; // $s0
	// 		int sn; // $a0
	/* end block 1 */
	// End offset: 0x800AAE64
	// End Line: 3339

	/* begin block 2 */
		// Start line: 7111
	/* end block 2 */
	// End Line: 7112

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FormatPad__Fv(void)

{
	bool bVar1;
	ushort uVar2;
	char *Str;
	CPad *P;
	int StrId;
	
	ActivateMemcard__Fii((uint)(current_card == 0),(uint)(current_card == 1));
	StrId = 0x289;
	if (current_card == 0) {
		StrId = 0x288;
	}
	Str = GetStr__Fi(StrId);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,0,0x38,Str,JustCentre,(RECT *)0x0,(uint)GOLDR,(uint)GOLDG,(uint)GOLDB);
	if ((&card_status)[current_card] == 2) {
		AlertTxt = card_side_empty[current_card];
		ActivateMemcard__Fii(1,1);
		saveflag = 0;
		cardondelay = 5;
		cs = current_card + 1;
		cmenu = ReturnMenu;
		return;
	}
	if (formatflag == 0) {
		P = PAD_GetPad__FiUc(options_pad,'\0');
		LAMBO_MovePad__FP4CPad(P);
		uVar2 = GetDown__C4CPad(P);
		bVar1 = false;
		if ((uVar2 & 0x100) != 0) {
			PlaySFX__Fi(IS_TITLSLCT);
			ActivateMemcard__Fii(1,1);
			saveflag = 0;
			cs = current_card + 1;
			cmenu = ReturnMenu;
			AlertTxt = 0;
			return;
		}
		uVar2 = GetDown__C4CPad(P);
		if (((uVar2 & 0x40) != 0) || (uVar2 = GetDown__C4CPad(P), (uVar2 & 0x10) != 0)) {
			bVar1 = true;
		}
		if (bVar1) {
			PlaySFX__Fi(IS_TITLSLCT);
			if (cs == 1) {
				formatflag = cs;
			}
			else {
				formatflag = 0;
				saveflag = 0;
				AlertTxt = 0;
				ActivateMemcard__Fii(1,1);
				cs = current_card + 1;
				cmenu = ReturnMenu;
			}
		}
		if (formatflag == 0) {
			return;
		}
	}
	formatflag = formatflag + 1;
	if ((2 < formatflag) && (ShowLoadingBox__Fi((&card_side_format)[current_card]), 10 < formatflag))
	{
		StrId = FUN_80142ff4(current_card);
		if (StrId == 0) {
			AlertTxt = 0x507;
			ActivateMemcard__Fii(1,1);
			cardondelay = 5;
			CharacterBlockLoaded = (void *)0x0;
			saveflag = 0;
			formatflag = 0;
			cs = lastcs;
			cmenu = ReturnMenu;
		}
		else {
			formatflag = 0;
			AlertTxt = 0;
			cs = lastcs;
			cmenu = ReturnMenu;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SaveOverwritePad__Fv()
 // line 3350, offset 0x800aae7c
	/* begin block 1 */
		// Start line: 3351
		// Start offset: 0x800AAE7C
		// Variables:
	// 		struct CPad *P; // $s1
	// 		int sn; // $a0
	/* end block 1 */
	// End offset: 0x800AB0A0
	// End Line: 3428

	/* begin block 2 */
		// Start line: 7356
	/* end block 2 */
	// End Line: 7357

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SaveOverwritePad__Fv(void)

{
	bool bVar1;
	ushort uVar2;
	CPad *P;
	char *Str;
	int StrId;
	
	P = PAD_GetPad__FiUc(options_pad,'\0');
	LAMBO_MovePad__FP4CPad(P);
	StrId = 0x289;
	if (current_card == 0) {
		StrId = 0x288;
	}
	Str = GetStr__Fi(StrId);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,0,0x60,Str,JustCentre,(RECT *)0x0,(uint)GOLDR,(uint)GOLDG,(uint)GOLDB);
	bVar1 = false;
	if ((&card_status)[current_card] == 2) {
		AlertTxt = card_side_empty[current_card];
		ActivateMemcard__Fii(1,1);
		saveflag = 0;
		cs = current_card + 1;
		cmenu = ReturnMenu;
	}
	else {
		uVar2 = GetDown__C4CPad(P);
		if (((uVar2 & 0x40) != 0) || (uVar2 = GetDown__C4CPad(P), (uVar2 & 0x10) != 0)) {
			bVar1 = true;
		}
		if (bVar1) {
			PlaySFX__Fi(IS_TITLSLCT);
			if (cs == 2) {
				if (ReturnCards == 1) {
					ActivateCharacterMemcard__Fii((uint)(current_card == 0),(uint)(current_card == 1));
				}
				else {
					ActivateMemcard__Fii(1,1);
				}
				loadflag = 0;
				saveflag = 0;
			}
			StatusTxt = 0;
			cs = lastlastcs;
			cmenu = ReturnMenu;
		}
		else {
			uVar2 = GetDown__C4CPad(P);
			if ((uVar2 & 0x100) != 0) {
				if (ReturnCards == 1) {
					ActivateCharacterMemcard__Fii((uint)(current_card == 0),(uint)(current_card == 1));
				}
				else {
					ActivateMemcard__Fii(1,1);
				}
				PlaySFX__Fi(IS_TITLSLCT);
				loadflag = 0;
				saveflag = 0;
				AlertTxt = 0;
				cs = lastlastcs;
				cmenu = ReturnMenu;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CharCardSelectMemcardPad__Fv()
 // line 3432, offset 0x800ab0b8
	/* begin block 1 */
		// Start line: 3433
		// Start offset: 0x800AB0B8
		// Variables:
	// 		struct OMENUITEM *iptr; // $s2
	// 		struct CPad *P; // $s0
	/* end block 1 */
	// End offset: 0x800AB2E4
	// End Line: 3501

	/* begin block 2 */
		// Start line: 7534
	/* end block 2 */
	// End Line: 7535

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CharCardSelectMemcardPad__Fv(void)

{
	bool bVar1;
	ushort uVar2;
	CPad *P;
	int iVar3;
	OMENUITEM *pOVar4;
	
	pOVar4 = MenuList[cmenu].Item;
	P = PAD_GetPad__FiUc(options_pad,'\0');
	if (cardondelay < 1) {
		ActivateMemcard__Fii(1,1);
		if (AlertTxt == 0) {
			bVar1 = false;
			ShowCardActionText__Fv();
			LAMBO_MovePad__FP4CPad(P);
			uVar2 = GetDown__C4CPad(P);
			if (((uVar2 & 0x40) != 0) || (uVar2 = GetDown__C4CPad(P), (uVar2 & 0x10) != 0)) {
				bVar1 = true;
			}
			if (bVar1) {
				if (*(int *)(&DAT_8011b3d8 + cs * 4) != 2) {
					countdownloadcharblock = 1;
					cardondelay = 5;
					PlaySFX__Fi(IS_TITLSLCT);
					pOVar4 = pOVar4 + cs;
					cs = 1;
					lastcs = 1;
					cmenu = pOVar4->Link + -1;
					current_card = 0;
					return;
				}
				PlaySFX__Fi(IS_TITERR);
				AlertTxt = (int)(&DoLoadedGame)[cs];
			}
			uVar2 = GetDown__C4CPad(P);
			if ((uVar2 & 0x100) != 0) {
				PlaySFX__Fi(IS_TITLSLCT);
				cs = (uint)MenuList[cmenu].NoEntries - 1;
				iVar3 = pOVar4[cs].Link;
				if (iVar3 != -2) {
					cs = 3;
					cmenu = iVar3 + -1;
				}
			}
		}
		else {
			bVar1 = false;
			FUN_8015a3bc();
			uVar2 = GetDown__C4CPad(P);
			if (((uVar2 & 0x40) != 0) || (uVar2 = GetDown__C4CPad(P), (uVar2 & 0x10) != 0)) {
				bVar1 = true;
			}
			if (bVar1) {
				PlaySFX__Fi(IS_TITLSLCT);
				AlertTxt = 0;
			}
		}
	}
	else {
		cardondelay = cardondelay + -1;
		ShowLoadingBox__Fi(0x348);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LAMBO_MovePad__FP4CPad(struct CPad *P /*$a0*/)
 // line 3508, offset 0x800ab300
	/* begin block 1 */
		// Start line: 3509
		// Start offset: 0x800AB300
		// Variables:
	// 		struct OMENUITEM *iptr; // $s2
	// 		int move; // $s1
	// 		int lcs; // $a1
	/* end block 1 */
	// End offset: 0x800AB494
	// End Line: 3535

	/* begin block 2 */
		// Start line: 7695
	/* end block 2 */
	// End Line: 7696

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LAMBO_MovePad__FP4CPad(CPad *P)

{
	int iVar1;
	ushort uVar2;
	CPad *this;
	int iVar3;
	int iVar4;
	int iVar5;
	OMENUITEM *pOVar6;
	
	pOVar6 = MenuList[cmenu].Item;
	this = PAD_GetPad__FiUc(options_pad,'\0');
	SetPadTick__4CPadUs(this,8);
	SetPadTickMask__4CPadUs(this,3);
	uVar2 = GetTick__C4CPad(this);
	iVar5 = -((uint)uVar2 & 1);
	uVar2 = GetTick__C4CPad(this);
	iVar1 = cs;
	if ((uVar2 & 2) != 0) {
		iVar5 = 1;
	}
	iVar4 = pOVar6[cs + iVar5].Text;
	cs = cs + iVar5;
	while (iVar4 == 0) {
		if (iVar5 == 0) {
			iVar5 = 1;
		}
		if (cs < 0) {
			iVar5 = 1;
		}
		iVar3 = cs + iVar5;
		if ((int)((uint)MenuList[cmenu].NoEntries - 1) <= cs) {
			iVar5 = -1;
			iVar3 = cs + -1;
		}
		iVar4 = pOVar6[iVar3].Text;
		cs = iVar3;
	}
	if (cs < 1) {
		cs = (uint)MenuList[cmenu].NoEntries - 2;
	}
	if ((int)((uint)MenuList[cmenu].NoEntries - 1) <= cs) {
		cs = 1;
	}
	if (cs != iVar1) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	return;
}





