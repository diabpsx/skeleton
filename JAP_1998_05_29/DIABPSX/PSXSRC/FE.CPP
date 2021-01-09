#include "THISDUST.H"
#include "FE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ FeInitBuffer__Fv()
 // line 167, offset 0x80139c24
	/* begin block 1 */
		// Start line: 168
		// Start offset: 0x80139C24

		/* begin block 1.1 */
			// Start line: 169
			// Start offset: 0x80139C24
		/* end block 1.1 */
		// End offset: 0x80139C40
		// End Line: 172
	/* end block 1 */
	// End offset: 0x80139C48
	// End Line: 173

	/* begin block 2 */
		// Start line: 335
	/* end block 2 */
	// End Line: 336

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeInitBuffer__Fv(void)

{
	int iVar1;
	
	iVar1 = 0x768;
	do {
		*(undefined4 *)((int)&FeBuffer.MenuPtr + iVar1) = 0;
		iVar1 = iVar1 + -0x18;
	} while (-1 < iVar1);
	FeBufferCount = 0;
	FeMaxBufferCount = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X /*$a0*/, int Y /*$a1*/, enum TXT_JUST Just /*$a2*/, unsigned short Str /*$a3*/, struct FeTable *MenuPtr /*stack 16*/, struct CFont *Font /*stack 20*/)
 // line 178, offset 0x80139c50
	/* begin block 1 */
		// Start line: 179
		// Start offset: 0x80139C50
	/* end block 1 */
	// End offset: 0x80139CCC
	// End Line: 187

	/* begin block 2 */
		// Start line: 357
	/* end block 2 */
	// End Line: 358

void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont
							 (int X,int Y,TXT_JUST Just,ushort Str,FeTable *MenuPtr,CFont *Font)

{
	(&FeBuffer)[FeBufferCount].X = X;
	(&FeBuffer)[FeBufferCount].Y = Y;
	(&FeBuffer)[FeBufferCount].Just = Just;
	(&FeBuffer)[FeBufferCount].Str = (uint)Str;
	(&FeBuffer)[FeBufferCount].Font = Font;
	(&FeBuffer)[FeBufferCount].MenuPtr = MenuPtr;
	FeBufferCount = FeBufferCount + 1;
	FeMaxBufferCount = FeMaxBufferCount + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table /*$s0*/, int Count /*$s2*/)
 // line 190, offset 0x80139cd4
	/* begin block 1 */
		// Start line: 191
		// Start offset: 0x80139CD4

		/* begin block 1.1 */
			// Start line: 191
			// Start offset: 0x80139CD4
			// Variables:
		// 		int Loop; // $s1
		/* end block 1.1 */
		// End offset: 0x80139D34
		// End Line: 196
	/* end block 1 */
	// End offset: 0x80139D34
	// End Line: 196

	/* begin block 2 */
		// Start line: 384
	/* end block 2 */
	// End Line: 385

void FeAddTable__FP11FeMenuTablei(FeMenuTable *Table,int Count)

{
	FeTable **ppFVar1;
	ushort *puVar2;
	CFont **ppCVar3;
	int *piVar4;
	TXT_JUST *pTVar5;
	int *piVar6;
	int iVar7;
	
	FeInitBuffer__Fv();
	iVar7 = 0;
	if (0 < Count) {
		do {
			ppFVar1 = &Table->MenuPtr;
			puVar2 = &Table->Str;
			ppCVar3 = &Table->Font;
			iVar7 = iVar7 + 1;
			piVar6 = &Table->X;
			piVar4 = &Table->Y;
			pTVar5 = &Table->Just;
			Table = Table + 1;
			FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(*piVar6,*piVar4,*pTVar5,*puVar2,*ppFVar1,*ppCVar3);
		} while (iVar7 < Count);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeAddNameTable__FPUci(unsigned char *Table /*$s6*/, int Count /*$s0*/)
 // line 199, offset 0x80139d50
	/* begin block 1 */
		// Start line: 200
		// Start offset: 0x80139D50

		/* begin block 1.1 */
			// Start line: 200
			// Start offset: 0x80139D50
			// Variables:
		// 		int YLoop; // $s5

			/* begin block 1.1.1 */
				// Start line: 205
				// Start offset: 0x80139DD0

				/* begin block 1.1.1.1 */
					// Start line: 207
					// Start offset: 0x80139DDC
					// Variables:
				// 		int XLoop; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x80139E38
				// End Line: 215
			/* end block 1.1.1 */
			// End offset: 0x80139E38
			// End Line: 215
		/* end block 1.1 */
		// End offset: 0x80139E48
		// End Line: 216
	/* end block 1 */
	// End offset: 0x80139E48
	// End Line: 216

	/* begin block 2 */
		// Start line: 403
	/* end block 2 */
	// End Line: 404

void FeAddNameTable__FPUci(uchar *Table,int Count)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	FeInitBuffer__Fv();
	FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(0,0,JustCentre,0x131,(FeTable *)0x0,&LargeFont);
	iVar6 = 0;
	iVar5 = 0;
	iVar4 = 0x23;
	while (iVar6 < Count / 10) {
		iVar2 = 0;
		iVar3 = 1;
		do {
			FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont
								(iVar3 * 0xd + 2,iVar4 << 1,JustCentre,(ushort)Table[iVar5 + iVar2] | 0x1000,
								 (FeTable *)0x0,&MediumFont);
			bVar1 = iVar3 < 10;
			iVar2 = iVar3;
			iVar3 = iVar3 + 1;
		} while (bVar1);
		iVar5 = iVar5 + 10;
		iVar4 = iVar4 + 7;
		iVar6 = iVar6 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeDrawBuffer__Fv()
 // line 222, offset 0x80139e78
	/* begin block 1 */
		// Start line: 223
		// Start offset: 0x80139E78
		// Variables:
	// 		struct Dialog FeBack; // stack offset -104
	// 		struct RECT FeRect; // stack offset -88
	// 		struct RECT ARect; // stack offset -80
	// 		int X; // $s1
	// 		int Y; // $s3
	// 		enum TXT_JUST Just; // $s4
	// 		struct TextDat *PanelGfx; // stack offset -64
	// 		int SelX; // $a0
	// 		int SelY; // $s2
	// 		char Text[2]; // stack offset -72

		/* begin block 1.1 */
			// Start line: 223
			// Start offset: 0x80139E78

			/* begin block 1.1.1 */
				// Start line: 233
				// Start offset: 0x80139EE8

				/* begin block 1.1.1.1 */
					// Start line: 233
					// Start offset: 0x80139EE8
				/* end block 1.1.1.1 */
				// End offset: 0x80139EE8
				// End Line: 233
			/* end block 1.1.1 */
			// End offset: 0x80139EE8
			// End Line: 233
		/* end block 1.1 */
		// End offset: 0x80139EE8
		// End Line: 233

		/* begin block 1.2 */
			// Start line: 235
			// Start offset: 0x80139EE8

			/* begin block 1.2.1 */
				// Start line: 235
				// Start offset: 0x80139EFC

				/* begin block 1.2.1.1 */
					// Start line: 235
					// Start offset: 0x80139EFC
				/* end block 1.2.1.1 */
				// End offset: 0x80139EFC
				// End Line: 235
			/* end block 1.2.1 */
			// End offset: 0x80139EFC
			// End Line: 235
		/* end block 1.2 */
		// End offset: 0x80139EFC
		// End Line: 235

		/* begin block 1.3 */
			// Start line: 238
			// Start offset: 0x80139EFC
			// Variables:
		// 		int Loop; // $s5

			/* begin block 1.3.1 */
				// Start line: 243
				// Start offset: 0x80139F68

				/* begin block 1.3.1.1 */
					// Start line: 249
					// Start offset: 0x80139FB0

					/* begin block 1.3.1.1.1 */
						// Start line: 257
						// Start offset: 0x8013A020

						/* begin block 1.3.1.1.1.1 */
							// Start line: 257
							// Start offset: 0x8013A020

							/* begin block 1.3.1.1.1.1.1 */
								// Start line: 258
								// Start offset: 0x8013A038

								/* begin block 1.3.1.1.1.1.1.1 */
									// Start line: 258
									// Start offset: 0x8013A038

									/* begin block 1.3.1.1.1.1.1.1.1 */
										// Start line: 264
										// Start offset: 0x8013A0A8
										// Variables:
									// 		struct POLY_FT4 *Ft4; // $v0
									/* end block 1.3.1.1.1.1.1.1.1 */
									// End offset: 0x8013A0A8
									// End Line: 266
								/* end block 1.3.1.1.1.1.1.1 */
								// End offset: 0x8013A0A8
								// End Line: 266
							/* end block 1.3.1.1.1.1.1 */
							// End offset: 0x8013A0A8
							// End Line: 266
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x8013A270
						// End Line: 288
					/* end block 1.3.1.1.1 */
					// End offset: 0x8013A270
					// End Line: 288
				/* end block 1.3.1.1 */
				// End offset: 0x8013A270
				// End Line: 288
			/* end block 1.3.1 */
			// End offset: 0x8013A2F4
			// End Line: 309
		/* end block 1.3 */
		// End offset: 0x8013A304
		// End Line: 313

		/* begin block 1.4 */
			// Start line: 325
			// Start offset: 0x8013A394

			/* begin block 1.4.1 */
				// Start line: 326
				// Start offset: 0x8013A3A8

				/* begin block 1.4.1.1 */
					// Start line: 327
					// Start offset: 0x8013A3A8
					// Variables:
				// 		int Loop; // $s2
				/* end block 1.4.1.1 */
				// End offset: 0x8013A464
				// End Line: 333
			/* end block 1.4.1 */
			// End offset: 0x8013A464
			// End Line: 333
		/* end block 1.4 */
		// End offset: 0x8013A464
		// End Line: 333
	/* end block 1 */
	// End offset: 0x8013A470
	// End Line: 333

	/* begin block 2 */
		// Start line: 449
	/* end block 2 */
	// End Line: 450

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeDrawBuffer__Fv(void)

{
	byte bVar1;
	uchar uVar2;
	undefined *puVar3;
	char *Str;
	POLY_FT4 *pPVar4;
	uint local_78;
	ushort Str_00;
	CFont *this;
	int StrId;
	uint local_74;
	uint local_70;
	int iVar5;
	int X;
	int TwinkY;
	int iVar6;
	TXT_JUST local_80;
	int iVar7;
	CFont **ppCVar8;
	uint B;
	RECT *local_7c;
	Dialog DStack104;
	RECT local_58;
	RECT local_50;
	char local_48;
	undefined local_47;
	TextDat *local_40;
	byte local_38;
	byte local_30;
	
	__6Dialog(&DStack104);
	if ((((qtextflag == '\0') && (CDWAIT == (void *)0x0)) &&
			(puVar3 = (undefined *)BL_AsyncLoadDone__Fv(), puVar3 == &DAT_00000001)) &&
		 (TextPtr != (char **)0x0)) {
		local_47 = 0;
		local_48 = '\0';
		local_40 = GM_UseTexData__Fi(0);
		uVar2 = GOLDB;
		iVar7 = 0;
		B = (uint)GOLDB;
		ppCVar8 = &FeBuffer.Font;
		iVar5 = 0;
		local_38 = GOLDR;
		local_58.x = (short)FeBackX + -8;
		local_58.y = (short)FeBackY;
		local_58.w = (short)FeBackW;
		local_58.h = (short)FeBackH;
		local_30 = GOLDG;
		while (iVar7 < FeBufferCount) {
			iVar6 = *(int *)((int)&FeBuffer.Y + iVar5);
			X = *(int *)((int)&FeBuffer.X + iVar5);
			TwinkY = iVar6 + FeBackY + 8;
			if (*ppCVar8 == &LargeFont) {
				TwinkY = iVar6 + FeBackY + 4;
			}
			local_80 = *(TXT_JUST *)((int)&FeBuffer.Just + iVar5);
			if ((iVar7 == 0) && (FeBuffer.MenuPtr == (FeTable *)0x0)) {
				Str = GetStr__Fi(FeBuffer.Str);
				StrId = 0x28;
				local_80 = JustCentre;
				local_7c = (RECT *)0x0;
				this = &LargeFont;
				bVar1 = BLUER;
				bVar1 = BLUEG;
				bVar1 = BLUEB;
LAB_8013a25c:
				local_70 = (uint)bVar1;
				local_74 = (uint)bVar1;
				X = 0;
				local_78 = (uint)bVar1;
LAB_8013a268:
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(this,X,StrId,Str,local_80,local_7c,local_78,local_74,local_70);
			}
			else {
				if (iVar7 != FeCurMenu->Sel) {
					StrId = *(int *)((int)&FeBuffer.Str + iVar5);
					if (0xfff < StrId) {
						local_50.w = 0xe;
						StrId = 8;
						local_50.h = 0xd;
						local_50.x = (short)FeBackX + (short)X + -8;
						local_50.y = (short)FeBackY + (short)iVar6;
						Str = &local_48;
						local_48 = (char)*(undefined4 *)((int)&FeBuffer.Str + iVar5);
						this = *(CFont **)((int)&FeBuffer.Font + iVar5);
						local_7c = &local_50;
						bVar1 = WHITER;
						bVar1 = WHITEG;
						bVar1 = WHITEB;
						goto LAB_8013a25c;
					}
					Str = GetStr__Fi(StrId);
					this = *(CFont **)((int)&FeBuffer.Font + iVar5);
					local_7c = &local_58;
					local_78 = (uint)WHITER;
					local_74 = (uint)WHITEG;
					local_70 = (uint)WHITEB;
					StrId = iVar6 + 8;
					goto LAB_8013a268;
				}
				StrId = *(int *)((int)&FeBuffer.Str + iVar5);
				if (StrId < 0x1000) {
					Str = GetStr__Fi(StrId);
					this = *(CFont **)((int)&FeBuffer.Font + iVar5);
					local_7c = &local_58;
					local_78 = (uint)GOLDR;
					local_74 = (uint)GOLDG;
					local_70 = (uint)GOLDB;
					StrId = iVar6 + 8;
					goto LAB_8013a268;
				}
				local_50.w = 0xe;
				local_50.h = 0xd;
				local_50.x = (short)FeBackX + (short)X + -8;
				local_50.y = (short)FeBackY + (short)iVar6;
				local_48 = (char)*(undefined4 *)((int)&FeBuffer.Str + iVar5);
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(*(CFont **)((int)&FeBuffer.Font + iVar5),0,8,&local_48,local_80,&local_50,
									 (uint)local_38,(uint)local_30,B);
				pPVar4 = PrintFt4__7TextDatiiiiii
													 (local_40,0x142,FeBackX + X + -6,FeBackY + iVar6 + 7,0,0xfd,0);
				pPVar4->r0 = local_38;
				pPVar4->b0 = uVar2;
				pPVar4->code = pPVar4->code & 0xfe | 2;
				pPVar4->g0 = local_30;
			}
			if (((FeCurMenu != &FeNewP1NameMenu) && (FeCurMenu != &FeNewP2NameMenu)) &&
				 (iVar7 == FeCurMenu->Sel)) {
				X = TwinkY;
				if (*ppCVar8 == &LargeFont) {
					X = TwinkY + 3;
				}
				DrawFeTwinkle__Fii((*ppCVar8)->MinX + -0xc,X);
				if (*ppCVar8 == &LargeFont) {
					TwinkY = TwinkY + 3;
				}
				DrawFeTwinkle__Fii((*ppCVar8)->MaxX + 4,TwinkY);
			}
			ppCVar8 = ppCVar8 + 6;
			iVar5 = iVar5 + 0x18;
			iVar7 = iVar7 + 1;
		}
		Str_00 = 0x4e5;
		if (FeCurMenu != &FeMainMenu) {
			if ((FeCurMenu == &FeNewP1NameMenu) || (FeCurMenu == &FeNewP2NameMenu)) {
				Str = GetStr__Fi(0x2b2);
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(&MediumFont,0,0xd4,Str,JustCentre,(RECT *)0x0,(uint)WHITER,(uint)WHITEG,
									 (uint)WHITEB);
			}
			Str_00 = 0x4e6;
		}
		PrintSelectBack__FUs(Str_00);
		if ((FeBufferCount != FeMaxBufferCount) && (FeBufferCount < FeMaxBufferCount)) {
			iVar7 = FeBufferCount * 0x18;
			bVar1 = WHITER >> 1;
			bVar1 = WHITEG >> 1;
			bVar1 = WHITEB >> 1;
			iVar5 = FeBufferCount;
			do {
				X = *(int *)((int)&FeBuffer.X + iVar7);
				TwinkY = *(int *)((int)&FeBuffer.Y + iVar7);
				local_80 = *(TXT_JUST *)((int)&FeBuffer.Just + iVar7);
				iVar5 = iVar5 + 1;
				Str = GetStr__Fi(*(int *)((int)&FeBuffer.Str + iVar7));
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(*(CFont **)((int)&FeBuffer.Font + iVar7),X,TwinkY + 8,Str,local_80,&local_58,
									 (uint)bVar1,(uint)bVar1,(uint)bVar1);
				iVar7 = iVar7 + 0x18;
			} while (iVar5 < FeMaxBufferCount);
		}
	}
	___6Dialog(&DStack104,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeNewMenu__FP7FeTable(struct FeTable *Menu /*$a0*/)
 // line 340, offset 0x8013a4a4
	/* begin block 1 */
		// Start line: 341
		// Start offset: 0x8013A4A4
		// Variables:
	// 		struct FeTable *LastMenu; // $v1
	// 		void (*FuncPtr)(); // $v0
	/* end block 1 */
	// End offset: 0x8013A514
	// End Line: 353

	/* begin block 2 */
		// Start line: 707
	/* end block 2 */
	// End Line: 708

void FeNewMenu__FP7FeTable(FeTable *Menu)

{
	FeTable *pFVar1;
	
	if (Menu != &DummyMenu) {
		pFVar1 = Menu;
		if (Menu != &FeMainMenu) {
			pFVar1 = Menu;
			*(FeTable **)&Menu->PrevMenu = FeCurMenu;
			FeCurMenu = pFVar1;
			pFVar1 = FeCurMenu;
		}
		FeCurMenu = pFVar1;
		FeInitBuffer__Fv();
		if (FeCurMenu->Sel == -1) {
			FeCurMenu->Sel = 1;
		}
		(*FeCurMenu->InitFuncPtr)();
		FeMenuDelay = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FePrevMenu__Fv()
 // line 357, offset 0x8013a524
	/* begin block 1 */
		// Start line: 358
		// Start offset: 0x8013A524
		// Variables:
	// 		void (*FuncPtr)(); // $v0
	/* end block 1 */
	// End offset: 0x8013A65C
	// End Line: 414

	/* begin block 2 */
		// Start line: 742
	/* end block 2 */
	// End Line: 743

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FePrevMenu__Fv(void)

{
	if ((FeCurMenu == &FeNewP2ClassMenu) && (LoadedChar != (void *)0x0)) {
		FeNewP2ClassMenu.PrevMenu = &FeNewP1ClassMenu;
	}
	if (FeCurMenu == &FeDifficultyMenu) {
		if (FePlayerNo == 0) {
			if (LoadedChar != (void *)0x0) {
				FeDifficultyMenu.PrevMenu = &FeNewP1ClassMenu;
			}
		}
		else {
			if (PTR_8011b32c != (void *)0x0) {
				FeDifficultyMenu.PrevMenu = &FeNewP2ClassMenu;
			}
		}
	}
	if (FeCurMenu == &FeNewP2ClassMenu) {
		FePlayerNo = FePlayerNo + -1;
		FeNoOfPlayers = FeNoOfPlayers + 1;
	}
	if ((FeCurMenu != &FeMainMenu) && ((FeTable *)FeCurMenu->PrevMenu != (FeTable *)0x0)) {
		FeCurMenu = (FeTable *)FeCurMenu->PrevMenu;
		FeInitBuffer__Fv();
		if (FeCurMenu->Sel == -1) {
			FeCurMenu->Sel = 1;
		}
		(*FeCurMenu->InitFuncPtr)();
		FeMenuDelay = 0;
		PlaySFX__Fi(0x33);
		JustQuitQText = (void *)0x0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeSelUp__Fi(int No /*$a0*/)
 // line 420, offset 0x8013a66c
	/* begin block 1 */
		// Start line: 421
		// Start offset: 0x8013A66C
		// Variables:
	// 		int OldSel; // $a2
	/* end block 1 */
	// End offset: 0x8013A744
	// End Line: 432

	/* begin block 2 */
		// Start line: 871
	/* end block 2 */
	// End Line: 872

void FeSelUp__Fi(int No)

{
	FeTable *pFVar1;
	int iVar2;
	FeTable *pFVar3;
	int iVar4;
	int iVar5;
	
	pFVar1 = FeCurMenu;
	iVar5 = FeCurMenu->Sel;
	No = iVar5 - No;
	FeCurMenu->Sel = No;
	if (No < 0) {
		pFVar1->Sel = No + FeBufferCount;
	}
	iVar2 = FeBufferCount;
	pFVar3 = (&FeBuffer)[FeCurMenu->Sel].MenuPtr;
	pFVar1 = FeCurMenu;
	while (pFVar3 == (FeTable *)0x0) {
		iVar4 = pFVar1->Sel + -1;
		FeCurMenu = pFVar1;
		pFVar1->Sel = iVar4;
		if (iVar4 < 0) {
			pFVar1->Sel = iVar4 + iVar2;
		}
		pFVar3 = (&FeBuffer)[FeCurMenu->Sel].MenuPtr;
		pFVar1 = FeCurMenu;
	}
	FeCurMenu = pFVar1;
	if (iVar5 != pFVar1->Sel) {
		FeCurMenu = pFVar1;
		PlaySFX__Fi(0x32);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeSelDown__Fi(int No /*$a0*/)
 // line 436, offset 0x8013a754
	/* begin block 1 */
		// Start line: 437
		// Start offset: 0x8013A754
		// Variables:
	// 		int OldSel; // $a2
	/* end block 1 */
	// End offset: 0x8013A82C
	// End Line: 449

	/* begin block 2 */
		// Start line: 904
	/* end block 2 */
	// End Line: 905

void FeSelDown__Fi(int No)

{
	FeTable *pFVar1;
	int iVar2;
	FeTable *pFVar3;
	int iVar4;
	int iVar5;
	
	pFVar1 = FeCurMenu;
	iVar2 = FeBufferCount;
	iVar5 = FeCurMenu->Sel;
	No = iVar5 + No;
	FeCurMenu->Sel = No;
	if (iVar2 <= No) {
		pFVar1->Sel = 0;
	}
	iVar2 = FeBufferCount;
	pFVar3 = (&FeBuffer)[FeCurMenu->Sel].MenuPtr;
	pFVar1 = FeCurMenu;
	while (pFVar3 == (FeTable *)0x0) {
		iVar4 = pFVar1->Sel + 1;
		FeCurMenu = pFVar1;
		pFVar1->Sel = iVar4;
		if (iVar2 <= iVar4) {
			pFVar1->Sel = iVar4 - iVar2;
		}
		pFVar3 = (&FeBuffer)[FeCurMenu->Sel].MenuPtr;
		pFVar1 = FeCurMenu;
	}
	FeCurMenu = pFVar1;
	if (iVar5 != pFVar1->Sel) {
		FeCurMenu = pFVar1;
		PlaySFX__Fi(0x32);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FeGetCursor__Fv()
 // line 457, offset 0x8013a83c
	/* begin block 1 */
		// Start line: 458
		// Start offset: 0x8013A83C
	/* end block 1 */
	// End offset: 0x8013A848
	// End Line: 459

	/* begin block 2 */
		// Start line: 949
	/* end block 2 */
	// End Line: 950

/* WARNING: Unknown calling convention yet parameter storage is locked */

int FeGetCursor__Fv(void)

{
	return FeCurMenu->Sel;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeSelect__Fv()
 // line 462, offset 0x8013a850
	/* begin block 1 */
		// Start line: 463
		// Start offset: 0x8013A850
	/* end block 1 */
	// End offset: 0x8013A890
	// End Line: 465

	/* begin block 2 */
		// Start line: 958
	/* end block 2 */
	// End Line: 959

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeSelect__Fv(void)

{
	PlaySFX__Fi(0x33);
	FeNewMenu__FP7FeTable((&FeBuffer)[FeCurMenu->Sel].MenuPtr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen /*$a0*/)
 // line 474, offset 0x8013a8a0
	/* begin block 1 */
		// Start line: 475
		// Start offset: 0x8013A8A0

		/* begin block 1.1 */
			// Start line: 481
			// Start offset: 0x8013A91C

			/* begin block 1.1.1 */
				// Start line: 482
				// Start offset: 0x8013A934

				/* begin block 1.1.1.1 */
					// Start line: 483
					// Start offset: 0x8013A934

					/* begin block 1.1.1.1.1 */
						// Start line: 487
						// Start offset: 0x8013A974

						/* begin block 1.1.1.1.1.1 */
							// Start line: 487
							// Start offset: 0x8013A974

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 488
								// Start offset: 0x8013A99C
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8013A9FC
							// End Line: 519
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8013AA38
						// End Line: 522
					/* end block 1.1.1.1.1 */
					// End offset: 0x8013AA38
					// End Line: 522
				/* end block 1.1.1.1 */
				// End offset: 0x8013AA38
				// End Line: 522
			/* end block 1.1.1 */
			// End offset: 0x8013AA38
			// End Line: 522
		/* end block 1.1 */
		// End offset: 0x8013AA38
		// End Line: 522
	/* end block 1 */
	// End offset: 0x8013AA58
	// End Line: 526

	/* begin block 2 */
		// Start line: 983
	/* end block 2 */
	// End Line: 984

void FeMainKeyCtrl__FP7CScreen(CScreen *FeScreen)

{
	if (((qtextflag == '\0') && (CDWAIT == (void *)0x0)) && (PauseMode == '\0')) {
		if ((DavesPad & 1U) != 0) {
			FeSelUp__Fi(1);
		}
		if ((DavesPad & 2U) != 0) {
			FeSelDown__Fi(1);
		}
		if ((DavesPad & 0x50U) != 0) {
			PlaySFX__Fi(0x33);
			if ((FeCurMenu == &FeBackgroundMenu) && (FeBackgroundMenu.Sel == 3)) {
				InitQTextMsg__Fi(0x10a);
			}
			else {
				if ((FeCurMenu == &FeMainMenu) && (FeMainMenu.Sel == 3)) {
					optionsflag = (void *)0x0;
					FeMenuDelay = 0;
					options_pad = who_pressed__Fi(0x50);
					ToggleOptions__Fv();
					while (optionsflag != (void *)0x0) {
						FeCount = VID_GetTick__Fv();
						TSK_Sleep(1);
					}
					FeMenuDelay = 0;
				}
				else {
					FeNewMenu__FP7FeTable((&FeBuffer)[FeCurMenu->Sel].MenuPtr);
				}
			}
		}
		if ((DavesPad & 0x100U) != 0) {
			FePrevMenu__Fv();
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitDummyMenu__Fv()
 // line 531, offset 0x8013aa68
	/* begin block 1 */
		// Start line: 532
		// Start offset: 0x8013AA68
	/* end block 1 */
	// End offset: 0x8013AA68
	// End Line: 532

	/* begin block 2 */
		// Start line: 1098
	/* end block 2 */
	// End Line: 1099

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitDummyMenu__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct /*$a0*/)
 // line 538, offset 0x8013aa70
	/* begin block 1 */
		// Start line: 539
		// Start offset: 0x8013AA70
	/* end block 1 */
	// End offset: 0x8013AB90
	// End Line: 579

	/* begin block 2 */
		// Start line: 1111
	/* end block 2 */
	// End Line: 1112

void InitFrontEnd__FP9FE_CREATE(FE_CREATE *CreateStruct)

{
	char *__src;
	TASK *pTVar1;
	
	FeNoOfPlayers = 0;
	FePlayerNo = 0;
	CStruct = CreateStruct;
	FeEnterLang = LANG_GetLang__Fv();
	PTR_8011b32c = (void *)0x0;
	LoadedChar = (void *)0x0;
	currlevel = '\0';
	if (FeIsAVirgin != '\0') {
		__src = GetStr__Fi(0x312);
		strcpy(FePlayerName,__src);
		__src = GetStr__Fi(0x313);
		strcpy(&DAT_800ce303,__src);
		FeIsAVirgin = '\0';
	}
	FeBackX = 8;
	FeBackY = 0x20;
	FeBackW = 0x140;
	UCHAR_00h_8011b39d = '\x01';
	FePlayerNameFlag = '\x01';
	FeBackH = 0x80;
	FeFlag = '\x01';
	gbMaxPlayers = '\0';
	gbActivePlayers = '\0';
	plr[0].plractive = '\0';
	plr[1].plractive = '\0';
	gbRunGame = '\0';
	PauseMode = '\0';
	qtextflag = '\0';
	pTVar1 = TSK_AddTask(0,FrontEndTask__FP4TASK,0x1000,0);
	if (pTVar1 == (TASK *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/FE.CPP",0x241);
	}
	memset(&UniqueItemFlag,0,0x80);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeInitMainMenu__Fv()
 // line 595, offset 0x8013aba4
	/* begin block 1 */
		// Start line: 596
		// Start offset: 0x8013ABA4
	/* end block 1 */
	// End offset: 0x8013AC10
	// End Line: 609

	/* begin block 2 */
		// Start line: 1249
	/* end block 2 */
	// End Line: 1250

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeInitMainMenu__Fv(void)

{
	cardondelay = 5;
	AlertTxt = 0;
	if ((undefined *)MemCardActive == &DAT_00000001) {
		MemcardOFF__Fv();
	}
	FeAddTable__FP11FeMenuTablei(FeMainMenuTable,5);
	JustQuitQText = (void *)0x0;
	FeBackX = 8;
	FeBackY = 0x20;
	FeBackW = 0x140;
	FeBackH = 0x80;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeInitNewGameMenu__Fv()
 // line 625, offset 0x8013ac20
	/* begin block 1 */
		// Start line: 626
		// Start offset: 0x8013AC20
	/* end block 1 */
	// End offset: 0x8013ACA0
	// End Line: 646

	/* begin block 2 */
		// Start line: 1316
	/* end block 2 */
	// End Line: 1317

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeInitNewGameMenu__Fv(void)

{
	LANG_TYPE LVar1;
	
	LVar1 = LANG_GetLang__Fv();
	if (FeEnterLang != LVar1) {
		FeEnterLang = LANG_GetLang__Fv();
		FePlayerName[0] = '\0';
		DAT_800ce303 = 0;
		UCHAR_00h_8011b39d = '\x01';
		FePlayerNameFlag = '\x01';
	}
	FeAddTable__FP11FeMenuTablei(FeNewGameMenuTable,3);
	FeBackX = 0xc;
	FeBackY = 0x20;
	FeBackW = 0xa0;
	FeBackH = 0x80;
	FeChrClass[0] = -1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeNewGameMenuCtrl__Fv()
 // line 650, offset 0x8013acb0
	/* begin block 1 */
		// Start line: 651
		// Start offset: 0x8013ACB0
	/* end block 1 */
	// End offset: 0x8013AE54
	// End Line: 713

	/* begin block 2 */
		// Start line: 1375
	/* end block 2 */
	// End Line: 1376

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeNewGameMenuCtrl__Fv(void)

{
	CPad *this;
	
	if (((qtextflag == '\0') && (CDWAIT == (void *)0x0)) && (PauseMode == '\0')) {
		this = PAD_GetPad__FiUc(0,'\0');
		FePadInTab = CheckActive__4CPad(this);
		this = PAD_GetPad__FiUc(1,'\0');
		UCHAR_00h_8011b389 = CheckActive__4CPad(this);
		if (FePadInTab == '\0') {
			FeBufferCount = 1;
			FeCurMenu->Sel = 1;
		}
		else {
			if (UCHAR_00h_8011b389 == '\0') {
				FeBufferCount = 2;
				FeCurMenu->Sel = 1;
			}
			else {
				FeBufferCount = 3;
			}
		}
		FeDrawChrClass__Fv();
		if (FePadInTab != '\0') {
			if ((DavesPad & 1U) != 0) {
				FeSelUp__Fi(1);
			}
			if ((DavesPad & 2U) != 0) {
				FeSelDown__Fi(1);
			}
			if ((DavesPad & 0x50U) != 0) {
				FeNoOfPlayers = ZEXT14(FeCurMenu->Sel != 1);
				FePlayerNo = 0;
				PlaySFX__Fi(0x33);
				FeNewMenu__FP7FeTable((&FeBuffer)[FeCurMenu->Sel].MenuPtr);
			}
			if ((DavesPad & 0x100U) != 0) {
				FePrevMenu__Fv();
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeInitPlayer1ClassMenu__Fv()
 // line 731, offset 0x8013ae64
	/* begin block 1 */
		// Start line: 732
		// Start offset: 0x8013AE64
	/* end block 1 */
	// End offset: 0x8013AED8
	// End Line: 747

	/* begin block 2 */
		// Start line: 1547
	/* end block 2 */
	// End Line: 1548

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeInitPlayer1ClassMenu__Fv(void)

{
	LoadedChar = (void *)0x0;
	if (MemCardActive != (void *)0x0) {
		MemcardOFF__Fv();
	}
	FePlayerClassMenuTable[1].MenuPtr = &FeNewP1NameMenu;
	FePlayerClassMenuTable[2].MenuPtr = &FeNewP1NameMenu;
	FePlayerClassMenuTable[3].MenuPtr = &FeNewP1NameMenu;
	FeAddTable__FP11FeMenuTablei(FePlayerClassMenuTable,5);
	FeBackX = 0xc;
	FeBackY = 0x20;
	FeBackW = 0xa0;
	FeBackH = 0x80;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeInitPlayer2ClassMenu__Fv()
 // line 750, offset 0x8013aee8
	/* begin block 1 */
		// Start line: 751
		// Start offset: 0x8013AEE8
	/* end block 1 */
	// End offset: 0x8013AF5C
	// End Line: 766

	/* begin block 2 */
		// Start line: 1591
	/* end block 2 */
	// End Line: 1592

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeInitPlayer2ClassMenu__Fv(void)

{
	PTR_8011b32c = (void *)0x0;
	if (MemCardActive != (void *)0x0) {
		MemcardOFF__Fv();
	}
	FePlayerClassMenuTable[1].MenuPtr = &FeNewP2NameMenu;
	FePlayerClassMenuTable[2].MenuPtr = &FeNewP2NameMenu;
	FePlayerClassMenuTable[3].MenuPtr = &FeNewP2NameMenu;
	FeAddTable__FP11FeMenuTablei(FePlayerClassMenuTable,5);
	FeBackX = 0xc;
	FeBackY = 0x20;
	FeBackW = 0xa0;
	FeBackH = 0x80;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FePlayerClassMenuCtrl__Fv()
 // line 770, offset 0x8013af6c
	/* begin block 1 */
		// Start line: 771
		// Start offset: 0x8013AF6C
	/* end block 1 */
	// End offset: 0x8013AFA4
	// End Line: 774

	/* begin block 2 */
		// Start line: 1633
	/* end block 2 */
	// End Line: 1634

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FePlayerClassMenuCtrl__Fv(void)

{
	FeChrClass[FePlayerNo] = FeCurMenu->Sel + -1;
	FeMainKeyCtrl__FP7CScreen((CScreen *)0x0);
	FeDrawChrClass__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeDrawChrClass__Fv()
 // line 778, offset 0x8013afb4
	/* begin block 1 */
		// Start line: 779
		// Start offset: 0x8013AFB4
		// Variables:
	// 		struct Dialog FeBack; // stack offset -80
	// 		struct RECT FeRect; // stack offset -64
	// 		char TempStr[4]; // stack offset -56

		/* begin block 1.1 */
			// Start line: 779
			// Start offset: 0x8013AFB4

			/* begin block 1.1.1 */
				// Start line: 786
				// Start offset: 0x8013B038

				/* begin block 1.1.1.1 */
					// Start line: 787
					// Start offset: 0x8013B038
				/* end block 1.1.1.1 */
				// End offset: 0x8013B038
				// End Line: 787

				/* begin block 1.1.1.2 */
					// Start line: 789
					// Start offset: 0x8013B038
				/* end block 1.1.1.2 */
				// End offset: 0x8013B038
				// End Line: 789

				/* begin block 1.1.1.3 */
					// Start line: 791
					// Start offset: 0x8013B03C
				/* end block 1.1.1.3 */
				// End offset: 0x8013B03C
				// End Line: 791

				/* begin block 1.1.1.4 */
					// Start line: 794
					// Start offset: 0x8013B05C
				/* end block 1.1.1.4 */
				// End offset: 0x8013B05C
				// End Line: 794
			/* end block 1.1.1 */
			// End offset: 0x8013B05C
			// End Line: 794
		/* end block 1.1 */
		// End offset: 0x8013B05C
		// End Line: 794
	/* end block 1 */
	// End offset: 0x8013B40C
	// End Line: 829

	/* begin block 2 */
		// Start line: 1650
	/* end block 2 */
	// End Line: 1651

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeDrawChrClass__Fv(void)

{
	char *Str;
	int iVar1;
	int Frm;
	uint G;
	uint R;
	Dialog DStack80;
	RECT RStack64;
	undefined2 local_38 [8];
	
	__6Dialog(&DStack80);
	local_38[0] = DAT_8011b340;
	iVar1 = FeChrClass[FePlayerNo];
	if (iVar1 == 1) {
		Frm = 0x6c;
	}
	else {
		if (iVar1 < 2) {
			Frm = 0x6e;
			if (iVar1 != 0) {
				Frm = 0x6b;
			}
		}
		else {
			Frm = 0x6d;
			if (iVar1 != 2) {
				Frm = 0x6b;
			}
		}
	}
	PrintFt4__7TextDatiiiiii(FeTData,Frm,0x24,0x32,0,0xff,0);
	if ((FeChrClass[FePlayerNo] != -1) && (FeChrClass[FePlayerNo] != 3)) {
		RStack64.x = 0xac;
		RStack64.y = 0x2b;
		RStack64.w = 0x80;
		RStack64.h = 0x80;
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0,0x12,FePlayerName + FePlayerNo * 0xb,JustCentre,&RStack64,(uint)GOLDR,
							 (uint)GOLDG,(uint)GOLDB);
		Str = GetStr__Fi(0x245);
		R = (uint)WHITER;
		G = (uint)WHITEG;
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,0x27,Str,JustLeft,&RStack64,R,G,G);
		if (FeChrClass[FePlayerNo] != -1) {
			sprintf((char *)local_38,(char *)&PTR_DAT_8011b344,1);
		}
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0,0x27,(char *)local_38,JustRight,&RStack64,R,G,G);
		Str = GetStr__Fi(0x419);
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,0x34,Str,JustLeft,&RStack64,R,G,G);
		if (FeChrClass[FePlayerNo] != -1) {
			sprintf((char *)local_38,(char *)&PTR_DAT_8011b344,StrengthTbl[FeChrClass[FePlayerNo]]);
		}
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0,0x34,(char *)local_38,JustRight,&RStack64,R,G,G);
		Str = GetStr__Fi(0x26f);
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,0x41,Str,JustLeft,&RStack64,R,G,G);
		if (FeChrClass[FePlayerNo] != -1) {
			sprintf((char *)local_38,(char *)&PTR_DAT_8011b344,MagicTbl[FeChrClass[FePlayerNo]]);
		}
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0,0x41,(char *)local_38,JustRight,&RStack64,R,G,G);
		Str = GetStr__Fi(0xff);
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,0x4e,Str,JustLeft,&RStack64,R,G,G);
		if (FeChrClass[FePlayerNo] != -1) {
			sprintf((char *)local_38,(char *)&PTR_DAT_8011b344,DexterityTbl[FeChrClass[FePlayerNo]]);
		}
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0,0x4e,(char *)local_38,JustRight,&RStack64,R,G,G);
		Str = GetStr__Fi(0x4b7);
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,0x5b,Str,JustLeft,&RStack64,R,G,G);
		if (FeChrClass[FePlayerNo] != -1) {
			sprintf((char *)local_38,(char *)&PTR_DAT_8011b344,VitalityTbl[FeChrClass[FePlayerNo]]);
		}
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0,0x5b,(char *)local_38,JustRight,&RStack64,R,G,G);
	}
	___6Dialog(&DStack80,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeInitNewP1NameMenu__Fv()
 // line 918, offset 0x8013b43c
	/* begin block 1 */
		// Start line: 919
		// Start offset: 0x8013B43C
	/* end block 1 */
	// End offset: 0x8013B488
	// End Line: 929

	/* begin block 2 */
		// Start line: 1938
	/* end block 2 */
	// End Line: 1939

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeInitNewP1NameMenu__Fv(void)

{
	FeAddNameTable__FPUci(FeNameEngMenuTable,0x28);
	plr[0]._pLevel = '\x01';
	plr[1]._pLevel = '\x01';
	FeBackX = 0xc;
	FeBackY = 0x20;
	FeBackW = 0xa0;
	FeBackH = 0x80;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeInitNewP2NameMenu__Fv()
 // line 932, offset 0x8013b498
	/* begin block 1 */
		// Start line: 933
		// Start offset: 0x8013B498
	/* end block 1 */
	// End offset: 0x8013B4DC
	// End Line: 941

	/* begin block 2 */
		// Start line: 1969
	/* end block 2 */
	// End Line: 1970

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeInitNewP2NameMenu__Fv(void)

{
	FeAddNameTable__FPUci(FeNameEngMenuTable,0x28);
	plr[1]._pLevel = '\x01';
	FeBackX = 0xc;
	FeBackY = 0x20;
	FeBackW = 0xa0;
	FeBackH = 0x80;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeNewNameMenuCtrl__Fv()
 // line 945, offset 0x8013b4ec
	/* begin block 1 */
		// Start line: 946
		// Start offset: 0x8013B4EC

		/* begin block 1.1 */
			// Start line: 981
			// Start offset: 0x8013B688

			/* begin block 1.1.1 */
				// Start line: 986
				// Start offset: 0x8013B6B0

				/* begin block 1.1.1.1 */
					// Start line: 1005
					// Start offset: 0x8013B740

					/* begin block 1.1.1.1.1 */
						// Start line: 1006
						// Start offset: 0x8013B758

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1022
							// Start offset: 0x8013B80C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1035
								// Start offset: 0x8013B8E4

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1035
									// Start offset: 0x8013B8E4

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1045
										// Start offset: 0x8013B96C

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 1054
											// Start offset: 0x8013B9B4

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 1055
												// Start offset: 0x8013B9E4

												/* begin block 1.1.1.1.1.1.1.1.1.1.1.1 */
													// Start line: 1056
													// Start offset: 0x8013B9E4

													/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
														// Start line: 1059
														// Start offset: 0x8013BA44
														// Variables:
													// 		char asd[2]; // stack offset -40
													/* end block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
													// End offset: 0x8013BA44
													// End Line: 1061
												/* end block 1.1.1.1.1.1.1.1.1.1.1.1 */
												// End offset: 0x8013BA44
												// End Line: 1061
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x8013BA44
											// End Line: 1061
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x8013BA94
										// End Line: 1070
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8013BA94
									// End Line: 1070
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8013BA94
								// End Line: 1070
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8013BA94
							// End Line: 1070
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8013BA94
						// End Line: 1070
					/* end block 1.1.1.1.1 */
					// End offset: 0x8013BA94
					// End Line: 1070
				/* end block 1.1.1.1 */
				// End offset: 0x8013BA94
				// End Line: 1070
			/* end block 1.1.1 */
			// End offset: 0x8013BA94
			// End Line: 1070
		/* end block 1.1 */
		// End offset: 0x8013BA94
		// End Line: 1070
	/* end block 1 */
	// End offset: 0x8013BA9C
	// End Line: 1075

	/* begin block 2 */
		// Start line: 1999
	/* end block 2 */
	// End Line: 2000

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeNewNameMenuCtrl__Fv(void)

{
	size_t sVar1;
	int psfx;
	FeTable *Menu;
	int iVar2;
	char local_28;
	undefined local_27;
	
	Menu = FeCurMenu;
	if (qtextflag != '\0') {
		return;
	}
	if (CDWAIT != (void *)0x0) {
		return;
	}
	if (PauseMode != '\0') {
		return;
	}
	if ((DavesPad & 4U) != 0) {
		iVar2 = FeCurMenu->Sel;
		psfx = iVar2 + -1;
		FeCurMenu->Sel = psfx;
		if (psfx == (psfx / 10) * 10) {
			Menu->Sel = iVar2 + 9;
		}
		PlaySFX__Fi(0x32);
	}
	Menu = FeCurMenu;
	if ((DavesPad & 8U) != 0) {
		psfx = FeCurMenu->Sel;
		FeCurMenu->Sel = psfx + 1;
		if (((psfx + 1) / 10) * 10 == psfx) {
			Menu->Sel = psfx + -9;
		}
		PlaySFX__Fi(0x32);
	}
	Menu = FeCurMenu;
	if ((DavesPad & 1U) != 0) {
		iVar2 = FeCurMenu->Sel;
		psfx = iVar2 + -10;
		FeCurMenu->Sel = psfx;
		if (psfx < 1) {
			Menu->Sel = iVar2 + 0x1e;
		}
		PlaySFX__Fi(0x32);
	}
	Menu = FeCurMenu;
	if ((DavesPad & 2U) != 0) {
		iVar2 = FeCurMenu->Sel;
		psfx = iVar2 + 10;
		FeCurMenu->Sel = psfx;
		if (0x28 < psfx) {
			Menu->Sel = iVar2 + -0x1e;
		}
		PlaySFX__Fi(0x32);
	}
	if ((DavesPad & 0x100U) != 0) {
		FePrevMenu__Fv();
		goto LAB_8013ba94;
	}
	if ((DavesPad & 0x10U) != 0) {
		sVar1 = strlen(FePlayerName + FePlayerNo * 0xb);
		if (sVar1 == 0) {
			PlaySFX__Fi(0x3d3);
		}
		else {
			PlaySFX__Fi(0x33);
			if (FeNoOfPlayers < 1) {
				Menu = &FeDifficultyMenu;
			}
			else {
				Menu = &FeNewP2ClassMenu;
				FePlayerNo = FePlayerNo + 1;
				FeNoOfPlayers = FeNoOfPlayers + -1;
			}
			FeNewMenu__FP7FeTable(Menu);
		}
	}
	if ((DavesPad & 0x40U) == 0) goto LAB_8013ba94;
	if (((&FeBuffer)[FeCurMenu->Sel].Str == 0x107b) || ((&FeBuffer)[FeCurMenu->Sel].Str == 0x107d)) {
		sVar1 = strlen(FePlayerName + FePlayerNo * 0xb);
		psfx = 0x33;
		if (sVar1 == 0) goto LAB_8013b800;
	}
	else {
		sVar1 = strlen(FePlayerName + FePlayerNo * 0xb);
		psfx = 0x33;
		if (9 < sVar1) {
LAB_8013b800:
			psfx = 0x3d3;
		}
	}
	PlaySFX__Fi(psfx);
	if ((&FeBuffer)[FeCurMenu->Sel].Str == 0x107b) {
		if ((&FePlayerNameFlag)[FePlayerNo] != '\0') {
			FePlayerName[FePlayerNo * 0xb] = '\0';
			(&FePlayerNameFlag)[FePlayerNo] = '\0';
		}
		sVar1 = strlen(FePlayerName + FePlayerNo * 0xb);
		if (sVar1 != 0) {
			psfx = FePlayerNo * 0xb;
			sVar1 = strlen(FePlayerName + psfx);
			(FePlayerName + psfx)[sVar1 - 1] = '\0';
		}
	}
	else {
		if ((&FeBuffer)[FeCurMenu->Sel].Str == 0x107d) {
			sVar1 = strlen(FePlayerName + FePlayerNo * 0xb);
			if (sVar1 != 0) {
				if (FeNoOfPlayers < 1) {
					FeNewMenu__FP7FeTable(&FeDifficultyMenu);
				}
				else {
					FePlayerNo = FePlayerNo + 1;
					FeNoOfPlayers = FeNoOfPlayers + -1;
					FeNewMenu__FP7FeTable(&FeNewP2ClassMenu);
				}
			}
		}
		else {
			if ((&FePlayerNameFlag)[FePlayerNo] != '\0') {
				FePlayerName[FePlayerNo * 0xb] = '\0';
				(&FePlayerNameFlag)[FePlayerNo] = '\0';
			}
			sVar1 = strlen(FePlayerName + FePlayerNo * 0xb);
			psfx = 0x3d3;
			if (sVar1 < 10) {
				if ((&FeBuffer)[FeCurMenu->Sel].Str == 0x105e) {
					strcat(FePlayerName + FePlayerNo * 0xb,(char *)&DAT_8011b340);
					goto LAB_8013ba94;
				}
				local_27 = 0;
				local_28 = (char)(&FeBuffer)[FeCurMenu->Sel].Str;
				strcat(FePlayerName + FePlayerNo * 0xb,&local_28);
				psfx = 0x33;
			}
			PlaySFX__Fi(psfx);
		}
	}
LAB_8013ba94:
	FeDrawChrClass__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeCopyPlayerInfoForReturn__Fv()
 // line 1081, offset 0x8013bab4
	/* begin block 1 */
		// Start line: 1082
		// Start offset: 0x8013BAB4

		/* begin block 1.1 */
			// Start line: 1082
			// Start offset: 0x8013BAB4
			// Variables:
		// 		int Loop; // $s0

			/* begin block 1.1.1 */
				// Start line: 1085
				// Start offset: 0x8013BAF4

				/* begin block 1.1.1.1 */
					// Start line: 1087
					// Start offset: 0x8013BB08

					/* begin block 1.1.1.1.1 */
						// Start line: 1088
						// Start offset: 0x8013BB20
					/* end block 1.1.1.1.1 */
					// End offset: 0x8013BB20
					// End Line: 1089

					/* begin block 1.1.1.1.2 */
						// Start line: 1095
						// Start offset: 0x8013BB68
						// Variables:
					// 		int i; // $v0
					/* end block 1.1.1.1.2 */
					// End offset: 0x8013BB94
					// End Line: 1104
				/* end block 1.1.1.1 */
				// End offset: 0x8013BB94
				// End Line: 1104
			/* end block 1.1.1 */
			// End offset: 0x8013BB94
			// End Line: 1104
		/* end block 1.1 */
		// End offset: 0x8013BBA8
		// End Line: 1107
	/* end block 1 */
	// End offset: 0x8013BBA8
	// End Line: 1107

	/* begin block 2 */
		// Start line: 2293
	/* end block 2 */
	// End Line: 2294

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeCopyPlayerInfoForReturn__Fv(void)

{
	FE_PLR *pFVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	int PadNum;
	int iVar5;
	int iVar6;
	
	iVar2 = -0x7ff25962;
	iVar6 = -0x7ff25951;
	PadNum = 0;
	iVar5 = 0;
	CStruct->NumOfPlayers = FePlayerNo + 1;
	while (PadNum <= FePlayerNo) {
		iVar3 = 0x10;
		if ((&LoadedChar)[PadNum] == (void *)0x0) {
			pFVar1 = CStruct->Plrs;
			CStruct->Plrs[PadNum].Class = FeChrClass[PadNum];
			strcpy((char *)(pFVar1 + PadNum),FePlayerName + iVar5);
			PAD_GetPad__FiUc(PadNum,'\0');
		}
		else {
			puVar4 = (undefined *)(iVar2 + 0x10);
			do {
				*puVar4 = 0;
				iVar3 = iVar3 + -1;
				puVar4 = puVar4 + -1;
			} while (-1 < iVar3);
			iVar3 = 9;
			puVar4 = (undefined *)(iVar6 + 9);
			do {
				*puVar4 = 0;
				iVar3 = iVar3 + -1;
				puVar4 = puVar4 + -1;
			} while (-1 < iVar3);
		}
		iVar6 = iVar6 + 0x19e8;
		iVar2 = iVar2 + 0x19e8;
		iVar5 = iVar5 + 0xb;
		PadNum = PadNum + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeEnterGame__Fv()
 // line 1113, offset 0x8013bbc8
	/* begin block 1 */
		// Start line: 1114
		// Start offset: 0x8013BBC8
	/* end block 1 */
	// End offset: 0x8013BBE0
	// End Line: 1119

	/* begin block 2 */
		// Start line: 2375
	/* end block 2 */
	// End Line: 2376

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeEnterGame__Fv(void)

{
	FeFlag = '\x02';
	FeCopyPlayerInfoForReturn__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeInitLoadMemcardSelect__Fv()
 // line 1134, offset 0x8013bbf0
	/* begin block 1 */
		// Start line: 1135
		// Start offset: 0x8013BBF0
	/* end block 1 */
	// End offset: 0x8013BC60
	// End Line: 1150

	/* begin block 2 */
		// Start line: 2423
	/* end block 2 */
	// End Line: 2424

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeInitLoadMemcardSelect__Fv(void)

{
	fileinfoflag = (void *)0x0;
	if (MemCardActive == (void *)0x0) {
		cardondelay = 5;
	}
	INT_8011b204 = 1;
	card_active = 1;
	FeBackX = 8;
	FeBackY = 0x20;
	FeBackW = 0x140;
	FeBackH = 0xa0;
	FeAddTable__FP11FeMenuTablei(FeMemcardMenuTable,3);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeInitLoadChar1Menu__Fv()
 // line 1153, offset 0x8013bc70
	/* begin block 1 */
		// Start line: 1154
		// Start offset: 0x8013BC70
	/* end block 1 */
	// End offset: 0x8013BCC8
	// End Line: 1162

	/* begin block 2 */
		// Start line: 2463
	/* end block 2 */
	// End Line: 2464

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeInitLoadChar1Menu__Fv(void)

{
	FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(0,0,JustCentre,0x3b2,(FeTable *)0x0,&MediumFont);
	current_card = 0;
	ActivateMemcard__Fii(1,0);
	CharacterBlockLoaded = (void *)0x0;
	fileselect = 0;
	fileinfoflag = &DAT_00000001;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeInitLoadChar2Menu__Fv()
 // line 1165, offset 0x8013bcd8
	/* begin block 1 */
		// Start line: 1166
		// Start offset: 0x8013BCD8
	/* end block 1 */
	// End offset: 0x8013BD34
	// End Line: 1174

	/* begin block 2 */
		// Start line: 2489
	/* end block 2 */
	// End Line: 2490

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeInitLoadChar2Menu__Fv(void)

{
	FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(0,0,JustCentre,0x3b2,(FeTable *)0x0,&MediumFont);
	current_card = 1;
	ActivateMemcard__Fii(0,1);
	CharacterBlockLoaded = (void *)0x0;
	fileselect = 0;
	fileinfoflag = &DAT_00000001;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeInitDifficultyMenu__Fv()
 // line 1190, offset 0x8013bd48
	/* begin block 1 */
		// Start line: 1191
		// Start offset: 0x8013BD48
		// Variables:
	// 		int MaxLevel; // $a0
	/* end block 1 */
	// End offset: 0x8013BDDC
	// End Line: 1214

	/* begin block 2 */
		// Start line: 2541
	/* end block 2 */
	// End Line: 2542

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeInitDifficultyMenu__Fv(void)

{
	char cVar1;
	
	FeAddTable__FP11FeMenuTablei(FeDifficultyMenuTable,4);
	cVar1 = plr[0]._pLevel;
	if ((FePlayerNo != 0) && (cVar1 = plr[0]._pLevel, plr[1]._pLevel < plr[0]._pLevel)) {
		cVar1 = plr[1]._pLevel;
	}
	FeCurMenu->Sel = 1;
	FeBufferCount = 2;
	if (('\x13' < cVar1) && (FeBufferCount = 3, '\x1d' < cVar1)) {
		FeBufferCount = 4;
	}
	FeBackX = 0xc;
	FeBackY = 0x20;
	FeBackW = 0xa0;
	FeBackH = 0x80;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeDifficultyMenuCtrl__Fv()
 // line 1218, offset 0x8013bdec
	/* begin block 1 */
		// Start line: 1219
		// Start offset: 0x8013BDEC
	/* end block 1 */
	// End offset: 0x8013BEC0
	// End Line: 1240

	/* begin block 2 */
		// Start line: 2603
	/* end block 2 */
	// End Line: 2604

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeDifficultyMenuCtrl__Fv(void)

{
	if (((qtextflag == '\0') && (CDWAIT == (void *)0x0)) && (PauseMode == '\0')) {
		gnDifficulty = FeCurMenu->Sel + -1;
		if ((DavesPad & 1U) != 0) {
			FeSelUp__Fi(1);
		}
		if ((DavesPad & 2U) != 0) {
			FeSelDown__Fi(1);
		}
		if ((DavesPad & 0x50U) == 0) {
			if ((DavesPad & 0x100U) != 0) {
				FePrevMenu__Fv();
			}
		}
		else {
			PlaySFX__Fi(0x33);
			FeEnterGame__Fv();
		}
		FeDrawChrClass__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeInitBackgroundMenu__Fv()
 // line 1277, offset 0x8013bed0
	/* begin block 1 */
		// Start line: 1278
		// Start offset: 0x8013BED0
	/* end block 1 */
	// End offset: 0x8013BF0C
	// End Line: 1284

	/* begin block 2 */
		// Start line: 2725
	/* end block 2 */
	// End Line: 2726

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeInitBackgroundMenu__Fv(void)

{
	FeAddTable__FP11FeMenuTablei(FeBackgroundMenuTable,4);
	FeBackX = 8;
	FeBackY = 0x20;
	FeBackW = 0x140;
	FeBackH = 0x80;
	BookMenu = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeInitBook1Menu__Fv()
 // line 1287, offset 0x8013bf1c
	/* begin block 1 */
		// Start line: 1288
		// Start offset: 0x8013BF1C
	/* end block 1 */
	// End offset: 0x8013BF5C
	// End Line: 1294

	/* begin block 2 */
		// Start line: 2746
	/* end block 2 */
	// End Line: 2747

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeInitBook1Menu__Fv(void)

{
	FeAddTable__FP11FeMenuTablei(FeBook1MenuTable,5);
	FeBackX = 8;
	FeBackY = 0x20;
	FeBackW = 0x140;
	FeBackH = 0x80;
	BookMenu = 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeInitBook2Menu__Fv()
 // line 1297, offset 0x8013bf6c
	/* begin block 1 */
		// Start line: 1298
		// Start offset: 0x8013BF6C
	/* end block 1 */
	// End offset: 0x8013BFAC
	// End Line: 1304

	/* begin block 2 */
		// Start line: 2767
	/* end block 2 */
	// End Line: 2768

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeInitBook2Menu__Fv(void)

{
	FeAddTable__FP11FeMenuTablei(FeBook2MenuTable,6);
	FeBackX = 8;
	FeBackY = 0x20;
	FeBackW = 0x140;
	FeBackH = 0x80;
	BookMenu = 2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeBackBookMenuCtrl__Fv()
 // line 1308, offset 0x8013bfbc
	/* begin block 1 */
		// Start line: 1309
		// Start offset: 0x8013BFBC
	/* end block 1 */
	// End offset: 0x8013C1EC
	// End Line: 1348

	/* begin block 2 */
		// Start line: 2792
	/* end block 2 */
	// End Line: 2793

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeBackBookMenuCtrl__Fv(void)

{
	if (((qtextflag == '\0') && (CDWAIT == (void *)0x0)) && (PauseMode == '\0')) {
		if ((DavesPad & 1U) != 0) {
			FeSelUp__Fi(1);
		}
		if ((DavesPad & 2U) != 0) {
			FeSelDown__Fi(1);
		}
		if ((DavesPad & 0x50U) != 0) {
			PlaySFX__Fi(0x33);
			if ((BookMenu == 0) && (FeCurMenu->Sel == 3)) {
				InitQTextMsg__Fi(0x10a);
			}
			if (BookMenu == 1) {
				if (FeCurMenu->Sel == 1) {
					InitQTextMsg__Fi(0x108);
				}
				if (FeCurMenu->Sel == 2) {
					InitQTextMsg__Fi(0x10c);
				}
				if (FeCurMenu->Sel == 3) {
					InitQTextMsg__Fi(0x106);
				}
				if (FeCurMenu->Sel == 4) {
					InitQTextMsg__Fi(0x104);
				}
			}
			if (BookMenu == 2) {
				if (FeCurMenu->Sel == 1) {
					InitQTextMsg__Fi(0x109);
				}
				if (FeCurMenu->Sel == 2) {
					InitQTextMsg__Fi(0x103);
				}
				if (FeCurMenu->Sel == 3) {
					InitQTextMsg__Fi(0x105);
				}
				if (FeCurMenu->Sel == 4) {
					InitQTextMsg__Fi(0x107);
				}
				if (FeCurMenu->Sel == 5) {
					InitQTextMsg__Fi(0x10b);
				}
			}
		}
		if ((DavesPad & 0x100U) != 0) {
			FePrevMenu__Fv();
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlayDemo__Fv()
 // line 1355, offset 0x8013c200
	/* begin block 1 */
		// Start line: 1356
		// Start offset: 0x8013C200
	/* end block 1 */
	// End offset: 0x8013C20C
	// End Line: 1357

	/* begin block 2 */
		// Start line: 2887
	/* end block 2 */
	// End Line: 2888

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlayDemo__Fv(void)

{
	PlayDemoFlag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FadeFEOut__Fv()
 // line 1371, offset 0x8013c214
	/* begin block 1 */
		// Start line: 1372
		// Start offset: 0x8013C214
	/* end block 1 */
	// End offset: 0x8013C2BC
	// End Line: 1388

	/* begin block 2 */
		// Start line: 2918
	/* end block 2 */
	// End Line: 2919

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FadeFEOut__Fv(void)

{
	void *pvVar1;
	
	music_fade__Fv();
	pvVar1 = PaletteFadeOut__Fi(8);
	if (pvVar1 != (void *)0x0) {
		while (pvVar1 = GetFadeState__Fv(), pvVar1 != (void *)0x0) {
			if (fadeval != 0) {
				if (((FeCurMenu == &FeDifficultyMenu) || (FeCurMenu == &FeNewP1ClassMenu)) ||
					 (FeCurMenu == &FeNewP2ClassMenu)) {
					FeDrawChrClass__Fv();
				}
				FeDrawBuffer__Fv();
			}
			TSK_Sleep(1);
		}
	}
	music_stop__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 1420, offset 0x8013c2d8
	/* begin block 1 */
		// Start line: 1421
		// Start offset: 0x8013C2D8
	/* end block 1 */
	// End offset: 0x8013C448
	// End Line: 1476

	/* begin block 2 */
		// Start line: 3016
	/* end block 2 */
	// End Line: 3017

void DrawBackTSK__FP4TASK(TASK *T)

{
	int iVar1;
	
	DrawBackOn = &DAT_00000001;
	TakeDownCutScreen__Fv();
	music_start__Fi(5);
	flamecol = 0;
	while (DrawBackOn != (void *)0x0) {
		if (flamecol < 0x40) {
			flamecol = flamecol + 2;
		}
		if (InCredits == 0) {
			if (JustInCredits == 0) {
				DrawFlameLogo__Fv();
			}
			Display__7CScreeniiii(&CutScr,0x12,0xb,0,fadeval);
		}
		iVar1 = InCredits;
		if ((JustInCredits != 0) && (CDWAIT == (void *)0x0)) {
			JustInCredits = 0;
		}
		if (InCredits == 1) {
			JustInCredits = InCredits;
			InCredits = 0;
			Unload__7CScreen(&CutScr);
			CDWAIT = (void *)iVar1;
			Load__7CScreeniii(&CutScr,0x12,0xb,0);
			CDWAIT = (void *)0x0;
		}
		TSK_Sleep(1);
		TitleFlag = (void *)0x0;
	}
	GM_FinishedUsing__FP7TextDat(FeTData);
	GM_FinishedUsing__FP7TextDat(FlameTData);
	FeTData = (TextDat *)0x0;
	FlameTData = (TextDat *)0x0;
	Unload__7CScreen(&CutScr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeInitMainStuff__FP4TASK(struct TASK *T2 /*$s0*/)
 // line 1484, offset 0x8013c460
	/* begin block 1 */
		// Start line: 1485
		// Start offset: 0x8013C460
	/* end block 1 */
	// End offset: 0x8013C4F8
	// End Line: 1504

	/* begin block 2 */
		// Start line: 3152
	/* end block 2 */
	// End Line: 3153

void FeInitMainStuff__FP4TASK(TASK *T2)

{
	PutUpCutScreen__Fi(10);
	SPU_Init__Fv();
	snd_init__FUl(0);
	SND_LoadBank__Fi(0x11);
	if (FlameTData == (TextDat *)0x0) {
		FlameTData = GM_UseTexData__Fi(0xcc);
	}
	if (FeTData == (TextDat *)0x0) {
		FeTData = GM_UseTexData__Fi(0xcb);
	}
	if (T2 == (TASK *)0x0) {
		FinishProgress__Fv();
		TSK_AddTask(0,DrawBackTSK__FP4TASK,0x800,0);
		TSK_Sleep(1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FrontEndTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 1516, offset 0x8013c50c
	/* begin block 1 */
		// Start line: 1517
		// Start offset: 0x8013C50C
		// Variables:
	// 		int len; // $s0
	// 		int Fefadeval; // $s1
	// 		struct TASK *T2; // $s3
	/* end block 1 */
	// End offset: 0x8013C998
	// End Line: 1715

	/* begin block 2 */
		// Start line: 3228
	/* end block 2 */
	// End Line: 3229

void FrontEndTask__FP4TASK(TASK *T)

{
	int iVar1;
	int iVar2;
	void *pvVar3;
	undefined *puVar4;
	char *Str;
	int iVar5;
	ulong uVar6;
	
	fadeval = 0;
	if (FeAttractMode == 0) {
		FeInitMainStuff__FP4TASK((TASK *)0x0);
		FeAttractMode = 1;
		AttractNo = 6;
	}
	else {
		FinishBootProgress__Fv();
		if (ADirtyFlagThatGaryWillLove != '\0') {
			if ((DirtyVidx != 0) || (DirtyVidY != 0)) {
				VID_SetXYOff__Fii(DirtyVidx,DirtyVidY);
			}
			ADirtyFlagThatGaryWillLove = '\0';
		}
	}
	FeCount = VID_GetTick__Fv();
	FeNewMenu__FP7FeTable(&FeMainMenu);
	FeNoOfPlayers = -1;
	iVar1 = 0;
	while (FeFlag != '\x02') {
		if (PlayDemoFlag != '\0') {
			FeFlag = '\x02';
		}
		ReadPad__Fi(-1);
		if (FeAttractMode == 0) {
			if (0x12 < iVar1) {
				FeDrawBuffer__Fv();
				if (FeCurMenu->CtrlFuncPtr == (_func_31 *)0x0) {
					FeMainKeyCtrl__FP7CScreen((CScreen *)0x0);
				}
				else {
					(*FeCurMenu->CtrlFuncPtr)();
				}
			}
			if (FeCurMenu == &FeMainMenu) {
				if (DavesPad == 0) {
					uVar6 = VID_GetTick__Fv();
					if (AttractMainDelay < uVar6 - FeCount) {
						AttractNo = 0;
						FeAttractMode = 1;
					}
				}
				else {
					FeCount = VID_GetTick__Fv();
				}
			}
			iVar5 = fadeval + 1;
			iVar2 = fadeval + 1;
			if ((0xe < fadeval) && (iVar5 = iVar1, iVar2 = fadeval, iVar1 < 0x1f)) {
				iVar5 = iVar1 + 1;
				iVar2 = fadeval;
			}
		}
		else {
			iVar5 = iVar1;
			iVar2 = fadeval;
			if (PlayDemoFlag == '\0') {
				iVar5 = iVar1;
				iVar2 = fadeval;
				switch(AttractNo) {
				case 0:
					AttractNo = AttractNo + 1;
					FadeFEOut__Fv();
					DrawBackOn = (void *)0x0;
					while (pvVar3 = GetFadeState__Fv(), pvVar3 != (void *)0x0) {
						TSK_Sleep(1);
					}
					fadeval = 0;
					user_start = (void *)0x0;
					iVar5 = 0;
					iVar2 = fadeval;
					break;
				case 1:
					if (user_start == (void *)0x0) {
						play_movie("EACLOGO.MOV");
					}
					AttractNo = AttractNo + 1;
					iVar5 = iVar1;
					iVar2 = fadeval;
					break;
				case 2:
					AttractNo = AttractNo + 1;
					iVar5 = iVar1;
					iVar2 = fadeval;
					break;
				case 3:
					AttractNo = AttractNo + 1;
					iVar5 = iVar1;
					iVar2 = fadeval;
					break;
				case 4:
					FeInitMainStuff__FP4TASK((TASK *)0x0);
					FeCount = VID_GetTick__Fv();
					AttractNo = AttractNo + 1;
					iVar5 = iVar1;
					iVar2 = fadeval;
					break;
				case 5:
					iVar5 = iVar1;
					iVar2 = fadeval;
					if ((CDWAIT == (void *)0x0) &&
						 (puVar4 = (undefined *)IsGameLoading__Fv(), iVar5 = iVar1, iVar2 = fadeval,
						 puVar4 != &DAT_00000001)) {
						Str = GetStr__Fi(0x32e);
						iVar5 = GetStrWidth__5CFontPc(&MediumFont,Str);
						Str = GetStr__Fi(0x32e);
						Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
											(&MediumFont,((int)((0x100U - iVar5) + (0x100U - iVar5 >> 0x1f)) >> 1) + 0x20,
											 0x20,Str,JustLeft,(RECT *)0x0,(uint)WHITER,(uint)WHITEG,(uint)WHITEB);
						if (DavesPad != 0) {
							FeCount = VID_GetTick__Fv();
						}
						if ((DavesPad & 0x10U) == 0) {
							uVar6 = VID_GetTick__Fv();
							iVar5 = iVar1;
							iVar2 = fadeval;
							if (AttractTitleDelay < uVar6 - FeCount) {
								FMVEndPad = -1;
								user_start = (void *)0x0;
								AttractNo = 0;
								AttractTitleDelay = 0x708;
								iVar5 = iVar1;
								iVar2 = fadeval;
							}
						}
						else {
							PlaySFX__Fi(0x33);
							fadeval = 0;
							AttractNo = AttractNo + 1;
							iVar5 = 0;
							iVar2 = fadeval;
						}
					}
					break;
				case 6:
					FeAttractMode = 0;
					AttractNo = 0;
					FMVEndPad = -1;
					FeCount = VID_GetTick__Fv();
					iVar5 = iVar1;
					iVar2 = fadeval;
				}
			}
		}
		fadeval = iVar2;
		TSK_Sleep(1);
		iVar1 = iVar5;
	}
	FadeFEOut__Fv();
	DrawBackOn = (void *)0x0;
	TSK_Sleep(1);
	if (PlayDemoFlag == '\0') {
		AttractNo = 1;
		FeAttractMode = 0;
	}
	FeFlag = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawFeTwinkle__Fii(int TwinkX /*$s4*/, int TwinkY /*$s5*/)
 // line 1723, offset 0x8013c9b8
	/* begin block 1 */
		// Start line: 1724
		// Start offset: 0x8013C9B8
	/* end block 1 */
	// End offset: 0x8013CA6C
	// End Line: 1726

	/* begin block 2 */
		// Start line: 3669
	/* end block 2 */
	// End Line: 3670

void DrawFeTwinkle__Fii(int TwinkX,int TwinkY)

{
	DrawSpinner__FiiUcUcUciiibiT8T8Uc
						(TwinkX,TwinkY,-0x60,'@',0xf0,0x20,0x40,0,&DAT_00000001,0xffff,&DAT_00000001,(void *)0x0
						 ,8);
	DrawSpinner__FiiUcUcUciiibiT8T8Uc
						(TwinkX,TwinkY,-0x60,-0x60,0x40,0x15,0x30,0x28,&DAT_00000001,0xffff,&DAT_00000001,
						 (void *)0x0,8);
	return;
}





