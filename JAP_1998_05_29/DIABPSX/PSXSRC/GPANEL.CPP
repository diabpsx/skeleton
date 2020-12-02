#include "THISDUST.H"
#include "GPANEL.H"


// decompiled code
// original method signature: 
// unsigned int /*$ra*/ GetPal__6GPaneli(struct GPanel *this /*$s0*/, int Frm /*$a1*/)
 // line 212, offset 0x800975cc
	/* begin block 1 */
		// Start line: 213
		// Start offset: 0x800975CC
	/* end block 1 */
	// End offset: 0x800975FC
	// End Line: 227

	/* begin block 2 */
		// Start line: 424
	/* end block 2 */
	// End Line: 425

uint GetPal__6GPaneli(GPanel *this,int Frm)

{
	FRAME_HDR *pFVar1;
	PAL *pPVar2;
	
	pFVar1 = GetFr__7TextDati(this->PanelTData,Frm & 0xffff);
	pPVar2 = GetPal__7TextDati(this->PanelTData,(uint)*(byte *)((int)&pFVar1->X + 2));
	return (uint)*(ushort *)((int)&pPVar2->InVram + 2);
}



// decompiled code
// original method signature: 
// struct GPanel * /*$ra*/ __6GPaneli(struct GPanel *this /*$s1*/, int Ofs /*$s0*/)
 // line 234, offset 0x80097610
	/* begin block 1 */
		// Start line: 235
		// Start offset: 0x80097610
	/* end block 1 */
	// End offset: 0x80097610
	// End Line: 235

	/* begin block 2 */
		// Start line: 468
	/* end block 2 */
	// End Line: 469

GPanel * __6GPaneli(GPanel *this,int Ofs)

{
	TextDat *pTVar1;
	int iVar2;
	
	pTVar1 = GM_UseTexData__Fi(0);
	this->PanelTData = pTVar1;
	this->HealthAnimCount = Ofs + 1;
	this->ManaAnimCount = Ofs + 0x17;
	this->GlobeAnimCount = Ofs + 0xf;
	iVar2 = GetMaxOtPos__7CBlocks();
	this->GPanelOt = iVar2 + -2;
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this /*$s1*/, struct PanelXY *XY /*$s7*/, struct PlayerStruct *Plr /*$a2*/)
 // line 251, offset 0x80097674
	/* begin block 1 */
		// Start line: 252
		// Start offset: 0x80097674
		// Variables:
	// 		int HealthHeight; // $s2
	// 		int ManaHeight; // $s4
	// 		int HealthAnim; // stack offset -56
	// 		int ManaAnim; // stack offset -48
	// 		int BarY; // $s6
	// 		struct POLY_FT4 *Ft4; // $a0
	// 		int X; // $s5
	// 		int Y; // $s3
	// 		int xof; // $s0
	/* end block 1 */
	// End offset: 0x80097AB4
	// End Line: 352

	/* begin block 2 */
		// Start line: 503
	/* end block 2 */
	// End Line: 504

void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(GPanel *this,PanelXY *XY,PlayerStruct *Plr)

{
	int iVar1;
	POLY_FT4 *pPVar2;
	int iVar3;
	int X;
	int Y;
	int iVar4;
	int X_00;
	int Y_00;
	int iVar5;
	
	iVar5 = (Plr->_pHitPoints * 0x2b) / Plr->_pMaxHP;
	iVar1 = this->HealthAnimCount;
	iVar3 = this->ManaAnimCount;
	X_00 = XY->MainX;
	Y = XY->MainY;
	iVar4 = 0;
	if ((0 < Plr->_pMana) && (0 < Plr->_pMaxMana)) {
		iVar4 = (Plr->_pMana * 0x2b) / Plr->_pMaxMana;
	}
	if (0x2b < iVar5) {
		iVar5 = 0x2b;
	}
	if (0x2b < iVar4) {
		iVar4 = 0x2b;
	}
	if (iVar5 < 0) {
		iVar5 = 0;
	}
	if (iVar4 < 0) {
		iVar4 = 0;
	}
	pPVar2 = PrintFt4__7TextDatiiiiii(this->PanelTData,0x36,X_00,Y,0,this->GPanelOt,0);
	pPVar2->r0 = '\x7f';
	pPVar2->g0 = '\x7f';
	pPVar2->b0 = '\x7f';
	pPVar2->code = pPVar2->code & 0xfe | 2;
	pPVar2->tpage = pPVar2->tpage | 0x20;
	pPVar2 = PrintFt4__7TextDatiiiiii(this->PanelTData,0x37,X_00,Y,0,this->GPanelOt,0);
	pPVar2->r0 = '\x7f';
	pPVar2->g0 = '\x7f';
	pPVar2->b0 = '\x7f';
	pPVar2->code = pPVar2->code & 0xfe | 2;
	pPVar2->tpage = pPVar2->tpage | 0x20;
	PrintFt4__7TextDatiiiiii(this->PanelTData,0x31,X_00,Y,XY->FlaskFlip,this->GPanelOt + 1,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0x32,X_00,Y,0,this->GPanelOt,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0x33,X_00,Y,0,this->GPanelOt,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0x34,X_00,Y,0,this->GPanelOt,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0x35,X_00,Y,0,this->GPanelOt,0);
	if (0 < iVar5) {
		Y_00 = Y - (iVar5 + 8);
		X = X_00 + ((-(uint)(XY->FlaskFlip != 0) & 0x18) - 0xb);
		pPVar2 = PrintFt4__7TextDatiiiiii(this->PanelTData,0x38,X,Y_00,XY->FlaskFlip,this->GPanelOt,0);
		pPVar2->r0 = '\x7f';
		pPVar2->g0 = '\0';
		pPVar2->b0 = '\0';
		pPVar2->y2 = pPVar2->y0 + (short)iVar5;
		pPVar2->u2 = pPVar2->u0 + (char)iVar5 + -1;
		pPVar2->y3 = pPVar2->y1 + (short)iVar5;
		pPVar2->u3 = pPVar2->u1 + (char)iVar5 + -1;
		pPVar2->tpage = pPVar2->tpage | 0x20;
		pPVar2->code = pPVar2->code & 0xfc;
		pPVar2 = PrintFt4__7TextDatiiiiii
											 (this->PanelTData,(iVar1 >> 2) + 0x84,X,Y_00,XY->FlaskFlip,this->GPanelOt,0);
		pPVar2->r0 = '\x7f';
		pPVar2->g0 = '\0';
		pPVar2->b0 = '\0';
		pPVar2->code = pPVar2->code & 0xfc;
		pPVar2->tpage = pPVar2->tpage | 0x20;
	}
	if (0 < iVar4) {
		Y = Y - (iVar4 + 8);
		X_00 = X_00 + (-(uint)(XY->FlaskFlip != 0) & 0xfffffffe) + 2;
		pPVar2 = PrintFt4__7TextDatiiiiii(this->PanelTData,0x38,X_00,Y,XY->FlaskFlip,this->GPanelOt,0);
		pPVar2->r0 = '\0';
		pPVar2->g0 = '\0';
		pPVar2->b0 = '\x7f';
		pPVar2->y2 = pPVar2->y0 + (short)iVar4;
		pPVar2->u2 = pPVar2->u0 + (char)iVar4 + -1;
		pPVar2->y3 = pPVar2->y1 + (short)iVar4;
		pPVar2->u3 = pPVar2->u1 + (char)iVar4 + -1;
		pPVar2->tpage = pPVar2->tpage | 0x20;
		pPVar2->code = pPVar2->code & 0xfc;
		pPVar2 = PrintFt4__7TextDatiiiiii
											 (this->PanelTData,(iVar3 >> 2) + 0x8c,X_00,Y,XY->FlaskFlip,this->GPanelOt,0);
		pPVar2->r0 = '\0';
		pPVar2->g0 = '\0';
		pPVar2->b0 = '\x7f';
		pPVar2->code = pPVar2->code & 0xfc;
		pPVar2->tpage = pPVar2->tpage | 0x20;
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ SpdTrimCol__Fs(short col /*$v1*/)
 // line 382, offset 0x80097ae8
	/* begin block 1 */
		// Start line: 383
		// Start offset: 0x80097AE8
	/* end block 1 */
	// End offset: 0x80097B18
	// End Line: 386

	/* begin block 2 */
		// Start line: 847
	/* end block 2 */
	// End Line: 848

uchar SpdTrimCol__Fs(short col)

{
	int iVar1;
	uchar uVar2;
	
	uVar2 = (uchar)col;
	iVar1 = (uint)(ushort)col << 0x10;
	if ((int)((uint)(ushort)col << 0x10) < 0) {
		uVar2 = '\0';
		iVar1 = 0;
	}
	if (0xff < iVar1 >> 0x10) {
		uVar2 = -1;
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this /*$s1*/, struct PanelXY *XY /*$s7*/, struct PlayerStruct *Plr /*stack -56*/)
 // line 389, offset 0x80097b20
	/* begin block 1 */
		// Start line: 390
		// Start offset: 0x80097B20
		// Variables:
	// 		int X; // $s2
	// 		int Y; // $s4
	// 		int Loop; // $s3
	// 		struct POLY_FT4 *Ft4; // $v0
	// 		int Bx; // $s5
	// 		int By; // $s6

		/* begin block 1.1 */
			// Start line: 390
			// Start offset: 0x80097B20

			/* begin block 1.1.1 */
				// Start line: 402
				// Start offset: 0x80097B98
				// Variables:
			// 		struct POLY_G4 *G4; // $s0
			/* end block 1.1.1 */
			// End offset: 0x80097F10
			// End Line: 431
		/* end block 1.1 */
		// End offset: 0x80097F10
		// End Line: 431
	/* end block 1 */
	// End offset: 0x80098218
	// End Line: 479

	/* begin block 2 */
		// Start line: 861
	/* end block 2 */
	// End Line: 862

void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(GPanel *this,PanelXY *XY,PlayerStruct *Plr)

{
	short sVar1;
	ulong *puVar2;
	byte bVar3;
	uchar uVar4;
	POLY_G4 *pPVar5;
	POLY_FT4 *pPVar6;
	int *piVar7;
	int X;
	int X_00;
	int X_01;
	int X_02;
	int iVar8;
	short sVar9;
	int Y;
	
	X_01 = XY->MainX + XY->SpeedBarXOfs;
	Y = XY->MainY + XY->SpeedBarYOfs;
	sVar1 = (short)X_01;
	sVar9 = (short)Y;
	if (_pcurr_inv[sel_data] != -1) {
		SpdCol0 = SpdCol0 + SpdColInc0;
		SpdCol1 = SpdCol1 + SpdColInc1;
		SpdCol2 = SpdCol2 + SpdColInc2;
		SpdCol3 = SpdCol3 + SpdColInc3;
		if (0x40 < SpdCol0) {
			SpdColInc0 = -4;
		}
		if (0x40 < SpdCol1) {
			SpdColInc1 = -4;
		}
		if (0x40 < SpdCol2) {
			SpdColInc2 = -4;
		}
		if (0x40 < SpdCol3) {
			SpdColInc3 = -4;
		}
		if (SpdCol0 < -0x40) {
			SpdColInc0 = 4;
		}
		if (SpdCol1 < -0x40) {
			SpdColInc1 = 4;
		}
		if (SpdCol2 < -0x40) {
			SpdColInc2 = 4;
		}
		if (SpdCol3 < -0x40) {
			SpdColInc3 = 4;
		}
		pPVar5 = PRIM_GetNextPolyG4__Fv();
		*(undefined *)((int)&pPVar5->tag + 3) = 8;
		pPVar5->code = '8';
		piVar7 = _pcurr_inv + sel_data;
		X = *piVar7;
		pPVar5->y0 = sVar9;
		pPVar5->x0 = sVar1 + (short)X * 0x11;
		X = *piVar7;
		pPVar5->y1 = sVar9;
		pPVar5->x1 = sVar1 + (short)X * 0x11 + 0x11;
		X_00 = *piVar7;
		pPVar5->y2 = sVar9 + 0x14;
		X = SpdCol0;
		pPVar5->x2 = sVar1 + (short)X_00 * 0x11;
		X_00 = *piVar7;
		pPVar5->y3 = sVar9 + 0x14;
		pPVar5->x3 = sVar1 + (short)X_00 * 0x11 + 0x11;
		bVar3 = SpdTrimCol__Fs((short)((uint)((X + 0xbf) * 0x10000) >> 0x10));
		pPVar5->r0 = bVar3 >> 1;
		uVar4 = SpdTrimCol__Fs(0);
		pPVar5->g0 = uVar4;
		uVar4 = SpdTrimCol__Fs((short)((uint)((SpdCol0 + 0x80) * 0x10000) >> 0x10));
		pPVar5->b0 = uVar4;
		bVar3 = SpdTrimCol__Fs((short)((uint)((SpdCol1 + 0xbf) * 0x10000) >> 0x10));
		pPVar5->r1 = bVar3 >> 1;
		uVar4 = SpdTrimCol__Fs(0);
		pPVar5->g1 = uVar4;
		uVar4 = SpdTrimCol__Fs((short)((uint)((SpdCol1 + 0x80) * 0x10000) >> 0x10));
		pPVar5->b1 = uVar4;
		bVar3 = SpdTrimCol__Fs((short)((uint)((SpdCol2 + 0xbf) * 0x10000) >> 0x10));
		pPVar5->r2 = bVar3 >> 1;
		uVar4 = SpdTrimCol__Fs(0);
		pPVar5->g2 = uVar4;
		uVar4 = SpdTrimCol__Fs((short)((uint)((SpdCol2 + 0x80) * 0x10000) >> 0x10));
		pPVar5->b2 = uVar4;
		bVar3 = SpdTrimCol__Fs((short)((uint)((SpdCol3 + 0xbf) * 0x10000) >> 0x10));
		pPVar5->r3 = bVar3 >> 1;
		uVar4 = SpdTrimCol__Fs(0);
		pPVar5->g3 = uVar4;
		uVar4 = SpdTrimCol__Fs((short)((uint)((SpdCol3 + 0x80) * 0x10000) >> 0x10));
		pPVar5->b3 = uVar4;
		puVar2 = ThisOt;
		pPVar5->tag = pPVar5->tag & 0xff000000 | ThisOt[this->GPanelOt + -2] & 0xffffff;
		X = sel_data;
		(puVar2 + this->GPanelOt)[-2] =
				 (puVar2 + this->GPanelOt)[-2] & 0xff000000 | (uint)pPVar5 & 0xffffff;
		if ((&_SpdBeltSelFlag)[X] != '\0') {
			DrawSpinner__FiiUcUcUciiibiT8T8Uc
								(X_01 + _pcurr_inv[X] * 0x11 + 5,Y + 0xd,-0x60,'@',0xf0,0x20,0x60,0,(void *)0x0,
								 this->GPanelOt + -1,&DAT_00000001,(void *)0x0,8);
		}
	}
	X_00 = 0;
	PrintFt4__7TextDatiiiiii(this->PanelTData,0x99,X_01,Y,0,this->GPanelOt,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0x9a,X_01,Y,0,this->GPanelOt,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0x9b,X_01,Y,0,this->GPanelOt,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0x9c,X_01,Y,0,this->GPanelOt,0);
	X = X_01 + 0x11;
	do {
		X_00 = X_00 + 1;
		PrintFt4__7TextDatiiiiii(this->PanelTData,0x9d,X,Y,0,this->GPanelOt,0);
		PrintFt4__7TextDatiiiiii(this->PanelTData,0x9e,X,Y,0,this->GPanelOt,0);
		PrintFt4__7TextDatiiiiii(this->PanelTData,0x9f,X,Y,0,this->GPanelOt,0);
		X_02 = X + 0x11;
		PrintFt4__7TextDatiiiiii(this->PanelTData,0xa0,X,Y,0,this->GPanelOt,0);
		X = X_02;
	} while (X_00 < 6);
	iVar8 = 0;
	PrintFt4__7TextDatiiiiii(this->PanelTData,0xa1,X_02,Y,0,this->GPanelOt,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0xa2,X_02,Y,0,this->GPanelOt,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0xa3,X_02,Y,0,this->GPanelOt,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0xa4,X_02,Y,0,this->GPanelOt,0);
	X_02 = XY->MainY;
	X_00 = XY->MainX + 2 + XY->SpeedBarXOfs;
	X = XY->SpeedBarYOfs;
	do {
		if (Plr->SpdList[0]._itype != -1) {
			PrintFt4__7TextDatiiiiii
								(this->PanelTData,InvGfxTable[(uint)Plr->SpdList[0]._iCurs],X_00,X_02 + 2 + X,0,
								 this->GPanelOt + 1,0);
		}
		X_00 = X_00 + 0x11;
		iVar8 = iVar8 + 1;
		Plr = (PlayerStruct *)&Plr->_pSBkSpell;
	} while (iVar8 < 8);
	pPVar6 = PrintFt4__7TextDatiiiiii(this->PanelTData,0x94,X_01,Y,0,this->GPanelOt + -1,0);
	pPVar6->x0 = sVar1 + 1;
	pPVar6->x2 = sVar1 + 1;
	pPVar6->y2 = sVar9 + 0x14;
	pPVar6->y3 = sVar9 + 0x14;
	pPVar6->r0 = '\x14';
	pPVar6->g0 = '\x14';
	pPVar6->b0 = '\x14';
	pPVar6->x1 = sVar1 + 0x89;
	pPVar6->x3 = sVar1 + 0x89;
	pPVar6->y0 = sVar9;
	pPVar6->y1 = sVar9;
	pPVar6->u1 = pPVar6->u0 + '\x01';
	pPVar6->u3 = pPVar6->u0 + '\x01';
	pPVar6->v2 = pPVar6->v0 + '\x01';
	pPVar6->v3 = pPVar6->v0 + '\x01';
	pPVar6->tpage = pPVar6->tpage | 0x40;
	pPVar6->code = pPVar6->code & 0xfe | 2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this /*$s3*/, struct PanelXY *XY /*$s2*/, struct PlayerStruct *Plr /*$s0*/)
 // line 488, offset 0x8009824c
	/* begin block 1 */
		// Start line: 489
		// Start offset: 0x8009824C
		// Variables:
	// 		int X; // $s5
	// 		int Y; // $s4
	// 		int Anim; // $v0
	// 		struct POLY_FT4 *Ft4; // $s1
	// 		int SpellNo; // $a0
	// 		char YT[16]; // stack offset -48
	/* end block 1 */
	// End offset: 0x800983C0
	// End Line: 521

	/* begin block 2 */
		// Start line: 1133
	/* end block 2 */
	// End Line: 1134

void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(GPanel *this,PanelXY *XY,PlayerStruct *Plr)

{
	uchar uVar1;
	POLY_FT4 *pPVar2;
	ulong uVar3;
	int iVar4;
	int iVar5;
	undefined4 local_30;
	undefined *local_2c;
	undefined4 local_28;
	undefined4 local_24;
	
	local_30 = DAT_80110868;
	local_2c = PTR_PTR_8011086c;
	local_28 = DAT_80110870;
	local_24 = DAT_80110874;
	iVar4 = XY->MainY;
	iVar5 = XY->MainX + 1;
	pPVar2 = PrintFt4__7TextDatiiiiii
										 (this->PanelTData,0xda,iVar5 + XY->SpellXOfs + -5,iVar4 + XY->SpellYOfs + -6,0,
											this->GPanelOt,0);
	pPVar2->r0 = '\x7f';
	pPVar2->g0 = '\x7f';
	pPVar2->b0 = '\x7f';
	pPVar2->code = pPVar2->code & 0xfe | 2;
	pPVar2->tpage = pPVar2->tpage | 0x20;
	if (Plr->_pRSpell != -1) {
		pPVar2 = PrintFt4__7TextDatiiiiii
											 (this->PanelTData,(int)(&SpellITbl)[Plr->_pRSpell] + 0xa5,
												iVar5 + XY->SpellXOfs,
												iVar4 + (int)*(char *)((int)&local_30 + (this->HealthAnimCount >> 1)) +
												XY->SpellYOfs,0,this->GPanelOt,0);
		uVar3 = VID_GetTick__Fv();
		uVar1 = -0x80;
		if ((uVar3 & 1) == 0) {
			pPVar2->r0 = -100;
			uVar1 = -0x60;
		}
		else {
			pPVar2->r0 = -0x80;
		}
		pPVar2->g0 = uVar1;
		pPVar2->b0 = uVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this /*$a0*/, struct PanelXY *XY /*$a1*/, struct PlayerStruct *Plr /*$a2*/)
 // line 528, offset 0x800983e8
	/* begin block 1 */
		// Start line: 529
		// Start offset: 0x800983E8
	/* end block 1 */
	// End offset: 0x80098428
	// End Line: 540

	/* begin block 2 */
		// Start line: 1225
	/* end block 2 */
	// End Line: 1226

void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(GPanel *this,PanelXY *XY,PlayerStruct *Plr)

{
	(this->MsgRect).x = (short)XY->MsgX;
	(this->MsgRect).y = (short)XY->MsgY;
	(this->MsgRect).w = (short)XY->MsgW;
	(this->MsgRect).h = (short)XY->MsgH;
	DrawInfoBox__FP4RECT(&this->MsgRect);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this /*$s4*/, int X /*$s5*/, int Y /*$s6*/, struct ItemStruct *Item /*$s7*/, int ItemType /*stack 16*/)
 // line 566, offset 0x80098438
	/* begin block 1 */
		// Start line: 567
		// Start offset: 0x80098438
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $a2
	// 		unsigned char NewR; // $a3
	// 		unsigned char NewG; // $t0
	// 		unsigned char NewB; // $a0

		/* begin block 1.1 */
			// Start line: 596
			// Start offset: 0x800984FC
			// Variables:
		// 		int Loop; // $s1
		/* end block 1.1 */
		// End offset: 0x800986CC
		// End Line: 634
	/* end block 1 */
	// End offset: 0x800986D0
	// End Line: 636

	/* begin block 2 */
		// Start line: 1301
	/* end block 2 */
	// End Line: 1302

int DrawDurThingy__6GPaneliiP10ItemStructi(GPanel *this,int X,int Y,ItemStruct *Item,int ItemType)

{
	uchar uVar1;
	uchar uVar2;
	uchar uVar3;
	short sVar4;
	short sVar5;
	int iVar6;
	POLY_FT4 *pPVar7;
	short sVar8;
	int iVar9;
	
	if (((int)Item->_itype == -1) || (4 < Item->_iDurability)) {
		iVar6 = 0;
	}
	else {
		switch(((int)Item->_itype + -1) * 0x10000 >> 0x10) {
		case 0:
			ItemType = 1;
			break;
		case 1:
			ItemType = 5;
			break;
		case 2:
			ItemType = 6;
			break;
		case 3:
			ItemType = 4;
			break;
		case 4:
			ItemType = 0;
			break;
		case 9:
			ItemType = 7;
		}
		pPVar7 = PrintFt4__7TextDatiiiiii(this->PanelTData,ItemType + 0x29,X,Y,0,this->GPanelOt + 1,0);
		iVar6 = ((int)Item->_iDurability + -1) * 3;
		uVar1 = (&DurColors)[iVar6];
		uVar2 = (&UCHAR_00h_800b9bcd)[iVar6];
		uVar3 = s__800b9bce[iVar6];
		pPVar7->code = pPVar7->code & 0xfe | 2;
		pPVar7->r0 = uVar1;
		pPVar7->g0 = uVar2;
		pPVar7->b0 = uVar3;
		pPVar7 = PrintFt4__7TextDatiiiiii(this->PanelTData,0x94,X,Y,0,this->GPanelOt + 1,0);
		sVar5 = (short)X;
		sVar4 = (short)Y;
		pPVar7->y0 = sVar4 + -2;
		pPVar7->y1 = sVar4 + -2;
		pPVar7->x0 = sVar5 + 0x14;
		pPVar7->x2 = sVar5 + 0x14;
		pPVar7->x1 = sVar5 + 0x18;
		pPVar7->y2 = sVar4 + 0x17;
		pPVar7->x3 = sVar5 + 0x18;
		pPVar7->y3 = sVar4 + 0x17;
		pPVar7->r0 = '\0';
		pPVar7->g0 = '\0';
		pPVar7->b0 = '\0';
		pPVar7->code = pPVar7->code & 0xfe | 2;
		iVar6 = 0;
		if (0 < Item->_iDurability) {
			iVar9 = 0;
			do {
				pPVar7 = PrintFt4__7TextDatiiiiii(this->PanelTData,0x94,X,Y,1,this->GPanelOt + 1,0);
				uVar1 = (&DurColors)[iVar9];
				uVar2 = (&UCHAR_00h_800b9bcd)[iVar9];
				uVar3 = s__800b9bce[iVar9];
				sVar8 = sVar4 + -1 + (3 - (short)iVar6) * 5;
				pPVar7->y0 = sVar8;
				pPVar7->y1 = sVar8;
				pPVar7->x0 = sVar5 + 0x15;
				pPVar7->x1 = sVar5 + 0x17;
				pPVar7->x2 = sVar5 + 0x15;
				pPVar7->y2 = sVar8 + 5;
				pPVar7->x3 = sVar5 + 0x17;
				pPVar7->y3 = sVar8 + 5;
				pPVar7->r0 = uVar1;
				pPVar7->g0 = uVar2;
				pPVar7->b0 = uVar3;
				pPVar7->code = pPVar7->code & 0xfe | 2;
				iVar6 = iVar6 + 1;
				iVar9 = iVar9 + 3;
			} while (iVar6 < (int)Item->_iDurability);
		}
		iVar6 = 1;
	}
	return iVar6;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this /*$s2*/, struct PanelXY *XY /*$s1*/, struct PlayerStruct *Plr /*$s3*/)
 // line 639, offset 0x80098704
	/* begin block 1 */
		// Start line: 640
		// Start offset: 0x80098704
		// Variables:
	// 		int X; // $a1
	// 		int Y; // $a2
	/* end block 1 */
	// End offset: 0x80098810
	// End Line: 658

	/* begin block 2 */
		// Start line: 1491
	/* end block 2 */
	// End Line: 1492

void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(GPanel *this,PanelXY *XY,PlayerStruct *Plr)

{
	if ((((chrflag == '\0') && (questlog == '\0')) || ((invflag == '\0' && (sbookflag == '\0')))) &&
		 ((gbMaxPlayers == '\x01' ||
			(*(int *)(&spspelstate + (uint)XY->WhichPlayerDoesThisPanelReallyBelongToThen * 4) == 0)))) {
		DrawDurThingy__6GPaneliiP10ItemStructi(this,XY->HeadDurX,XY->HeadDurY,Plr->InvBody,3);
		DrawDurThingy__6GPaneliiP10ItemStructi(this,XY->BodyDurX,XY->BodyDurY,Plr->InvBody + 6,2);
		DrawDurThingy__6GPaneliiP10ItemStructi(this,XY->Hand0DurX,XY->Hand0DurY,Plr->InvBody + 4,-1);
		DrawDurThingy__6GPaneliiP10ItemStructi(this,XY->Hand1DurX,XY->Hand1DurY,Plr->InvBody + 5,-1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this /*$s0*/, struct PanelXY *XY /*$s1*/, struct PlayerStruct *Plr /*$s2*/)
 // line 665, offset 0x80098830
	/* begin block 1 */
		// Start line: 666
		// Start offset: 0x80098830
	/* end block 1 */
	// End offset: 0x8009892C
	// End Line: 681

	/* begin block 2 */
		// Start line: 1547
	/* end block 2 */
	// End Line: 1548

void Print__6GPanelP7PanelXYP12PlayerStruct(GPanel *this,PanelXY *XY,PlayerStruct *Plr)

{
	void *pvVar1;
	
	pvVar1 = GLUE_Finished__Fv();
	if (((pvVar1 == (void *)0x0) && (stextflag == '\0')) && (qtextflag == '\0')) {
		if (((chrflag == '\0') && (questlog == '\0')) && (invflag == '\0')) {
			DrawFlask__6GPanelP7PanelXYP12PlayerStruct(this,XY,Plr);
			DrawSpell__6GPanelP7PanelXYP12PlayerStruct(this,XY,Plr);
			DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(this,XY,Plr);
			DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(this,XY,Plr);
			DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(this,XY,Plr);
		}
		this->HealthAnimCount = this->HealthAnimCount + 1U & 0x1f;
		this->ManaAnimCount = this->ManaAnimCount + 1U & 0x1f;
	}
	return;
}





