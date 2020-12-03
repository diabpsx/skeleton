#include "THISDUST.H"
#include "PADFUNCS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ SetQSpell__Fiii(int pnum /*$a0*/, int Spell /*$a1*/, int type /*$a2*/)
 // line 88, offset 0x800a09dc
	/* begin block 1 */
		// Start line: 89
		// Start offset: 0x800A09DC
	/* end block 1 */
	// End offset: 0x800A09F4
	// End Line: 91

	/* begin block 2 */
		// Start line: 177
	/* end block 2 */
	// End Line: 178

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetQSpell__Fiii(int pnum,int Spell,int type)

{
	QSpell[pnum] = (char)Spell;
	_spltotype[pnum] = (char)type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ release_spell__Fi(int pnum /*$s0*/)
 // line 99, offset 0x800a09fc
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x800A09FC
		// Variables:
	// 		struct SpellTarget *spl; // $v0
	/* end block 1 */
	// End offset: 0x800A0A4C
	// End Line: 112

	/* begin block 2 */
		// Start line: 198
	/* end block 2 */
	// End Line: 199

/* WARNING: Unknown calling convention yet parameter storage is locked */

void release_spell__Fi(int pnum)

{
	SpellTarget *pSVar1;
	
	pSVar1 = GetSpellTarget__Fi(sel_data);
	cursmx = ZEXT14(pSVar1->_stx);
	cursmy = ZEXT14(pSVar1->_sty);
	myplr = pnum;
	TryIconCurs__Fv();
	RemoveTargetCursor__Fi(pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ select_belt_item__Fi(int pnum /*$a0*/)
 // line 119, offset 0x800a0a60
	/* begin block 1 */
		// Start line: 120
		// Start offset: 0x800A0A60
	/* end block 1 */
	// End offset: 0x800A0A60
	// End Line: 120

	/* begin block 2 */
		// Start line: 250
	/* end block 2 */
	// End Line: 251

/* WARNING: Unknown calling convention yet parameter storage is locked */

void select_belt_item__Fi(int pnum)

{
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ any_belt_items__Fv()
 // line 136, offset 0x800a0a68
	/* begin block 1 */
		// Start line: 137
		// Start offset: 0x800A0A68
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x800A0AC8
	// End Line: 146

	/* begin block 2 */
		// Start line: 276
	/* end block 2 */
	// End Line: 277

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar any_belt_items__Fv(void)

{
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = myplr * 0x19e8;
	do {
		if (*(short *)((int)&plr[0].SpdList[0]._itype + iVar1) != -1) {
			return '\x01';
		}
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 0x6c;
	} while (iVar2 < 8);
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ get_last_inv__Fv()
 // line 152, offset 0x800a0ad0
	/* begin block 1 */
		// Start line: 153
		// Start offset: 0x800A0AD0
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x800A0BEC
	// End Line: 170

	/* begin block 2 */
		// Start line: 308
	/* end block 2 */
	// End Line: 309

/* WARNING: Unknown calling convention yet parameter storage is locked */

void get_last_inv__Fv(void)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = _pcurr_inv[sel_data] + -1;
	if (-1 < iVar3) {
		iVar2 = iVar3 * 0x6c + myplr * 0x19e8;
		do {
			if (*(short *)((int)&plr[0].SpdList[0]._itype + iVar2) != -1) {
				_pcurr_inv[sel_data] = iVar3;
				return;
			}
			iVar3 = iVar3 + -1;
			iVar2 = iVar2 + -0x6c;
		} while (-1 < iVar3);
	}
	uVar1 = any_belt_items__Fv();
	if (uVar1 == '\0') {
		_pcurr_inv[sel_data] = -1;
	}
	else {
		_pcurr_inv[sel_data] = 8;
		get_last_inv__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ get_next_inv__Fv()
 // line 176, offset 0x800a0bfc
	/* begin block 1 */
		// Start line: 177
		// Start offset: 0x800A0BFC
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x800A0D20
	// End Line: 195

	/* begin block 2 */
		// Start line: 365
	/* end block 2 */
	// End Line: 366

/* WARNING: Unknown calling convention yet parameter storage is locked */

void get_next_inv__Fv(void)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = _pcurr_inv[sel_data] + 1;
	if (iVar3 < 8) {
		iVar2 = iVar3 * 0x6c + myplr * 0x19e8;
		do {
			if (*(short *)((int)&plr[0].SpdList[0]._itype + iVar2) != -1) {
				_pcurr_inv[sel_data] = iVar3;
				return;
			}
			iVar3 = iVar3 + 1;
			iVar2 = iVar2 + 0x6c;
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
 // line 204, offset 0x800a0d30
	/* begin block 1 */
		// Start line: 205
		// Start offset: 0x800A0D30
	/* end block 1 */
	// End offset: 0x800A0D4C
	// End Line: 207

	/* begin block 2 */
		// Start line: 431
	/* end block 2 */
	// End Line: 432

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 214, offset 0x800a0d5c
	/* begin block 1 */
		// Start line: 215
		// Start offset: 0x800A0D5C
	/* end block 1 */
	// End offset: 0x800A0D78
	// End Line: 217

	/* begin block 2 */
		// Start line: 452
	/* end block 2 */
	// End Line: 453

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 224, offset 0x800a0d88
	/* begin block 1 */
		// Start line: 225
		// Start offset: 0x800A0D88
	/* end block 1 */
	// End offset: 0x800A0D88
	// End Line: 225

	/* begin block 2 */
		// Start line: 473
	/* end block 2 */
	// End Line: 474

/* WARNING: Unknown calling convention yet parameter storage is locked */

void pad_func_left__Fi(int pnum)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_right__Fi(int pnum /*$a0*/)
 // line 232, offset 0x800a0d90
	/* begin block 1 */
		// Start line: 233
		// Start offset: 0x800A0D90
	/* end block 1 */
	// End offset: 0x800A0D90
	// End Line: 233

	/* begin block 2 */
		// Start line: 489
	/* end block 2 */
	// End Line: 490

/* WARNING: Unknown calling convention yet parameter storage is locked */

void pad_func_right__Fi(int pnum)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_select__Fi(int pnum /*$s0*/)
 // line 251, offset 0x800a0d98
	/* begin block 1 */
		// Start line: 252
		// Start offset: 0x800A0D98
	/* end block 1 */
	// End offset: 0x800A0E48
	// End Line: 264

	/* begin block 2 */
		// Start line: 526
	/* end block 2 */
	// End Line: 527

/* WARNING: Unknown calling convention yet parameter storage is locked */

void pad_func_select__Fi(int pnum)

{
	if (((int)stextflag | (uint)qtextflag | (uint)_spselflag2 | (uint)PTR_8011b654 | (uint)sbookflag |
			 (uint)invflag | (uint)questlog | (uint)chrflag) == 0) {
		ToggleOptions__Fv();
		if (optionsflag == (void *)0x0) {
			options_pad = -1;
		}
		else {
			PlaySFX__Fi(IS_TITLSLCT);
			options_pad = pnum;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetFindMonsterXY__FP12PlayerStructi(struct PlayerStruct *p /*$a0*/, int i /*$a1*/)
 // line 270, offset 0x800a0e5c
	/* begin block 1 */
		// Start line: 271
		// Start offset: 0x800A0E5C

		/* begin block 1.1 */
			// Start line: 273
			// Start offset: 0x800A0E5C

			/* begin block 1.1.1 */
				// Start line: 274
				// Start offset: 0x800A0E70
				// Variables:
			// 		struct MonsterStruct *m; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800A0E70
			// End Line: 275

			/* begin block 1.1.2 */
				// Start line: 280
				// Start offset: 0x800A0EB4
				// Variables:
			// 		struct TownerStruct *t; // $v0
			/* end block 1.1.2 */
			// End offset: 0x800A0EE4
			// End Line: 283
		/* end block 1.1 */
		// End offset: 0x800A0EE4
		// End Line: 283
	/* end block 1 */
	// End offset: 0x800A0EE4
	// End Line: 283

	/* begin block 2 */
		// Start line: 568
	/* end block 2 */
	// End Line: 569

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetFindMonsterXY__FP12PlayerStructi(PlayerStruct *p,int i)

{
	short sVar1;
	
	if (leveltype == '\0') {
		p->_pVar6 = (short)towner[i]._tx;
		sVar1 = (short)towner[i]._ty;
	}
	else {
		p->_pVar6 = (short)monster[i]._mfutx;
		sVar1 = (short)monster[i]._mfuty;
	}
	p->_pVar7 = sVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_Attack__Fi(int pnum /*$s5*/)
 // line 293, offset 0x800a0eec
	/* begin block 1 */
		// Start line: 294
		// Start offset: 0x800A0EEC
		// Variables:
	// 		struct PlayerStruct *player; // $s2
	// 		int x; // $s0
	// 		int y; // $s1

		/* begin block 1.1 */
			// Start line: 319
			// Start offset: 0x800A0FBC

			/* begin block 1.1.1 */
				// Start line: 320
				// Start offset: 0x800A101C

				/* begin block 1.1.1.1 */
					// Start line: 321
					// Start offset: 0x800A101C

					/* begin block 1.1.1.1.1 */
						// Start line: 322
						// Start offset: 0x800A1098
						// Variables:
					// 		int fx; // $s0
					// 		int fy; // $s1
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A1098
					// End Line: 324

					/* begin block 1.1.1.1.2 */
						// Start line: 330
						// Start offset: 0x800A1114

						/* begin block 1.1.1.1.2.1 */
							// Start line: 330
							// Start offset: 0x800A1114

							/* begin block 1.1.1.1.2.1.1 */
								// Start line: 330
								// Start offset: 0x800A113C
								// Variables:
							// 		int fx; // $s1
							// 		int fy; // $s4
							// 		struct PlayerStruct *plr2; // $s7
							/* end block 1.1.1.1.2.1.1 */
							// End offset: 0x800A12C8
							// End Line: 366

							/* begin block 1.1.1.1.2.1.2 */
								// Start line: 371
								// Start offset: 0x800A12D8
								// Variables:
							// 		int oco; // $v1

								/* begin block 1.1.1.1.2.1.2.1 */
									// Start line: 372
									// Start offset: 0x800A12D8

									/* begin block 1.1.1.1.2.1.2.1.1 */
										// Start line: 374
										// Start offset: 0x800A12FC

										/* begin block 1.1.1.1.2.1.2.1.1.1 */
											// Start line: 375
											// Start offset: 0x800A12FC
											// Variables:
										// 		int fx; // $s0
										// 		int fy; // $s1
										/* end block 1.1.1.1.2.1.2.1.1.1 */
										// End offset: 0x800A136C
										// End Line: 384
									/* end block 1.1.1.1.2.1.2.1.1 */
									// End offset: 0x800A136C
									// End Line: 384
								/* end block 1.1.1.1.2.1.2.1 */
								// End offset: 0x800A136C
								// End Line: 384
							/* end block 1.1.1.1.2.1.2 */
							// End offset: 0x800A136C
							// End Line: 384
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x800A136C
						// End Line: 384
					/* end block 1.1.1.1.2 */
					// End offset: 0x800A136C
					// End Line: 384
				/* end block 1.1.1.1 */
				// End offset: 0x800A136C
				// End Line: 384
			/* end block 1.1.1 */
			// End offset: 0x800A136C
			// End Line: 384
		/* end block 1.1 */
		// End offset: 0x800A136C
		// End Line: 384
	/* end block 1 */
	// End offset: 0x800A136C
	// End Line: 384

	/* begin block 2 */
		// Start line: 612
	/* end block 2 */
	// End Line: 613

/* WARNING: Unknown calling convention yet parameter storage is locked */

void pad_func_Attack__Fi(int pnum)

{
	char cVar1;
	char cVar2;
	short sVar3;
	short sVar4;
	bool bVar5;
	uchar uVar6;
	SpellTarget *this;
	void *pvVar7;
	uchar x;
	uchar y;
	int x1;
	int x2;
	int y1;
	int y2;
	PlayerStruct *p;
	uint pnum_00;
	
	p = plr + pnum;
	x1 = (int)plr[pnum]._px;
	y1 = (int)plr[pnum]._py;
	this = GetSpellTarget__Fi(pnum);
	pvVar7 = Active__11SpellTarget(this);
	if (pvVar7 != (void *)0x0) {
		NewCursor__Fi(1);
		RemoveTargetCursor__Fi(pnum);
		return;
	}
	if (3 < (int)p->_pmode) {
		if (1 < p->_pmode + ~PM_WALK3) {
			return;
		}
		if (plr[pnum]._pAnimFrame < plr[pnum]._pAFNum) {
			return;
		}
	}
	if (((uint)questlog | (int)stextflag | (uint)qtextflag | (uint)chrflag | (uint)invflag |
			 (uint)optionsflag | (uint)(&_spselflag2)[pnum]) != 0) {
		return;
	}
	if (leveltype == '\0') {
LAB_800a1114:
		if ((&_pcursmonst)[sel_data] == -1) {
			x2 = (int)(&_pcursobj)[sel_data];
			if (leveltype == '\0') {
				return;
			}
			if (x2 == -1) {
				return;
			}
			x = object[x2]._ox;
			y = object[x2]._oy;
			plr[pnum]._pVar6 = (short)(char)x;
			plr[pnum]._pVar7 = (short)(char)y;
			x1 = GetDirection__Fiiii(x1,y1,(int)(char)x,(int)(char)y);
			plr[pnum]._pdir = (char)x1;
			StartStand__Fii(pnum,(int)(char)x1);
			goto LAB_800a1364;
		}
	}
	else {
		if ((&_pcursmonst)[sel_data] == -1) {
			if (((int)(&_pcursobj)[sel_data] == -1) ||
				 (object[(int)(&_pcursobj)[sel_data]]._oBreak != '\x01')) {
				cVar2 = offset_x[(int)plr[pnum]._pdir];
				cVar1 = plr[pnum]._pdir;
				plr[pnum]._pVar6 = (short)((int)cVar2 + x1);
				x2 = ((int)cVar2 + x1) * 0x10000;
				y2 = ((int)offset_y[(int)cVar1] + y1) * 0x10000;
				plr[pnum]._pVar7 = (short)((int)offset_y[(int)cVar1] + y1);
				x1 = GetDirection__Fiiii(x1,y1,x2 >> 0x10,y2 >> 0x10);
				x = (uchar)((uint)x2 >> 0x10);
				y = (uchar)((uint)y2 >> 0x10);
				plr[pnum]._pdir = (char)x1;
				goto LAB_800a1364;
			}
			goto LAB_800a1114;
		}
	}
	pnum_00 = pnum ^ 1;
	SetFindMonsterXY__FP12PlayerStructi(p,(&_pcursmonst)[sel_data]);
	sVar3 = plr[pnum]._pVar6;
	x2 = (int)sVar3;
	sVar4 = plr[pnum]._pVar7;
	y2 = (int)sVar4;
	x1 = GetDirection__Fiiii(x1,y1,x2,y2);
	plr[pnum]._pdir = (char)x1;
	plr[pnum].walkpath[0] = -1;
	x = (uchar)sVar3;
	y = (uchar)sVar4;
	if (leveltype != '\0') {
		uVar6 = CanTalkToMonst__Fi((&_pcursmonst)[sel_data]);
		if (uVar6 == '\0') {
LAB_800a1364:
			NetSendCmdLoc__FUcUcUcUc('\x01','7',x,y);
			return;
		}
		SetFindMonsterXY__FP12PlayerStructi(p,(&_pcursmonst)[sel_data]);
		bVar5 = false;
		x1 = abs((int)plr[pnum]._px - x2);
		if (x1 < 2) {
			x1 = abs((int)plr[pnum]._py - y2);
			bVar5 = x1 < 2;
		}
		if (!bVar5) {
			return;
		}
	}
	StartStand__Fii(pnum,(int)plr[pnum]._pdir);
	if (plr[pnum_00]._pmode == PM_WALK) {
		x1 = GetDirection__Fiiii((int)plr[pnum_00]._px,(int)plr[pnum_00]._py,x2,y2);
		StartStand__Fii(pnum_00,x1);
	}
	NetSendCmdLocParam1__FUcUcUcUcUs('\x01','\x1d',x,y,(uint)*(ushort *)(&_pcursmonst + sel_data));
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_Action__Fi(int pnum /*$s0*/)
 // line 396, offset 0x800a13a0
	/* begin block 1 */
		// Start line: 397
		// Start offset: 0x800A13A0
		// Variables:
	// 		struct PlayerStruct *player; // $s4
	// 		int x; // $s5
	// 		int y; // $s6
	// 		struct DEF_ARGS *args; // $v0

		/* begin block 1.1 */
			// Start line: 409
			// Start offset: 0x800A141C

			/* begin block 1.1.1 */
				// Start line: 410
				// Start offset: 0x800A148C

				/* begin block 1.1.1.1 */
					// Start line: 411
					// Start offset: 0x800A148C

					/* begin block 1.1.1.1.1 */
						// Start line: 416
						// Start offset: 0x800A14B0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 418
							// Start offset: 0x800A14B0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 419
								// Start offset: 0x800A14F8
								// Variables:
							// 		int ox; // $s1
							// 		int oy; // $s2
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800A15F8
							// End Line: 427
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800A15F8
						// End Line: 427
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A15F8
					// End Line: 427
				/* end block 1.1.1.1 */
				// End offset: 0x800A15F8
				// End Line: 427
			/* end block 1.1.1 */
			// End offset: 0x800A172C
			// End Line: 449
		/* end block 1.1 */
		// End offset: 0x800A172C
		// End Line: 449
	/* end block 1 */
	// End offset: 0x800A172C
	// End Line: 449

	/* begin block 2 */
		// Start line: 849
	/* end block 2 */
	// End Line: 850

/* WARNING: Unknown calling convention yet parameter storage is locked */

void pad_func_Action__Fi(int pnum)

{
	uchar x;
	uchar y;
	short sVar1;
	short sVar2;
	bool bVar3;
	TASK *pTVar4;
	SpellTarget *this;
	void *pvVar5;
	int dir;
	uchar bCmd;
	
	sVar1 = plr[pnum]._px;
	sVar2 = plr[pnum]._py;
	pTVar4 = TSK_Exist((TASK *)DrawObjTask__FP4TASK,0x666,0xffffffff);
	if ((pTVar4 == (TASK *)0x0) &&
		 (((uint)questlog | (int)stextflag | (uint)qtextflag | (uint)chrflag | (uint)invflag |
			 (uint)optionsflag | (uint)(&_spselflag2)[pnum] | (uint)sbookflag) == 0)) {
		plr[pnum].walkpath[0] = -1;
		dir = (int)(&_pcursobj)[sel_data];
		if ((dir != -1) &&
			 (((&_pcursitem)[sel_data] == -1 ||
				((object[dir]._oDoorFlag != '\0' && (-1 < (&_pcursitem)[sel_data])))))) {
			bVar3 = false;
			x = object[dir]._ox;
			y = object[dir]._oy;
			this = GetSpellTarget__Fi(pnum);
			pvVar5 = Active__11SpellTarget(this);
			if ((pvVar5 == (void *)0x0) ||
				 ((dir = abs((int)(char)x - (int)sVar1), dir < 2 &&
					(dir = abs((int)(char)y - (int)sVar2), dir < 2)))) {
				bVar3 = true;
			}
			if (bVar3) {
				dir = GetDirection__Fiiii((int)plr[pnum]._px,(int)plr[pnum]._py,(int)(char)x,(int)(char)y);
				StartStand__Fii(pnum,dir);
				bCmd = '\x10';
				if ((&_pcurs)[myplr] == 5) {
					bCmd = '\x11';
				}
				NetSendCmdLocParam1__FUcUcUcUcUs('\x01',bCmd,x,y,(int)(&_pcursobj)[sel_data] & 0xffff);
				CheckNewPath__Fi(pnum);
			}
		}
		if (((sel_data == pnum) && (myplr == pnum)) && ((&_pcursitem)[pnum] != -1)) {
			if (_pfind_index[pnum] == '\x01') {
				(&_pcursitem)[pnum] = (&_pfind_list)[pnum * 10].index;
				x = (&_pfind_list)[sel_data * 10].x;
				y = (&_pfind_list)[sel_data * 10].y;
				SetItemMinStats__FPC12PlayerStructP10ItemStruct
									(plr + pnum,item + (int)(&_pcursitem)[sel_data]);
				NetSendCmdLocParam1__FUcUcUcUcUs('\x01','*',x,y,(int)(&_pcursitem)[sel_data] & 0xffff);
			}
			else {
				pTVar4 = TSK_AddTask(0x666,DrawObjTask__FP4TASK,0x1000,0x10);
				*(int *)pTVar4->fActive = pnum;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitTargetCursor__Fi(int pnum /*$s0*/)
 // line 458, offset 0x800a1758
	/* begin block 1 */
		// Start line: 459
		// Start offset: 0x800A1758
	/* end block 1 */
	// End offset: 0x800A1778
	// End Line: 462

	/* begin block 2 */
		// Start line: 985
	/* end block 2 */
	// End Line: 986

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitTargetCursor__Fi(int pnum)

{
	GamePad *pGVar1;
	
	pGVar1 = GetGamePad__Fi(pnum);
	Init__11SpellTargeti(&pGVar1->spell,pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveTargetCursor__Fi(int pnum /*$a0*/)
 // line 466, offset 0x800a178c
	/* begin block 1 */
		// Start line: 467
		// Start offset: 0x800A178C
	/* end block 1 */
	// End offset: 0x800A17C4
	// End Line: 478

	/* begin block 2 */
		// Start line: 1001
	/* end block 2 */
	// End Line: 1002

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RemoveTargetCursor__Fi(int pnum)

{
	GamePad *pGVar1;
	
	if (pnum == -1) {
		RemoveTargetCursor__Fi(0);
		RemoveTargetCursor__Fi(1);
	}
	else {
		pGVar1 = GetGamePad__Fi(pnum);
		Remove__11SpellTarget(&pGVar1->spell);
	}
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TargetingSpell__Fi(int sp /*$a0*/)
 // line 482, offset 0x800a17d4
	/* begin block 1 */
		// Start line: 483
		// Start offset: 0x800A17D4
	/* end block 1 */
	// End offset: 0x800A1814
	// End Line: 489

	/* begin block 2 */
		// Start line: 1037
	/* end block 2 */
	// End Line: 1038

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * TargetingSpell__Fi(int sp)

{
	undefined *puVar1;
	
	if ((((sp == 7) || (sp == 0xd)) || (sp == 0x17)) ||
		 (((sp == 0x15 || (sp == 0x21)) || ((sp == 8 || (puVar1 = (undefined *)0x0, sp == 6)))))) {
		puVar1 = &DAT_00000001;
	}
	return puVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_Cast_Spell__Fi(int pnum /*$s1*/)
 // line 496, offset 0x800a181c
	/* begin block 1 */
		// Start line: 497
		// Start offset: 0x800A181C
		// Variables:
	// 		struct PlayerStruct *player; // $s2
	// 		int sp; // $s3
	// 		struct CBlocks *gblocks; // $s0
	// 		int omp; // $s5
	// 		unsigned char DoTarget; // $s4

		/* begin block 1.1 */
			// Start line: 513
			// Start offset: 0x800A18C4

			/* begin block 1.1.1 */
				// Start line: 516
				// Start offset: 0x800A1938

				/* begin block 1.1.1.1 */
					// Start line: 547
					// Start offset: 0x800A1A48

					/* begin block 1.1.1.1.1 */
						// Start line: 570
						// Start offset: 0x800A1AD0
						// Variables:
					// 		struct SpellTarget *spl; // $a1
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A1C14
					// End Line: 592
				/* end block 1.1.1.1 */
				// End offset: 0x800A1C14
				// End Line: 592
			/* end block 1.1.1 */
			// End offset: 0x800A1C14
			// End Line: 592
		/* end block 1.1 */
		// End offset: 0x800A1C14
		// End Line: 592
	/* end block 1 */
	// End offset: 0x800A1C1C
	// End Line: 595

	/* begin block 2 */
		// Start line: 1061
	/* end block 2 */
	// End Line: 1062

/* WARNING: Unknown calling convention yet parameter storage is locked */

void pad_func_Cast_Spell__Fi(int pnum)

{
	char cVar1;
	char cVar2;
	int iVar3;
	CBlocks *pCVar4;
	void *pvVar5;
	undefined *puVar6;
	SpellTarget *pSVar7;
	int dir;
	uint uVar8;
	int sp;
	
	sp = plr[pnum]._pRSpell;
	pCVar4 = BL_GetCurrentBlocks__Fv();
	iVar3 = myplr;
	PAD_GetPad__FiUc(pnum,'\0');
	if (pCVar4 == (CBlocks *)0x0) {
		return;
	}
	if ((plr[pnum]._pmode == PM_SPELL) && ((int)plr[pnum]._pVar8 <= plr[pnum]._pSFNum)) {
		return;
	}
	if (((uint)questlog | (int)stextflag | (uint)qtextflag | (uint)chrflag | (uint)invflag |
			 (uint)optionsflag | (uint)(&_spselflag2)[pnum] | (uint)sbookflag) != 0) {
		myplr = iVar3;
		return;
	}
	if (FePlayerNo == 0) {
		if ((sp == 0x22) || (sp == 0x20)) {
LAB_800a1978:
			myplr = pnum;
			PlaySFX__Fi(IS_TITERR);
			return;
		}
	}
	else {
		if ((sp == 0x17) || (sp == 10)) goto LAB_800a1978;
		if ((sp == 0x20) && (plr[pnum ^ 1].plractive != '\0')) {
			myplr = pnum;
			return;
		}
		if ((sp == 0x22) && (plr[pnum ^ 1].plractive == '\0')) {
			myplr = pnum;
			return;
		}
	}
	myplr = pnum;
	pvVar5 = TargetActive__Fi(pnum);
	if (pvVar5 == (void *)0x0) {
		pvVar5 = TargetingSpell__Fi(sp);
		if (pvVar5 == (void *)0x0) {
			dir = (&_pcursmonst)[sel_data];
			if (dir != -1) {
				dir = GetDirection__Fiiii((int)plr[pnum]._px,(int)plr[pnum]._py,(int)monster[dir]._mx,
																	(int)monster[dir]._my);
				StartStand__Fii(pnum,dir);
			}
			pSVar7 = GetSpellTarget__Fi(pnum);
			if ((sp == 0x22) || (sp == 0x20)) {
				uVar8 = pnum ^ 1;
				*(undefined **)&pSVar7->active = &DAT_00000001;
				pSVar7->_sx = plr[uVar8]._px;
				sp = sel_data;
				pSVar7->_sy = plr[uVar8]._py;
				(&_pcursplr)[sp] = (char)uVar8;
			}
			else {
				if (pSVar7->forcespell != '\0') {
					*(undefined **)&pSVar7->active = &DAT_00000001;
				}
			}
			CheckPlrSpell__Fv();
			if (plr[pnum].destAction == -1) {
				(&_pcursplr)[sel_data] = -1;
			}
			RemoveTargetCursor__Fi(pnum);
			myplr = iVar3;
		}
		else {
			if (leveltype == '\0') {
				CheckPlrSpell__Fv();
			}
			else {
				puVar6 = (undefined *)TargetActive__Fi(pnum);
				if (puVar6 == &DAT_00000001) {
					release_spell__Fi(pnum);
					NewCursor__Fi(1);
					myplr = iVar3;
				}
				else {
					cVar1 = plr[pnum]._pRSplType;
					sp = plr[pnum]._pRSpell;
					cVar2 = plr[pnum]._pRSplType;
					plr[pnum]._pTSpell = (char)plr[pnum]._pRSpell;
					plr[pnum]._pTSplType = cVar1;
					plr[pnum]._pSpell = (char)sp;
					plr[pnum]._pSplType = cVar2;
					InitTargetCursor__Fi(pnum);
					myplr = iVar3;
				}
			}
		}
	}
	else {
		release_spell__Fi(pnum);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_Use_Item__Fi(int pnum /*$s1*/)
 // line 602, offset 0x800a1c44
	/* begin block 1 */
		// Start line: 603
		// Start offset: 0x800A1C44

		/* begin block 1.1 */
			// Start line: 603
			// Start offset: 0x800A1C44

			/* begin block 1.1.1 */
				// Start line: 606
				// Start offset: 0x800A1CB8
				// Variables:
			// 		struct PlayerStruct *player; // $s2
			/* end block 1.1.1 */
			// End offset: 0x800A1E5C
			// End Line: 644
		/* end block 1.1 */
		// End offset: 0x800A1E5C
		// End Line: 644
	/* end block 1 */
	// End offset: 0x800A1E5C
	// End Line: 644

	/* begin block 2 */
		// Start line: 1285
	/* end block 2 */
	// End Line: 1286

/* WARNING: Unknown calling convention yet parameter storage is locked */

void pad_func_Use_Item__Fi(int pnum)

{
	uchar uVar1;
	SpellTarget *this;
	void *pvVar2;
	undefined *puVar3;
	uint uVar4;
	
	this = GetSpellTarget__Fi(pnum);
	uVar4 = (uint)chrflag | (int)stextflag | (uint)qtextflag | (uint)sbookflag | (uint)questlog |
					(uint)optionsflag;
	pvVar2 = Active__11SpellTarget(this);
	if (((uVar4 | (uint)pvVar2) == 0) && (_pcurr_inv[sel_data] != -1)) {
		NewCursor__Fi(1);
		if (plr[pnum].SpdList[_pcurr_inv[sel_data]]._iMiscId == '\x15') {
			this = GetSpellTarget__Fi(pnum);
			puVar3 = (undefined *)Active__11SpellTarget(this);
			if (puVar3 == &DAT_00000001) {
				PlaySFX__Fi(IS_TITERR);
				return;
			}
		}
		uVar1 = UseInvItem__Fii(pnum,_pcurr_inv[sel_data] + 0x2f);
		if (uVar1 == '\0') {
			PlaySFX__Fi(IS_TITERR);
		}
		else {
			get_next_inv__Fv();
			uVar1 = (&_SpdBeltSelFlag)[pnum];
			_pcursinvitem[sel_data] = -1;
			if (uVar1 != '\0') {
				(&_SpdBeltSelFlag)[pnum] = '\0';
				PostGamePad__Fiiii(pnum + 6,0,0,0);
			}
		}
		uVar1 = any_belt_items__Fv();
		if (uVar1 == '\0') {
			_pcurr_inv[pnum] = -1;
			(&_SpdBeltSelFlag)[pnum] = '\0';
			PostGamePad__Fiiii(pnum + 6,0,0,0);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_BeltList__Fi(int pnum /*$s0*/)
 // line 649, offset 0x800a1e78
	/* begin block 1 */
		// Start line: 650
		// Start offset: 0x800A1E78
	/* end block 1 */
	// End offset: 0x800A1FCC
	// End Line: 671

	/* begin block 2 */
		// Start line: 1382
	/* end block 2 */
	// End Line: 1383

/* WARNING: Unknown calling convention yet parameter storage is locked */

void pad_func_BeltList__Fi(int pnum)

{
	uchar uVar1;
	int val;
	code *var2;
	code *var3;
	
	uVar1 = any_belt_items__Fv();
	if ((uVar1 == '\0') || (plr[pnum]._pmode == PM_SPELL)) {
		PlaySFX__Fi(IS_TITERR);
	}
	else {
		if ((&_SpdBeltSelFlag)[pnum] == '\0') {
			if (((uint)chrflag | (int)stextflag | (uint)qtextflag | (uint)(&_spselflag2)[pnum] |
					 (uint)sbookflag | (uint)questlog | (uint)optionsflag) != 0) {
				return;
			}
			PlaySFX__Fi(IS_TITLSLCT);
			(&_SpdBeltSelFlag)[pnum] = '\x01';
			PostGamePad__Fiiii(pnum + 3,0,0,0);
			val = 10;
			var2 = pad_func_Use_Item__Fi;
			var3 = select_belt_item__Fi;
		}
		else {
			PlaySFX__Fi(IS_TITLSLCT);
			(&_SpdBeltSelFlag)[pnum] = '\0';
			val = pnum + 6;
			pnum = 0;
			var2 = (code *)0x0;
			var3 = (code *)0x0;
		}
		PostGamePad__Fiiii(val,pnum,(int)var2,(int)var3);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_Chr__Fi(int pnum /*$s0*/)
 // line 682, offset 0x800a1fe0
	/* begin block 1 */
		// Start line: 683
		// Start offset: 0x800A1FE0
	/* end block 1 */
	// End offset: 0x800A2100
	// End Line: 699

	/* begin block 2 */
		// Start line: 1448
	/* end block 2 */
	// End Line: 1449

/* WARNING: Unknown calling convention yet parameter storage is locked */

void pad_func_Chr__Fi(int pnum)

{
	if (((uint)invflag | (int)stextflag | (uint)qtextflag | (uint)_spselflag2 | (uint)PTR_8011b654 |
			 (uint)sbookflag | (uint)questlog | (uint)optionsflag | (uint)(&_SpdBeltSelFlag)[pnum]) == 0)
	{
		chrflag = chrflag ^ 1;
		if (chrflag == 0) {
			PlaySFX__Fi(IS_TITLSLCT);
			PostGamePad__Fiiii(5,0,0,0);
		}
		else {
			if (pnum != -1) {
				PlaySFX__Fi(IS_TITLSLCT);
			}
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
// void /*$ra*/ pad_func_Inv__Fi(int pnum /*$s1*/)
 // line 704, offset 0x800a2114
	/* begin block 1 */
		// Start line: 705
		// Start offset: 0x800A2114
	/* end block 1 */
	// End offset: 0x800A222C
	// End Line: 722

	/* begin block 2 */
		// Start line: 1495
	/* end block 2 */
	// End Line: 1496

/* WARNING: Unknown calling convention yet parameter storage is locked */

void pad_func_Inv__Fi(int pnum)

{
	void *pvVar1;
	uint uVar2;
	
	uVar2 = (uint)chrflag | (int)stextflag | (uint)qtextflag | (uint)_spselflag2 | (uint)PTR_8011b654
					| (uint)sbookflag | (uint)questlog | (uint)optionsflag;
	pvVar1 = SelectorActive__Fv();
	if ((uVar2 | (uint)pvVar1 | (uint)(&_SpdBeltSelFlag)[pnum]) == 0) {
		if (invflag == '\0') {
			invflag = '\x01';
			PlaySFX__Fi(IS_TITLSLCT);
			RemoveTargetCursor__Fi(pnum);
			options_pad = pnum;
			PostGamePad__Fiiii(2,0,0,0);
			GLUE_SetShowPanelFlag__Fb((void *)0x0);
			GLUE_SuspendGame__Fv();
		}
		else {
			PlaySFX__Fi(IS_TITLSLCT);
			PostGamePad__Fiiii(5,0,0,0);
			options_pad = -1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_SplBook__Fi(int pnum /*$s1*/)
 // line 727, offset 0x800a2244
	/* begin block 1 */
		// Start line: 728
		// Start offset: 0x800A2244
	/* end block 1 */
	// End offset: 0x800A2378
	// End Line: 744

	/* begin block 2 */
		// Start line: 1544
	/* end block 2 */
	// End Line: 1545

/* WARNING: Unknown calling convention yet parameter storage is locked */

void pad_func_SplBook__Fi(int pnum)

{
	void *pvVar1;
	uint uVar2;
	
	uVar2 = (uint)(chrflag | invflag) | (int)stextflag | (uint)qtextflag | (uint)_spselflag2 |
					(uint)PTR_8011b654 | (uint)questlog | (uint)optionsflag;
	pvVar1 = SelectorActive__Fv();
	if ((uVar2 | (uint)pvVar1 | (uint)(&_SpdBeltSelFlag)[pnum]) == 0) {
		sbookflag = sbookflag ^ 1;
		if (sbookflag == 0) {
			PostGamePad__Fiiii(5,0,0,0);
			if (Qfromoptions == '\0') {
				options_pad = -1;
			}
		}
		else {
			if (Qfromoptions == '\0') {
				PlaySFX__Fi(IS_TITLSLCT);
			}
			options_pad = pnum;
			PostGamePad__Fiiii(2,0,0,0);
			TSK_AddTask(0,DrawSpellBookTSK__FP4TASK,0x800,0);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_QLog__Fi(int pnum /*$s1*/)
 // line 750, offset 0x800a2390
	/* begin block 1 */
		// Start line: 751
		// Start offset: 0x800A2390
	/* end block 1 */
	// End offset: 0x800A246C
	// End Line: 757

	/* begin block 2 */
		// Start line: 1593
	/* end block 2 */
	// End Line: 1594

/* WARNING: Unknown calling convention yet parameter storage is locked */

void pad_func_QLog__Fi(int pnum)

{
	void *pvVar1;
	uint uVar2;
	
	uVar2 = (uint)(byte)(invflag | chrflag | questlog) | (int)stextflag | (uint)qtextflag |
					(uint)_spselflag2 | (uint)PTR_8011b654 | (uint)sbookflag | (uint)optionsflag;
	pvVar1 = SelectorActive__Fv();
	if ((uVar2 | (uint)pvVar1 | (uint)(&_SpdBeltSelFlag)[pnum]) == 0) {
		options_pad = pnum;
		StartQuestlog__Fv();
		if ((questlog != '\0') && (Qfromoptions == '\0')) {
			PlaySFX__Fi(IS_TITLSLCT);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_SpellBook__Fi(int pnum /*$s1*/)
 // line 771, offset 0x800a2484
	/* begin block 1 */
		// Start line: 772
		// Start offset: 0x800A2484
	/* end block 1 */
	// End offset: 0x800A2544
	// End Line: 777

	/* begin block 2 */
		// Start line: 1636
	/* end block 2 */
	// End Line: 1637

/* WARNING: Unknown calling convention yet parameter storage is locked */

void pad_func_SpellBook__Fi(int pnum)

{
	SpellTarget *this;
	void *pvVar1;
	void *pvVar2;
	
	this = GetSpellTarget__Fi(pnum);
	pvVar1 = Active__11SpellTarget(this);
	pvVar2 = SelectorActive__Fv();
	if (((int)stextflag | (uint)qtextflag | (uint)PauseMode | (uint)chrflag | (uint)invflag |
			 (uint)questlog | (uint)optionsflag | (uint)sbookflag | (uint)pvVar1 |
			 (uint)(&_SpdBeltSelFlag)[pnum] | (uint)pvVar2) == 0) {
		ToggleSpell__Fi(pnum);
		PlaySFX__Fi(IS_TITLSLCT);
		RemoveTargetCursor__Fi(pnum);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_AutoMap__Fi(int pnum /*$a0*/)
 // line 807, offset 0x800a255c
	/* begin block 1 */
		// Start line: 808
		// Start offset: 0x800A255C
	/* end block 1 */
	// End offset: 0x800A2608
	// End Line: 819

	/* begin block 2 */
		// Start line: 1709
	/* end block 2 */
	// End Line: 1710

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
// void /*$ra*/ pad_func_Quick_Spell__Fi(int pnum /*$s0*/)
 // line 833, offset 0x800a2618
	/* begin block 1 */
		// Start line: 834
		// Start offset: 0x800A2618
		// Variables:
	// 		struct PlayerStruct *player; // $s1
	// 		int sp; // $s5
	// 		char spt; // $s3
	// 		int qps; // $s2
	// 		int qst; // $s4
	/* end block 1 */
	// End offset: 0x800A2764
	// End Line: 862

	/* begin block 2 */
		// Start line: 1761
	/* end block 2 */
	// End Line: 1762

/* WARNING: Unknown calling convention yet parameter storage is locked */

void pad_func_Quick_Spell__Fi(int pnum)

{
	char cVar1;
	SpellTarget *this;
	void *pvVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	int iVar6;
	char cVar7;
	int Spell;
	
	iVar6 = (int)QSpell[pnum];
	cVar7 = _spltotype[pnum];
	Spell = plr[pnum]._pRSpell;
	cVar1 = plr[pnum]._pRSplType;
	this = GetSpellTarget__Fi(pnum);
	pvVar2 = Active__11SpellTarget(this);
	if (pvVar2 == (void *)0x0) {
		if (_spltotype[pnum] == '\x03') {
			uVar3 = *(uint *)((int)&plr[pnum]._pISpells + 4);
			uVar4 = iVar6 - 1;
			if ((int)(uVar4 * 0x4000000) < 0) {
				uVar5 = uVar3 >> (uVar4 & 0x1f);
			}
			else {
				uVar5 = *(uint *)&plr[pnum]._pISpells >> (uVar4 & 0x1f);
				if (uVar4 * 0x4000000 != 0) {
					uVar5 = uVar5 | uVar3 << (-uVar4 & 0x1f);
				}
			}
			if ((uVar5 & 1) == 0) {
				iVar6 = -1;
				cVar7 = '\x04';
			}
		}
		plr[pnum]._pRSpell = iVar6;
		plr[pnum]._pRSplType = cVar7;
		SetQSpell__Fiii(pnum,Spell,(int)cVar1);
		PlaySFX__Fi(IS_TITLEMOV);
		CalcPlrScrolls__Fi(pnum);
	}
	else {
		PlaySFX__Fi(IS_TITERR);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ check_inv__FiPci(int pnum /*$s3*/, char *ilist /*$s7*/, int entries /*$fp*/)
 // line 884, offset 0x800a278c
	/* begin block 1 */
		// Start line: 885
		// Start offset: 0x800A278C
		// Variables:
	// 		int i; // $s1
	// 		int ii; // $v0
	// 		struct PlayerStruct *player; // $s4

		/* begin block 1.1 */
			// Start line: 892
			// Start offset: 0x800A2878
		/* end block 1.1 */
		// End offset: 0x800A29D8
		// End Line: 933
	/* end block 1 */
	// End offset: 0x800A29D8
	// End Line: 933

	/* begin block 2 */
		// Start line: 1870
	/* end block 2 */
	// End Line: 1871

/* WARNING: Unknown calling convention yet parameter storage is locked */

void check_inv__FiPci(int pnum,char *ilist,int entries)

{
	byte bVar1;
	uchar uVar2;
	uint uVar3;
	SpellTarget *this;
	void *pvVar4;
	PLR_MODE *pPVar5;
	int iVar6;
	uint uVar7;
	PlayerStruct *pPVar8;
	int iVar9;
	char *pcVar10;
	PlayerStruct *pPVar11;
	
	pPVar11 = plr + pnum;
	uVar7 = (int)stextflag | (uint)qtextflag | (uint)PauseMode | (uint)chrflag | (uint)invflag |
					(uint)questlog | (uint)optionsflag;
	uVar3 = (uint)sbookflag;
	bVar1 = (&_SpdBeltSelFlag)[pnum];
	this = GetSpellTarget__Fi(pnum);
	pvVar4 = Active__11SpellTarget(this);
	if (((uVar7 | uVar3 | (uint)bVar1 | (uint)pvVar4) == 0) &&
		 (NewCursor__Fi(1), pcVar10 = ilist, 0 < entries)) {
		do {
			iVar9 = 0;
			do {
				iVar6 = (int)pPVar11->InvGrid[iVar9];
				if (((((0 < iVar6) &&
							(pPVar5 = &pPVar11->_pmode + (iVar6 + -1) * 0x1b, *(short *)(pPVar5 + 0x134) != -1))
						 && ((uint)*(byte *)((int)pPVar5 + 0x4f1) == (int)*pcVar10)) &&
						((*(byte *)((int)pPVar5 + 0x4f1) != 0x15 || (*(char *)((int)pPVar5 + 0x4e1) == '\x02')))
						) && (uVar2 = UseInvItem__Fii(pnum,iVar6 + 6), uVar2 != '\0')) {
					return;
				}
				iVar9 = iVar9 + 1;
			} while (iVar9 < 0x28);
			iVar9 = 0;
			pPVar8 = pPVar11;
			do {
				if ((((*(short *)(&DAT_000015dc + (int)pPVar8) != -1) &&
						 ((uint)(byte)(&DAT_000015fd)[(int)pPVar8] == (int)*pcVar10)) &&
						(((&DAT_000015fd)[(int)pPVar8] != 0x15 || (pPVar8->SpdList[0]._iSpell == '\x02')))) &&
					 (uVar2 = UseInvItem__Fii(pnum,iVar9 + 0x2f), uVar2 != '\0')) {
					if (_pcurr_inv[sel_data] != iVar9) {
						return;
					}
					get_next_inv__Fv();
					return;
				}
				iVar9 = iVar9 + 1;
				pPVar8 = (PlayerStruct *)&pPVar8->_pSBkSpell;
			} while (iVar9 < 8);
			pcVar10 = pcVar10 + 1;
		} while ((int)pcVar10 < (int)(ilist + entries));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_Quick_Use_Health__Fi(int pnum /*$a0*/)
 // line 942, offset 0x800a2a0c
	/* begin block 1 */
		// Start line: 943
		// Start offset: 0x800A2A0C
	/* end block 1 */
	// End offset: 0x800A2A24
	// End Line: 944

	/* begin block 2 */
		// Start line: 1994
	/* end block 2 */
	// End Line: 1995

/* WARNING: Unknown calling convention yet parameter storage is locked */

void pad_func_Quick_Use_Health__Fi(int pnum)

{
	check_inv__FiPci(pnum,health_order,5);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ pad_func_Quick_Use_Mana__Fi(int pnum /*$a0*/)
 // line 953, offset 0x800a2a34
	/* begin block 1 */
		// Start line: 954
		// Start offset: 0x800A2A34
	/* end block 1 */
	// End offset: 0x800A2A4C
	// End Line: 955

	/* begin block 2 */
		// Start line: 2016
	/* end block 2 */
	// End Line: 2017

/* WARNING: Unknown calling convention yet parameter storage is locked */

void pad_func_Quick_Use_Mana__Fi(int pnum)

{
	check_inv__FiPci(pnum,mana_order,4);
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ sort_gold__Fi(int pnum /*$s4*/)
 // line 959, offset 0x800a2a5c
	/* begin block 1 */
		// Start line: 960
		// Start offset: 0x800A2A5C
		// Variables:
	// 		struct found_objects *fo; // $s1
	// 		void * ngold; // $s3

		/* begin block 1.1 */
			// Start line: 960
			// Start offset: 0x800A2A5C
			// Variables:
		// 		int i; // $s2
		/* end block 1.1 */
		// End offset: 0x800A2B3C
		// End Line: 975
	/* end block 1 */
	// End offset: 0x800A2B40
	// End Line: 977

	/* begin block 2 */
		// Start line: 2028
	/* end block 2 */
	// End Line: 2029

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * sort_gold__Fi(int pnum)

{
	uchar *puVar1;
	found_objects *pfVar2;
	int iVar3;
	undefined *puVar4;
	
	iVar3 = 0;
	puVar4 = (undefined *)0x0;
	pfVar2 = &_pfind_list + sel_data * 10;
	if ('\0' < _pfind_index[sel_data]) {
		puVar1 = (uchar *)&(&_pfind_list)[sel_data * 10].y;
		do {
			if (item[(int)pfVar2->index]._itype == 0xb) {
				puVar4 = &DAT_00000001;
				NetSendCmdLocParam1__FUcUcUcUcUs('\x01','*',puVar1[-1],*puVar1,(int)pfVar2->index & 0xffff);
			}
			CheckNewPath__Fi(pnum);
			puVar1 = puVar1 + 3;
			iVar3 = iVar3 + 1;
			pfVar2 = pfVar2 + 1;
		} while (iVar3 < (int)_pfind_index[sel_data]);
	}
	return puVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawObjSelector__FiP12PlayerStruct(int pnum /*$s4*/, struct PlayerStruct *player /*$s5*/)
 // line 982, offset 0x800a2b64
	/* begin block 1 */
		// Start line: 983
		// Start offset: 0x800A2B64
		// Variables:
	// 		char str[128]; // stack offset -224
	// 		struct CPad *Pad; // $s0
	// 		int cp; // $s0
	// 		int list_size; // $s2
	// 		int maxlen; // $s6
	// 		struct found_objects *fo; // stack offset -96
	// 		int R; // $t0
	// 		int G; // $v1
	// 		int B; // $v0
	// 		int i; // $s4
	// 		int nwrap; // $v1
	// 		int add_wrap; // $s0
	// 		int nx; // stack offset -72
	// 		int ny; // stack offset -64
	// 		int nw; // $s6
	// 		int nh; // $s0
	// 		int ypos; // $s5

		/* begin block 1.1 */
			// Start line: 1035
			// Start offset: 0x800A2CF4

			/* begin block 1.1.1 */
				// Start line: 1036
				// Start offset: 0x800A2CFC
				// Variables:
			// 		int fx; // $s0
			// 		int fy; // $s1
			/* end block 1.1.1 */
			// End offset: 0x800A2DDC
			// End Line: 1049
		/* end block 1.1 */
		// End offset: 0x800A2DDC
		// End Line: 1049

		/* begin block 1.2 */
			// Start line: 1082
			// Start offset: 0x800A2F40

			/* begin block 1.2.1 */
				// Start line: 1101
				// Start offset: 0x800A3038

				/* begin block 1.2.1.1 */
					// Start line: 1103
					// Start offset: 0x800A305C

					/* begin block 1.2.1.1.1 */
						// Start line: 1108
						// Start offset: 0x800A30AC
						// Variables:
					// 		int len; // $s2
					/* end block 1.2.1.1.1 */
					// End offset: 0x800A31CC
					// End Line: 1113
				/* end block 1.2.1.1 */
				// End offset: 0x800A31CC
				// End Line: 1113
			/* end block 1.2.1 */
			// End offset: 0x800A3290
			// End Line: 1135
		/* end block 1.2 */
		// End offset: 0x800A3338
		// End Line: 1140
	/* end block 1 */
	// End offset: 0x800A3338
	// End Line: 1140

	/* begin block 2 */
		// Start line: 2084
	/* end block 2 */
	// End Line: 2085

/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawObjSelector__FiP12PlayerStruct(int pnum,PlayerStruct *player)

{
	char cVar1;
	uchar x;
	uchar y;
	ushort uVar2;
	CPad *this;
	int DY;
	uint B;
	int y_00;
	uint G;
	uint R;
	int DH;
	int iVar3;
	int Y;
	char acStack224 [128];
	found_objects *local_60;
	int local_48;
	int local_40;
	
	this = PAD_GetPad__FiUc(pnum,'\0');
	uVar2 = GetDown__C4CPad(this);
	GetCur__C4CPad(this);
	local_60 = &_pfind_list + sel_data * 10;
	CheckArea__FiiiUci((int)player->_px,(int)player->_py,2,'\x01',pnum);
	cVar1 = _pfind_index[sel_data];
	DY = (int)cVar1;
	if (DY == 0) {
		select_flag = '\0';
	}
	else {
		if ((uVar2 & 2) != 0) {
			PlaySFX__Fi(IS_TITLEMOV);
			item_select = (char)(((int)(((uint)(byte)item_select + 1) * 0x1000000) >> 0x18) % DY);
		}
		if ((uVar2 & 1) != 0) {
			PlaySFX__Fi(IS_TITLEMOV);
			B = (uint)(byte)item_select;
			item_select = (char)(B - 1);
			if ((int)((B - 1) * 0x1000000) < 0) {
				item_select = item_select + cVar1;
			}
		}
		(&_pcursitem)[sel_data] = (&_pfind_list)[sel_data * 10 + (int)item_select].index;
		if ((uVar2 & 0x100) == 0) {
			if ((uVar2 & 0x40) != 0) {
				PlaySFX__Fi(IS_TITLSLCT);
				x = (&_pfind_list)[sel_data * 10 + (int)item_select].x;
				y = (&_pfind_list)[sel_data * 10 + (int)item_select].y;
				StartStand__Fii(pnum,(int)player->_pdir);
				SetItemMinStats__FPC12PlayerStructP10ItemStruct(player,item + (int)(&_pcursitem)[sel_data]);
				NetSendCmdLocParam1__FUcUcUcUcUs('\x01','*',x,y,(int)(&_pcursitem)[sel_data] & 0xffff);
				CheckNewPath__Fi(pnum);
				DY = DY + -1;
				if (DY <= (int)item_select) {
					item_select = cVar1 + -2;
				}
			}
			if (DY == 0) {
				_pfind_index[sel_data] = '\0';
				select_flag = '\0';
			}
			else {
				SetBack__6Dialogi(&SelectBack,0x94);
				SetBorder__6Dialogi(&SelectBack,0x12);
				DH = 0;
				Y = 0;
				SetRGB__6DialogUcUcUc(&SelectBack,BACKR,BACKG,BACKB);
				SelectRect.y = (short)(DY * -0xc + 0xa4 >> 1) + 0x20;
				SelectRect.h = (short)DY * 0xc + 0xc;
				SelectRect.x = 0;
				SelectRect.w = 0xfa;
				if (0 < DY) {
					iVar3 = 0;
					do {
						GetItemStr__Fi((int)(&(&_pfind_list)[sel_data * 10].index)[iVar3]);
						y_00 = GetWrap__5CFontPcP4RECT(&MediumFont,_infostr + sel_data * 0x100,&SelectRect);
						if (y_00 == 0) {
							DH = DH + 0xc;
						}
						else {
							DH = DH + y_00 * 0xc;
						}
						Y = Y + 1;
						iVar3 = iVar3 + 3;
					} while (Y < DY);
				}
				cVar1 = (char)DY + -1;
				if (((int)item_select < DY) && (cVar1 = item_select, (int)item_select < 0)) {
					item_select = '\0';
					cVar1 = item_select;
				}
				item_select = cVar1;
				DH = DH + 0xc;
				local_48 = 0x23;
				local_40 = (int)((0xb0U - DH) + (0xb0U - DH >> 0x1f)) >> 1;
				DY = local_40 + 10;
				SelectRect.h = 0x10;
				local_40 = local_40 + 0x20;
				SelectRect.y = (short)DY;
				SelectRect.w = 0xfa;
				SelectRect.x = 0x23;
				Back__6Dialogiiii(&SelectBack,0x23,DY,0xfa,0x10);
				Y = 0x10;
				DY = 0;
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(&MediumFont,0,0xc,player->_pName,JustCentre,&SelectRect,(uint)WHITER,(uint)WHITEG
									 ,(uint)WHITEG);
				SelectRect.w = 0xfa;
				SelectRect.h = (short)DH;
				SelectRect.x = (short)local_48;
				SelectRect.y = (short)local_40;
				Back__6Dialogiiii(&SelectBack,local_48,local_40,0xfa,DH);
				while (DY < (int)_pfind_index[sel_data]) {
					_infoclr[sel_data] = '\0';
					GetItemStr__Fi((int)local_60->index);
					strcpy(acStack224,_infostr + sel_data * 0x100);
					if (DY == (int)item_select) {
						DH = GetStrWidth__5CFontPc(&MediumFont,acStack224);
						B = DH + 0x10;
						DH = GetWrap__5CFontPcP4RECT(&MediumFont,_infostr + sel_data * 0x100,&SelectRect);
						if (DH != 0) {
							B = GetWrapWidth__5CFontPcP4RECT(&MediumFont,_infostr + sel_data * 0x100,&SelectRect);
						}
						DH = (int)(B + (B >> 0x1f)) >> 1;
						iVar3 = local_48 + 0x7d;
						y_00 = Y + local_40;
						DrawSpinner__FiiUcUcUciiibiT8T8Uc
											((iVar3 - DH) + -0xb,y_00,-0x60,'@',0xf0,0x20,0x40,0,1,0xffff,1,0,8);
						DrawSpinner__FiiUcUcUciiibiT8T8Uc
											(iVar3 + DH + 3,y_00,-0x60,'@',0xf0,0x20,0x40,0,1,0xffff,1,0,8);
					}
					cVar1 = _infoclr[sel_data];
					if (cVar1 == '\x01') {
						R = (uint)BLUER;
						G = (uint)BLUEG;
						B = (uint)BLUEB;
					}
					else {
						if (cVar1 < '\x02') {
							if (cVar1 == '\0') {
								R = (uint)WHITER;
								G = (uint)WHITEG;
								B = (uint)WHITEB;
							}
							else {
LAB_800a3278:
								R = (uint)GOLDR;
								G = (uint)GOLDG;
								B = (uint)GOLDB;
							}
						}
						else {
							if (cVar1 != '\x02') goto LAB_800a3278;
							R = (uint)REDR;
							G = (uint)REDG;
							B = (uint)REDB;
						}
					}
					Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
										(&MediumFont,0,Y,acStack224,JustCentre,&SelectRect,R,G,B);
					DY = DY + 1;
					local_60 = local_60 + 1;
					DH = GetWrap__5CFontPcP4RECT(&MediumFont,_infostr + sel_data * 0x100,&SelectRect);
					Y = Y + DH * 0xc;
					GetWrap__5CFontPcP4RECT(&MediumFont,_infostr + sel_data * 0x100,&SelectRect);
				}
			}
		}
		else {
			PlaySFX__Fi(IS_TITLSLCT);
			select_flag = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ SelectorActive__Fv()
 // line 1146, offset 0x800a336c
	/* begin block 1 */
		// Start line: 1147
		// Start offset: 0x800A336C
	/* end block 1 */
	// End offset: 0x800A3370
	// End Line: 1152

	/* begin block 2 */
		// Start line: 2471
	/* end block 2 */
	// End Line: 2472

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * SelectorActive__Fv(void)

{
	return (void *)(uint)(select_flag != '\0');
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawObjTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 1155, offset 0x800a3378
	/* begin block 1 */
		// Start line: 1156
		// Start offset: 0x800A3378
		// Variables:
	// 		struct DEF_ARGS *args; // $v0
	// 		int pnum; // $s2
	// 		void * op; // $s6
	// 		void * oamap; // $fp
	// 		struct PlayerStruct *player; // $s5
	// 		int oseldata; // $s3
	// 		int omp; // $s4
	// 		void * opan; // $s0
	// 		int opause; // $s7

		/* begin block 1.1 */
			// Start line: 1177
			// Start offset: 0x800A3450

			/* begin block 1.1.1 */
				// Start line: 1183
				// Start offset: 0x800A3488
				// Variables:
			// 		int x; // $s0
			// 		int y; // $s1
			/* end block 1.1.1 */
			// End offset: 0x800A3540
			// End Line: 1191
		/* end block 1.1 */
		// End offset: 0x800A3540
		// End Line: 1191
	/* end block 1 */
	// End offset: 0x800A3680
	// End Line: 1233

	/* begin block 2 */
		// Start line: 2484
	/* end block 2 */
	// End Line: 2485

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawObjTask__FP4TASK(TASK *T)

{
	uchar x;
	uchar y;
	bool bVar1;
	void *NewFlag;
	uchar uVar2;
	int iVar3;
	int iVar4;
	void *pvVar5;
	void *NewPause;
	undefined *puVar6;
	int pnum;
	
	iVar4 = myplr;
	uVar2 = PauseMode;
	iVar3 = sel_data;
	pnum = *(int *)T->fActive;
	bVar1 = automapflag != '\0';
	sel_data = pnum;
	myplr = pnum;
	CheckArea__FiiiUci((int)plr[pnum]._px,(int)plr[pnum]._py,2,'\x01',pnum);
	pvVar5 = sort_gold__Fi(pnum);
	if (pvVar5 == (void *)0x0) {
		GLUE_SuspendGame__Fv();
		select_flag = '\x01';
		item_select = '\0';
		NewPause = PA_SetPauseOk__Fb((void *)0x0);
		pvVar5 = DoShowPanel;
		if (_pfind_index[pnum] == '\x01') {
			(&_pcursitem)[sel_data] = (&_pfind_list)[pnum * 10].index;
			x = (&_pfind_list)[pnum * 10].x;
			y = (&_pfind_list)[pnum * 10].y;
			SetItemMinStats__FPC12PlayerStructP10ItemStruct
								(plr + pnum,item + (int)(&_pcursitem)[sel_data]);
			NetSendCmdLocParam1__FUcUcUcUcUs('\x01','*',x,y,(int)(&_pcursitem)[sel_data] & 0xffff);
			select_flag = '\0';
			pvVar5 = DoShowPanel;
		}
		while ((myplr = iVar4, sel_data = iVar3, NewFlag = DoShowPanel, DoShowPanel = pvVar5,
					 select_flag != '\0' &&
					 (DoShowPanel = pvVar5, puVar6 = (undefined *)GLUE_Finished__Fv(), puVar6 != &DAT_00000001
					 ))) {
			automapflag = '\0';
			GLUE_SetShowPanelFlag__Fb((void *)0x0);
			GLUE_SuspendGame__Fv();
			iVar4 = myplr;
			iVar3 = sel_data;
			PauseMode = '\x01';
			TSK_Sleep(1);
			PostGamePad__Fiiii(2,0,0,0);
			sel_data = pnum;
			myplr = pnum;
			DrawObjSelector__FiP12PlayerStruct(pnum,plr + pnum);
			ClrCursor__Fi(0);
			ClrCursor__Fi(1);
			ClearPanel__Fv();
			force_redraw = 0xff;
			sel_data = iVar3;
			myplr = iVar4;
			DrawAndBlit__Fv();
			pvVar5 = DoShowPanel;
			iVar3 = sel_data;
			iVar4 = myplr;
			DoShowPanel = NewFlag;
		}
		GLUE_SetShowPanelFlag__Fb(NewFlag);
		PostGamePad__Fiiii(5,0,0,0);
		options_pad = -1;
		sel_data = -1;
		PauseMode = uVar2;
		PA_SetPauseOk__Fb(NewPause);
		GLUE_ResumeGame__Fv();
		iVar3 = sel_data;
		iVar4 = myplr;
		automapflag = bVar1;
	}
	myplr = iVar4;
	sel_data = iVar3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ add_area_find_object__Fiii(int index /*$t1*/, int x /*$a1*/, int y /*$a2*/)
 // line 1241, offset 0x800a36b4
	/* begin block 1 */
		// Start line: 1242
		// Start offset: 0x800A36B4

		/* begin block 1.1 */
			// Start line: 1242
			// Start offset: 0x800A36B4

			/* begin block 1.1.1 */
				// Start line: 1245
				// Start offset: 0x800A36E0
				// Variables:
			// 		struct found_objects *fo; // $v0
			/* end block 1.1.1 */
			// End offset: 0x800A3718
			// End Line: 1258
		/* end block 1.1 */
		// End offset: 0x800A3718
		// End Line: 1258
	/* end block 1 */
	// End offset: 0x800A3718
	// End Line: 1258

	/* begin block 2 */
		// Start line: 2710
	/* end block 2 */
	// End Line: 2711

/* WARNING: Unknown calling convention yet parameter storage is locked */

void add_area_find_object__Fiii(int index,int x,int y)

{
	char cVar1;
	int iVar2;
	found_objects *pfVar3;
	
	iVar2 = sel_data;
	cVar1 = _pfind_index[sel_data];
	if ((int)cVar1 < 10) {
		_pfind_index[sel_data] = cVar1 + '\x01';
		pfVar3 = &_pfind_list + (int)cVar1 + iVar2 * 10;
		pfVar3->x = (char)x;
		pfVar3->y = (char)y;
		pfVar3->index = (char)index;
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckRangeObject__Fiii(int x /*$s5*/, int y /*$s7*/, int distance /*$s6*/)
 // line 1267, offset 0x800a3724
	/* begin block 1 */
		// Start line: 1268
		// Start offset: 0x800A3724
		// Variables:
	// 		char co; // $a0
	// 		struct map_info *dm; // $a2
	// 		int nitem; // $s1
	// 		int nmonster; // $s0
	// 		int nobject; // $s3
	// 		void * ok; // $s4

		/* begin block 1.1 */
			// Start line: 1280
			// Start offset: 0x800A37A4

			/* begin block 1.1.1 */
				// Start line: 1281
				// Start offset: 0x800A37B8
				// Variables:
			// 		int vis_flag; // $a0
			/* end block 1.1.1 */
			// End offset: 0x800A38F4
			// End Line: 1310
		/* end block 1.1 */
		// End offset: 0x800A3958
		// End Line: 1324
	/* end block 1 */
	// End offset: 0x800A3A6C
	// End Line: 1361

	/* begin block 2 */
		// Start line: 2764
	/* end block 2 */
	// End Line: 2765

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar CheckRangeObject__Fiii(int x,int y,int distance)

{
	char cVar1;
	byte bVar2;
	uchar uVar3;
	uchar uVar4;
	byte bVar5;
	uint uVar6;
	int m;
	map_info *pmVar7;
	uint uVar8;
	
	pmVar7 = dung_map + y + x * 0x70;
	cVar1 = pmVar7->dItem;
	uVar8 = SEXT24(pmVar7->dMonster);
	bVar2 = pmVar7->dObject;
	uVar4 = '\0';
	if (((uint)x < 0x60) && ((uint)y < 0x60)) {
		if (leveltype == '\0') {
			if (((&_pcursmonst)[sel_data] == 0xffffffff) && (uVar8 != 0)) {
				uVar4 = '\x01';
				if ((int)uVar8 < 1) {
					uVar8 = ~uVar8;
				}
				else {
					uVar8 = uVar8 - 1;
				}
				(&_pcursmonst)[sel_data] = uVar8;
			}
		}
		else {
			if (myplr == -1) {
				uVar6 = 3;
			}
			else {
				uVar6 = 1 << (myplr & 0x1fU);
				if (((int)pmVar7->dFlags & uVar6) == 0) {
					uVar6 = 0;
				}
			}
			if ((((uVar6 != 0) && ((&_pcursmonst)[sel_data] == -1)) && (m = uVar8 - 1, 0 < (int)uVar8)) &&
				 (((0 < monster[m]._mhitpoints >> 6 && ((monster[m].MType)->mtype != 'm')) &&
					(((monster[m]._mFlags & 1) == 0 && ((pmVar7->dFlags & 4U) != 0)))))) {
				uVar4 = '\x01';
				uVar3 = CanTalkToMonst__Fi(m);
				if ((uVar3 == '\0') || ((-1 < myplr && (distance != 0)))) {
					(&_pcursmonst)[sel_data] = m;
				}
			}
		}
		if (myplr != -1) {
			if ((((&_pcursobj)[sel_data] == -1) && (bVar2 != 0)) && (distance != 0)) {
				bVar5 = bVar2 - 1;
				if ((char)bVar2 < '\x01') {
					bVar5 = ~bVar2;
				}
				if ('\0' < object[(int)(char)bVar5]._oSelFlag) {
					uVar4 = '\x01';
					(&_pcursobj)[sel_data] = bVar5;
				}
			}
			if (((0 < (int)cVar1) && (m = (int)cVar1 + -1, distance != 0)) && ('\0' < item[m]._iSelFlag))
			{
				add_area_find_object__Fiii(m,x,y);
				uVar4 = '\x01';
				if ((&_pcursitem)[sel_data] == -1) {
					(&_pcursitem)[sel_data] = (char)m;
					uVar4 = '\x01';
				}
			}
		}
	}
	else {
		uVar4 = '\0';
	}
	return uVar4;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckArea__FiiiUci(int xx /*stack -88*/, int yy /*stack -80*/, int range /*$a2*/, unsigned char allflag /*$s1*/, int pnum /*stack 16*/)
 // line 1364, offset 0x800a3a9c
	/* begin block 1 */
		// Start line: 1365
		// Start offset: 0x800A3A9C
		// Variables:
	// 		struct PlayerStruct *player; // stack offset -72
	// 		struct SpellTarget *spl; // stack offset -64
	// 		void * is_myplr; // stack offset -56
	// 		int i; // $s5
	// 		int dir; // $s1
	// 		int cm; // $s7
	// 		int ci; // $a0
	// 		int x; // $s4
	// 		int y; // $s3

		/* begin block 1.1 */
			// Start line: 1365
			// Start offset: 0x800A3A9C

			/* begin block 1.1.1 */
				// Start line: 1376
				// Start offset: 0x800A3B5C
				// Variables:
			// 		int dx; // $s2
			// 		int dy; // $s1
			/* end block 1.1.1 */
			// End offset: 0x800A3C24
			// End Line: 1395
		/* end block 1.1 */
		// End offset: 0x800A3C24
		// End Line: 1395

		/* begin block 1.2 */
			// Start line: 1400
			// Start offset: 0x800A3C24

			/* begin block 1.2.1 */
				// Start line: 1401
				// Start offset: 0x800A3C34

				/* begin block 1.2.1.1 */
					// Start line: 1403
					// Start offset: 0x800A3C34

					/* begin block 1.2.1.1.1 */
						// Start line: 1404
						// Start offset: 0x800A3C5C
						// Variables:
					// 		struct MonsterStruct *Monst; // $s0
					/* end block 1.2.1.1.1 */
					// End offset: 0x800A3CF0
					// End Line: 1407
				/* end block 1.2.1.1 */
				// End offset: 0x800A3CF0
				// End Line: 1407
			/* end block 1.2.1 */
			// End offset: 0x800A3DA0
			// End Line: 1421
		/* end block 1.2 */
		// End offset: 0x800A3DC8
		// End Line: 1428

		/* begin block 1.3 */
			// Start line: 1435
			// Start offset: 0x800A3DE0

			/* begin block 1.3.1 */
				// Start line: 1435
				// Start offset: 0x800A3DE4

				/* begin block 1.3.1.1 */
					// Start line: 1437
					// Start offset: 0x800A3DF0
					// Variables:
				// 		int j; // $s6

					/* begin block 1.3.1.1.1 */
						// Start line: 1437
						// Start offset: 0x800A3DF0

						/* begin block 1.3.1.1.1.1 */
							// Start line: 1439
							// Start offset: 0x800A3DFC
							// Variables:
						// 		int k; // $s2

							/* begin block 1.3.1.1.1.1.1 */
								// Start line: 1439
								// Start offset: 0x800A3DFC

								/* begin block 1.3.1.1.1.1.1.1 */
									// Start line: 1441
									// Start offset: 0x800A3E08

									/* begin block 1.3.1.1.1.1.1.1.1 */
										// Start line: 1444
										// Start offset: 0x800A3E74

										/* begin block 1.3.1.1.1.1.1.1.1.1 */
											// Start line: 1445
											// Start offset: 0x800A3E74

											/* begin block 1.3.1.1.1.1.1.1.1.1.1 */
												// Start line: 1446
												// Start offset: 0x800A3E9C
											/* end block 1.3.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x800A3EB8
											// End Line: 1452
										/* end block 1.3.1.1.1.1.1.1.1.1 */
										// End offset: 0x800A3EB8
										// End Line: 1452
									/* end block 1.3.1.1.1.1.1.1.1 */
									// End offset: 0x800A3EB8
									// End Line: 1452
								/* end block 1.3.1.1.1.1.1.1 */
								// End offset: 0x800A3EB8
								// End Line: 1452
							/* end block 1.3.1.1.1.1.1 */
							// End offset: 0x800A3EB8
							// End Line: 1452
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x800A3EC0
						// End Line: 1457
					/* end block 1.3.1.1.1 */
					// End offset: 0x800A3EC0
					// End Line: 1459
				/* end block 1.3.1.1 */
				// End offset: 0x800A3ED0
				// End Line: 1460
			/* end block 1.3.1 */
			// End offset: 0x800A3ED0
			// End Line: 1460
		/* end block 1.3 */
		// End offset: 0x800A3ED8
		// End Line: 1461

		/* begin block 1.4 */
			// Start line: 1463
			// Start offset: 0x800A3ED8

			/* begin block 1.4.1 */
				// Start line: 1464
				// Start offset: 0x800A3EE4

				/* begin block 1.4.1.1 */
					// Start line: 1465
					// Start offset: 0x800A3EE4

					/* begin block 1.4.1.1.1 */
						// Start line: 1466
						// Start offset: 0x800A3EF8
						// Variables:
					// 		struct MonsterStruct *Monst; // $s0
					/* end block 1.4.1.1.1 */
					// End offset: 0x800A3F84
					// End Line: 1473

					/* begin block 1.4.1.1.2 */
						// Start line: 1476
						// Start offset: 0x800A3F8C
						// Variables:
					// 		struct TownerStruct *Twn; // $s0
					/* end block 1.4.1.1.2 */
					// End offset: 0x800A4014
					// End Line: 1481
				/* end block 1.4.1.1 */
				// End offset: 0x800A4014
				// End Line: 1481
			/* end block 1.4.1 */
			// End offset: 0x800A4014
			// End Line: 1481
		/* end block 1.4 */
		// End offset: 0x800A4048
		// End Line: 1486
	/* end block 1 */
	// End offset: 0x800A404C
	// End Line: 1488

	/* begin block 2 */
		// Start line: 2968
	/* end block 2 */
	// End Line: 2969

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar CheckArea__FiiiUci(int xx,int yy,int range,uchar allflag,int pnum)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	bool bVar4;
	uchar uVar5;
	SpellTarget *this;
	int x;
	uint distance;
	int iVar6;
	int y;
	uint uVar7;
	int iVar8;
	int index;
	int iVar9;
	int monst;
	
	this = GetSpellTarget__Fi(pnum);
	monst = -1;
	bVar3 = ~myplr != 0;
	if (((pnum == -1) || (allflag != '\0')) || (leveltype == '\0')) {
LAB_800a3c24:
		if (!bVar3) goto LAB_800a3dc4;
		index = (&_pcursmonst)[sel_data];
		if ((index != -1) && (plr[pnum]._pwtype == '\0')) {
			bVar4 = false;
			y = abs(xx - (int)monster[index]._mx);
			if ((1 < y) || (index = abs(yy - (int)monster[index]._my), 1 < index)) {
				bVar4 = true;
			}
			if (bVar4) {
				monst = -1;
				(&_pcursmonst)[sel_data] = -1;
			}
		}
		index = sel_data;
		(&_pcursitem)[sel_data] = -1;
		(&_pcursobj)[index] = -1;
		_pfind_index[sel_data] = '\0';
		uVar7 = SEXT14(plr[pnum]._pdir);
		index = (int)dung_map[xx * 0x70 + yy].dItem + -1;
		if ((int)dung_map[xx * 0x70 + yy].dItem == 0) goto LAB_800a3dc8;
		distance = uVar7 & 1;
		if ('\0' < item[index]._iSelFlag) {
			(&_pcursitem)[sel_data] = (char)index;
			add_area_find_object__Fiii(index,xx,yy);
			distance = uVar7 & 1;
		}
	}
	else {
		index = 0;
		if (bVar3) {
			cVar1 = offset_x[(int)plr[pnum]._pdir];
			cVar2 = offset_y[(int)plr[pnum]._pdir];
			x = (int)plr[pnum]._px;
			y = (int)plr[pnum]._py;
			do {
				x = x + (int)cVar1;
				y = y + (int)cVar2;
				if ((&_pcursmonst)[sel_data] != -1) break;
				uVar5 = CheckRangeObject__Fiii(x,y,0);
				if (((uVar5 != '\0') && (monst == -1)) && ((&_pcursmonst)[sel_data] != -1)) {
					monst = (&_pcursmonst)[sel_data];
				}
				index = index + 1;
			} while (index < 5);
			goto LAB_800a3c24;
		}
LAB_800a3dc4:
		uVar7 = 0;
LAB_800a3dc8:
		distance = uVar7 & 1;
	}
	x = 1;
	index = yy;
	y = xx;
	if (distance == 0) {
		uVar7 = uVar7 + 1;
		index = yy;
		y = xx;
	}
	while (iVar9 = 0, x < 10) {
		while (iVar8 = 0, iVar9 < 2) {
			while (distance = 0, iVar8 < x) {
				y = y + (int)offset_x[uVar7];
				index = index + (int)offset_y[uVar7];
				iVar6 = abs(xx - y);
				if (iVar6 < 2) {
					iVar6 = abs(yy - index);
					distance = (uint)(iVar6 < 2);
				}
				uVar5 = CheckRangeObject__Fiii(y,index,distance);
				if ((uVar5 != '\0') && ((&_pcursmonst)[sel_data] != -1)) {
					if (!bVar3) {
						return '\x01';
					}
					if (monst == -1) {
						monst = (&_pcursmonst)[sel_data];
					}
				}
				iVar8 = iVar8 + 1;
			}
			uVar7 = uVar7 + 2 & 7;
			iVar9 = iVar9 + 1;
		}
		x = x + 1;
	}
	if (monst == -1) {
		ForceTarget__11SpellTargetiii(this,-1,0,0);
		return '\x01';
	}
	if (leveltype == '\0') {
		bVar3 = false;
		index = abs(xx - towner[monst]._tx);
		if ((1 < index) || (index = abs(yy - towner[monst]._ty), 1 < index)) {
			bVar3 = true;
		}
		if (bVar3) {
LAB_800a3ff0:
			(&_pcursmonst)[sel_data] = -1;
			return '\x01';
		}
	}
	else {
		ForceTarget__11SpellTargetiii(this,monst,(int)monster[monst]._mx,(int)monster[monst]._my);
		bVar3 = false;
		if (plr[pnum]._pwtype == '\0') {
			index = abs(xx - (int)monster[monst]._mx);
			if ((1 < index) || (index = abs(yy - (int)monster[monst]._my), 1 < index)) {
				bVar3 = true;
			}
			if (bVar3) goto LAB_800a3ff0;
		}
	}
	(&_pcursmonst)[sel_data] = monst;
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlacePlayer__FiiiUc(int pnum /*$s5*/, int x /*$s6*/, int y /*$s7*/, unsigned char do_current /*$a3*/)
 // line 1492, offset 0x800a4080
	/* begin block 1 */
		// Start line: 1493
		// Start offset: 0x800A4080

		/* begin block 1.1 */
			// Start line: 1501
			// Start offset: 0x800A40F0

			/* begin block 1.1.1 */
				// Start line: 1502
				// Start offset: 0x800A4120
				// Variables:
			// 		void * done; // $fp
			// 		int nx; // $s1
			// 		int ny; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 1503
					// Start offset: 0x800A4120
				/* end block 1.1.1.1 */
				// End offset: 0x800A41AC
				// End Line: 1515
			/* end block 1.1.1 */
			// End offset: 0x800A41AC
			// End Line: 1515
		/* end block 1.1 */
		// End offset: 0x800A41AC
		// End Line: 1515
	/* end block 1 */
	// End offset: 0x800A41C4
	// End Line: 1518

	/* begin block 2 */
		// Start line: 3255
	/* end block 2 */
	// End Line: 3256

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlacePlayer__FiiiUc(int pnum,int x,int y,uchar do_current)

{
	bool bVar1;
	bool bVar2;
	uchar uVar3;
	void *pvVar4;
	int y_00;
	int x_00;
	char *pcVar5;
	char *pcVar6;
	
	if (plr[pnum]._pmode != PM_DEATH) {
		bVar2 = false;
		uVar3 = PosOkPlayer__Fiii(pnum,x,y);
		if ((uVar3 == '\0') || (pvVar4 = IsTrigger__Fii(x,y), pvVar4 != (void *)0x0)) {
			bVar2 = true;
		}
		if (bVar2) {
			bVar2 = false;
			pcVar5 = offset_y;
			pcVar6 = offset_x;
			do {
				bVar1 = false;
				x_00 = x + (int)*pcVar6;
				y_00 = y + (int)*pcVar5;
				uVar3 = PosOkPlayer__Fiii(pnum,x_00,y_00);
				if (uVar3 != '\0') {
					pvVar4 = IsTrigger__Fii(x_00,y_00);
					bVar1 = pvVar4 == (void *)0x0;
				}
				if (bVar1) {
					bVar2 = true;
					x = x_00;
					y = y_00;
				}
				pcVar5 = pcVar5 + 1;
				pcVar6 = pcVar6 + 1;
			} while (((int)pcVar5 < -0x7fee3d48) && (!bVar2));
		}
		WorldToOffset__Fiii(pnum,x << 3 | 4,y << 3 | 4);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.gplayer()
 // line 1518, offset 0x800a41f8
	/* begin block 1 */
		// Start line: 1519
		// Start offset: 0x800A41F8
	/* end block 1 */
	// End offset: 0x800A4210
	// End Line: 1519

	/* begin block 2 */
		// Start line: 3313
	/* end block 2 */
	// End Line: 3314

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_gplayer(void)

{
	___6Dialog(&SelectBack,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.gplayer()
 // line 1518, offset 0x800a4220
	/* begin block 1 */
		// Start line: 1519
		// Start offset: 0x800A4220
	/* end block 1 */
	// End offset: 0x800A4238
	// End Line: 1519

	/* begin block 2 */
		// Start line: 3313
	/* end block 2 */
	// End Line: 3314

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_gplayer(void)

{
	__6Dialog(&SelectBack);
	return;
}





