#include "THISDUST.H"
#include "GPANEL.H"


// decompiled code
// original method signature: 
// unsigned int /*$ra*/ GetPal__6GPaneli(struct GPanel *this /*$s0*/, int Frm /*$a1*/)
 // line 204, offset 0x8008d9d0
	/* begin block 1 */
		// Start line: 205
		// Start offset: 0x8008D9D0
	/* end block 1 */
	// End offset: 0x8008DA00
	// End Line: 219

	/* begin block 2 */
		// Start line: 408
	/* end block 2 */
	// End Line: 409

uint GetPal__6GPaneli(GPanel *this,int Frm)

{
	FRAME_HDR *pFVar1;
	PAL *pPVar2;
	
	pFVar1 = GetFr__7TextDati(this->PanelTData,Frm & 0xffff);
	pPVar2 = GetPal__7TextDati(this->PanelTData,(uint)pFVar1->X >> 0x19);
	return (uint)*(ushort *)((int)&pPVar2->InVram + 2);
}



// decompiled code
// original method signature: 
// struct GPanel * /*$ra*/ __6GPaneli(struct GPanel *this /*$s1*/, int Ofs /*$s0*/)
 // line 226, offset 0x8008da14
	/* begin block 1 */
		// Start line: 227
		// Start offset: 0x8008DA14
	/* end block 1 */
	// End offset: 0x8008DA14
	// End Line: 227

	/* begin block 2 */
		// Start line: 452
	/* end block 2 */
	// End Line: 453

GPanel * __6GPaneli(GPanel *this,int Ofs)

{
	TextDat *pTVar1;
	
	pTVar1 = GM_UseTexData__Fi(0);
	this->PanelTData = pTVar1;
	this->HealthAnimCount = Ofs + 1;
	this->ManaAnimCount = Ofs + 0x17;
	this->GlobeAnimCount = Ofs + 0xf;
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this /*$s2*/, struct PanelXY *XY /*stack -64*/, struct PlayerStruct *Plr /*$a2*/)
 // line 241, offset 0x8008da6c
	/* begin block 1 */
		// Start line: 242
		// Start offset: 0x8008DA6C
		// Variables:
	// 		int ManaHeight; // $s6
	// 		int HealthAnim; // stack offset -56
	// 		int ManaAnim; // stack offset -48
	// 		int BarY; // $s7
	// 		struct POLY_FT4 *Ft4; // $s1
	// 		int X; // $s5
	// 		int Y; // $s3
	// 		int xof; // $s0
	/* end block 1 */
	// End offset: 0x8008DEB8
	// End Line: 339

	/* begin block 2 */
		// Start line: 485
	/* end block 2 */
	// End Line: 486

void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(GPanel *this,PanelXY *XY,PlayerStruct *Plr)

{
	int iVar1;
	int iVar2;
	POLY_FT4 *pPVar3;
	uint uVar4;
	int X;
	int Y;
	int X_00;
	int Y_00;
	int iVar5;
	int iVar6;
	
	iVar5 = (Plr->_pMana * 0x2b) / Plr->_pMaxMana;
	iVar1 = this->HealthAnimCount;
	iVar2 = this->ManaAnimCount;
	X_00 = XY->MainX;
	Y = XY->MainY;
	iVar6 = (Plr->_pHitPoints * 0x2b) / Plr->_pMaxHP;
	if (iVar5 < 0) {
		iVar5 = 0;
	}
	pPVar3 = PrintFt4__7TextDatiiiiii(this->PanelTData,0x4c,X_00,Y,0,0xff,0);
	pPVar3->r0 = '\x7f';
	pPVar3->g0 = '\x7f';
	pPVar3->b0 = '\x7f';
	pPVar3->code = pPVar3->code & 0xfe | 2;
	pPVar3->tpage = pPVar3->tpage | 0x20;
	pPVar3 = PrintFt4__7TextDatiiiiii(this->PanelTData,0x4d,X_00,Y,0,0xff,0);
	pPVar3->r0 = '\x7f';
	pPVar3->g0 = '\x7f';
	pPVar3->b0 = '\x7f';
	pPVar3->code = pPVar3->code & 0xfe | 2;
	pPVar3->tpage = pPVar3->tpage | 0x20;
	PrintFt4__7TextDatiiiiii(this->PanelTData,0x47,X_00,Y,XY->FlaskFlip,0xff,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0x48,X_00,Y,0,0xff,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0x49,X_00,Y,0,0xff,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0x4a,X_00,Y,0,0xff,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0x4b,X_00,Y,0,0xff,0);
	if (0 < iVar6) {
		Y_00 = Y - (iVar6 + 8);
		X = X_00 + ((-(uint)(XY->FlaskFlip != 0) & 0x18) - 0xb);
		pPVar3 = PrintFt4__7TextDatiiiiii(this->PanelTData,0x4e,X,Y_00,XY->FlaskFlip,0xff,0);
		pPVar3->y2 = pPVar3->y0 + (short)iVar6;
		pPVar3->u2 = pPVar3->u0 + (char)iVar6 + -1;
		pPVar3->r0 = '\x7f';
		pPVar3->g0 = '\x7f';
		pPVar3->b0 = '\x7f';
		pPVar3->y3 = pPVar3->y1 + (short)iVar6;
		pPVar3->u3 = pPVar3->u1 + (char)iVar6 + -1;
		pPVar3->code = pPVar3->code & 0xfe | 2;
		pPVar3->tpage = pPVar3->tpage | 0x20;
		pPVar3 = PrintFt4__7TextDatiiiiii
											 (this->PanelTData,(iVar1 >> 2) + 0xb6,X,Y_00,XY->FlaskFlip,0xff,0);
		pPVar3->r0 = '\x7f';
		pPVar3->g0 = '\x7f';
		pPVar3->b0 = '\x7f';
		pPVar3->code = pPVar3->code & 0xfe | 2;
		pPVar3->tpage = pPVar3->tpage | 0x20;
	}
	if (0 < iVar5) {
		Y = Y - (iVar5 + 8);
		X_00 = X_00 + (-(uint)(XY->FlaskFlip != 0) & 0xfffffffe) + 2;
		pPVar3 = PrintFt4__7TextDatiiiiii(this->PanelTData,0x4e,X_00,Y,XY->FlaskFlip,0xff,0);
		pPVar3->y2 = pPVar3->y0 + (short)iVar5;
		pPVar3->y3 = pPVar3->y1 + (short)iVar5;
		pPVar3->u2 = pPVar3->u0 + (char)iVar5 + -1;
		pPVar3->u3 = pPVar3->u1 + (char)iVar5 + -1;
		uVar4 = GetPal__6GPaneli(this,0x10);
		pPVar3->clut = (ushort)uVar4;
		pPVar3->r0 = '\x7f';
		pPVar3->g0 = '\x7f';
		pPVar3->b0 = '\x7f';
		pPVar3->code = pPVar3->code & 0xfe | 2;
		pPVar3->tpage = pPVar3->tpage | 0x20;
		pPVar3 = PrintFt4__7TextDatiiiiii
											 (this->PanelTData,(iVar2 >> 2) + 0xbe,X_00,Y,XY->FlaskFlip,0xff,0);
		uVar4 = GetPal__6GPaneli(this,0x10);
		pPVar3->clut = (ushort)uVar4;
		pPVar3->r0 = '\x7f';
		pPVar3->g0 = '\x7f';
		pPVar3->b0 = '\x7f';
		pPVar3->code = pPVar3->code & 0xfe | 2;
		pPVar3->tpage = pPVar3->tpage | 0x20;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this /*$s4*/, struct PanelXY *XY /*$fp*/, struct PlayerStruct *Plr /*stack -56*/)
 // line 346, offset 0x8008deec
	/* begin block 1 */
		// Start line: 347
		// Start offset: 0x8008DEEC
		// Variables:
	// 		int X; // $s1
	// 		int Y; // $s3
	// 		int Loop; // $s5
	// 		struct POLY_FT4 *Ft4; // $a2
	// 		int Bx; // $s6
	// 		int By; // $s7
	/* end block 1 */
	// End offset: 0x8008E33C
	// End Line: 415

	/* begin block 2 */
		// Start line: 815
	/* end block 2 */
	// End Line: 816

void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(GPanel *this,PanelXY *XY,PlayerStruct *Plr)

{
	short sVar1;
	POLY_FT4 *pPVar2;
	int *piVar3;
	int X;
	int X_00;
	int X_01;
	short sVar4;
	int Y;
	int X_02;
	int iVar5;
	
	X_00 = XY->MainX + XY->SpeedBarXOfs;
	Y = XY->MainY + XY->SpeedBarYOfs;
	sVar1 = (short)X_00;
	sVar4 = (short)Y;
	if (_pcurr_inv[sel_data] != -1) {
		pPVar2 = PrintFt4__7TextDatiiiiii(this->PanelTData,0xc6,X_00,Y,0,0xfa,0);
		piVar3 = _pcurr_inv + sel_data;
		X = *piVar3;
		pPVar2->y0 = sVar4;
		pPVar2->x0 = sVar1 + (short)X * 0x11;
		X = *piVar3;
		pPVar2->y1 = sVar4;
		pPVar2->x1 = sVar1 + (short)X * 0x11 + 0x11;
		X = *piVar3;
		pPVar2->y2 = sVar4 + 0x14;
		pPVar2->x2 = sVar1 + (short)X * 0x11;
		X = *piVar3;
		pPVar2->y3 = sVar4 + 0x14;
		pPVar2->u1 = pPVar2->u0 + '\x01';
		pPVar2->v2 = pPVar2->v0 + '\x01';
		pPVar2->u3 = pPVar2->u0 + '\x01';
		pPVar2->code = pPVar2->code & 0xfe | 2;
		pPVar2->v3 = pPVar2->v0 + '\x01';
		pPVar2->r0 = -0x60;
		pPVar2->g0 = -0x60;
		pPVar2->b0 = -0x60;
		pPVar2->x3 = sVar1 + (short)X * 0x11 + 0x11;
	}
	X_02 = 0;
	PrintFt4__7TextDatiiiiii(this->PanelTData,0xcb,X_00,Y,0,0xfb,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0xcc,X_00,Y,0,0xfb,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0xcd,X_00,Y,0,0xfb,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0xce,X_00,Y,0,0xfb,0);
	X = X_00 + 0x11;
	do {
		X_02 = X_02 + 1;
		PrintFt4__7TextDatiiiiii(this->PanelTData,0xcf,X,Y,0,0xfb,0);
		PrintFt4__7TextDatiiiiii(this->PanelTData,0xd0,X,Y,0,0xfb,0);
		PrintFt4__7TextDatiiiiii(this->PanelTData,0xd1,X,Y,0,0xfb,0);
		X_01 = X + 0x11;
		PrintFt4__7TextDatiiiiii(this->PanelTData,0xd2,X,Y,0,0xfb,0);
		X = X_01;
	} while (X_02 < 6);
	iVar5 = 0;
	PrintFt4__7TextDatiiiiii(this->PanelTData,0xd3,X_01,Y,0,0xfb,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0xd4,X_01,Y,0,0xfb,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0xd5,X_01,Y,0,0xfb,0);
	PrintFt4__7TextDatiiiiii(this->PanelTData,0xd6,X_01,Y,0,0xfb,0);
	X_01 = XY->MainY;
	X_02 = XY->MainX + 2 + XY->SpeedBarXOfs;
	X = XY->SpeedBarYOfs;
	do {
		if (Plr->SpdList[0]._itype != -1) {
			PrintFt4__7TextDatiiiiii
								(this->PanelTData,SpeedBarGfxTable[(int)Plr->SpdList[0]._iCurs],X_02,X_01 + 2 + X,0,
								 0xfc,0);
		}
		X_02 = X_02 + 0x11;
		iVar5 = iVar5 + 1;
		Plr = (PlayerStruct *)(Plr->_pSplLvl + 0x1b);
	} while (iVar5 < 8);
	pPVar2 = PrintFt4__7TextDatiiiiii(this->PanelTData,0xc6,X_00,Y,0,0xf9,0);
	pPVar2->x0 = sVar1 + 1;
	pPVar2->x2 = sVar1 + 1;
	pPVar2->y2 = sVar4 + 0x14;
	pPVar2->y3 = sVar4 + 0x14;
	pPVar2->r0 = '\x14';
	pPVar2->g0 = '\x14';
	pPVar2->b0 = '\x14';
	pPVar2->x1 = sVar1 + 0x89;
	pPVar2->x3 = sVar1 + 0x89;
	pPVar2->y0 = sVar4;
	pPVar2->y1 = sVar4;
	pPVar2->u1 = pPVar2->u0 + '\x01';
	pPVar2->u3 = pPVar2->u0 + '\x01';
	pPVar2->v2 = pPVar2->v0 + '\x01';
	pPVar2->v3 = pPVar2->v0 + '\x01';
	pPVar2->tpage = pPVar2->tpage | 0x40;
	pPVar2->code = pPVar2->code & 0xfe | 2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this /*$s4*/, struct PanelXY *XY /*$s1*/, struct PlayerStruct *Plr /*$s0*/)
 // line 421, offset 0x8008e370
	/* begin block 1 */
		// Start line: 422
		// Start offset: 0x8008E370
		// Variables:
	// 		int X; // $s5
	// 		int Y; // $s3
	// 		int Anim; // $v0
	// 		struct POLY_FT4 *Ft4; // $v0
	// 		int SpellNo; // $v1
	// 		char YT[16]; // stack offset -48
	/* end block 1 */
	// End offset: 0x8008E4B0
	// End Line: 450

	/* begin block 2 */
		// Start line: 1030
	/* end block 2 */
	// End Line: 1031

void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(GPanel *this,PanelXY *XY,PlayerStruct *Plr)

{
	POLY_FT4 *pPVar1;
	int iVar2;
	int iVar3;
	undefined4 local_30;
	undefined *local_2c;
	undefined4 local_28;
	undefined4 local_24;
	
	local_30 = DAT_80120600;
	local_2c = PTR_DAT_80120604;
	local_28 = DAT_80120608;
	local_24 = DAT_8012060c;
	iVar2 = XY->MainY;
	iVar3 = XY->MainX + 1;
	pPVar1 = PrintFt4__7TextDatiiiiii
										 (this->PanelTData,0x10b,iVar3 + XY->SpellXOfs + -5,iVar2 + XY->SpellYOfs + -6,0
											,0xff,0);
	pPVar1->r0 = '\x7f';
	pPVar1->g0 = '\x7f';
	pPVar1->b0 = '\x7f';
	pPVar1->code = pPVar1->code & 0xfe | 2;
	pPVar1->tpage = pPVar1->tpage | 0x20;
	if (Plr->_pRSpell != -1) {
		PrintFt4__7TextDatiiiiii
							(this->PanelTData,(int)(&SpellITbl)[Plr->_pRSpell] + 0xd7,iVar3 + XY->SpellXOfs,
							 iVar2 + (int)*(char *)((int)&local_30 + (this->HealthAnimCount >> 1)) + XY->SpellYOfs
							 ,0,0xff,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this /*$a0*/, struct PanelXY *XY /*$a1*/, struct PlayerStruct *Plr /*$a2*/)
 // line 457, offset 0x8008e4dc
	/* begin block 1 */
		// Start line: 458
		// Start offset: 0x8008E4DC
		// Variables:
	// 		struct RECT MsgRect; // stack offset -16
	/* end block 1 */
	// End offset: 0x8008E518
	// End Line: 470

	/* begin block 2 */
		// Start line: 1120
	/* end block 2 */
	// End Line: 1121

void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(GPanel *this,PanelXY *XY,PlayerStruct *Plr)

{
	RECT local_10;
	
	local_10.x = (short)XY->MsgX;
	local_10.y = (short)XY->MsgY;
	local_10.w = (short)XY->MsgW;
	local_10.h = (short)XY->MsgH;
	DrawInfoBox__FP4RECT(&local_10);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this /*$a0*/, int X /*stack -64*/, int Y /*stack -56*/, struct ItemStruct *Item /*$fp*/, int ItemType /*stack 16*/)
 // line 486, offset 0x8008e528
	/* begin block 1 */
		// Start line: 487
		// Start offset: 0x8008E528
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $v0
	// 		struct POLY_F4 *F4; // $a3
	/* end block 1 */
	// End offset: 0x8008E8B0
	// End Line: 550

	/* begin block 2 */
		// Start line: 1178
	/* end block 2 */
	// End Line: 1179

int DrawDurThingy__6GPaneliiP10ItemStructi(GPanel *this,int X,int Y,ItemStruct *Item,int ItemType)

{
	short sVar1;
	short sVar2;
	short sVar3;
	ulong *puVar4;
	int iVar5;
	POLY_FT4 *pPVar6;
	int iVar7;
	POLY_F4 *pPVar8;
	short sVar9;
	short sVar10;
	short sVar11;
	
	if (((int)Item->_itype == -1) || (5 < Item->_iDurability)) {
		iVar5 = 0;
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
		pPVar6 = PrintFt4__7TextDatiiiiii(this->PanelTData,ItemType + 0x3f,X,Y,0,0xff,0);
		pPVar6->code = pPVar6->code & 0xfe | 2;
		pPVar6->tpage = pPVar6->tpage | 0x20;
		pPVar6->r0 = ('\x05' - (char)Item->_iDurability) * '\x10' + '\x7f';
		pPVar6->g0 = ('\x05' - (char)Item->_iDurability) * -0x10 + '\x7f';
		pPVar6->b0 = ('\x05' - (char)Item->_iDurability) * -0x10 + '\x7f';
		iVar5 = Item->_iDurability;
		iVar7 = Item->_iMaxDur;
		pPVar8 = PRIM_GetNextPolyF4__Fv();
		*(undefined *)((int)&pPVar8->tag + 3) = 5;
		pPVar8->code = '(';
		sVar2 = (short)X;
		sVar11 = sVar2 + 0x15;
		pPVar8->x0 = sVar11;
		sVar1 = (short)Y;
		pPVar8->y0 = sVar1 + 1;
		pPVar8->r0 = '\0';
		pPVar8->g0 = '\0';
		pPVar8->b0 = '\0';
		pPVar8->code = pPVar8->code | 2;
		puVar4 = ThisOt;
		pPVar8->y1 = sVar1 + 1;
		pPVar8->x2 = sVar11;
		sVar10 = sVar2 + 0x16;
		pPVar8->x1 = sVar10;
		pPVar8->x3 = sVar10;
		sVar3 = (short)((iVar5 * 0x12) / iVar7);
		sVar9 = sVar1 - (sVar3 + -0x13);
		pPVar8->y2 = sVar9;
		pPVar8->y3 = sVar9;
		pPVar8->tag = pPVar8->tag & 0xff000000 | puVar4[0xff] & 0xffffff;
		puVar4[0xff] = puVar4[0xff] & 0xff000000 | (uint)pPVar8 & 0xffffff;
		pPVar8 = PRIM_GetNextPolyF4__Fv();
		*(undefined *)((int)&pPVar8->tag + 3) = 5;
		pPVar8->y0 = sVar9;
		pPVar8->y1 = sVar9;
		sVar9 = sVar9 + sVar3;
		pPVar8->code = '(';
		pPVar8->x0 = sVar11;
		pPVar8->x1 = sVar10;
		pPVar8->x2 = sVar11;
		pPVar8->y2 = sVar9;
		pPVar8->x3 = sVar10;
		pPVar8->y3 = sVar9;
		pPVar8->r0 = ('\x05' - (char)Item->_iDurability) * '\x10' + '\x7f';
		pPVar8->g0 = ('\x05' - (char)Item->_iDurability) * -0x10 + '\x7f';
		iVar5 = Item->_iDurability;
		pPVar8->code = pPVar8->code | 2;
		pPVar8->b0 = ('\x05' - (char)iVar5) * -0x10 + '\x7f';
		puVar4 = ThisOt;
		pPVar8->tag = pPVar8->tag & 0xff000000 | ThisOt[0xff] & 0xffffff;
		puVar4[0xff] = puVar4[0xff] & 0xff000000 | (uint)pPVar8 & 0xffffff;
		pPVar8 = PRIM_GetNextPolyF4__Fv();
		*(undefined *)((int)&pPVar8->tag + 3) = 5;
		pPVar8->code = '(';
		pPVar8->x0 = sVar2 + 0x14;
		pPVar8->y0 = sVar1;
		pPVar8->y1 = sVar1;
		pPVar8->r0 = '\x7f';
		pPVar8->g0 = '\x7f';
		pPVar8->x2 = sVar2 + 0x14;
		pPVar8->x1 = sVar2 + 0x17;
		pPVar8->b0 = 'P';
		pPVar8->code = pPVar8->code | 2;
		puVar4 = ThisOt;
		pPVar8->y2 = sVar1 + 0x14;
		pPVar8->x3 = sVar2 + 0x17;
		pPVar8->y3 = sVar1 + 0x14;
		iVar5 = 1;
		pPVar8->tag = pPVar8->tag & 0xff000000 | puVar4[0xff] & 0xffffff;
		puVar4[0xff] = puVar4[0xff] & 0xff000000 | (uint)pPVar8 & 0xffffff;
	}
	return iVar5;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this /*$s2*/, struct PanelXY *XY /*$s1*/, struct PlayerStruct *Plr /*$s3*/)
 // line 553, offset 0x8008e8e4
	/* begin block 1 */
		// Start line: 554
		// Start offset: 0x8008E8E4
		// Variables:
	// 		int X; // $a1
	// 		int Y; // $a2
	/* end block 1 */
	// End offset: 0x8008E9B8
	// End Line: 571

	/* begin block 2 */
		// Start line: 1379
	/* end block 2 */
	// End Line: 1380

void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(GPanel *this,PanelXY *XY,PlayerStruct *Plr)

{
	if (((chrflag == '\0') && (questlog == '\0')) || ((invflag == '\0' && (sbookflag == '\0')))) {
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
 // line 578, offset 0x8008e9d8
	/* begin block 1 */
		// Start line: 579
		// Start offset: 0x8008E9D8
	/* end block 1 */
	// End offset: 0x8008EAC0
	// End Line: 594

	/* begin block 2 */
		// Start line: 1433
	/* end block 2 */
	// End Line: 1434

void Print__6GPanelP7PanelXYP12PlayerStruct(GPanel *this,PanelXY *XY,PlayerStruct *Plr)

{
	void *pvVar1;
	
	pvVar1 = GLUE_Finished__Fv();
	if (((pvVar1 == (void *)0x0) && (stextflag == '\0')) && (qtextflag == '\0')) {
		if ((chrflag == '\0') && (questlog == '\0')) {
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





