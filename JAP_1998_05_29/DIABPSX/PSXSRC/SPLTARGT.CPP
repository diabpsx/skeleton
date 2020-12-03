#include "THISDUST.H"
#include "SPLTARGT.H"


// decompiled code
// original method signature: 
// void * /*$ra*/ IsAutoTarget__Fi(int Spell /*$a0*/)
 // line 42, offset 0x800af0f0
	/* begin block 1 */
		// Start line: 43
		// Start offset: 0x800AF0F0

		/* begin block 1.1 */
			// Start line: 44
			// Start offset: 0x800AF0F0
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x800AF11C
		// End Line: 48
	/* end block 1 */
	// End offset: 0x800AF120
	// End Line: 49

	/* begin block 2 */
		// Start line: 85
	/* end block 2 */
	// End Line: 86

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * IsAutoTarget__Fi(int Spell)

{
	int *piVar1;
	int iVar2;
	
	iVar2 = 0;
	piVar1 = &AutoSpellList;
	do {
		if (*piVar1 == Spell) {
			return &DAT_00000001;
		}
		iVar2 = iVar2 + 1;
		piVar1 = piVar1 + 1;
	} while (iVar2 < 0xc);
	return (void *)0x0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetXOff__Fii(int wx /*$a0*/, int wy /*$a1*/)
 // line 53, offset 0x800af128
	/* begin block 1 */
		// Start line: 54
		// Start offset: 0x800AF128
		// Variables:
	// 		int xo; // $v0
	/* end block 1 */
	// End offset: 0x800AF168
	// End Line: 62

	/* begin block 2 */
		// Start line: 112
	/* end block 2 */
	// End Line: 113

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetXOff__Fii(int wx,int wy)

{
	return (int)(((wx & 7U) - (wy & 7U)) * 0x9c4) / 1000;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetYOff__Fii(int wx /*$a0*/, int wy /*$a1*/)
 // line 65, offset 0x800af170
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x800AF170
		// Variables:
	// 		int yo; // $v0
	/* end block 1 */
	// End offset: 0x800AF1B4
	// End Line: 75

	/* begin block 2 */
		// Start line: 141
	/* end block 2 */
	// End Line: 142

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetYOff__Fii(int wx,int wy)

{
	return (int)(((wx & 7U) + (wy & 7U) + -8) * 0x4e2) / 1000;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetScrXY__FPiT0(int *wx /*$s4*/, int *wy /*$s5*/)
 // line 79, offset 0x800af1bc
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x800AF1BC
		// Variables:
	// 		struct CBlocks *gblocks; // $s3
	// 		struct RECT R; // stack offset -40
	// 		int plx; // $s0
	// 		int ply; // $s1
	// 		int xo; // $s2
	// 		int x; // $s0
	// 		int y; // $s1
	/* end block 1 */
	// End offset: 0x800AF264
	// End Line: 99

	/* begin block 2 */
		// Start line: 166
	/* end block 2 */
	// End Line: 167

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetScrXY__FPiT0(int *wx,int *wy)

{
	CBlocks *this;
	int sxoff;
	int syoff;
	int wx_00;
	int wy_00;
	RECT local_28;
	
	this = BL_GetCurrentBlocks__Fv();
	if (this != (CBlocks *)0x0) {
		wx_00 = *wx;
		wy_00 = *wy;
		sxoff = GetXOff__Fii(wx_00,wy_00);
		syoff = GetYOff__Fii(wx_00,wy_00);
		GetScrXY__7CBlocksR4RECTiiii(this,&local_28,(wx_00 >> 3) * 0x14,(wy_00 >> 3) * 0x14,sxoff,syoff)
		;
		*wx = (int)local_28.x;
		*wy = (int)local_28.y;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearTrails__11SpellTarget(struct SpellTarget *this /*$a0*/)
 // line 103, offset 0x800af28c
	/* begin block 1 */
		// Start line: 104
		// Start offset: 0x800AF28C

		/* begin block 1.1 */
			// Start line: 105
			// Start offset: 0x800AF28C
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x800AF2AC
		// End Line: 109
	/* end block 1 */
	// End offset: 0x800AF2AC
	// End Line: 109

	/* begin block 2 */
		// Start line: 219
	/* end block 2 */
	// End Line: 220

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearTrails__11SpellTarget(SpellTarget *this)

{
	int iVar1;
	
	iVar1 = 0;
	do {
		this->lastx[0] = -1;
		this->lasty[0] = -1;
		iVar1 = iVar1 + 1;
		this = (SpellTarget *)&this->field_0x2;
	} while (iVar1 < 8);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init__11SpellTargeti(struct SpellTarget *this /*$s0*/, int plrn /*$a1*/)
 // line 114, offset 0x800af2b4
	/* begin block 1 */
		// Start line: 115
		// Start offset: 0x800AF2B4

		/* begin block 1.1 */
			// Start line: 115
			// Start offset: 0x800AF2B4

			/* begin block 1.1.1 */
				// Start line: 120
				// Start offset: 0x800AF310

				/* begin block 1.1.1.1 */
					// Start line: 121
					// Start offset: 0x800AF310

					/* begin block 1.1.1.1.1 */
						// Start line: 122
						// Start offset: 0x800AF32C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 123
							// Start offset: 0x800AF32C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 124
								// Start offset: 0x800AF344
								// Variables:
							// 		int SplLvl; // $v0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800AF3F4
							// End Line: 141
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800AF3F4
						// End Line: 141
					/* end block 1.1.1.1.1 */
					// End offset: 0x800AF404
					// End Line: 144
				/* end block 1.1.1.1 */
				// End offset: 0x800AF404
				// End Line: 144
			/* end block 1.1.1 */
			// End offset: 0x800AF404
			// End Line: 144
		/* end block 1.1 */
		// End offset: 0x800AF404
		// End Line: 144
	/* end block 1 */
	// End offset: 0x800AF500
	// End Line: 170

	/* begin block 2 */
		// Start line: 240
	/* end block 2 */
	// End Line: 241

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Init__11SpellTargeti(SpellTarget *this,int plrn)

{
	char cVar1;
	uchar uVar2;
	short sVar3;
	PlayerStruct *pPVar4;
	int r;
	int y;
	
	this->pnum = plrn;
	this->player = plr + plrn;
	if ((plr[plrn]._pSplType == '\x01') &&
		 (uVar2 = CheckSpell__FiicUc(this->pnum,(int)plr[plrn]._pSpell,'\x01','\0'), uVar2 == '\0')) {
		pPVar4 = this->player;
		if (pPVar4->_pSplType == '\x01') {
			if ((int)pPVar4->_pSplLvl[(int)pPVar4->_pSpell] + (int)pPVar4->_pISplLvlAdd == 0) {
				cVar1 = pPVar4->_pClass;
				if (cVar1 == '\0') {
					PlaySFX__Fi(PS_WARR28);
				}
				else {
					if (cVar1 == '\x01') {
						PlaySFX__Fi(PS_ROGUE28);
					}
					else {
						if (cVar1 == '\x02') {
							PlaySFX__Fi(PS_MAGE28);
						}
					}
				}
			}
			else {
				cVar1 = pPVar4->_pClass;
				if (cVar1 == '\0') {
					PlaySFX__Fi(PS_WARR35);
				}
				else {
					if (cVar1 == '\x01') {
						PlaySFX__Fi(PS_ROGUE35);
					}
					else {
						if (cVar1 == '\x02') {
							PlaySFX__Fi(PS_MAGE35);
						}
					}
				}
			}
		}
	}
	else {
		*(undefined **)&this->active = &DAT_00000001;
		*(undefined **)&this->changed = &DAT_00000001;
		if (this->forcespell == '\0') {
			sVar3 = (this->player->_px + (short)offset_x[(int)this->player->_pdir]) * 8;
			this->_nsx = sVar3;
			this->_sx = sVar3;
			sVar3 = (this->player->_py + (short)offset_y[(int)this->player->_pdir]) * 8;
			this->_nsy = sVar3;
			this->_sy = sVar3;
			ClearTrails__11SpellTarget(this);
		}
		if (this->spotid == -1) {
			r = 0x42;
			if (this->pnum != 0) {
				r = 0x12;
			}
			r = AddLight__Fiii((int)this->_sx,(int)this->_sy,r);
			this->spotid = r;
		}
		r = -4;
		if ((this->_sx & 1U) != 0) {
			r = 4;
		}
		y = -4;
		if ((this->_sy & 1U) != 0) {
			y = 4;
		}
		ChangeLightOff__Fiii(this->spotid,r,y);
		NewCursor__Fi(9);
		this->forcespell = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Remove__11SpellTarget(struct SpellTarget *this /*$s0*/)
 // line 174, offset 0x800af518
	/* begin block 1 */
		// Start line: 175
		// Start offset: 0x800AF518
	/* end block 1 */
	// End offset: 0x800AF564
	// End Line: 182

	/* begin block 2 */
		// Start line: 368
	/* end block 2 */
	// End Line: 369

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Remove__11SpellTarget(SpellTarget *this)

{
	this->active = (void *)0x0;
	(&_pcurs)[this->pnum] = 1;
	if (this->spotid != -1) {
		AddUnLight__Fi(this->spotid);
		this->spotid = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawArrow__11SpellTargetii(struct SpellTarget *this /*$s6*/, int x1 /*$s1*/, int y1 /*$s0*/)
 // line 187, offset 0x800af57c
	/* begin block 1 */
		// Start line: 188
		// Start offset: 0x800AF57C
		// Variables:
	// 		int bright; // $s7
	// 		char r; // $s5
	// 		char g; // $s3
	// 		char b; // $s4
	// 		int otpos; // $fp

		/* begin block 1.1 */
			// Start line: 193
			// Start offset: 0x800AF5FC
			// Variables:
		// 		int ni; // $a1
		/* end block 1.1 */
		// End offset: 0x800AF628
		// End Line: 199

		/* begin block 1.2 */
			// Start line: 224
			// Start offset: 0x800AF70C
			// Variables:
		// 		int i; // $s1
		// 		int ni; // $a1
		/* end block 1.2 */
		// End offset: 0x800AF7B4
		// End Line: 230
	/* end block 1 */
	// End offset: 0x800AF7C4
	// End Line: 231

	/* begin block 2 */
		// Start line: 395
	/* end block 2 */
	// End Line: 396

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawArrow__11SpellTargetii(SpellTarget *this,int x1,int y1)

{
	long lVar1;
	int iVar2;
	short *psVar3;
	int iVar4;
	uint uVar5;
	int iVar6;
	uint uVar7;
	uchar SpinR;
	int OtPos;
	
	SpinR = '\x7f';
	if (this->pnum != 0) {
		SpinR = -1;
	}
	uVar7 = 0xffffffff;
	if (this->pnum != 0) {
		uVar7 = 0x7f;
	}
	OtPos = 3;
	if (this->forcespell == '\0') {
		OtPos = GetOverlayOtBase__7CBlocks();
	}
	iVar4 = 7;
	psVar3 = &this->_nsy;
	do {
		iVar4 = iVar4 + -1;
		psVar3[0x14] = psVar3[0x13];
		psVar3[0x1c] = psVar3[0x1b];
		psVar3 = psVar3 + -1;
	} while (0 < iVar4);
	this->lastx[0] = (short)x1 + -4;
	this->lasty[0] = (short)(y1 + 4);
	DrawSpinner__FiiUcUcUciiibiT8T8Uc
						((int)this->lastx[0],(y1 + 4) * 0x10000 >> 0x10,SpinR,'\x7f',uVar7 & 0xff,0x2e,0x28,
						 this->angle,0,OtPos,1,1,8);
	DrawSpinner__FiiUcUcUciiibiT8T8Uc
						((int)this->lastx[0],(int)this->lasty[0],SpinR,'\x7f',uVar7 & 0xff,0x26,0x28,
						 -(this->angle + 0x2d),0,OtPos,1,1,8);
	SpinR = -1;
	if (this->pnum == 0) {
		lVar1 = ENG_random__Fl(0xff);
		SpinR = (uchar)lVar1;
		uVar7 = 0xffffffff;
	}
	else {
		uVar7 = ENG_random__Fl(0xff);
	}
	uVar5 = 1;
	iVar4 = &this->field_0x2;
	iVar6 = 3;
	do {
		if ((uVar5 & 1) == 0) {
			iVar2 = -this->angle;
		}
		else {
			iVar2 = this->angle;
		}
		DrawSpinner__FiiUcUcUciiibiT8T8Uc
							((int)*(short *)(iVar4 + 0x28),(int)*(short *)(iVar4 + 0x38),SpinR,'\x7f',uVar7 & 0xff
							 ,-iVar6 + 0x2a,-iVar6 + 0x23,iVar2 << 1,0,OtPos,1,1,8);
		iVar4 = iVar4 + 2;
		uVar5 = uVar5 + 1;
		iVar6 = iVar6 + 3;
	} while ((int)uVar5 < 8);
	this->angle = this->angle + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Show__11SpellTarget(struct SpellTarget *this /*$s1*/)
 // line 239, offset 0x800af7f8
	/* begin block 1 */
		// Start line: 240
		// Start offset: 0x800AF7F8
		// Variables:
	// 		int x; // stack offset -40
	// 		int y; // stack offset -36
	// 		struct CPad *Pad; // $s0
	// 		int otx; // $s4
	// 		int oty; // $s5
	// 		int cp; // $s0
	// 		int plx; // $s2
	// 		int ply; // $s0
	// 		struct MonsterStruct *Monst; // $s3
	// 		int ops; // $s4

		/* begin block 1.1 */
			// Start line: 255
			// Start offset: 0x800AF87C

			/* begin block 1.1.1 */
				// Start line: 259
				// Start offset: 0x800AF88C
				// Variables:
			// 		int vis_flag; // $v0
			// 		int inthatx; // $a0
			// 		int inthaty; // $a1
			/* end block 1.1.1 */
			// End offset: 0x800AF9A8
			// End Line: 296
		/* end block 1.1 */
		// End offset: 0x800AFA6C
		// End Line: 320

		/* begin block 1.2 */
			// Start line: 334
			// Start offset: 0x800AFAD4

			/* begin block 1.2.1 */
				// Start line: 340
				// Start offset: 0x800AFB00

				/* begin block 1.2.1.1 */
					// Start line: 341
					// Start offset: 0x800AFB00
					// Variables:
				// 		int d; // $v0
				/* end block 1.2.1.1 */
				// End offset: 0x800AFB28
				// End Line: 343
			/* end block 1.2.1 */
			// End offset: 0x800AFBA8
			// End Line: 352
		/* end block 1.2 */
		// End offset: 0x800AFBD4
		// End Line: 358
	/* end block 1 */
	// End offset: 0x800AFCEC
	// End Line: 386

	/* begin block 2 */
		// Start line: 509
	/* end block 2 */
	// End Line: 510

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Show__11SpellTarget(SpellTarget *this)

{
	byte bVar1;
	char other;
	ushort uVar2;
	short sVar3;
	CPad *this_00;
	int x;
	int y;
	undefined *puVar4;
	uint y_00;
	uint x_00;
	uint uVar5;
	uint local_28;
	uint local_24;
	
	local_28 = 0;
	local_24 = 0;
	this_00 = PAD_GetPad__FiUc(this->pnum,'\0');
	bVar1 = this->forcespell;
	x = (uint)bVar1 * 0x68;
	if ((this->active == (void *)0x0) && (bVar1 == 0)) {
		return;
	}
	if (invflag != '\0') {
		return;
	}
	uVar5 = SEXT24(this->_nsx);
	sVar3 = this->_nsy;
	if (bVar1 != 0) {
		puVar4 = (undefined *)IsAutoTarget__Fi(this->player->_pRSpell);
		if (((puVar4 != &DAT_00000001) || (this->player->_pRSplType == '\x04')) ||
			 ((int)PTR_ARRAY_8010533c[(uint)bVar1 * 0x1a] >> 6 < 1)) {
			this->forcespell = '\0';
			return;
		}
		x_00 = (int)(char)(&DAT_80105360)[x] << 3;
		y_00 = (int)(char)(&DAT_80105361)[x] << 3;
		if (this->changed == (void *)0x0) {
			this->_sx = (short)x_00;
			this->_sy = (short)y_00;
		}
		else {
			if (((int)((uint)(ushort)this->_sx << 0x10) >> 0x13 == (int)x_00 >> 3) &&
				 ((int)((uint)(ushort)this->_sy << 0x10) >> 0x13 == (int)y_00 >> 3)) {
				this->changed = (void *)0x0;
			}
		}
		goto LAB_800afa6c;
	}
	ClrCursor__Fi(this->pnum);
	uVar2 = GetCur__C4CPad(this_00);
	other = GetPadStyle__Fi(this->pnum);
	other = pad_UpIsUpRight__Fic((uint)uVar2 & 0xf,other);
	y = (int)other;
	local_28 = SEXT14(offset_x[y]);
	local_24 = SEXT14(offset_y[y]);
	x_00 = uVar5;
	if (y == -1) {
LAB_800af960:
		y_00 = (int)sVar3;
	}
	else {
		x_00 = uVar5 + local_28 * 2;
		y_00 = (int)sVar3 + local_24 * 2;
		y = (int)x_00 >> 3;
		if (((int)this->player->_px == y) && ((int)this->player->_py == (int)y_00 >> 3)) {
			x_00 = x_00 + local_28 * 8;
			y_00 = y_00 + local_24 * 8;
			y = (int)x_00 >> 3;
		}
		if (0x51 < y - 0x10U) {
			x_00 = uVar5;
		}
		if (0x51 < ((int)y_00 >> 3) - 0x10U) goto LAB_800af960;
	}
	if (((int)dung_map[((int)x_00 >> 3) * 0x70 + ((int)y_00 >> 3)].dFlags & this->pnum + 1U) != 0) {
		CheckRangeObject__Fiii((int)x_00 >> 3,(int)y_00 >> 3,1);
	}
LAB_800afa6c:
	uVar2 = this->_sx;
	sVar3 = uVar2 + 2;
	if (((int)(short)(uVar2 & 0xfffe) < (int)(x_00 & 0xfffffffe)) ||
		 (sVar3 = uVar2 - 2, (int)(x_00 & 0xfffffffe) < (int)(short)(uVar2 & 0xfffe))) {
		this->_sx = sVar3;
	}
	uVar2 = this->_sy;
	sVar3 = uVar2 + 2;
	if (((int)(short)(uVar2 & 0xfffe) < (int)(y_00 & 0xfffffffe)) ||
		 (sVar3 = uVar2 - 2, (int)(y_00 & 0xfffffffe) < (int)(short)(uVar2 & 0xfffe))) {
		this->_sy = sVar3;
	}
	local_28 = SEXT24(this->_sx);
	local_24 = SEXT24(this->_sy);
	GetScrXY__FPiT0((int *)&local_28,(int *)&local_24);
	if (this->forcespell == '\0') {
		while ((0x140 < local_28 || (0xf0 < local_24))) {
			y = GetDirection__Fiiii((int)this->_nsx,(int)this->_nsy,this->player->WorldX,
															this->player->WorldY);
			this->_sx = this->_sx + (short)offset_x[y];
			this->_sy = this->_sy + (short)offset_y[y];
			local_28 = SEXT24(this->_sx);
			local_24 = SEXT24(this->_sy);
			GetScrXY__FPiT0((int *)&local_28,(int *)&local_24);
		}
		x_00 = SEXT24(this->_sx);
		y_00 = SEXT24(this->_sy);
		this->_nsx = this->_sx;
		this->_nsy = this->_sy;
	}
	else {
		this->_nsx = (short)x_00;
		this->_nsy = (short)y_00;
	}
	y = sel_data;
	sel_data = this->pnum;
	x_00 = (int)x_00 >> 3;
	y_00 = (int)y_00 >> 3;
	if (this->forcespell == '\0') {
		this->_stx = (uchar)x_00;
		this->_sty = (uchar)y_00;
	}
	else {
		local_28 = (local_28 - 2) + ((int)((uint)(byte)(&DAT_80105366)[x] << 0x18) >> 0x19);
		local_24 = local_24 + 4 + ((int)((uint)(byte)(&DAT_80105367)[x] << 0x18) >> 0x19);
		this->_stx = (&DAT_80105362)[x];
		this->_sty = (&DAT_80105363)[x];
	}
	DrawArrow__11SpellTargetii(this,local_28,local_24 + 10);
	sel_data = y;
	if (this->forcespell == '\0') {
		sel_data = y;
		ChangeLightXY__Fiii(this->spotid,x_00,y_00);
		x = -4;
		if ((x_00 & 1) != 0) {
			x = 4;
		}
		y = -4;
		if ((y_00 & 1) != 0) {
			y = 4;
		}
		ChangeLightOff__Fiii(this->spotid,x,y);
		x = GetDirection__Fiiii((int)this->player->_px,(int)this->player->_py,x_00,y_00);
		this->player->_pdir = (char)x;
		StartStand__Fii(this->pnum,(int)(char)x);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ForceTarget__11SpellTargetiii(struct SpellTarget *this /*$s0*/, int monst /*$s1*/, int x /*$s2*/, int y /*$s3*/)
 // line 390, offset 0x800afd14
	/* begin block 1 */
		// Start line: 391
		// Start offset: 0x800AFD14
	/* end block 1 */
	// End offset: 0x800AFE48
	// End Line: 426

	/* begin block 2 */
		// Start line: 844
	/* end block 2 */
	// End Line: 845

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ForceTarget__11SpellTargetiii(SpellTarget *this,int monst,int x,int y)

{
	uchar uVar1;
	short sVar2;
	undefined *puVar3;
	int iVar4;
	
	iVar4 = myplr;
	if (myplr != -1) {
		this->pnum = myplr;
		this->player = plr + iVar4;
		if ((((monst < 1) || (uVar1 = CanTalkToMonst__Fi(monst), uVar1 == '\0')) &&
				(puVar3 = (undefined *)IsAutoTarget__Fi(this->player->_pRSpell), puVar3 == &DAT_00000001))
			 && ((this->player->_pRSplType != '\x04' && (this->active == (void *)0x0)))) {
			if (monst + 1U != (uint)this->forcespell) {
				*(undefined **)&this->changed = &DAT_00000001;
				ClearTrails__11SpellTarget(this);
			}
			sVar2 = (short)(x << 3);
			if (this->forcespell == '\0') {
				this->_sx = (short)this->player->WorldX;
				iVar4 = this->player->WorldY;
				*(undefined **)&this->changed = &DAT_00000001;
				this->_sy = (short)iVar4;
				sVar2 = (short)(x << 3);
			}
			this->_nsx = sVar2;
			this->_nsy = (short)(y << 3);
			this->forcespell = (uchar)(monst + 1U);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TargetActive__Fi(int pnum /*$a0*/)
 // line 434, offset 0x800afe68
	/* begin block 1 */
		// Start line: 435
		// Start offset: 0x800AFE68
	/* end block 1 */
	// End offset: 0x800AFE80
	// End Line: 438

	/* begin block 2 */
		// Start line: 935
	/* end block 2 */
	// End Line: 936

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * TargetActive__Fi(int pnum)

{
	GamePad *pGVar1;
	void *pvVar2;
	
	pGVar1 = GetGamePad__Fi(pnum);
	pvVar2 = Active__11SpellTarget(&pGVar1->spell);
	return pvVar2;
}



// decompiled code
// original method signature: 
// struct SpellTarget * /*$ra*/ GetSpellTarget__Fi(int pnum /*$a0*/)
 // line 441, offset 0x800afe90
	/* begin block 1 */
		// Start line: 442
		// Start offset: 0x800AFE90
	/* end block 1 */
	// End offset: 0x800AFEA0
	// End Line: 444

	/* begin block 2 */
		// Start line: 949
	/* end block 2 */
	// End Line: 950

/* WARNING: Unknown calling convention yet parameter storage is locked */

SpellTarget * GetSpellTarget__Fi(int pnum)

{
	GamePad *pGVar1;
	
	pGVar1 = GetGamePad__Fi(pnum);
	return &pGVar1->spell;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ArrowTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 449, offset 0x800afeb0
	/* begin block 1 */
		// Start line: 450
		// Start offset: 0x800AFEB0
		// Variables:
	// 		struct DEF_ARGS *args; // $v0
	// 		int pnum; // $s5
	// 		int times; // stack offset -88
	// 		int bright; // stack offset -80
	// 		enum TARGET targ; // $s7
	// 		struct RECT R; // stack offset -104
	// 		int angle; // $s6
	// 		int r; // stack offset -72
	// 		int g; // stack offset -64
	// 		int b; // $fp

		/* begin block 1.1 */
			// Start line: 461
			// Start offset: 0x800AFF48

			/* begin block 1.1.1 */
				// Start line: 463
				// Start offset: 0x800AFF80

				/* begin block 1.1.1.1 */
					// Start line: 464
					// Start offset: 0x800AFF90
					// Variables:
				// 		int plx; // stack offset -96
				// 		int ply; // stack offset -92
				// 		int otpos; // $s3

					/* begin block 1.1.1.1.1 */
						// Start line: 468
						// Start offset: 0x800AFF90

						/* begin block 1.1.1.1.1.1 */
							// Start line: 469
							// Start offset: 0x800AFFC4

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 471
								// Start offset: 0x800AFFC4
								// Variables:
							// 		struct PlayerStruct *ptrplr; // $v1
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800AFFFC
							// End Line: 477

							/* begin block 1.1.1.1.1.1.2 */
								// Start line: 485
								// Start offset: 0x800B002C
								// Variables:
							// 		struct MonsterStruct *Monst; // $v0
							/* end block 1.1.1.1.1.1.2 */
							// End offset: 0x800B002C
							// End Line: 486

							/* begin block 1.1.1.1.1.1.3 */
								// Start line: 494
								// Start offset: 0x800B0068
								// Variables:
							// 		struct MissileStruct *Miss; // $s0
							// 		int pxo; // $v0
							// 		int pyo; // $v0
							/* end block 1.1.1.1.1.1.3 */
							// End offset: 0x800B0144
							// End Line: 506
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800B0144
						// End Line: 509
					/* end block 1.1.1.1.1 */
					// End offset: 0x800B0144
					// End Line: 509
				/* end block 1.1.1.1 */
				// End offset: 0x800B021C
				// End Line: 529
			/* end block 1.1.1 */
			// End offset: 0x800B021C
			// End Line: 529
		/* end block 1.1 */
		// End offset: 0x800B021C
		// End Line: 534
	/* end block 1 */
	// End offset: 0x800B022C
	// End Line: 534

	/* begin block 2 */
		// Start line: 965
	/* end block 2 */
	// End Line: 966

/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void ArrowTask__FP4TASK(TASK *T)

{
	uint *puVar1;
	long angle;
	undefined *puVar2;
	void *pvVar3;
	CBlocks *this;
	int iVar4;
	uint uVar5;
	uint uVar6;
	int SpinB;
	RECT local_68;
	int local_60;
	int local_5c;
	uint local_58;
	uint local_50;
	undefined4 local_48;
	undefined4 local_40;
	int local_38;
	int local_30;
	
	puVar1 = (uint *)T->fActive;
	local_48 = 0x7f;
	local_40 = 0x7f;
	local_58 = puVar1[1];
	uVar5 = *puVar1;
	local_50 = puVar1[2];
	uVar6 = puVar1[3];
	SpinB = 0x7f;
	angle = ENG_random__Fl(0x1000);
	local_38 = uVar5 * 0x19e8;
	local_30 = uVar5 * 0x68;
	while (((local_58 != 0 && (puVar2 = (undefined *)GLUE_Finished__Fv(), puVar2 != &DAT_00000001)) &&
				 (deathflag == '\0'))) {
		pvVar3 = GLUE_GetShowGameScreenFlag__Fv();
		if (pvVar3 != (void *)0x0) {
			if (uVar6 == 1) {
				local_60 = (int)(&monster[0]._mx)[local_30] << 3;
				local_5c = (int)(&monster[0]._my)[local_30] << 3;
				GetScrXY__FPiT0(&local_60,&local_5c);
			}
			else {
				if ((int)uVar6 < 2) {
					if (uVar6 == 0) {
						local_48 = 0x7f;
						if ((uVar5 & 1) != 0) {
							local_48 = 0xff;
						}
						local_40 = 0x7f;
						SpinB = 0xff;
						if ((uVar5 & 1) != 0) {
							SpinB = 0x7f;
						}
						local_60 = *(int *)((int)&plr[0].WorldX + local_38);
						local_5c = *(int *)((int)&plr[0].WorldY + local_38);
						GetScrXY__FPiT0(&local_60,&local_5c);
						local_60 = local_60 + -3;
						local_5c = local_5c + 5;
					}
				}
				else {
					if (uVar6 == 2) {
						this = BL_GetCurrentBlocks__Fv();
						local_60 = (int)missile[uVar5]._mix * 0x14;
						local_5c = (int)missile[uVar5]._miy * 0x14;
						GetScrXY__7CBlocksR4RECTiiii
											(this,&local_68,local_60,local_5c,((int)missile[uVar5]._mixoff * 0x271) / 1000
											 ,((int)missile[uVar5]._miyoff * 0x271) / 1000);
						local_60 = (int)local_68.x;
						local_5c = (int)local_68.y;
					}
				}
			}
			iVar4 = GetOverlayOtBase__7CBlocks();
			DrawSpinner__FiiUcUcUciiibiT8T8Uc
								(local_60,local_5c,(uchar)local_48,(uchar)local_40,SpinB,local_50 << 3,0x46,angle,0,
								 iVar4 + -1,1,0,8);
			DrawSpinner__FiiUcUcUciiibiT8T8Uc
								(local_60,local_5c,(uchar)local_48,(uchar)local_40,SpinB,local_50 << 2,0x46,
								 -(angle + 0x2d),0,iVar4 + -1,1,0,4);
			if (PauseMode == '\0') {
				local_58 = local_58 - 1;
				angle = angle + 1;
			}
		}
		TSK_Sleep(1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SPL_Arrow__F6TARGETiii(enum TARGET t /*$s3*/, int pnum /*$s0*/, int times /*$s1*/, int size /*$s2*/)
 // line 540, offset 0x800b0260
	/* begin block 1 */
		// Start line: 541
		// Start offset: 0x800B0260
		// Variables:
	// 		struct DEF_ARGS *args; // $v0
	// 		struct TASK *T; // $v0
	/* end block 1 */
	// End offset: 0x800B02C0
	// End Line: 551

	/* begin block 2 */
		// Start line: 1186
	/* end block 2 */
	// End Line: 1187

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SPL_Arrow__F6TARGETiii(TARGET t,int pnum,int times,int size)

{
	TASK *pTVar1;
	int *piVar2;
	
	pTVar1 = TSK_AddTask(0x8000,ArrowTask__FP4TASK,0x400,0x10);
	if (pTVar1 != (TASK *)0x0) {
		piVar2 = (int *)pTVar1->fActive;
		*piVar2 = pnum;
		piVar2[1] = times;
		piVar2[2] = size;
		piVar2[3] = t;
	}
	return;
}





