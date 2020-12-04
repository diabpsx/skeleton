#include "THISDUST.H"
#include "PADFUNCS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DrawArrow__Fii(int x1 /*$a0*/, int y1 /*$t0*/)
 // line 86, offset 0x8009636c
	/* begin block 1 */
		// Start line: 87
		// Start offset: 0x8009636C
		// Variables:
	// 		struct Spell_Target *spl; // $s6
	// 		char r; // $s4
	// 		char b; // $s2

		/* begin block 1.1 */
			// Start line: 92
			// Start offset: 0x800963D4
			// Variables:
		// 		int ni; // $a2
		/* end block 1.1 */
		// End offset: 0x80096400
		// End Line: 98

		/* begin block 1.2 */
			// Start line: 100
			// Start offset: 0x80096400
			// Variables:
		// 		int i; // $fp
		// 		int ni; // $a2
		/* end block 1.2 */
		// End offset: 0x8009652C
		// End Line: 113
	/* end block 1 */
	// End offset: 0x8009653C
	// End Line: 114

	/* begin block 2 */
		// Start line: 172
	/* end block 2 */
	// End Line: 173

void DrawArrow__Fii(int x1,int y1)

{
	short sVar1;
	int iVar2;
	int iVar3;
	int spinradius;
	int iVar4;
	uint uVar5;
	uchar SpinR;
	Spell_Target *pSVar6;
	uint uVar7;
	
	iVar2 = sel_data;
	SpinR = '\x7f';
	pSVar6 = SplTarget + sel_data;
	if (sel_data != 0) {
		SpinR = -1;
	}
	uVar5 = 0xffffffff;
	if (sel_data != 0) {
		uVar5 = 0x7f;
	}
	iVar4 = 4;
	spinradius = sel_data * 0x24 + -0x7ff43dac;
	do {
		iVar4 = iVar4 + -1;
		*(undefined2 *)(spinradius + 0xc) = *(undefined2 *)(spinradius + 10);
		*(undefined2 *)(spinradius + 0x16) = *(undefined2 *)(spinradius + 0x14);
		spinradius = spinradius + -2;
	} while (0 < iVar4);
	uVar7 = 1;
	SplTarget[iVar2].lastx[0] = (short)x1 + -4;
	sVar1 = SplTarget[iVar2].lastx[0];
	SplTarget[iVar2].lasty[0] = (short)(y1 + 4);
	spinradius = 0x18;
	DrawSpinner__FiiUcUcUciiibiT8
						((int)sVar1,(y1 + 4) * 0x10000 >> 0x10,SpinR,'\x7f',uVar5 & 0xff,0x1e,0x1e,
						 SplTarget[iVar2].angle,(void *)0x0,0x100,&DAT_00000001);
	DrawSpinner__FiiUcUcUciiibiT8
						((int)SplTarget[iVar2].lastx[0],(int)SplTarget[iVar2].lasty[0],SpinR,'\x7f',uVar5 & 0xff
						 ,0x14,0x1e,-(SplTarget[iVar2].angle + 0x2d),(void *)0x0,0x100,&DAT_00000001);
	do {
		iVar4 = rand();
		if ((uVar7 & 1) == 0) {
			iVar3 = -SplTarget[iVar2].angle;
		}
		else {
			iVar3 = SplTarget[iVar2].angle;
		}
		DrawSpinner__FiiUcUcUciiibiT8
							((int)pSVar6->lastx[1],(int)pSVar6->lasty[1],(uchar)iVar4,'\x7f',0xff,spinradius,0x1e,
							 iVar3 << 1,(void *)0x0,0x100,&DAT_00000001);
		uVar7 = uVar7 + 1;
		spinradius = spinradius + -6;
		pSVar6 = (Spell_Target *)((int)&pSVar6->walk + 2);
	} while ((int)uVar7 < 5);
	SplTarget[iVar2].angle = SplTarget[iVar2].angle + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ show_spell_dir__Fi(int pnum /*$s6*/)
 // line 121, offset 0x80096570
	/* begin block 1 */
		// Start line: 122
		// Start offset: 0x80096570
		// Variables:
	// 		struct PlayerStruct *player; // $s7
	// 		int x; // $s0
	// 		int y; // $s1
	// 		int cp; // $s0
	// 		struct Spell_Target *spl; // $s3
	// 		int otx; // stack offset -72
	// 		int oty; // $fp
	// 		struct RECT R; // stack offset -80
	// 		struct CBlocks *gblocks; // stack offset -64
	// 		int ops; // $s0
	/* end block 1 */
	// End offset: 0x800969B0
	// End Line: 228

	/* begin block 2 */
		// Start line: 263
	/* end block 2 */
	// End Line: 264

/* WARNING: Could not reconcile some variable overlaps */

void show_spell_dir__Fi(int pnum)

{
	byte bVar1;
	int iVar2;
	int iVar3;
	char cVar4;
	ushort uVar5;
	CPad *this;
	int iVar6;
	uint x;
	uint y;
	int iVar7;
	Spell_Target *pSVar8;
	RECT local_50;
	uint local_48;
	CBlocks *local_40;
	
	this = PAD_GetPad__FiUc(pnum,'\0');
	uVar5 = GetCur__C4CPad(this);
	iVar6 = sel_data;
	pSVar8 = SplTarget + sel_data;
	local_48 = (uint)SplTarget[sel_data]._sx;
	bVar1 = SplTarget[sel_data]._sy;
	if ((SplTarget[sel_data].active != '\0') &&
		 (local_40 = BL_GetCurrentBlocks__Fv(), local_40 != (CBlocks *)0x0)) {
		cVar4 = (*pSVar8->walk)((uint)uVar5 & 0xf);
		iVar2 = sel_data;
		x = (uint)SplTarget[iVar6]._sx;
		y = (uint)SplTarget[iVar6]._sy;
		(&_pcursobj)[sel_data] = -1;
		iVar7 = (int)cVar4;
		(&_pcursitem)[sel_data] = -1;
		iVar3 = sel_data;
		(&_pcursmonst)[iVar2] = -1;
		(&_pcursplr)[iVar3] = -1;
		if (iVar7 == -1) {
			cVar4 = plr[pnum]._pTSpell;
			if (cVar4 == '!') {
				CheckRangeObject__Fiici(x,y,'\x02',1);
				if (((&_pcursobj)[sel_data] != -1) ||
					 (CheckArea__FiiicUci(x,y,2,'\x02',0,pnum), (&_pcursobj)[sel_data] != -1)) {
					x = SEXT14(object[(int)(&_pcursobj)[sel_data]]._ox);
					y = SEXT14(object[(int)(&_pcursobj)[sel_data]]._oy);
				}
				cVar4 = plr[pnum]._pTSpell;
			}
			if ((cVar4 == '\b') &&
				 ((CheckRangeObject__Fiici(x,y,'\x01',1), (&_pcursmonst)[sel_data] != -1 ||
					(CheckArea__FiiicUci(x,y,2,'\x01',0,pnum), (&_pcursmonst)[sel_data] != -1)))) {
				x = SEXT14(monster[(&_pcursmonst)[sel_data]]._mx);
				y = SEXT14(monster[(&_pcursmonst)[sel_data]]._my);
			}
		}
		else {
			x = x + (int)offset_x[iVar7];
			y = y + (int)offset_y[iVar7];
			if (((int)plr[pnum]._px == x) && ((int)plr[pnum]._py == y)) {
				x = x + (int)offset_x[iVar7];
				y = y + (int)offset_y[iVar7];
			}
		}
		if ((int)x < 0) {
			x = 0;
		}
		else {
			if (0x5a < (int)x) {
				x = 0x5b;
			}
		}
		if ((int)y < 0) {
			y = 0;
		}
		else {
			if (0x5a < (int)y) {
				y = 0x5b;
			}
		}
		SplTarget[iVar6]._sx = (uchar)x;
		SplTarget[iVar6]._sy = (uchar)y;
		GetScrXY__7CBlocksR4RECTiiii(local_40,&local_50,x * 0x14,y * 0x14,0,0);
		x = SEXT24(local_50.x);
		y = SEXT24(local_50.y);
		if ((0x140 < x) || (0xf0 < y)) {
			SplTarget[iVar6]._sy = bVar1;
			SplTarget[iVar6]._sx = (uchar)local_48;
			GetScrXY__7CBlocksR4RECTiiii(local_40,&local_50,local_48 * 0x14,(uint)bVar1 * 0x14,0,0);
			x = SEXT24(local_50.x);
			y = SEXT24(local_50.y);
		}
		ChangeLightXY__Fiii(SplTarget[iVar6].spotid,(uint)SplTarget[iVar6]._sx,
												(uint)SplTarget[iVar6]._sy);
		iVar2 = sel_data;
		sel_data = pnum;
		DrawArrow__Fii(x,y + 10);
		sel_data = iVar2;
		iVar6 = GetDirection__Fiiii((int)plr[pnum]._px,(int)plr[pnum]._py,(uint)SplTarget[iVar6]._sx,
																(uint)SplTarget[iVar6]._sy);
		plr[pnum]._pdir = (char)iVar6;
		StartStand__Fii(pnum,(int)(char)iVar6);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ release_spell__Fi(int pnum /*$s0*/)
 // line 240, offset 0x800969e4
	/* begin block 1 */
		// Start line: 241
		// Start offset: 0x800969E4
		// Variables:
	// 		struct Spell_Target *spl; // $v0
	/* end block 1 */
	// End offset: 0x80096A44
	// End Line: 253

	/* begin block 2 */
		// Start line: 562
	/* end block 2 */
	// End Line: 563

void release_spell__Fi(int pnum)

{
	cursmx = ZEXT14(SplTarget[sel_data]._sx);
	cursmy = ZEXT14(SplTarget[sel_data]._sy);
	myplr = pnum;
	TryIconCurs__Fv();
	RemoveTargetCursor__Fi(pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ select_belt_item__Fi(int pnum /*$a0*/)
 // line 260, offset 0x80096a58
	/* begin block 1 */
		// Start line: 261
		// Start offset: 0x80096A58
	/* end block 1 */
	// End offset: 0x80096A58
	// End Line: 261

	/* begin block 2 */
		// Start line: 614
	/* end block 2 */
	// End Line: 615

void select_belt_item__Fi(int pnum)

{
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ any_belt_items__Fv()
 // line 277, offset 0x80096a60
	/* begin block 1 */
		// Start line: 278
		// Start offset: 0x80096A60
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x80096AC0
	// End Line: 287

	/* begin block 2 */
		// Start line: 640
	/* end block 2 */
	// End Line: 641

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar any_belt_items__Fv(void)

{
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = myplr * 0x23a8;
	do {
		if (*(short *)((int)&plr[0].SpdList[0]._itype + iVar1) != -1) {
			return '\x01';
		}
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 0x98;
	} while (iVar2 < 8);
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ get_last_inv__Fv()
 // line 293, offset 0x80096ac8
	/* begin block 1 */
		// Start line: 294
		// Start offset: 0x80096AC8
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x80096BE8
	// End Line: 311

	/* begin block 2 */
		// Start line: 672
	/* end block 2 */
	// End Line: 673

/* WARNING: Unknown calling convention yet parameter storage is locked */

void get_last_inv__Fv(void)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = _pcurr_inv[sel_data] + -1;
	if (-1 < iVar3) {
		iVar2 = (iVar3 * 0x13 + myplr * 0x475) * 8;
		do {
			if (*(short *)((int)&plr[0].SpdList[0]._itype + iVar2) != -1) {
				drawsbarflag = '\x01';
				_pcurr_inv[sel_data] = iVar3;
				return;
			}
			iVar3 = iVar3 + -1;
			iVar2 = iVar2 + -0x98;
		} while (-1 < iVar3);
	}
	uVar1 = any_belt_items__Fv();
	if (uVar1 == '\0') {
		_pcurr_inv[sel_data] = -1;
	}
	else {
		_pcurr_inv[sel_data] = 7;
		get_last_inv__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ get_next_inv__Fv()
 // line 317, offset 0x80096bf8
	/* begin block 1 */
		// Start line: 318
		// Start offset: 0x80096BF8
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x80096D20
	// End Line: 336

	/* begin block 2 */
		// Start line: 730
	/* end block 2 */
	// End Line: 731

/* WARNING: Unknown calling convention yet parameter storage is locked */

void get_next_inv__Fv(void)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = _pcurr_inv[sel_data] + 1;
	if (iVar3 < 8) {
		iVar2 = (iVar3 * 0x13 + myplr * 0x475) * 8;
		do {
			if (*(short *)((int)&plr[0].SpdList[0]._itype + iVar2) != -1) {
				drawsbarflag = '\x01';
				_pcurr_inv[sel_data] = iVar3;
				return;
			}
			iVar3 = iVar3 + 1;
			iVar2 = iVar2 + 0x98;
		} while (iVar3 < 8);
	}
	uVar1 = any_belt_items__Fv();
	if (uVar1 == '\0') {
		_pcurr_inv[sel_data] = -1;
	}
	else {
		_pcurr_inv[sel_data] = -1;
		get_next_inv__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_up__Fi(int pnum /*$a0*/)
 // line 346, offset 0x80096d30
	/* begin block 1 */
		// Start line: 347
		// Start offset: 0x80096D30
	/* end block 1 */
	// End offset: 0x80096D4C
	// End Line: 349

	/* begin block 2 */
		// Start line: 799
	/* end block 2 */
	// End Line: 800

void pad_func_up__Fi(int pnum)

{
	if (questlog != '\0') {
		QuestlogUp__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_down__Fi(int pnum /*$a0*/)
 // line 356, offset 0x80096d5c
	/* begin block 1 */
		// Start line: 357
		// Start offset: 0x80096D5C
	/* end block 1 */
	// End offset: 0x80096D78
	// End Line: 359

	/* begin block 2 */
		// Start line: 820
	/* end block 2 */
	// End Line: 821

void pad_func_down__Fi(int pnum)

{
	if (questlog != '\0') {
		QuestlogDown__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_left__Fi(int pnum /*$a0*/)
 // line 366, offset 0x80096d88
	/* begin block 1 */
		// Start line: 367
		// Start offset: 0x80096D88
	/* end block 1 */
	// End offset: 0x80096D88
	// End Line: 367

	/* begin block 2 */
		// Start line: 841
	/* end block 2 */
	// End Line: 842

void pad_func_left__Fi(int pnum)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_right__Fi(int pnum /*$a0*/)
 // line 374, offset 0x80096d90
	/* begin block 1 */
		// Start line: 375
		// Start offset: 0x80096D90
	/* end block 1 */
	// End offset: 0x80096D90
	// End Line: 375

	/* begin block 2 */
		// Start line: 857
	/* end block 2 */
	// End Line: 858

void pad_func_right__Fi(int pnum)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_select__Fi(int pnum /*$s0*/)
 // line 393, offset 0x80096d98
	/* begin block 1 */
		// Start line: 394
		// Start offset: 0x80096D98
	/* end block 1 */
	// End offset: 0x80096E40
	// End Line: 405

	/* begin block 2 */
		// Start line: 894
	/* end block 2 */
	// End Line: 895

void pad_func_select__Fi(int pnum)

{
	if ((((int)stextflag | (uint)qtextflag | (uint)_spselflag2 | (uint)PTR_8012b154 | (uint)sbookflag
				| (uint)invflag | (uint)questlog | (uint)chrflag) == 0) &&
		 (ToggleOptions__Fv(), options_pad = pnum, optionsflag == (void *)0x0)) {
		options_pad = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_Attack__Fi(int pnum /*$s3*/)
 // line 416, offset 0x80096e54
	/* begin block 1 */
		// Start line: 417
		// Start offset: 0x80096E54
		// Variables:
	// 		struct PlayerStruct *player; // $s2
	// 		int x; // $s4
	// 		int y; // $s5
	/* end block 1 */
	// End offset: 0x80097244
	// End Line: 478

	/* begin block 2 */
		// Start line: 942
	/* end block 2 */
	// End Line: 943

void pad_func_Attack__Fi(int pnum)

{
	char cVar1;
	short sVar2;
	short sVar3;
	uchar x;
	char *pcVar4;
	char *pcVar5;
	int range;
	uchar y;
	int xx;
	int yy;
	
	sVar2 = plr[pnum]._px;
	xx = (int)sVar2;
	sVar3 = plr[pnum]._py;
	yy = (int)sVar3;
	if (3 < plr[pnum]._pmode) {
		return;
	}
	if (((uint)questlog | (int)stextflag | (uint)qtextflag) != 0) {
		return;
	}
	if ((&_pcursmonst)[sel_data] == -1) {
		if ((leveltype == '\0') || (plr[pnum]._pwtype == 0)) {
			range = 2;
		}
		else {
			range = 4;
		}
		CheckArea__FiiicUci(xx,yy,range,'\x01',0,pnum);
	}
	if ((leveltype == '\0') || ((&force_attack)[pnum] == (void *)0x0)) {
		if ((&_pcursmonst)[sel_data] == -1) {
			x = CheckArea__FiiicUci(xx,yy,2,'\x02',0,pnum);
			if (x == '\0') {
				return;
			}
			if (object[(int)(&_pcursobj)[sel_data]]._oBreak != '\x01') {
				return;
			}
			pcVar5 = _pfindx + sel_data;
			pcVar4 = _pfindy + sel_data;
			plr[pnum]._pVar6 = (short)*pcVar5;
			plr[pnum]._pVar7 = (short)*pcVar4;
			xx = GetDirection__Fiiii(xx,yy,(int)*pcVar5,(int)*pcVar4);
			plr[pnum]._pdir = (char)xx;
			StartStand__Fii(pnum,(int)(char)xx);
			x = _pfindx[sel_data];
		}
		else {
			pcVar5 = _pfindx + sel_data;
			pcVar4 = _pfindy + sel_data;
			plr[pnum]._pVar6 = (short)*pcVar5;
			plr[pnum]._pVar7 = (short)*pcVar4;
			xx = GetDirection__Fiiii(xx,yy,(int)*pcVar5,(int)*pcVar4);
			plr[pnum]._pdir = (char)xx;
			plr[pnum].walkpath[0] = -1;
			if (leveltype == '\0') {
				StartStand__Fii(pnum,(int)plr[pnum]._pdir);
				cVar1 = plr[pnum ^ 1]._pdir;
LAB_800970f4:
				StartStand__Fii(pnum ^ 1,(int)cVar1);
				NetSendCmdLocParam1__FUcUcUcUcUs
									('\x01','\x1d',_pfindx[sel_data],_pfindy[sel_data],
									 (uint)*(ushort *)(&_pcursmonst + sel_data));
				return;
			}
			x = CanTalkToMonst__Fi((&_pcursmonst)[sel_data]);
			if (x != '\0') {
				StartStand__Fii(pnum,(int)plr[pnum]._pdir);
				cVar1 = plr[pnum]._pdir;
				goto LAB_800970f4;
			}
			x = _pfindx[sel_data];
		}
		y = _pfindy[sel_data];
	}
	else {
		x = (uchar)sVar2;
		cVar1 = plr[pnum]._pdir;
		plr[pnum]._pVar6 = sVar2 + (short)offset_x[(int)plr[pnum]._pdir] * 2;
		y = (uchar)sVar3;
		plr[pnum]._pVar7 = sVar3 + (short)offset_y[(int)cVar1] * 2;
	}
	NetSendCmdLoc__FUcUcUcUc('\x01','7',x,y);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_Action__Fi(int pnum /*$s1*/)
 // line 488, offset 0x80097270
	/* begin block 1 */
		// Start line: 489
		// Start offset: 0x80097270
		// Variables:
	// 		struct PlayerStruct *player; // $s0
	// 		int x; // $s3
	// 		int y; // $s4
	// 		struct DEF_ARGS *args; // $v0
	/* end block 1 */
	// End offset: 0x80097560
	// End Line: 533

	/* begin block 2 */
		// Start line: 1107
	/* end block 2 */
	// End Line: 1108

void pad_func_Action__Fi(int pnum)

{
	short sVar1;
	short sVar2;
	TASK *pTVar3;
	uchar bCmd;
	uchar x;
	uchar y;
	uint uVar4;
	
	sVar1 = plr[pnum]._px;
	sVar2 = plr[pnum]._py;
	pTVar3 = TSK_Exist((TASK *)DrawObjTask__FP4TASK,0x666,0xffffffff);
	if (pTVar3 != (TASK *)0x0) {
		return;
	}
	if (((uint)questlog | (int)stextflag | (uint)qtextflag) != 0) {
		return;
	}
	plr[pnum].walkpath[0] = -1;
	if (((((&_pcursobj)[sel_data] == -1) &&
			 (CheckArea__FiiicUci((int)sVar1,(int)sVar2,2,'\x02',0,-1), (&_pcursobj)[sel_data] == -1)) ||
			(uVar4 = SEXT14((&_pcursobj)[sel_data]), object[uVar4]._oBreak == '\x01')) ||
		 ((&_pcursitem)[sel_data] != -1)) {
		CheckArea__FiiicUci((int)sVar1,(int)sVar2,2,'\x04',1,pnum);
		if ((&_pcursitem)[sel_data] == -1) {
			return;
		}
		if (_pfind_index[sel_data] != '\x01') {
			pTVar3 = TSK_AddTask(0x666,DrawObjTask__FP4TASK,0x1000,0x10);
			*(int *)pTVar3->fActive = pnum;
			return;
		}
		(&_pcursitem)[sel_data] = _pfind_list[sel_data * 10].index;
		_pfindx[sel_data] = _pfind_list[sel_data * 10].x;
		_pfindy[sel_data] = _pfind_list[sel_data * 10].y;
		bCmd = '*';
		x = _pfindx[sel_data];
		y = _pfindy[sel_data];
		uVar4 = SEXT14((&_pcursitem)[sel_data]);
	}
	else {
		bCmd = '\x10';
		if (_pcurs[myplr] == 5) {
			bCmd = '\x11';
		}
		x = _pfindx[sel_data];
		y = _pfindy[sel_data];
	}
	NetSendCmdLocParam1__FUcUcUcUcUs('\x01',bCmd,x,y,uVar4 & 0xffff);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitTargetCursor__Fi(int pnum /*$a3*/)
 // line 541, offset 0x80097584
	/* begin block 1 */
		// Start line: 542
		// Start offset: 0x80097584
		// Variables:
	// 		struct PlayerStruct *player; // $v0
	// 		struct Spell_Target *spl; // $s0

		/* begin block 1.1 */
			// Start line: 542
			// Start offset: 0x80097584
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x80097638
		// End Line: 554
	/* end block 1 */
	// End offset: 0x80097678
	// End Line: 562

	/* begin block 2 */
		// Start line: 1222
	/* end block 2 */
	// End Line: 1223

void InitTargetCursor__Fi(int pnum)

{
	Spell_Target *pSVar1;
	int r;
	
	pSVar1 = SplTarget + pnum;
	r = 0;
	SplTarget[pnum]._sx = offset_x[(int)plr[pnum]._pdir] + *(char *)&plr[pnum]._px;
	SplTarget[pnum]._sy = offset_y[(int)plr[pnum]._pdir] + *(char *)&plr[pnum]._py;
	do {
		pSVar1->lastx[0] = (ushort)SplTarget[pnum]._sx;
		r = r + 1;
		pSVar1->lasty[0] = (ushort)SplTarget[pnum]._sy;
		pSVar1 = (Spell_Target *)((int)&pSVar1->walk + 2);
	} while (r < 5);
	if (SplTarget[pnum].spotid == -1) {
		r = 0x42;
		if (pnum != 0) {
			r = 0x12;
		}
		r = AddLight__Fiii((uint)SplTarget[pnum]._sx,(uint)SplTarget[pnum]._sy,r);
		SplTarget[pnum].spotid = r;
	}
	SplTarget[pnum].active = '\x01';
	NewCursor__Fi(9);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveTargetCursor__Fi(int pnum /*$s0*/)
 // line 565, offset 0x8009768c
	/* begin block 1 */
		// Start line: 566
		// Start offset: 0x8009768C
		// Variables:
	// 		struct Spell_Target *spl; // $s0
	/* end block 1 */
	// End offset: 0x80097704
	// End Line: 583

	/* begin block 2 */
		// Start line: 1280
	/* end block 2 */
	// End Line: 1281

void RemoveTargetCursor__Fi(int pnum)

{
	int i;
	
	NewCursor__Fi(1);
	if (pnum == -1) {
		RemoveTargetCursor__Fi(0);
		RemoveTargetCursor__Fi(1);
	}
	else {
		i = SplTarget[pnum].spotid;
		SplTarget[pnum].active = '\0';
		SplTarget[pnum]._sx = -1;
		SplTarget[pnum]._sy = -1;
		if (i != -1) {
			AddUnLight__Fi(i);
			SplTarget[pnum].spotid = -1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_Cast_Spell__Fi(int pnum /*$s2*/)
 // line 591, offset 0x8009771c
	/* begin block 1 */
		// Start line: 592
		// Start offset: 0x8009771C
		// Variables:
	// 		struct PlayerStruct *player; // $s0
	// 		int sp; // $s1
	// 		struct CBlocks *gblocks; // $s3
	// 		int omp; // $s5
	// 		struct CPad *pad; // $a1
	// 		unsigned char DoTarget; // $s4

		/* begin block 1.1 */
			// Start line: 605
			// Start offset: 0x800977AC

			/* begin block 1.1.1 */
				// Start line: 608
				// Start offset: 0x80097800

				/* begin block 1.1.1.1 */
					// Start line: 609
					// Start offset: 0x80097800

					/* begin block 1.1.1.1.1 */
						// Start line: 610
						// Start offset: 0x80097828
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009798C
					// End Line: 641
				/* end block 1.1.1.1 */
				// End offset: 0x80097C6C
				// End Line: 708
			/* end block 1.1.1 */
			// End offset: 0x80097C6C
			// End Line: 708
		/* end block 1.1 */
		// End offset: 0x80097C6C
		// End Line: 708
	/* end block 1 */
	// End offset: 0x80097C74
	// End Line: 712

	/* begin block 2 */
		// Start line: 1338
	/* end block 2 */
	// End Line: 1339

void pad_func_Cast_Spell__Fi(int pnum)

{
	char cVar1;
	short sVar2;
	bool bVar3;
	int iVar4;
	ushort uVar5;
	CBlocks *Bg;
	CPad *this;
	int dir;
	int iVar6;
	uint pnum_00;
	
	iVar6 = plr[pnum]._pRSpell;
	Bg = BL_GetCurrentBlocks__Fv();
	iVar4 = myplr;
	this = PAD_GetPad__FiUc(pnum,'\0');
	dir = myplr;
	if (((Bg != (CBlocks *)0x0) && (dir = myplr, plr[pnum]._pmode != 9)) &&
		 (dir = iVar4,
		 ((uint)questlog | (int)stextflag | (uint)qtextflag | (uint)chrflag | (uint)invflag |
		 (uint)optionsflag) == 0)) {
		myplr = pnum;
		if ((leveltype == '\0') && (myplr = pnum, uVar5 = GetCur__C4CPad(this), (uVar5 & 0x400) != 0)) {
			dung_map[(int)plr[pnum]._px * 0x6c + (int)plr[pnum]._py].dPlayer = '\0';
			if ((uint)(ushort)plr[pnum]._px - 0x19 < 2) {
				plr[pnum].WorldX = 0x1dc;
				dir = 0x234;
			}
			else {
				if ((plr[pnum]._py == 0x47) || (plr[pnum]._px == 0x3b)) {
					plr[pnum].WorldX = 0x28c;
					dir = 0xb4;
				}
				else {
					plr[pnum].WorldX = 0xcc;
					dir = 0xfc;
				}
			}
			plr[pnum].WorldY = dir;
			PlacePlayer__FiiiUc(pnum,plr[pnum].WorldX >> 3,plr[pnum].WorldY >> 3,'\x01');
			pnum_00 = pnum ^ 1;
			PlacePlayer__FiiiUc(pnum_00,plr[pnum].WorldX >> 3,plr[pnum].WorldY >> 3,'\0');
			ChangeLightXY__Fiii((int)plr[pnum_00]._plid,(int)plr[pnum_00]._px,(int)plr[pnum_00]._py);
			ChangeVisionXY__Fiii((int)plr[pnum_00]._pvid,(int)plr[pnum_00]._px,(int)plr[pnum_00]._py);
			PM_ChangeLightOff__Fi(pnum);
			dir = iVar4;
			if (Bg != (CBlocks *)0x0) {
				SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(gplayer,plr + pnum,Bg);
				MoveToScrollTarget__7CBlocks(Bg);
				dir = iVar4;
			}
		}
		else {
			if (((FePlayerNo != 0) || ((dir = myplr, iVar6 != 0x22 && (dir = myplr, iVar6 != 0x20)))) &&
				 ((iVar6 != 0x20 || (dir = myplr, plr[pnum ^ 1].plractive == '\0')))) {
				if (SplTarget[pnum].active == '\x01') {
					release_spell__Fi(pnum);
					dir = myplr;
				}
				else {
					if (((((iVar6 == 7) || (iVar6 == 0xd)) || (iVar6 == 0x17)) ||
							((iVar6 == 0x15 || (iVar6 == 0x21)))) || (bVar3 = false, iVar6 == 8)) {
						bVar3 = true;
					}
					if (bVar3) {
						dir = myplr;
						if (leveltype != '\0') {
							if (SplTarget[pnum].active == '\0') {
								cVar1 = plr[pnum]._pRSplType;
								plr[pnum]._pTSpell = (char)plr[pnum]._pRSpell;
								plr[pnum]._pTSplType = cVar1;
								InitTargetCursor__Fi(pnum);
								dir = iVar4;
							}
							else {
								release_spell__Fi(pnum);
								NewCursor__Fi(1);
								dir = iVar4;
							}
						}
					}
					else {
						dir = (&_pcursmonst)[sel_data];
						if (dir != -1) {
							dir = GetDirection__Fiiii((int)plr[pnum]._px,(int)plr[pnum]._py,(int)monster[dir]._mx,
																				(int)monster[dir]._my);
							StartStand__Fii(pnum,dir);
						}
						if ((iVar6 == 0x22) || (iVar6 == 0x20)) {
							pnum_00 = pnum ^ 1;
							SplTarget[pnum].active = '\x01';
							SplTarget[pnum]._sx = (uchar)plr[pnum_00]._px;
							SplTarget[pnum]._sy = (uchar)plr[pnum_00]._py;
							dir = sel_data;
							sVar2 = plr[pnum_00]._py;
							plr[pnum_00]._pfutx = plr[pnum_00]._px;
							plr[pnum_00]._pfuty = sVar2;
							(&_pcursplr)[dir] = (char)pnum_00;
						}
						CheckPlrSpell__Fv();
						SplTarget[pnum].active = '\0';
						dir = iVar4;
					}
				}
			}
		}
	}
	myplr = dir;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_Use_Item__Fi(int pnum /*$a1*/)
 // line 719, offset 0x80097c9c
	/* begin block 1 */
		// Start line: 720
		// Start offset: 0x80097C9C
	/* end block 1 */
	// End offset: 0x80097D4C
	// End Line: 725

	/* begin block 2 */
		// Start line: 1603
	/* end block 2 */
	// End Line: 1604

void pad_func_Use_Item__Fi(int pnum)

{
	if ((((uint)chrflag | (int)stextflag | (uint)qtextflag | (uint)_spselflag2 | (uint)PTR_8012b154 |
				(uint)sbookflag | (uint)questlog | (uint)optionsflag) == 0) && (_pcurr_inv[sel_data] != -1))
	{
		PostGamePad__Fiiii(10,pnum,(int)pad_func_Use_Item__Fi,(int)select_belt_item__Fi);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_Chr__Fi(int pnum /*$s0*/)
 // line 733, offset 0x80097d5c
	/* begin block 1 */
		// Start line: 734
		// Start offset: 0x80097D5C
	/* end block 1 */
	// End offset: 0x80097E50
	// End Line: 747

	/* begin block 2 */
		// Start line: 1633
	/* end block 2 */
	// End Line: 1634

void pad_func_Chr__Fi(int pnum)

{
	if (((uint)invflag | (int)stextflag | (uint)qtextflag | (uint)_spselflag2 | (uint)PTR_8012b154 |
			 (uint)sbookflag | (uint)questlog | (uint)optionsflag) == 0) {
		chrflag = chrflag ^ 1;
		if (chrflag == 0) {
			PostGamePad__Fiiii(5,0,0,0);
		}
		else {
			RemoveTargetCursor__Fi(pnum);
			initchr = &DAT_00000001;
			options_pad = pnum;
			PostGamePad__Fiiii(2,0,0,0);
			TSK_AddTask(0,DrawChrTSK__FP4TASK,0x1000,0);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_Inv__Fi(int pnum /*$s0*/)
 // line 751, offset 0x80097e64
	/* begin block 1 */
		// Start line: 752
		// Start offset: 0x80097E64
	/* end block 1 */
	// End offset: 0x80097F3C
	// End Line: 764

	/* begin block 2 */
		// Start line: 1672
	/* end block 2 */
	// End Line: 1673

void pad_func_Inv__Fi(int pnum)

{
	if (((uint)chrflag | (int)stextflag | (uint)qtextflag | (uint)_spselflag2 | (uint)PTR_8012b154 |
			 (uint)sbookflag | (uint)questlog | (uint)optionsflag) == 0) {
		invflag = invflag ^ 1;
		if (invflag == 0) {
			PostGamePad__Fiiii(5,0,0,0);
		}
		else {
			RemoveTargetCursor__Fi(pnum);
			options_pad = pnum;
			PostGamePad__Fiiii(2,0,0,0);
			GLUE_SetShowPanelFlag__Fb((void *)0x0);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_SplBook__Fi(int pnum /*$a1*/)
 // line 768, offset 0x80097f50
	/* begin block 1 */
		// Start line: 769
		// Start offset: 0x80097F50
	/* end block 1 */
	// End offset: 0x8009802C
	// End Line: 780

	/* begin block 2 */
		// Start line: 1707
	/* end block 2 */
	// End Line: 1708

void pad_func_SplBook__Fi(int pnum)

{
	if (((uint)(chrflag | invflag) | (int)stextflag | (uint)qtextflag | (uint)_spselflag2 |
			 (uint)PTR_8012b154 | (uint)questlog | (uint)optionsflag) == 0) {
		sbookflag = sbookflag ^ 1;
		if (sbookflag == 0) {
			PostGamePad__Fiiii(5,0,0,0);
		}
		else {
			options_pad = pnum;
			PostGamePad__Fiiii(2,0,0,0);
			TSK_AddTask(0,DrawSpellBookTSK__FP4TASK,0x800,0);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_QLog__Fi(int pnum /*$a1*/)
 // line 784, offset 0x8009803c
	/* begin block 1 */
		// Start line: 785
		// Start offset: 0x8009803C
	/* end block 1 */
	// End offset: 0x800980B0
	// End Line: 788

	/* begin block 2 */
		// Start line: 1740
	/* end block 2 */
	// End Line: 1741

void pad_func_QLog__Fi(int pnum)

{
	if (((uint)invflag | (int)stextflag | (uint)qtextflag | (uint)_spselflag2 | (uint)PTR_8012b154 |
			 (uint)sbookflag | (uint)optionsflag) == 0) {
		options_pad = pnum;
		StartQuestlog__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_SpellBook__Fi(int pnum /*$s0*/)
 // line 801, offset 0x800980c0
	/* begin block 1 */
		// Start line: 802
		// Start offset: 0x800980C0
	/* end block 1 */
	// End offset: 0x80098144
	// End Line: 806

	/* begin block 2 */
		// Start line: 1775
	/* end block 2 */
	// End Line: 1776

void pad_func_SpellBook__Fi(int pnum)

{
	if (((int)stextflag | (uint)qtextflag | (uint)PauseMode | (uint)chrflag | (uint)invflag |
			 (uint)questlog | (uint)optionsflag | (uint)sbookflag) == 0) {
		ToggleSpell__Fi(pnum);
		RemoveTargetCursor__Fi(pnum);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_AutoMap__Fi(int pnum /*$a0*/)
 // line 836, offset 0x80098158
	/* begin block 1 */
		// Start line: 837
		// Start offset: 0x80098158
	/* end block 1 */
	// End offset: 0x80098204
	// End Line: 848

	/* begin block 2 */
		// Start line: 1847
	/* end block 2 */
	// End Line: 1848

void pad_func_AutoMap__Fi(int pnum)

{
	if (((int)stextflag | (uint)questlog | (uint)qtextflag | (uint)PauseMode | (uint)sbookflag |
			 (uint)invflag | (uint)chrflag | (uint)optionsflag) == 0) {
		if (automapflag == '\0') {
			automapmoved = '\0';
		}
		else {
			if (automapmoved != '\0') {
				return;
			}
		}
		DoAutoMap__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_Quick_Spell__Fi(int pnum /*$a0*/)
 // line 862, offset 0x80098214
	/* begin block 1 */
		// Start line: 863
		// Start offset: 0x80098214
		// Variables:
	// 		struct PlayerStruct *player; // $v0
	// 		int sp; // $a2
	// 		char spt; // $a1
	/* end block 1 */
	// End offset: 0x80098288
	// End Line: 871

	/* begin block 2 */
		// Start line: 1900
	/* end block 2 */
	// End Line: 1901

void pad_func_Quick_Spell__Fi(int pnum)

{
	char cVar1;
	int iVar2;
	
	iVar2 = plr[pnum]._pRSpell;
	cVar1 = plr[pnum]._pRSplType;
	plr[pnum]._pRSpell = (int)QSpell[pnum];
	plr[pnum]._pRSplType = _spltotype[pnum];
	QSpell[pnum] = (char)iVar2;
	_spltotype[pnum] = cVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ check_inv__FiPci(int pnum /*$s3*/, char *ilist /*$s6*/, int entries /*$s7*/)
 // line 893, offset 0x80098290
	/* begin block 1 */
		// Start line: 894
		// Start offset: 0x80098290
		// Variables:
	// 		int i; // $s1
	// 		int ii; // $v0
	// 		struct PlayerStruct *player; // $s4

		/* begin block 1.1 */
			// Start line: 894
			// Start offset: 0x80098290
		/* end block 1.1 */
		// End offset: 0x80098424
		// End Line: 929
	/* end block 1 */
	// End offset: 0x80098424
	// End Line: 929

	/* begin block 2 */
		// Start line: 1964
	/* end block 2 */
	// End Line: 1965

void check_inv__FiPci(int pnum,char *ilist,int entries)

{
	uchar uVar1;
	int iVar2;
	PlayerStruct *pPVar3;
	int iVar4;
	char *pcVar5;
	PlayerStruct *pPVar6;
	
	pPVar6 = plr + pnum;
	NewCursor__Fi(1);
	pcVar5 = ilist;
	if (0 < entries) {
		do {
			iVar4 = 0;
			do {
				iVar2 = (int)(char)(&DAT_00001dc0)[(int)&pPVar6->_pmode + iVar4];
				if ((((0 < iVar2) &&
						 (*(short *)((int)(&pPVar6->_pmode + (iVar2 + -1) * 0x26) + 0x656) != -1)) &&
						((int)*(short *)((int)(&pPVar6->_pmode + (iVar2 + -1) * 0x26) + 0x66a) == (int)*pcVar5))
					 && (uVar1 = UseInvItem__Fii(pnum,iVar2 + 6), uVar1 != '\0')) {
					return;
				}
				iVar4 = iVar4 + 1;
			} while (iVar4 < 0x28);
			iVar4 = 0;
			pPVar3 = pPVar6;
			do {
				if (((*(short *)(&DAT_00001e42 + (int)pPVar3) != -1) &&
						((int)pPVar3->SpdList[0]._iMiscId == (int)*pcVar5)) &&
					 (uVar1 = UseInvItem__Fii(pnum,iVar4 + 0x2f), uVar1 != '\0')) {
					if (_pcurr_inv[sel_data] != iVar4) {
						return;
					}
					get_next_inv__Fv();
					return;
				}
				iVar4 = iVar4 + 1;
				pPVar3 = (PlayerStruct *)(pPVar3->_pSplLvl + 0x1b);
			} while (iVar4 < 8);
			pcVar5 = pcVar5 + 1;
		} while ((int)pcVar5 < (int)(ilist + entries));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_Quick_Use_Health__Fi(int pnum /*$a0*/)
 // line 938, offset 0x80098458
	/* begin block 1 */
		// Start line: 939
		// Start offset: 0x80098458
	/* end block 1 */
	// End offset: 0x80098470
	// End Line: 940

	/* begin block 2 */
		// Start line: 2060
	/* end block 2 */
	// End Line: 2061

void pad_func_Quick_Use_Health__Fi(int pnum)

{
	check_inv__FiPci(pnum,health_order,4);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_Quick_Use_Mana__Fi(int pnum /*$a0*/)
 // line 949, offset 0x80098480
	/* begin block 1 */
		// Start line: 950
		// Start offset: 0x80098480
	/* end block 1 */
	// End offset: 0x80098498
	// End Line: 951

	/* begin block 2 */
		// Start line: 2082
	/* end block 2 */
	// End Line: 2083

void pad_func_Quick_Use_Mana__Fi(int pnum)

{
	check_inv__FiPci(pnum,mana_order,4);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ get_max_find_size__FPici(int *lsize /*$s4*/, char mask /*$a1*/, int pnum /*$a2*/)
 // line 955, offset 0x800984a8
	/* begin block 1 */
		// Start line: 956
		// Start offset: 0x800984A8
		// Variables:
	// 		int maxlen; // $s3
	// 		int size; // $s2

		/* begin block 1.1 */
			// Start line: 956
			// Start offset: 0x800984A8
			// Variables:
		// 		int i; // $s1

			/* begin block 1.1.1 */
				// Start line: 960
				// Start offset: 0x8009851C

				/* begin block 1.1.1.1 */
					// Start line: 962
					// Start offset: 0x80098540

					/* begin block 1.1.1.1.1 */
						// Start line: 963
						// Start offset: 0x80098568
						// Variables:
					// 		int l; // $v1
					/* end block 1.1.1.1.1 */
					// End offset: 0x800985B4
					// End Line: 967
				/* end block 1.1.1.1 */
				// End offset: 0x800985B4
				// End Line: 967
			/* end block 1.1.1 */
			// End offset: 0x800985B4
			// End Line: 967
		/* end block 1.1 */
		// End offset: 0x800985BC
		// End Line: 969
	/* end block 1 */
	// End offset: 0x800985C4
	// End Line: 971

	/* begin block 2 */
		// Start line: 2094
	/* end block 2 */
	// End Line: 2095

int get_max_find_size__FPici(int *lsize,char mask,int pnum)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = GetStrWidth__5CFontPc(&MediumFont,plr[pnum]._pName);
	iVar4 = 0;
	iVar3 = 0;
	while( true ) {
		if ((int)_pfind_index[sel_data] <= iVar3) break;
		if (_pfind_list[sel_data * 10 + iVar3].type == mask) {
			iVar4 = iVar4 + 1;
			GetItemStr__Fi((int)_pfind_list[sel_data * 10 + iVar3].index);
			iVar2 = GetStrWidth__5CFontPc(&MediumFont,_infostr + sel_data * 0x100);
			if (iVar1 < iVar2) {
				iVar1 = iVar2;
			}
		}
		iVar3 = iVar3 + 1;
	}
	*lsize = iVar4;
	return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ sort_gold__Fi(int pnum /*$a0*/)
 // line 974, offset 0x800985e8
	/* begin block 1 */
		// Start line: 975
		// Start offset: 0x800985E8
		// Variables:
	// 		int num_gold_items; // $s1

		/* begin block 1.1 */
			// Start line: 975
			// Start offset: 0x800985E8
			// Variables:
		// 		int i; // $s0
		/* end block 1.1 */
		// End offset: 0x800986D8
		// End Line: 991
	/* end block 1 */
	// End offset: 0x800986DC
	// End Line: 993

	/* begin block 2 */
		// Start line: 2135
	/* end block 2 */
	// End Line: 2136

int sort_gold__Fi(int pnum)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = (int)_pfind_index[sel_data];
	iVar2 = 0;
	if (0 < iVar3) {
		iVar1 = 0;
		do {
			if ((&_pfind_list[sel_data * 10].type)[iVar1] == '\x04') {
				if (item[(int)(&_pfind_list[sel_data * 10].index)[iVar1]]._itype == 0xb) {
					iVar3 = iVar3 + -1;
					NetSendCmdLocParam1__FUcUcUcUcUs
										('\x01','*',(&_pfind_list[sel_data * 10].x)[iVar1],
										 (&_pfind_list[sel_data * 10].y)[iVar1],
										 (int)(&_pfind_list[sel_data * 10].index)[iVar1] & 0xffff);
				}
				ProcessPlayers__Fv();
			}
			iVar2 = iVar2 + 1;
			iVar1 = iVar2 * 4;
		} while (iVar2 < (int)_pfind_index[sel_data]);
	}
	return iVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawObjSelector__Fi(int pnum /*$s1*/)
 // line 996, offset 0x800986f4
	/* begin block 1 */
		// Start line: 997
		// Start offset: 0x800986F4
		// Variables:
	// 		struct PlayerStruct *player; // $s7
	// 		char str[30]; // stack offset -192
	// 		struct CPad *Pad; // $s0
	// 		int cp; // $s2
	// 		int list_size; // stack offset -160
	// 		int maxlen; // stack offset -152
	// 		int cgold; // $v0

		/* begin block 1.1 */
			// Start line: 1080
			// Start offset: 0x80098B34
			// Variables:
		// 		int i; // $s5

			/* begin block 1.1.1 */
				// Start line: 1097
				// Start offset: 0x80098CBC
				// Variables:
			// 		int R; // $t1
			// 		int G; // $t0
			// 		int B; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 1106
					// Start offset: 0x80098D58

					/* begin block 1.1.1.1.1 */
						// Start line: 1106
						// Start offset: 0x80098D68
						// Variables:
					// 		int len; // $s1
					/* end block 1.1.1.1.1 */
					// End offset: 0x80098E70
					// End Line: 1114
				/* end block 1.1.1.1 */
				// End offset: 0x80098E70
				// End Line: 1114
			/* end block 1.1.1 */
			// End offset: 0x80098F38
			// End Line: 1132
		/* end block 1.1 */
		// End offset: 0x80098F84
		// End Line: 1135
	/* end block 1 */
	// End offset: 0x80098F84
	// End Line: 1135

	/* begin block 2 */
		// Start line: 2180
	/* end block 2 */
	// End Line: 2181

void DrawObjSelector__Fi(int pnum)

{
	uchar x;
	uchar y;
	char cVar1;
	ushort uVar2;
	CPad *this;
	int DX;
	byte bVar3;
	uint B;
	uint G;
	uint R;
	uint uVar4;
	int DW;
	int iVar5;
	int iVar6;
	char acStack192 [32];
	int local_a0 [2];
	int local_98;
	int local_30;
	
	this = PAD_GetPad__FiUc(pnum,'\0');
	uVar2 = GetDown__C4CPad(this);
	GetCur__C4CPad(this);
	CheckArea__FiiicUci((int)plr[pnum]._px,(int)plr[pnum]._py,2,'\x04',1,-1);
	if (_pfind_index[sel_data] != '\0') {
		DX = sort_gold__Fi(pnum);
		if (DX != (int)_pfind_index[sel_data]) {
			if (DX == 1) {
				(&_pcursitem)[sel_data] = _pfind_list[sel_data * 10].index;
				_pfindx[sel_data] = _pfind_list[sel_data * 10].x;
				_pfindy[sel_data] = _pfind_list[sel_data * 10].y;
				StartStand__Fii(pnum,(int)plr[pnum]._pdir);
				cVar1 = (&_pcursitem)[sel_data];
				x = _pfindx[sel_data];
				y = _pfindy[sel_data];
				_pcurs[myplr] = 1;
				NetSendCmdLocParam1__FUcUcUcUcUs('\x01','*',x,y,(int)cVar1 & 0xffff);
				select_flag = '\0';
				return;
			}
			CheckArea__FiiicUci((int)plr[pnum]._px,(int)plr[pnum]._py,2,'\x04',1,-1);
		}
		local_98 = get_max_find_size__FPici(local_a0,'\x04',pnum);
		if (local_a0[0] == 0) {
			_pfind_index[sel_data] = '\0';
		}
		else {
			CheckNewPath__Fi(pnum);
			if ((uVar2 & 2) != 0) {
				bVar3 = item_select + 1;
				cVar1 = item_select + '\x02';
				item_select = bVar3;
				if ((&_pfind_list[sel_data * 10].type)[(int)((uint)bVar3 << 0x18) >> 0x16] == -1) {
					item_select = cVar1;
				}
				item_select = (char)((int)item_select % local_a0[0]);
			}
			if ((uVar2 & 1) != 0) {
				bVar3 = item_select - 1;
				cVar1 = item_select + -2;
				item_select = bVar3;
				if ((&_pfind_list[sel_data * 10].type)[(int)((uint)bVar3 << 0x18) >> 0x16] == -1) {
					item_select = cVar1;
				}
				if (item_select < '\0') {
					item_select = item_select + (char)local_a0[0];
				}
			}
			(&_pcursitem)[sel_data] = _pfind_list[sel_data * 10 + (int)item_select].index;
			if ((uVar2 & 0x200) == 0) {
				DX = local_a0[0];
				if ((uVar2 & 0x40) != 0) {
					_pfindx[sel_data] = _pfind_list[sel_data * 10 + (int)item_select].x;
					_pfindy[sel_data] = _pfind_list[sel_data * 10 + (int)item_select].y;
					StartStand__Fii(pnum,(int)plr[pnum]._pdir);
					AutoGetItem__Fii(pnum,(int)(&_pcursitem)[sel_data]);
					DX = local_a0[0] + -1;
					if (DX <= (int)item_select) {
						item_select = (char)local_a0[0] + -2;
					}
				}
				local_a0[0] = DX;
				SetBack__6Dialogi(&SelectBack,0xc6);
				SetBorder__6Dialogi(&SelectBack,0x28);
				iVar5 = 0;
				local_30 = 0x10;
				SetRGB__6DialogUcUcUc(&SelectBack,BACKR,BACKG,BACKB);
				uVar4 = 0xf4 - local_98;
				DX = ((int)(uVar4 + (uVar4 >> 0x1f)) >> 1) + 0x20;
				DW = local_98 + 0xc;
				Back__6Dialogiiii(&SelectBack,DX,(local_a0[0] * -0xc + 0xa4 >> 1) + 0x10,DW,0x10);
				SelectRect.h = 0x10;
				SelectRect.y = (short)(local_a0[0] * -0xc + 0xa4 >> 1) + 0x10;
				SelectRect.x = (short)DX;
				SelectRect.w = (short)DW;
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(&MediumFont,0,0xc,plr[pnum]._pName,JustCentre,&SelectRect,(uint)WHITER,
									 (uint)WHITEG,(uint)WHITEG);
				Back__6Dialogiiii(&SelectBack,DX,(local_a0[0] * -0xc + 0xa4 >> 1) + 0x20,DW,
													local_a0[0] * 0xc + 0xc);
				iVar6 = 0;
				SelectRect.y = (short)(local_a0[0] * -0xc + 0xa4 >> 1) + 0x20;
				SelectRect.h = (short)local_a0[0] * 0xc + 0xc;
				SelectRect.x = (short)DX;
				SelectRect.w = (short)DW;
				do {
					if ((int)_pfind_index[sel_data] <= iVar5) {
						return;
					}
					_infoclr[sel_data] = '\0';
					if (_pfind_list[sel_data * 10 + iVar5].type == '\x04') {
						GetItemStr__Fi((int)_pfind_list[sel_data * 10 + iVar5].index);
						strcpy(acStack192,_infostr + sel_data * 0x100);
					}
					if (iVar5 == (int)item_select) {
						DX = GetStrWidth__5CFontPc(&MediumFont,acStack192);
						DW = ((int)(uVar4 + (uVar4 >> 0x1f)) >> 1) +
								 ((int)(local_98 + 0xcU + (local_98 + 0xcU >> 0x1f)) >> 1) + 0x20;
						DX = (int)(DX + 0x10U + (DX + 0x10U >> 0x1f)) >> 1;
						DrawSpinner__FiiUcUcUciiibiT8
											((DW - DX) + -0xb,iVar6 + (local_a0[0] * -0xc + 0xa4 >> 1) + 0x30,-0x10,'@',0,
											 0x20,0x40,0,&DAT_00000001,0x100,&DAT_00000001);
						DrawSpinner__FiiUcUcUciiibiT8
											(DW + DX + 3,iVar6 + (local_a0[0] * -0xc + 0xa4 >> 1) + 0x30,-0x10,'@',0,0x20,
											 0x40,0,&DAT_00000001,0x100,&DAT_00000001);
					}
					cVar1 = _infoclr[sel_data];
					if (cVar1 == '\x01') {
						R = (uint)REDR;
						G = (uint)REDG;
						B = (uint)REDB;
					}
					else {
						if (cVar1 < '\x02') {
							if (cVar1 == '\0') {
								R = (uint)WHITER;
								G = (uint)WHITEG;
								B = (uint)WHITEB;
							}
							else {
LAB_80098f20:
								R = (uint)GOLDR;
								G = (uint)GOLDG;
								B = (uint)GOLDB;
							}
						}
						else {
							if (cVar1 != '\x02') goto LAB_80098f20;
							R = (uint)BLUER;
							G = (uint)BLUEG;
							B = (uint)BLUEB;
						}
					}
					Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
										(&MediumFont,0,local_30,acStack192,JustCentre,&SelectRect,R,G,B);
					iVar6 = iVar6 + 0xc;
					iVar5 = iVar5 + 1;
					local_30 = local_30 + 0xc;
				} while( true );
			}
		}
	}
	select_flag = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawObjTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 1140, offset 0x80098fb8
	/* begin block 1 */
		// Start line: 1141
		// Start offset: 0x80098FB8
		// Variables:
	// 		struct DEF_ARGS *args; // $v0
	// 		int pnum; // $s1

		/* begin block 1.1 */
			// Start line: 1153
			// Start offset: 0x80098FFC
			// Variables:
		// 		int oseldata; // $s0
		/* end block 1.1 */
		// End offset: 0x80099020
		// End Line: 1155
	/* end block 1 */
	// End offset: 0x8009907C
	// End Line: 1165

	/* begin block 2 */
		// Start line: 2511
	/* end block 2 */
	// End Line: 2512

void DrawObjTask__FP4TASK(TASK *T)

{
	int iVar1;
	undefined *puVar2;
	int pnum;
	
	pnum = *(int *)T->fActive;
	GLUE_SuspendGame__Fv();
	select_flag = '\x01';
	item_select = '\0';
	PostGamePad__Fiiii(2,0,0,0);
	while ((select_flag != '\0' &&
				 (puVar2 = (undefined *)GLUE_Finished__Fv(), iVar1 = sel_data, puVar2 != &DAT_00000001))) {
		sel_data = pnum;
		DrawObjSelector__Fi(pnum);
		sel_data = iVar1;
		TSK_Sleep(1);
	}
	PostGamePad__Fiiii(5,0,0,0);
	options_pad = -1;
	sel_data = -1;
	GLUE_ResumeGame__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ add_area_find_object__Fciii(char type /*$t1*/, int index /*$a1*/, int x /*$a2*/, int y /*$a3*/)
 // line 1173, offset 0x80099094
	/* begin block 1 */
		// Start line: 1174
		// Start offset: 0x80099094
	/* end block 1 */
	// End offset: 0x80099194
	// End Line: 1179

	/* begin block 2 */
		// Start line: 2581
	/* end block 2 */
	// End Line: 2582

void add_area_find_object__Fciii(char type,int index,int x,int y)

{
	byte bVar1;
	
	if ((int)_pfind_index[sel_data] < 9) {
		_pfind_list[sel_data * 10 + (int)_pfind_index[sel_data]].x = (char)x;
		_pfind_list[sel_data * 10 + (int)_pfind_index[sel_data]].y = (char)y;
		_pfind_list[sel_data * 10 + (int)_pfind_index[sel_data]].index = (char)index;
		bVar1 = _pfind_index[sel_data];
		_pfind_index[sel_data] = bVar1 + 1;
		(&_pfind_list[sel_data * 10].type)[(int)((uint)bVar1 << 0x18) >> 0x16] = type;
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckRangeObject__Fiici(int x /*$t0*/, int y /*$t1*/, char cmask /*$a2*/, int distance /*$a3*/)
 // line 1188, offset 0x800991a0
	/* begin block 1 */
		// Start line: 1189
		// Start offset: 0x800991A0
		// Variables:
	// 		char co; // $v1
	/* end block 1 */
	// End offset: 0x80099550
	// End Line: 1259

	/* begin block 2 */
		// Start line: 2611
	/* end block 2 */
	// End Line: 2612

uchar CheckRangeObject__Fiici(int x,int y,char cmask,int distance)

{
	char cVar1;
	byte bVar2;
	bool bVar3;
	byte bVar4;
	char type;
	int index;
	
	if (0x6f < (uint)x) {
		return '\0';
	}
	if (0x6f < (uint)y) {
		return '\0';
	}
	if ((1 < distance) && ((dung_map[x * 0x6c + y].dFlags & 0x40U) == 0)) {
		return '\0';
	}
	if (((cmask & 8U) == 0) || (cVar1 = dung_map[x * 0x6c + y].dPlayer, cVar1 < '\x01')) {
		if ((cmask & 1U) != 0) {
			if ((int)dung_map[x * 0x6c + y].dMonster < 1) {
				return '\0';
			}
			bVar3 = false;
			if ((leveltype == '\0') ||
				 ((ushort)monster[(int)dung_map[x * 0x6c + y].dMonster + -1]._mhitpoints >> 6 != 0)) {
				bVar3 = true;
			}
			type = '\x01';
			if (!bVar3) {
				return '\0';
			}
			index = (int)dung_map[x * 0x6c + y].dMonster + -1;
			(&_pcursmonst)[sel_data] = index;
			goto LAB_8009953c;
		}
		if (((cmask & 2U) != 0) && (bVar2 = dung_map[x * 0x6c + y].dObject, bVar2 != 0)) {
			bVar4 = bVar2 - 1;
			if ((char)bVar2 < '\x01') {
				bVar4 = ~bVar2;
			}
			index = (int)(char)bVar4;
			type = '\x02';
			if (object[index]._oSelFlag < '\x01') {
				return '\0';
			}
			(&_pcursobj)[sel_data] = bVar4;
			goto LAB_8009953c;
		}
		if ((cmask & 4U) == 0) {
			return '\0';
		}
		cVar1 = dung_map[x * 0x6c + y].dItem;
		if ((int)cVar1 < 1) {
			return '\0';
		}
		type = '\x04';
		if (item[(int)cVar1 + -1]._iSelFlag < '\x01') {
			return '\0';
		}
		(&_pcursitem)[sel_data] = cVar1 + -1;
		cVar1 = (&_pcursitem)[sel_data];
	}
	else {
		if (birdcheck != '\0') {
			(&_pcursplr)[sel_data] = cVar1 + -1;
			return '\x01';
		}
		if (sel_data == -1) {
			return '\x01';
		}
		if ((x == (int)plr[sel_data]._px) && (y == (int)plr[sel_data]._py)) {
			return '\x01';
		}
		type = '\b';
		(&_pcursplr)[sel_data] = cVar1 + -1;
		cVar1 = (&_pcursplr)[sel_data];
	}
	index = (int)cVar1;
LAB_8009953c:
	add_area_find_object__Fciii(type,index,x,y);
	return '\x01';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckArea__FiiicUci(int xx /*$s7*/, int yy /*$fp*/, int range /*stack -48*/, char c_mask /*$s5*/, int allflag /*stack 16*/, int pnum /*stack 20*/)
 // line 1263, offset 0x80099560
	/* begin block 1 */
		// Start line: 1264
		// Start offset: 0x80099560
		// Variables:
	// 		struct PlayerStruct *player; // $v0
	// 		int x; // $s2
	// 		int y; // $s4
	// 		int dir; // $s0
	// 		int front_range; // $s3

		/* begin block 1.1 */
			// Start line: 1264
			// Start offset: 0x80099560

			/* begin block 1.1.1 */
				// Start line: 1274
				// Start offset: 0x80099600
				// Variables:
			// 		int i; // $s1
			/* end block 1.1.1 */
			// End offset: 0x800996A8
			// End Line: 1292
		/* end block 1.1 */
		// End offset: 0x800996A8
		// End Line: 1292

		/* begin block 1.2 */
			// Start line: 1295
			// Start offset: 0x800996A8
			// Variables:
		// 		int l; // $s1

			/* begin block 1.2.1 */
				// Start line: 1295
				// Start offset: 0x800996B0

				/* begin block 1.2.1.1 */
					// Start line: 1297
					// Start offset: 0x800996C4
					// Variables:
				// 		int j; // $s3

					/* begin block 1.2.1.1.1 */
						// Start line: 1297
						// Start offset: 0x800996C4

						/* begin block 1.2.1.1.1.1 */
							// Start line: 1299
							// Start offset: 0x800996D0
							// Variables:
						// 		int i; // $s0
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8009974C
						// End Line: 1312
					/* end block 1.2.1.1.1 */
					// End offset: 0x8009974C
					// End Line: 1312
				/* end block 1.2.1.1 */
				// End offset: 0x80099754
				// End Line: 1313
			/* end block 1.2.1 */
			// End offset: 0x80099754
			// End Line: 1313
		/* end block 1.2 */
		// End offset: 0x8009975C
		// End Line: 1314
	/* end block 1 */
	// End offset: 0x80099780
	// End Line: 1318

	/* begin block 2 */
		// Start line: 2764
	/* end block 2 */
	// End Line: 2765

uchar CheckArea__FiiicUci(int xx,int yy,int range,char c_mask,int allflag,int pnum)

{
	char cVar1;
	uchar uVar2;
	bool bVar3;
	int distance;
	char cVar4;
	int x;
	int distance_00;
	char cVar5;
	int y;
	
	_pfind_index[sel_data] = '\0';
	distance = sel_data;
	_pfindy[sel_data] = -1;
	_pfindx[distance] = -1;
	if (((pnum != -1) && ((char)allflag == '\0')) && (distance = 0, leveltype != '\0')) {
		x = (int)plr[pnum]._px;
		y = (int)plr[pnum]._py;
		cVar1 = plr[pnum]._pdir;
		distance_00 = 1;
		if ((plr[pnum]._pwtype != 0) && ((c_mask & 1U) != 0)) {
			distance_00 = 5;
		}
		do {
			cVar5 = (char)y;
			cVar4 = (char)x;
			uVar2 = CheckRangeObject__Fiici(x,y,c_mask,distance_00);
			distance = distance + 1;
			if (uVar2 == '\x01') {
LAB_8009970c:
				_pfindx[sel_data] = cVar4;
				_pfindy[sel_data] = cVar5;
				return '\x01';
			}
			x = x + (int)offset_x[(int)cVar1];
			y = y + (int)offset_y[(int)cVar1];
		} while (distance <= distance_00);
	}
	distance = 1;
	do {
		x = -distance;
		if (range <= distance) {
			bVar3 = false;
			if ((char)allflag != '\0') {
				bVar3 = _pfind_index[sel_data] != '\0';
			}
			return (uchar)bVar3;
		}
		while (distance_00 = -distance, x <= distance) {
			cVar5 = (char)(yy + x);
			while (distance_00 <= distance) {
				cVar4 = (char)(xx + distance_00);
				uVar2 = CheckRangeObject__Fiici(xx + distance_00,yy + x,c_mask,distance);
				if ((uVar2 == '\x01') && ((char)allflag == '\0')) goto LAB_8009970c;
				distance_00 = distance_00 + 1;
			}
			x = x + 1;
		}
		distance = distance + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlacePlayer__FiiiUc(int pnum /*$s5*/, int x /*$s1*/, int y /*$s0*/, unsigned char do_current /*$a3*/)
 // line 1362, offset 0x800997b4
	/* begin block 1 */
		// Start line: 1363
		// Start offset: 0x800997B4
		// Variables:
	// 		struct PlayerStruct *player; // $s2
	/* end block 1 */
	// End offset: 0x800999B0
	// End Line: 1388

	/* begin block 2 */
		// Start line: 2972
	/* end block 2 */
	// End Line: 2973

void PlacePlayer__FiiiUc(int pnum,int x,int y,uchar do_current)

{
	uchar uVar1;
	int x_00;
	int y_00;
	
	dung_map[x * 0x6c + y].dPlayer = '\0';
	if ((do_current == '\0') ||
		 (uVar1 = PosOkPlayer__Fiii(pnum,x,y), y_00 = y, x_00 = x, uVar1 == '\0')) {
		x_00 = x + 1;
		uVar1 = PosOkPlayer__Fiii(pnum,x_00,y);
		y_00 = y;
		if (uVar1 == '\0') {
			y_00 = y + 1;
			uVar1 = PosOkPlayer__Fiii(pnum,x_00,y_00);
			if ((uVar1 == '\0') && (uVar1 = PosOkPlayer__Fiii(pnum,x,y_00), x_00 = x, uVar1 == '\0')) {
				x_00 = x + -1;
				uVar1 = PosOkPlayer__Fiii(pnum,x_00,y_00);
				if ((uVar1 == '\0') && (uVar1 = PosOkPlayer__Fiii(pnum,x_00,y), y_00 = y, uVar1 == '\0')) {
					y_00 = y + -1;
					uVar1 = PosOkPlayer__Fiii(pnum,x_00,y_00);
					if ((uVar1 == '\0') && (uVar1 = PosOkPlayer__Fiii(pnum,x,y_00), x_00 = x, uVar1 == '\0'))
					{
						y_00 = 0;
						x_00 = 0;
						goto LAB_80099964;
					}
				}
			}
		}
	}
	plr[pnum]._px = (short)x_00;
	plr[pnum]._py = (short)y_00;
LAB_80099964:
	dung_map[x_00 * 0x6c + y_00].dPlayer = (char)pnum + '\x01';
	WorldToOffset__Fiii(pnum,x_00 << 3 | 4,y_00 << 3 | 4);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.gplayer()
 // line 1388, offset 0x800999d8
	/* begin block 1 */
		// Start line: 1389
		// Start offset: 0x800999D8
	/* end block 1 */
	// End offset: 0x800999F0
	// End Line: 1389

	/* begin block 2 */
		// Start line: 3029
	/* end block 2 */
	// End Line: 3030

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_gplayer(void)

{
	___6Dialog(&SelectBack,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.gplayer()
 // line 1388, offset 0x80099a00
	/* begin block 1 */
		// Start line: 1389
		// Start offset: 0x80099A00
	/* end block 1 */
	// End offset: 0x80099A18
	// End Line: 1389

	/* begin block 2 */
		// Start line: 3029
	/* end block 2 */
	// End Line: 3030

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_gplayer(void)

{
	__6Dialog(&SelectBack);
	return;
}





