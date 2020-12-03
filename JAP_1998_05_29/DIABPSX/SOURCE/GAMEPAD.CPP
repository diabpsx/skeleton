#include "THISDUST.H"
#include "GAMEPAD.H"


// decompiled code
// original method signature: 
// void /*$ra*/ ClrCursor__Fi(int num /*$a0*/)
 // line 113, offset 0x80077f90
	/* begin block 1 */
		// Start line: 114
		// Start offset: 0x80077F90
	/* end block 1 */
	// End offset: 0x80077FE4
	// End Line: 121

	/* begin block 2 */
		// Start line: 227
	/* end block 2 */
	// End Line: 228

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClrCursor__Fi(int num)

{
	if ((uint)num < 2) {
		_infostr[num * 0x100] = '\0';
		(&_pcursmonst)[num] = -1;
		(&_pcursobj)[num] = -1;
		(&_pcursitem)[num] = -1;
		_pcursinvitem[num] = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HappyMan__Fi(int n /*$a0*/)
 // line 127, offset 0x80077fec
	/* begin block 1 */
		// Start line: 128
		// Start offset: 0x80077FEC
	/* end block 1 */
	// End offset: 0x80077FF4
	// End Line: 129

	/* begin block 2 */
		// Start line: 256
	/* end block 2 */
	// End Line: 257

/* WARNING: Unknown calling convention yet parameter storage is locked */

void HappyMan__Fi(int n)

{
	HappyManFlag = n << 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ flyabout__7GamePad(struct GamePad *this /*$s3*/)
 // line 136, offset 0x80077ffc
	/* begin block 1 */
		// Start line: 137
		// Start offset: 0x80077FFC
		// Variables:
	// 		int cp; // $s0
	// 		int owx; // $s4
	// 		int owy; // $s5
	// 		int wx; // $s1
	// 		int wy; // $s2
	// 		struct CBlocks *gblocks; // $s7
	// 		int step; // $a0
	/* end block 1 */
	// End offset: 0x800783C8
	// End Line: 206

	/* begin block 2 */
		// Start line: 273
	/* end block 2 */
	// End Line: 274

/* WARNING: Unknown calling convention yet parameter storage is locked */

void flyabout__7GamePad(GamePad *this)

{
	ushort uVar1;
	CBlocks *Bg;
	PlayerStruct *pPVar2;
	int WorldX;
	int pnum;
	int WorldY;
	int iVar3;
	int iVar4;
	int x1;
	int y1;
	
	iVar3 = 0;
	iVar4 = 0;
	uVar1 = GetCur__C4CPad(this->Pad);
	x1 = this->player->WorldX;
	y1 = this->player->WorldY;
	Bg = BL_GetCurrentBlocks__Fv();
	WorldX = 4;
	if (*(char *)&this[2].spell.active != '\0') {
		WorldX = 8;
	}
	if ((uVar1 & 1) == 0) {
		pnum = WorldX;
		if ((uVar1 & 2) != 0) goto LAB_80078088;
	}
	else {
		pnum = -WorldX;
LAB_80078088:
		iVar4 = pnum;
	}
	if ((uVar1 & 4) == 0) {
		pnum = x1;
		if ((uVar1 & 8) == 0) goto LAB_800780ac;
	}
	else {
		WorldX = -WorldX;
	}
	iVar3 = WorldX;
	pnum = x1 + iVar3;
LAB_800780ac:
	if (pnum < 0) {
		iVar3 = 0;
	}
	if (y1 + iVar4 < 0) {
		iVar4 = 0;
	}
	if (0x368 < x1 + iVar3) {
		iVar3 = 0;
	}
	WorldX = x1 + iVar3;
	if (0x368 < y1 + iVar4) {
		iVar4 = 0;
	}
	WorldY = y1 + iVar4;
	WorldToOffset__Fiii((int)this->pnum,WorldX,WorldY);
	pnum = (int)(char)(this->pnum ^ 1);
	WorldToOffset__Fiii(pnum,plr[pnum].WorldX + iVar3,plr[pnum].WorldY + iVar4);
	iVar3 = (int)(char)(this->pnum ^ 1);
	if (plr[iVar3].plractive == '\0') {
		plr[iVar3]._pdir = plr[iVar3]._pdir + '\x01';
		iVar3 = (int)(char)(this->pnum ^ 1);
		plr[iVar3]._pdir = plr[iVar3]._pdir & 7;
	}
	pPVar2 = this->player;
	ChangeLightXY__Fiii((int)pPVar2->_plid,(int)pPVar2->_px,(int)pPVar2->_py);
	pPVar2 = this->player;
	ChangeVisionXY__Fiii((int)pPVar2->_pvid,(int)pPVar2->_px,(int)pPVar2->_py);
	iVar3 = (int)this->pnum;
	ChangeLightXY__Fiii((int)plr[iVar3]._plid,(int)plr[iVar3]._px,(int)plr[iVar3]._py);
	iVar3 = (int)this->pnum;
	ChangeVisionXY__Fiii((int)plr[iVar3]._pvid,(int)plr[iVar3]._px,(int)plr[iVar3]._py);
	PM_ChangeLightOff__Fi((int)this->pnum);
	if (((x1 != WorldX) || (y1 != WorldY)) && ((int)this->player->_pmode < 3)) {
		iVar3 = GetDirection__Fiiii(x1,y1,WorldX,WorldY);
		this->player->_pdir = (char)iVar3;
		StartStand__Fii((int)this->pnum,(int)(char)iVar3);
	}
	if ((gplayer != (CPlayer *)0x0) && (Bg != (CBlocks *)0x0)) {
		SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(gplayer,plr + (int)this->pnum,Bg);
		MoveToScrollTarget__7CBlocks(Bg);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CloseInvChr__Fv()
 // line 216, offset 0x800783f8
	/* begin block 1 */
		// Start line: 217
		// Start offset: 0x800783F8
	/* end block 1 */
	// End offset: 0x80078430
	// End Line: 221

	/* begin block 2 */
		// Start line: 435
	/* end block 2 */
	// End Line: 436

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CloseInvChr__Fv(void)

{
	chrflag = '\0';
	options_pad = -1;
	PlaySFX__Fi(IS_TITLSLCT);
	PostGamePad__Fiiii(5,0,0,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WorldToOffset__Fiii(int pnum /*$a0*/, int WorldX /*$a1*/, int WorldY /*$a2*/)
 // line 268, offset 0x80078440
	/* begin block 1 */
		// Start line: 269
		// Start offset: 0x80078440
		// Variables:
	// 		int x; // $t0
	// 		int y; // $a3
	// 		struct PlayerStruct *player; // $v1
	/* end block 1 */
	// End offset: 0x800784B8
	// End Line: 281

	/* begin block 2 */
		// Start line: 542
	/* end block 2 */
	// End Line: 543

/* WARNING: Unknown calling convention yet parameter storage is locked */

void WorldToOffset__Fiii(int pnum,int WorldX,int WorldY)

{
	byte bVar1;
	byte bVar2;
	
	bVar1 = (byte)WorldX & 7;
	bVar2 = (byte)WorldY & 7;
	if (WorldX < 0) {
		WorldX = 0;
	}
	if (WorldY < 0) {
		WorldY = 0;
	}
	plr[pnum]._px = (short)(WorldX >> 3);
	plr[pnum]._py = (short)(WorldY >> 3);
	plr[pnum]._pxoff = (bVar1 - bVar2) * '\x04';
	plr[pnum].WorldX = WorldX;
	plr[pnum].WorldY = WorldY;
	plr[pnum]._pyoff = (bVar1 + bVar2 + -8) * '\x02';
	return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ pad_UpIsUpRight__Fic(int pval /*$a0*/, char other /*$a1*/)
 // line 351, offset 0x800784c0
	/* begin block 1 */
		// Start line: 352
		// Start offset: 0x800784C0
		// Variables:
	// 		int walk_dir; // $v1
	/* end block 1 */
	// End offset: 0x80078574
	// End Line: 392

	/* begin block 2 */
		// Start line: 715
	/* end block 2 */
	// End Line: 716

/* WARNING: Unknown calling convention yet parameter storage is locked */

char pad_UpIsUpRight__Fic(int pval,char other)

{
	byte bVar1;
	uint uVar2;
	
	uVar2 = 0xffffffff;
	switch(pval) {
	case 1:
		uVar2 = 5;
		break;
	case 2:
		uVar2 = 1;
		break;
	case 4:
		uVar2 = 3;
		break;
	case 5:
		uVar2 = 4;
		break;
	case 6:
		uVar2 = 2;
		break;
	case 8:
		uVar2 = 7;
		break;
	case 9:
		uVar2 = 6;
		break;
	case 10:
		uVar2 = 0;
	}
	bVar1 = (byte)uVar2;
	if ((uVar2 != 0xffffffff) && (other != '\0')) {
		do {
			uVar2 = uVar2 - 1 & 7;
			bVar1 = (byte)uVar2;
			other = other + -1;
		} while (other != '\0');
	}
	if (HappyManFlag != 0) {
		bVar1 = (byte)(HappyManFlag >> 1) & 7;
		HappyManFlag = HappyManFlag + -1;
	}
	return (char)bVar1;
}



// decompiled code
// original method signature: 
// struct GamePad * /*$ra*/ __7GamePadi(struct GamePad *this /*$s0*/, int player_num /*$s1*/)
 // line 404, offset 0x8007857c
	/* begin block 1 */
		// Start line: 405
		// Start offset: 0x8007857C
	/* end block 1 */
	// End offset: 0x8007857C
	// End Line: 405

	/* begin block 2 */
		// Start line: 818
	/* end block 2 */
	// End Line: 819

/* WARNING: Unknown calling convention yet parameter storage is locked */

GamePad * __7GamePadi(GamePad *this,int player_num)

{
	this->player = plr + player_num;
	this->pad_up_button = 0;
	this->pad_up_action = (_func_16 *)0x0;
	this->pnum = (char)player_num;
	this->allow_walking = '\x01';
	this->combo_key = 0;
	*(undefined *)&this[2].spell.active = 0;
	restore_controller_settings__F8CTRL_SET(CTRL_BEGINNER);
	SetAllButtons__7GamePadP11KEY_ASSIGNS(this,&txt_actions);
	ClrCursor__Fi(player_num);
	SetQSpell__Fiii((int)this->pnum,-1,4);
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetMoveStyle__7GamePadc(struct GamePad *this /*$a0*/, char style_num /*$a1*/)
 // line 440, offset 0x80078630
	/* begin block 1 */
		// Start line: 441
		// Start offset: 0x80078630
	/* end block 1 */
	// End offset: 0x80078630
	// End Line: 442

	/* begin block 2 */
		// Start line: 907
	/* end block 2 */
	// End Line: 908

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetMoveStyle__7GamePadc(GamePad *this,char style_num)

{
	this->style = style_num;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetDownButton__7GamePadiPFi_v(struct GamePad *this /*$s0*/, int pad_val /*$a1*/, TDRFuncPtr_SetDownButton__7GamePadiPFi_v2func func /*$s1*/)
 // line 450, offset 0x80078638
	/* begin block 1 */
		// Start line: 451
		// Start offset: 0x80078638
	/* end block 1 */
	// End offset: 0x80078664
	// End Line: 454

	/* begin block 2 */
		// Start line: 926
	/* end block 2 */
	// End Line: 927

void SetDownButton__7GamePadiPFi_v
							 (GamePad *this,int pad_val,TDRFuncPtr_SetDownButton__7GamePadiPFi_v2func func)

{
	int iVar1;
	
	iVar1 = get_key_pad__Fi(pad_val);
	*(TDRFuncPtr_SetDownButton__7GamePadiPFi_v2func *)(&this->await_combo + iVar1 * 4) = func;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetComboDownButton__7GamePadiPFi_v(struct GamePad *this /*$s0*/, int pad_val /*$a1*/, TDRFuncPtr_SetComboDownButton__7GamePadiPFi_v2func func /*$s1*/)
 // line 462, offset 0x8007867c
	/* begin block 1 */
		// Start line: 463
		// Start offset: 0x8007867C
	/* end block 1 */
	// End offset: 0x800786A8
	// End Line: 466

	/* begin block 2 */
		// Start line: 950
	/* end block 2 */
	// End Line: 951

void SetComboDownButton__7GamePadiPFi_v
							 (GamePad *this,int pad_val,TDRFuncPtr_SetComboDownButton__7GamePadiPFi_v2func func)

{
	int iVar1;
	
	iVar1 = get_key_pad__Fi(pad_val);
	*(TDRFuncPtr_SetComboDownButton__7GamePadiPFi_v2func *)(this[1].spell.lastx + iVar1 * 2 + 4) =
			 func;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this /*$s1*/, struct KEY_ASSIGNS *actions /*$s3*/)
 // line 504, offset 0x800786c0
	/* begin block 1 */
		// Start line: 505
		// Start offset: 0x800786C0
		// Variables:
	// 		int i; // $s2
	/* end block 1 */
	// End offset: 0x80078908
	// End Line: 565

	/* begin block 2 */
		// Start line: 1034
	/* end block 2 */
	// End Line: 1035

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetAllButtons__7GamePadP11KEY_ASSIGNS(GamePad *this,KEY_ASSIGNS *actions)

{
	GamePad *pGVar1;
	int iVar2;
	_func_15 **pp_Var3;
	int iVar4;
	
	iVar4 = 0;
	pGVar1 = this;
	do {
		*(undefined4 *)&pGVar1->await_combo = 0;
		*(undefined4 *)(pGVar1[1].spell.lastx + 4) = 0;
		iVar4 = iVar4 + 1;
		pGVar1 = (GamePad *)&pGVar1->spell;
	} while (iVar4 < 0xe);
	iVar4 = 0;
	pp_Var3 = &actions->func;
	do {
		iVar2 = actions->txt;
		if (iVar2 == 0x21f) {
LAB_80078830:
			if (pp_Var3[-1] != (_func_15 *)0x0) {
				SetDownButton__7GamePadiPFi_v
									(this,(int)pp_Var3[-1],(TDRFuncPtr_SetDownButton__7GamePadiPFi_v2func)*pp_Var3);
			}
			if (pp_Var3[1] != (_func_15 *)0x0) {
				SetComboDownButton__7GamePadiPFi_v
									(this,(int)pp_Var3[1],(TDRFuncPtr_SetComboDownButton__7GamePadiPFi_v2func)*pp_Var3
									);
			}
		}
		else {
			if (iVar2 < 0x220) {
				if (iVar2 != 0x45) {
					if (iVar2 < 0x46) {
						if ((iVar2 != 9) && (((iVar2 < 9 || (0x33 < iVar2)) || (iVar2 < 0x32))))
						goto LAB_8007886c;
					}
					else {
						if (iVar2 != 0xae) {
							if (iVar2 < 0xaf) {
								if (iVar2 == 0xa2) goto LAB_80078830;
							}
							else {
								if (iVar2 == 0xc3) {
									*(undefined *)((int)&this[2].spell.active + 1) = (char)pp_Var3[-1];
								}
								else {
									if (iVar2 == 0xc6) {
										*(_func_15 **)&this->combo_key = pp_Var3[-1];
									}
								}
							}
							goto LAB_8007886c;
						}
					}
				}
				goto LAB_80078830;
			}
			if (0x340 < iVar2) {
				if (iVar2 != 0x3f7) {
					if (iVar2 < 0x3f8) {
						if (iVar2 == 0x3f3) goto LAB_80078830;
					}
					else {
						if ((iVar2 == 0x48d) || (iVar2 == 0x4ab)) goto LAB_80078830;
					}
					goto LAB_8007886c;
				}
				goto LAB_80078830;
			}
			if (0x33e < iVar2) goto LAB_80078830;
			if (iVar2 == 0x2a6) {
				SetMoveStyle__7GamePadc(this,*(char *)(pp_Var3 + -1));
			}
			else {
				if (iVar2 == 0x33b) goto LAB_80078830;
			}
		}
LAB_8007886c:
		pp_Var3 = pp_Var3 + 4;
		iVar4 = iVar4 + 1;
		actions = actions + 1;
		if (0x13 < iVar4) {
			iVar4 = get_key_pad__Fi(0x20);
			*(undefined4 *)(&this->await_combo + iVar4 * 4) = 0x800a0d98;
			iVar4 = get_key_pad__Fi(1);
			*(undefined4 *)(&this->await_combo + iVar4 * 4) = 0x800a0d30;
			iVar4 = get_key_pad__Fi(2);
			*(undefined4 *)(&this->await_combo + iVar4 * 4) = 0x800a0d5c;
			iVar4 = get_key_pad__Fi(4);
			*(undefined4 *)(&this->await_combo + iVar4 * 4) = 0x800a0d88;
			iVar4 = get_key_pad__Fi(8);
			*(undefined4 *)(&this->await_combo + iVar4 * 4) = 0x800a0d90;
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this /*$s1*/, struct KEY_ASSIGNS *actions /*$s2*/)
 // line 574, offset 0x80078928
	/* begin block 1 */
		// Start line: 575
		// Start offset: 0x80078928
		// Variables:
	// 		int i; // $s3
	// 		int oc; // $s4
	/* end block 1 */
	// End offset: 0x80078ABC
	// End Line: 631

	/* begin block 2 */
		// Start line: 1181
	/* end block 2 */
	// End Line: 1182

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetAllButtons__7GamePadP11KEY_ASSIGNS(GamePad *this,KEY_ASSIGNS *actions)

{
	undefined uVar1;
	int iVar2;
	int *piVar3;
	int iVar4;
	
	iVar4 = 0;
	piVar3 = &actions->combo_val;
	uVar1 = *(undefined *)&this[2].spell.active;
	do {
		iVar2 = actions->txt;
		if (iVar2 == 0x21f) goto LAB_80078a78;
		if (iVar2 < 0x220) {
			if (iVar2 == 0x45) {
LAB_80078a78:
				*(undefined *)&this[2].spell.active = 0;
			}
			else {
				if (0x45 < iVar2) {
					if (iVar2 != 0xae) {
						if (iVar2 < 0xaf) {
							if (iVar2 == 0xa2) goto LAB_80078a78;
						}
						else {
							if (iVar2 == 0xc3) {
								piVar3[-2] = (uint)*(byte *)((int)&this[2].spell.active + 1);
							}
							else {
								if (iVar2 == 0xc6) {
									piVar3[-2] = this->combo_key;
								}
							}
						}
						goto LAB_80078aa8;
					}
					goto LAB_80078a78;
				}
				if (iVar2 == 9) goto LAB_80078a78;
				if (((iVar2 < 9) || (0x33 < iVar2)) || (iVar2 < 0x32)) goto LAB_80078aa8;
				*(undefined *)&this[2].spell.active = 0;
			}
			iVar2 = GetActionButton__7GamePadPFi_v
												(this,(TDRFuncPtr_GetActionButton__7GamePadPFi_v1func)piVar3[-1]);
			piVar3[-2] = iVar2;
			*(undefined *)&this[2].spell.active = 1;
			iVar2 = GetActionButton__7GamePadPFi_v
												(this,(TDRFuncPtr_GetActionButton__7GamePadPFi_v1func)piVar3[-1]);
			*piVar3 = iVar2;
		}
		else {
			if (iVar2 < 0x341) {
				if (iVar2 < 0x33f) {
					if (iVar2 == 0x2a6) {
						piVar3[-2] = (int)this->style;
					}
					else {
						if (iVar2 == 0x33b) goto LAB_80078a78;
					}
					goto LAB_80078aa8;
				}
				goto LAB_80078a78;
			}
			if (iVar2 == 0x3f7) goto LAB_80078a78;
			if (iVar2 < 0x3f8) {
				if (iVar2 == 0x3f3) goto LAB_80078a78;
			}
			else {
				if ((iVar2 == 0x48d) || (iVar2 == 0x4ab)) goto LAB_80078a78;
			}
		}
LAB_80078aa8:
		piVar3 = piVar3 + 4;
		iVar4 = iVar4 + 1;
		actions = actions + 1;
		if (0x13 < iVar4) {
			*(undefined *)&this[2].spell.active = uVar1;
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetActionButton__7GamePadPFi_v(struct GamePad *this /*$a0*/, TDRFuncPtr_GetActionButton__7GamePadPFi_v1func func /*$a1*/)
 // line 638, offset 0x80078ae0
	/* begin block 1 */
		// Start line: 639
		// Start offset: 0x80078AE0

		/* begin block 1.1 */
			// Start line: 641
			// Start offset: 0x80078AE0
		/* end block 1.1 */
		// End offset: 0x80078B30
		// End Line: 657
	/* end block 1 */
	// End offset: 0x80078B34
	// End Line: 658

	/* begin block 2 */
		// Start line: 1319
	/* end block 2 */
	// End Line: 1320

int GetActionButton__7GamePadPFi_v
							(GamePad *this,TDRFuncPtr_GetActionButton__7GamePadPFi_v1func func)

{
	GamePad *pGVar1;
	TDRFuncPtr_GetActionButton__7GamePadPFi_v1func pTVar2;
	int *piVar3;
	
	pGVar1 = this + 2;
	piVar3 = &pad_txt[0].pnum;
	while( true ) {
		if (*(char *)&(pGVar1->spell).active == '\0') {
			pTVar2 = *(TDRFuncPtr_GetActionButton__7GamePadPFi_v1func *)&this->await_combo;
		}
		else {
			pTVar2 = *(TDRFuncPtr_GetActionButton__7GamePadPFi_v1func *)(this[1].spell.lastx + 4);
		}
		if (pTVar2 == func) break;
		piVar3 = piVar3 + 3;
		this = (GamePad *)&this->spell;
		if (-0x7ff33bf1 < (int)piVar3) {
			return 0;
		}
	}
	return *piVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetUpAction__7GamePadPFi_vT1(struct GamePad *this /*$s0*/, TDRFuncPtr_SetUpAction__7GamePadPFi_vT11func func /*$a1*/, TDRFuncPtr_SetUpAction__7GamePadPFi_vT12upfunc upfunc /*$s1*/)
 // line 665, offset 0x80078b3c
	/* begin block 1 */
		// Start line: 666
		// Start offset: 0x80078B3C
	/* end block 1 */
	// End offset: 0x80078B60
	// End Line: 669

	/* begin block 2 */
		// Start line: 1371
	/* end block 2 */
	// End Line: 1372

void SetUpAction__7GamePadPFi_vT1
							 (GamePad *this,TDRFuncPtr_SetUpAction__7GamePadPFi_vT11func func,
							 TDRFuncPtr_SetUpAction__7GamePadPFi_vT12upfunc upfunc)

{
	int iVar1;
	
	iVar1 = GetActionButton__7GamePadPFi_v(this,(TDRFuncPtr_GetActionButton__7GamePadPFi_v1func)func);
	this->pad_up_button = iVar1;
	*(TDRFuncPtr_SetUpAction__7GamePadPFi_vT12upfunc *)&this->pad_up_action = upfunc;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RunFunc__7GamePadi(struct GamePad *this /*$s0*/, int pad /*$a0*/)
 // line 678, offset 0x80078b78
	/* begin block 1 */
		// Start line: 679
		// Start offset: 0x80078B78
		// Variables:
	// 		int i; // $v0
	/* end block 1 */
	// End offset: 0x80078C50
	// End Line: 707

	/* begin block 2 */
		// Start line: 1397
	/* end block 2 */
	// End Line: 1398

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RunFunc__7GamePadi(GamePad *this,int pad)

{
	int iVar1;
	code *pcVar2;
	
	if ((FeFlag == '\0') && (this->player->_pHitPoints >> 6 != 0)) {
		iVar1 = get_key_pad__Fi(pad);
		if (*(char *)&this[2].spell.active == '\0') {
			if (*(code **)(&this->await_combo + iVar1 * 4) != (code *)0x0) {
				(**(code **)(&this->await_combo + iVar1 * 4))((int)this->pnum);
			}
		}
		else {
			pcVar2 = *(code **)(this[1].spell.lastx + iVar1 * 2 + 4);
			if ((pcVar2 != (code *)0x0) &&
				 (((leveltype != '\0' || (pcVar2 != pad_func_AutoMap__Fi)) || (seen_combo == -1)))) {
				(*pcVar2)((int)this->pnum);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ButtonDown__7GamePadi(struct GamePad *this /*$s0*/, int button /*$a1*/)
 // line 716, offset 0x80078c64
	/* begin block 1 */
		// Start line: 717
		// Start offset: 0x80078C64

		/* begin block 1.1 */
			// Start line: 717
			// Start offset: 0x80078C64

			/* begin block 1.1.1 */
				// Start line: 722
				// Start offset: 0x80078D4C

				/* begin block 1.1.1.1 */
					// Start line: 830
					// Start offset: 0x80078FB8

					/* begin block 1.1.1.1.1 */
						// Start line: 831
						// Start offset: 0x80078FCC
					/* end block 1.1.1.1.1 */
					// End offset: 0x80079008
					// End Line: 846
				/* end block 1.1.1.1 */
				// End offset: 0x80079008
				// End Line: 846
			/* end block 1.1.1 */
			// End offset: 0x80079068
			// End Line: 869
		/* end block 1.1 */
		// End offset: 0x80079068
		// End Line: 869
	/* end block 1 */
	// End offset: 0x80079068
	// End Line: 869

	/* begin block 2 */
		// Start line: 1476
	/* end block 2 */
	// End Line: 1477

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ButtonDown__7GamePadi(GamePad *this,int button)

{
	if (button != 0x80) {
		if (button < 0x81) {
			if (button == 4) {
				if (this->pad_up_action == select_belt_item__Fi) {
					PlaySFX__Fi(IS_TITLEMOV);
					get_last_inv__Fv();
					return;
				}
				button = 4;
			}
			else {
				if (button < 5) {
					if (button != 1) {
						if (button != 2) {
							return;
						}
						button = 2;
					}
				}
				else {
					if (button == 0x20) {
						if (PauseMode != '\0') {
							return;
						}
						if (questlog != '\0') {
LAB_80078fa8:
							QuestlogESC__Fv();
							return;
						}
						msgholdflag = '\x01';
						button = 0x20;
					}
					else {
						if (button < 0x21) {
							if (button != 8) {
								return;
							}
							if (this->pad_up_action == select_belt_item__Fi) {
								get_next_inv__Fv();
								PlaySFX__Fi(IS_TITLEMOV);
								return;
							}
							button = 8;
						}
						else {
							if (button != 0x40) {
								return;
							}
							if (this->pad_up_action == select_belt_item__Fi) {
								PlaySFX__Fi(IS_TITLSLCT);
								this->pad_up_action = (_func_16 *)0x0;
								this->allow_walking = '\x01';
								(&_SpdBeltSelFlag)[(int)this->pnum] = '\0';
								return;
							}
							if (sbookflag != '\0') {
								CheckSBook__Fv();
								return;
							}
							if (questlog != '\0') {
								QuestlogEnter__Fv();
								return;
							}
							if (chrflag != '\0') {
								CheckChrBtns__Fv();
								return;
							}
							if ((&_spselflag2)[(int)this->pnum] != (TASK *)0x0) {
								SetSpell__Fi((int)this->pnum);
								options_pad = -1;
								return;
							}
							if (((uint)optionsflag | (uint)invflag) != 0) {
								return;
							}
							button = 0x40;
						}
					}
				}
			}
		}
		else {
			if (button != 0x400) {
				if (button < 0x401) {
					if (button == 0x100) {
						if (this->pad_up_action == select_belt_item__Fi) {
							PlaySFX__Fi(IS_TITLSLCT);
							this->allow_walking = '\x01';
							this->pad_up_action = (_func_16 *)0x0;
							(&_SpdBeltSelFlag)[(int)this->pnum] = '\0';
							return;
						}
						if (select_flag != '\0') {
							select_flag = '\0';
							return;
						}
						if ((invflag | chrflag) != 0) {
							CloseInvChr__Fv();
							return;
						}
						if (questlog != '\0') goto LAB_80078fa8;
						if (sbookflag != '\0') {
							sbookflag = '\0';
							if (Qfromoptions == '\0') {
								PostGamePad__Fiiii(5,0,0,0);
								options_pad = -1;
								return;
							}
							sbookflag = '\0';
							return;
						}
						if (optionsflag != (void *)0x0) {
							return;
						}
						if ((&_spselflag2)[(int)this->pnum] != (TASK *)0x0) {
							PlaySFX__Fi(IS_TITLSLCT);
							ToggleSpell__Fi((int)this->pnum);
							return;
						}
					}
					else {
						if (button != 0x200) {
							return;
						}
					}
				}
				else {
					if (button != 0x1000) {
						if (button < 0x1001) {
							if (button != 0x800) {
								return;
							}
						}
						else {
							if (button != 0x2000) {
								return;
							}
						}
					}
				}
			}
		}
	}
	RunFunc__7GamePadi(this,button);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TestButtons__7GamePad(struct GamePad *this /*$s1*/)
 // line 884, offset 0x8007907c
	/* begin block 1 */
		// Start line: 885
		// Start offset: 0x8007907C
		// Variables:
	// 		int hand; // $s0
	// 		int joydown; // $s2
	/* end block 1 */
	// End offset: 0x8007916C
	// End Line: 915

	/* begin block 2 */
		// Start line: 1821
	/* end block 2 */
	// End Line: 1822

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TestButtons__7GamePad(GamePad *this)

{
	ushort uVar1;
	void *pvVar2;
	uint button;
	
	button = 1;
	if (ignore_buttons == (void *)0x0) {
		pvVar2 = GetFadeState__Fv();
		if (pvVar2 == (void *)0x0) {
			uVar1 = GetDown__C4CPad(this->Pad);
			GetUp__C4CPad(this->Pad);
			do {
				if ((int)this->pnum != myplr) {
					return;
				}
				if ((int)this->pnum != sel_data) {
					return;
				}
				if ((((uint)uVar1 & 0x3fff & button) != 0) &&
					 (ButtonDown__7GamePadi(this,button),
					 ((uint)invflag | (int)stextflag | (uint)qtextflag | (uint)sbookflag | (uint)questlog |
					 (uint)optionsflag) != 0)) {
					return;
				}
				button = button << 1;
			} while (button != 0);
		}
	}
	else {
		ignore_buttons = (void *)0x0;
	}
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ CheckCentre__7GamePadi(struct GamePad *this /*$a0*/, int dir /*$a1*/)
 // line 942, offset 0x80079188
	/* begin block 1 */
		// Start line: 943
		// Start offset: 0x80079188
		// Variables:
	// 		int wx; // $v1
	// 		int wy; // $a0
	// 		int ret; // $a2
	/* end block 1 */
	// End offset: 0x80079278
	// End Line: 986

	/* begin block 2 */
		// Start line: 1939
	/* end block 2 */
	// End Line: 1940

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void * CheckCentre__7GamePadi(GamePad *this,int dir)

{
	int iVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	
	puVar4 = (undefined *)0x0;
	iVar2 = this->player->WorldX;
	iVar3 = this->player->WorldY;
	iVar1 = iVar2;
	if (iVar2 < 0) {
		iVar1 = iVar2 + 7;
	}
	iVar2 = iVar2 + (iVar1 >> 3) * -8;
	iVar1 = iVar3;
	if (iVar3 < 0) {
		iVar1 = iVar3 + 7;
	}
	switch(dir) {
	case 0:
		break;
	case 1:
		if (iVar2 != 4) {
			return (void *)0x0;
		}
		return &DAT_00000001;
	case 2:
		break;
	case 3:
	case 7:
		goto LAB_8007926c;
	case 4:
		break;
	case 5:
		if (iVar2 != 4) {
			return (void *)0x0;
		}
		return &DAT_00000001;
	case 6:
		break;
	default:
		goto switchD_800791e8_caseD_8;
	}
	if (iVar2 != 4) {
LAB_8007926c:
		if (iVar3 + (iVar1 >> 3) * -8 != 4) {
			return (void *)0x0;
		}
	}
	puVar4 = &DAT_00000001;
switchD_800791e8_caseD_8:
	return puVar4;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckDirs__7GamePadi(struct GamePad *this /*$a0*/, int dir /*$a1*/)
 // line 996, offset 0x80079280
	/* begin block 1 */
		// Start line: 997
		// Start offset: 0x80079280
	/* end block 1 */
	// End offset: 0x800792A0
	// End Line: 999

	/* begin block 2 */
		// Start line: 2047
	/* end block 2 */
	// End Line: 2048

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CheckDirs__7GamePadi(GamePad *this,int dir)

{
	int iVar1;
	
	iVar1 = CheckDirs__7GamePadiii(this,dir,this->player->WorldX,this->player->WorldY);
	return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckDirs__7GamePadiii(struct GamePad *this /*$a0*/, int dir /*$a1*/, int wx /*$a2*/, int wy /*$a3*/)
 // line 1043, offset 0x800792b0
	/* begin block 1 */
		// Start line: 1044
		// Start offset: 0x800792B0
	/* end block 1 */
	// End offset: 0x800793B0
	// End Line: 1085

	/* begin block 2 */
		// Start line: 2144
	/* end block 2 */
	// End Line: 2145

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CheckDirs__7GamePadiii(GamePad *this,int dir,int wx,int wy)

{
	bool bVar1;
	int iVar2;
	
	iVar2 = wx;
	if (wx < 0) {
		iVar2 = wx + 7;
	}
	wx = wx + (iVar2 >> 3) * -8;
	iVar2 = wy;
	if (wy < 0) {
		iVar2 = wy + 7;
	}
	wy = wy + (iVar2 >> 3) * -8;
	switch(dir) {
	case 0:
		if (wx < 4) {
			return dir;
		}
		if (3 < wy) {
			return -1;
		}
		return dir;
	case 1:
		if (3 < wy) {
			return -1;
		}
		return dir;
	case 2:
		if (3 < wx) {
			return dir;
		}
		if (3 < wy) {
			return -1;
		}
		return dir;
	case 3:
		bVar1 = wx < 4;
		break;
	case 4:
		if (3 < wx) {
			return dir;
		}
		bVar1 = wy < 4;
		break;
	case 5:
		bVar1 = wy < 4;
		break;
	case 6:
		if (wx < 4) {
			return dir;
		}
		bVar1 = wy < 4;
		break;
	case 7:
		if (3 < wx) {
			return -1;
		}
		return dir;
	default:
		return dir;
	}
	if (bVar1) {
		dir = -1;
	}
	return dir;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckSide__7GamePadi(struct GamePad *this /*$a0*/, int dir /*$a1*/)
 // line 1095, offset 0x800793b8
	/* begin block 1 */
		// Start line: 1096
		// Start offset: 0x800793B8
	/* end block 1 */
	// End offset: 0x800793E8
	// End Line: 1104

	/* begin block 2 */
		// Start line: 2245
	/* end block 2 */
	// End Line: 2246

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CheckSide__7GamePadi(GamePad *this,int dir)

{
	int iVar1;
	int iVar2;
	
	iVar1 = CheckDirs__7GamePadi(this,(dir - 1U & 7) - 1 & 7);
	iVar2 = 1;
	if (iVar1 != -1) {
		iVar2 = 2;
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ newDirOk__7GamePadi(struct GamePad *this /*$s0*/, int dir /*$s1*/)
 // line 1108, offset 0x800793f8
	/* begin block 1 */
		// Start line: 1109
		// Start offset: 0x800793F8
		// Variables:
	// 		int x; // $a1
	// 		int y; // $a2

		/* begin block 1.1 */
			// Start line: 1109
			// Start offset: 0x800793F8

			/* begin block 1.1.1 */
				// Start line: 1115
				// Start offset: 0x80079458
				// Variables:
			// 		int wx; // $a2
			// 		int wy; // $a3
			/* end block 1.1.1 */
			// End offset: 0x80079488
			// End Line: 1118
		/* end block 1.1 */
		// End offset: 0x80079488
		// End Line: 1118
	/* end block 1 */
	// End offset: 0x80079488
	// End Line: 1121

	/* begin block 2 */
		// Start line: 2271
	/* end block 2 */
	// End Line: 2272

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * newDirOk__7GamePadi(GamePad *this,int dir)

{
	char cVar1;
	char cVar2;
	uchar uVar3;
	int iVar4;
	undefined *puVar5;
	
	cVar1 = offset_x[dir];
	cVar2 = offset_y[dir];
	uVar3 = PosOkPlayer__Fiii((int)this->pnum,(int)this->player->_px + (int)cVar1,
														(int)this->player->_py + (int)cVar2);
	puVar5 = &DAT_00000001;
	if (uVar3 == '\0') {
		iVar4 = CheckDirs__7GamePadiii
											(this,dir,this->player->WorldX + (int)cVar1,this->player->WorldY + (int)cVar2)
		;
		puVar5 = &DAT_00000001;
		if (iVar4 == -1) {
			puVar5 = (undefined *)0x0;
		}
	}
	return puVar5;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckDiagBodge__7GamePadi(struct GamePad *this /*$s2*/, int dir /*$s1*/)
 // line 1124, offset 0x800794a8
	/* begin block 1 */
		// Start line: 1125
		// Start offset: 0x800794A8
		// Variables:
	// 		int x; // stack offset -112
	// 		int y; // stack offset -104
	// 		int lnd; // $fp
	// 		int rnd; // $s7
	// 		int wx; // stack offset -96
	// 		int wy; // stack offset -88
	// 		char *poffset_x; // $s3
	// 		char *poffset_y; // $s4
	// 		void * pl; // $s6
	// 		void * pr; // $s5
	// 		void * pf; // stack offset -80
	// 		void * pll; // stack offset -72
	// 		void * prr; // stack offset -64

		/* begin block 1.1 */
			// Start line: 1125
			// Start offset: 0x800794A8

			/* begin block 1.1.1 */
				// Start line: 1142
				// Start offset: 0x800795A4
			/* end block 1.1.1 */
			// End offset: 0x800795E0
			// End Line: 1144
		/* end block 1.1 */
		// End offset: 0x800795E0
		// End Line: 1144

		/* begin block 1.2 */
			// Start line: 1146
			// Start offset: 0x800795E0

			/* begin block 1.2.1 */
				// Start line: 1147
				// Start offset: 0x8007961C
			/* end block 1.2.1 */
			// End offset: 0x80079654
			// End Line: 1149
		/* end block 1.2 */
		// End offset: 0x80079654
		// End Line: 1149
	/* end block 1 */
	// End offset: 0x80079768
	// End Line: 1208

	/* begin block 2 */
		// Start line: 2309
	/* end block 2 */
	// End Line: 2310

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CheckDiagBodge__7GamePadi(GamePad *this,int dir)

{
	short sVar1;
	short sVar2;
	bool bVar3;
	bool bVar4;
	uchar uVar5;
	PlayerStruct *pPVar6;
	int iVar7;
	void *pvVar8;
	void *pvVar9;
	void *pvVar10;
	int iVar11;
	uint uVar12;
	uint dir_00;
	uint dir_01;
	
	bVar3 = true;
	dir_01 = dir - 1U & 7;
	bVar4 = true;
	pPVar6 = this->player;
	sVar1 = pPVar6->_px;
	sVar2 = pPVar6->_py;
	iVar11 = pPVar6->WorldX;
	iVar7 = pPVar6->WorldY;
	dir_00 = dir + 1U & 7;
	pvVar8 = newDirOk__7GamePadi(this,dir_01);
	pvVar9 = newDirOk__7GamePadi(this,dir_00);
	pvVar10 = newDirOk__7GamePadi(this,dir);
	uVar12 = dir_01 - 1 & 7;
	uVar5 = PosOkPlayer__Fiii((int)this->pnum,(int)sVar1 + (int)offset_x[uVar12],
														(int)sVar2 + (int)offset_y[uVar12]);
	if (uVar5 == '\0') {
		uVar12 = CheckDirs__7GamePadiii
											 (this,uVar12 - 1 & 7,iVar11 + (int)offset_x[dir],iVar7 + (int)offset_y[dir]);
		bVar3 = ~uVar12 != 0;
	}
	uVar12 = dir_00 + 1 & 7;
	uVar5 = PosOkPlayer__Fiii((int)this->pnum,(int)sVar1 + (int)offset_x[uVar12],
														(int)sVar2 + (int)offset_y[uVar12]);
	if (uVar5 == '\0') {
		uVar12 = CheckDirs__7GamePadiii
											 (this,uVar12 + 1 & 7,iVar11 + (int)offset_x[dir],iVar7 + (int)offset_y[dir]);
		bVar4 = ~uVar12 != 0;
	}
	if (pvVar10 == (void *)0x0) {
		if (pvVar8 == (void *)0x0) {
			if (pvVar9 != (void *)0x0) {
				return dir_00;
			}
		}
		else {
			if (pvVar9 == (void *)0x0) {
				return dir_01;
			}
			iVar7 = CheckDirs__7GamePadi(this,dir_01);
			if (iVar7 != -1) {
				return dir_00;
			}
		}
		if (pvVar8 == (void *)0x0) {
			return -1;
		}
		iVar7 = CheckDirs__7GamePadi(this,dir_00);
		if (iVar7 != -1) {
			return dir_01;
		}
		return -1;
	}
	if (pvVar8 == (void *)0x0) {
LAB_800796b4:
		if (pvVar9 != (void *)0x0) {
			return dir + 1U & 7;
		}
		if (pvVar8 == (void *)0x0) goto LAB_800796e0;
	}
	else {
		if (pvVar9 != (void *)0x0) {
			if (bVar3) {
				if (!bVar4) {
					return dir_01;
				}
				return dir;
			}
			if (bVar4) {
				return dir_00;
			}
		}
		if (pvVar8 == (void *)0x0) goto LAB_800796b4;
	}
	if (pvVar9 == (void *)0x0) {
		return dir - 1U & 7;
	}
LAB_800796e0:
	if ((pvVar8 == (void *)0x0) && (pvVar9 == (void *)0x0)) {
		dir = -1;
	}
	return dir;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckIsoBodge__7GamePadi(struct GamePad *this /*$s0*/, int dir /*$a1*/)
 // line 1218, offset 0x8007979c
	/* begin block 1 */
		// Start line: 1219
		// Start offset: 0x8007979C
		// Variables:
	// 		int x; // $a1
	// 		int y; // $a2
	// 		int newdir; // $s1
	// 		int wx; // $s5
	// 		int wy; // $s6
	// 		int lnd; // stack offset -80
	// 		int rnd; // stack offset -72
	// 		char *poffset_x; // $s2
	// 		char *poffset_y; // $s3

		/* begin block 1.1 */
			// Start line: 1219
			// Start offset: 0x8007979C

			/* begin block 1.1.1 */
				// Start line: 1230
				// Start offset: 0x80079854
			/* end block 1.1.1 */
			// End offset: 0x800799CC
			// End Line: 1253
		/* end block 1.1 */
		// End offset: 0x80079ACC
		// End Line: 1278
	/* end block 1 */
	// End offset: 0x80079AD4
	// End Line: 1282

	/* begin block 2 */
		// Start line: 2538
	/* end block 2 */
	// End Line: 2539

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CheckIsoBodge__7GamePadi(GamePad *this,int dir)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	bool bVar4;
	uchar uVar5;
	uint dir_00;
	uint dir_01;
	int iVar6;
	undefined *puVar7;
	PlayerStruct *pPVar8;
	uint uVar9;
	int wx;
	int wy;
	uint uVar10;
	
	uVar9 = dir - 1U & 7;
	pPVar8 = this->player;
	cVar1 = offset_x[dir];
	cVar2 = offset_y[dir];
	dir_00 = uVar9 - 1 & 7;
	uVar10 = dir + 1U & 7;
	dir_01 = uVar10 + 1 & 7;
	wx = pPVar8->WorldX;
	wy = pPVar8->WorldY;
	uVar5 = PosOkPlayer__Fiii((int)this->pnum,(int)pPVar8->_px + (int)cVar1,
														(int)pPVar8->_py + (int)cVar2);
	if (uVar5 == '\0') {
		wx = wx + (int)cVar1;
		wy = wy + (int)cVar2;
		iVar6 = CheckDirs__7GamePadiii(this,dir,wx,wy);
		if (iVar6 != -1) {
			return dir;
		}
		bVar3 = false;
		uVar5 = PosOkPlayer__Fiii((int)this->pnum,(int)this->player->_px + (int)offset_x[uVar9],
															(int)this->player->_py + (int)offset_y[uVar9]);
		if (uVar5 != '\0') {
			uVar5 = PosOkPlayer__Fiii((int)this->pnum,(int)this->player->_px + (int)offset_x[dir_00],
																(int)this->player->_py + (int)offset_y[dir_00]);
			bVar3 = uVar5 != '\0';
		}
		bVar4 = false;
		if (!bVar3) {
			uVar5 = PosOkPlayer__Fiii((int)this->pnum,(int)this->player->_px + (int)offset_x[uVar10],
																(int)this->player->_py + (int)offset_y[uVar10]);
			if (uVar5 != '\0') {
				uVar5 = PosOkPlayer__Fiii((int)this->pnum,(int)this->player->_px + (int)offset_x[dir_01],
																	(int)this->player->_py + (int)offset_y[dir_01]);
				bVar4 = uVar5 != '\0';
			}
			dir_00 = dir_01;
			if (!bVar4) {
				wx = CheckDirs__7GamePadiii(this,dir,wx,wy);
				return wx;
			}
		}
		uVar5 = PosOkPlayer__Fiii((int)this->pnum,(int)this->player->_px + (int)offset_x[dir_00],
															(int)this->player->_py + (int)offset_y[dir_00]);
		if (uVar5 != '\0') {
			return dir_00;
		}
		dir_01 = CheckDirs__7GamePadi(this,dir_00);
	}
	else {
		puVar7 = (undefined *)CheckCentre__7GamePadi(this,dir);
		if (puVar7 == &DAT_00000001) {
			return dir;
		}
		wx = CheckSide__7GamePadi(this,dir);
		if (wx != 1) {
			if (wx != 2) {
				return dir;
			}
			uVar5 = PosOkPlayer__Fiii((int)this->pnum,(int)this->player->_px + (int)offset_x[uVar10],
																(int)this->player->_py + (int)offset_y[uVar10]);
			if (uVar5 == '\0') {
				wx = CheckDirs__7GamePadi(this,dir_01);
				if (wx == -1) {
					return dir_00;
				}
				return dir;
			}
			return dir;
		}
		uVar5 = PosOkPlayer__Fiii((int)this->pnum,(int)this->player->_px + (int)offset_x[uVar9],
															(int)this->player->_py + (int)offset_y[uVar9]);
		if (uVar5 != '\0') {
			return dir;
		}
		wx = CheckDirs__7GamePadi(this,dir_00);
		if (wx != -1) {
			return dir;
		}
	}
	return dir_01;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckBodge__7GamePadi(struct GamePad *this /*$s1*/, int dir /*$s0*/)
 // line 1290, offset 0x80079b08
	/* begin block 1 */
		// Start line: 1291
		// Start offset: 0x80079B08
		// Variables:
	// 		int fx; // $a1
	// 		int fy; // $a2
	// 		struct map_info *dm; // $a0

		/* begin block 1.1 */
			// Start line: 1291
			// Start offset: 0x80079B08

			/* begin block 1.1.1 */
				// Start line: 1303
				// Start offset: 0x80079BA0
				// Variables:
			// 		int wx; // $a1
			// 		int wy; // $a2
			/* end block 1.1.1 */
			// End offset: 0x80079C04
			// End Line: 1310
		/* end block 1.1 */
		// End offset: 0x80079C04
		// End Line: 1310
	/* end block 1 */
	// End offset: 0x80079C50
	// End Line: 1330

	/* begin block 2 */
		// Start line: 2713
	/* end block 2 */
	// End Line: 2714

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CheckBodge__7GamePadi(GamePad *this,int dir)

{
	char cVar1;
	char cVar2;
	uchar uVar3;
	PlayerStruct *pPVar4;
	int x;
	int y;
	
	x = (int)this->player->_px + (int)offset_x[dir];
	y = (int)this->player->_py + (int)offset_y[dir];
	if ((leveltype == '\0') ||
		 ((dung_map[y + x * 0x70].dMonster < 1 && (uVar3 = IsDplayer__Fii(x,y), uVar3 == '\0')))) {
		switch(dir) {
		case 0:
		case 2:
		case 4:
		case 6:
			dir = CheckDiagBodge__7GamePadi(this,dir);
			break;
		case 1:
		case 3:
		case 5:
		case 7:
			dir = CheckIsoBodge__7GamePadi(this,dir);
		}
	}
	else {
		pPVar4 = this->player;
		cVar1 = offset_x[dir];
		cVar2 = offset_y[dir];
		pPVar4->_pdir = (char)dir;
		uVar3 = PosOkPlayer__Fiii((int)this->pnum,pPVar4->WorldX + (int)cVar1 >> 3,
															pPVar4->WorldY + (int)cVar2 >> 3);
		if (uVar3 == '\0') {
			dir = -1;
		}
		else {
			dir = CheckDirs__7GamePadi(this,dir);
		}
	}
	return dir;
}



// decompiled code
// original method signature: 
// void /*$ra*/ walk__7GamePadi(struct GamePad *this /*$s0*/, int cmd /*$s2*/)
 // line 1339, offset 0x80079c68
	/* begin block 1 */
		// Start line: 1340
		// Start offset: 0x80079C68
		// Variables:
	// 		int xv; // $s2
	// 		int yv; // $s3
	// 		int dir; // $s1
	// 		struct PlayerStruct *plr2; // $v1

		/* begin block 1.1 */
			// Start line: 1352
			// Start offset: 0x80079CFC

			/* begin block 1.1.1 */
				// Start line: 1357
				// Start offset: 0x80079D7C
			/* end block 1.1.1 */
			// End offset: 0x80079DC0
			// End Line: 1363
		/* end block 1.1 */
		// End offset: 0x80079DC0
		// End Line: 1363
	/* end block 1 */
	// End offset: 0x80079F90
	// End Line: 1403

	/* begin block 2 */
		// Start line: 2817
	/* end block 2 */
	// End Line: 2818

/* WARNING: Unknown calling convention yet parameter storage is locked */

void walk__7GamePadi(GamePad *this,int cmd)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	uchar uVar4;
	void *pvVar5;
	int iVar6;
	int iVar7;
	PlayerStruct *pPVar8;
	
	if ((this->player->_pInvincible == '\0') || (this->player->_pHitPoints != 0)) {
		if (((int)this->player->_pmode < 4) &&
			 ((pvVar5 = Active__11SpellTarget(&this->spell), pvVar5 == (void *)0x0 &&
				(this->pad_up_button == 0)))) {
			iVar6 = CheckBodge__7GamePadi(this,cmd);
			iVar7 = (int)(char)(this->pnum ^ 1);
			if (iVar6 != -1) {
				pPVar8 = this->player;
				if (((pPVar8->plractive != '\0') && (plr[iVar7].plractive != '\0')) &&
					 (uVar4 = ChkPlrOffsets__Fiiii
															(pPVar8->WorldX + (int)offset_x[iVar6],
															 pPVar8->WorldY + (int)offset_y[iVar6],plr[iVar7].WorldX,
															 plr[iVar7].WorldY), uVar4 == '\0')) {
					iVar6 = -1;
				}
				if (iVar6 != -1) {
					pPVar8 = this->player;
					cVar1 = offset_x[iVar6];
					cVar2 = offset_y[iVar6];
					if ((iVar6 != (int)pPVar8->_pdir) || (pPVar8->_pmode == PM_STAND)) {
						NewPlrAnim__Fiiii((int)this->pnum,8,pPVar8->_pWFrames,0);
						this->player->_pVar8 = 0;
						this->player->_pVar3 = (short)iVar6;
						PlrClrTrans__Fii((int)this->player->_px,(int)this->player->_py);
						PlrDoTrans__Fii((int)this->player->_px,(int)this->player->_py);
					}
					this->player->_pdir = (char)iVar6;
					if ((cVar1 == '\0') && (cVar2 == '\0')) {
						return;
					}
					this->player->_pmode = PM_WALK;
					this->player->_pVar1 = (short)cVar1;
					this->player->_pVar2 = (short)cVar2;
					ScrollInfo._sdx = (int)this->player->_px - ViewX;
					ScrollInfo._sdy = (int)this->player->_py - ViewY;
					if (svgamode == '\0') {
						bVar3 = false;
						iVar7 = abs(ScrollInfo._sdx);
						if (iVar7 < 2) {
							iVar7 = abs(ScrollInfo._sdy);
							bVar3 = iVar7 < 2;
						}
					}
					else {
						bVar3 = false;
						iVar7 = abs(ScrollInfo._sdx);
						if (iVar7 < 3) {
							iVar7 = abs(ScrollInfo._sdy);
							bVar3 = iVar7 < 3;
						}
					}
					if (bVar3) {
						if (iVar6 + -3 < 1) {
							ScrollInfo._sdir = iVar6 + 5;
							return;
						}
						ScrollInfo._sdir = iVar6 + -2;
						return;
					}
					ScrollInfo._sdir = 0;
					return;
				}
			}
			StartStand__Fii((int)this->pnum,cmd);
		}
	}
	else {
		StartPlrKill__Fii((int)this->pnum,-1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ check_around_player__7GamePad(struct GamePad *this /*$s0*/)
 // line 1414, offset 0x80079fb0
	/* begin block 1 */
		// Start line: 1415
		// Start offset: 0x80079FB0
		// Variables:
	// 		int x; // $s3
	// 		int y; // $s2

		/* begin block 1.1 */
			// Start line: 1432
			// Start offset: 0x8007A068

			/* begin block 1.1.1 */
				// Start line: 1432
				// Start offset: 0x8007A07C

				/* begin block 1.1.1.1 */
					// Start line: 1432
					// Start offset: 0x8007A07C

					/* begin block 1.1.1.1.1 */
						// Start line: 1434
						// Start offset: 0x8007A0A8
						// Variables:
					// 		struct ItemStruct *pi; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007A1A0
					// End Line: 1449
				/* end block 1.1.1.1 */
				// End offset: 0x8007A1A0
				// End Line: 1452
			/* end block 1.1.1 */
			// End offset: 0x8007A1A0
			// End Line: 1452
		/* end block 1.1 */
		// End offset: 0x8007A1BC
		// End Line: 1456
	/* end block 1 */
	// End offset: 0x8007A2CC
	// End Line: 1478

	/* begin block 2 */
		// Start line: 2981
	/* end block 2 */
	// End Line: 2982

/* WARNING: Unknown calling convention yet parameter storage is locked */

void check_around_player__7GamePad(GamePad *this)

{
	short sVar1;
	short sVar2;
	int iVar3;
	uchar uVar4;
	PlayerStruct *pPVar5;
	void *pvVar6;
	char *__src;
	ItemStruct *ItemPtr;
	
	pPVar5 = this->player;
	sVar1 = pPVar5->_px;
	sVar2 = pPVar5->_py;
	if ((pPVar5->_pmode != PM_SPELL) &&
		 (pvVar6 = Active__11SpellTarget(&this->spell), iVar3 = sel_data, pvVar6 == (void *)0x0)) {
		(&_pcursobj)[sel_data] = -1;
		(&_pcursitem)[sel_data] = -1;
		uVar4 = invflag;
		(&_pcursmonst)[iVar3] = -1;
		if (uVar4 == '\0') {
			if (this->pad_up_action == select_belt_item__Fi) {
				if (_pcurr_inv[sel_data] != -1) {
					_pcursinvitem[sel_data] = (char)_pcurr_inv[sel_data];
					ClearPanel__Fv();
					ItemPtr = this->player->SpdList + _pcurr_inv[sel_data];
					__src = MakeItemStr__FP10ItemStructUsUs(ItemPtr,ItemPtr->_iIName,0x100);
					strcpy(tempstr,__src);
					strcpy(_infostr + sel_data * 0x100,tempstr);
					_infoclr[sel_data] = '\0';
					if (ItemPtr->_iMagical == '\x01') {
						_infoclr[sel_data] = '\x01';
						return;
					}
					if (ItemPtr->_iMagical != '\x02') {
						return;
					}
					_infoclr[sel_data] = '\x03';
					return;
				}
				this->pad_up_action = (_func_16 *)0x0;
			}
			else {
				_pcursinvitem[sel_data] = -1;
			}
			if ((_pcurr_inv[sel_data] == -1) ||
				 (*(short *)(&DAT_000015dc + (int)(&this->player->_pmode + _pcurr_inv[sel_data] * 0x1b)) ==
					-1)) {
				get_next_inv__Fv();
			}
			if (_pcursinvitem[sel_data] == -1) {
				CheckArea__FiiiUci((int)sVar1,(int)sVar2,6,'\0',(int)this->pnum);
				CheckPanelInfo__Fv();
				cursmx = (int)this->player->_px;
				cursmy = (int)this->player->_py;
				CheckTrigForce__Fv();
				cursmx = (int)this->player->_px;
				cursmy = (int)this->player->_py;
				CheckTown__Fv();
				cursmx = (int)this->player->_px;
				cursmy = (int)this->player->_py;
				CheckRportal__Fv();
			}
		}
		else {
			(&_pcursitem)[options_pad ^ 1] = -1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ show_combos__7GamePad(struct GamePad *this /*$s2*/)
 // line 1490, offset 0x8007a2ec
	/* begin block 1 */
		// Start line: 1491
		// Start offset: 0x8007A2EC
		// Variables:
	// 		int y; // $s5
	// 		struct RECT crect; // stack offset -40
	// 		enum TXT_JUST J; // $s6

		/* begin block 1.1 */
			// Start line: 1502
			// Start offset: 0x8007A384
			// Variables:
		// 		int i; // $s4
		/* end block 1.1 */
		// End offset: 0x8007A540
		// End Line: 1526
	/* end block 1 */
	// End offset: 0x8007A54C
	// End Line: 1527

	/* begin block 2 */
		// Start line: 3151
	/* end block 2 */
	// End Line: 3152

/* WARNING: Unknown calling convention yet parameter storage is locked */

void show_combos__7GamePad(GamePad *this)

{
	char cVar1;
	char cVar2;
	int n;
	char *pcVar3;
	char *pcVar4;
	TDRFuncPtr_GetActionButton__7GamePadPFi_v1func func;
	char *__format;
	GamePad *pGVar5;
	int iVar6;
	int Y;
	RECT local_28;
	
	cVar1 = this->pnum;
	if ((((*(char *)((int)&this[2].spell.active + 1) != '\0') &&
			 (*(char *)&this[2].spell.active != '\0')) && (this->player->_pHitPoints >> 6 != 0)) &&
		 ((demo_pad_time == 0 && ((seen_combo < '\0' || (seen_combo == cVar1)))))) {
		local_28.x = 0x32;
		local_28.w = 0xe0;
		local_28.y = 0;
		local_28.h = 0xf0;
		ClrDiabloMsg__Fv();
		iVar6 = 0;
		PostGamePad__Fiiii(0xb,(int)this->pnum,(int)&txt_actions,0);
		pGVar5 = this;
		Y = 0x54;
		do {
			func = *(TDRFuncPtr_GetActionButton__7GamePadPFi_v1func *)(pGVar5[1].spell.lastx + 4);
			n = Y;
			if (func != (TDRFuncPtr_GetActionButton__7GamePadPFi_v1func)0x0) {
				if (this->pnum == '\0') {
					n = get_key_pad__Fi(this->combo_key);
					pcVar3 = (char *)(int)pad_txt[n].font_num;
					n = GetActionButton__7GamePadPFi_v
												(this,*(TDRFuncPtr_GetActionButton__7GamePadPFi_v1func *)
															 (pGVar5[1].spell.lastx + 4));
					n = get_key_pad__Fi(n);
					cVar2 = pad_txt[n].font_num;
					n = GetActionButton__7GamePadPFi_v
												(this,*(TDRFuncPtr_GetActionButton__7GamePadPFi_v1func *)
															 (pGVar5[1].spell.lastx + 4));
					pcVar4 = get_action_str__Fii(n,1);
					__format = "%c + %c - %s";
				}
				else {
					n = GetActionButton__7GamePadPFi_v(this,func);
					pcVar3 = get_action_str__Fii(n,1);
					n = get_key_pad__Fi(this->combo_key);
					cVar2 = pad_txt[n].font_num;
					n = GetActionButton__7GamePadPFi_v
												(this,*(TDRFuncPtr_GetActionButton__7GamePadPFi_v1func *)
															 (pGVar5[1].spell.lastx + 4));
					n = get_key_pad__Fi(n);
					__format = "%s - %c + %c";
					pcVar4 = (char *)(int)pad_txt[n].font_num;
				}
				sprintf(tempstr,__format,pcVar3,(int)cVar2,pcVar4);
				n = Y + 0x10;
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(&MediumFont,0,Y,tempstr,(uint)(cVar1 != '\0') << 1,&local_28,(uint)WHITER,
									 (uint)WHITEG,(uint)WHITEG);
			}
			iVar6 = iVar6 + 1;
			pGVar5 = (GamePad *)&pGVar5->spell;
			Y = n;
		} while (iVar6 < 0xe);
		seen_combo = this->pnum;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Handle__7GamePad(struct GamePad *this /*$s1*/)
 // line 1554, offset 0x8007a578
	/* begin block 1 */
		// Start line: 1555
		// Start offset: 0x8007A578
		// Variables:
	// 		int cp; // $s2

		/* begin block 1.1 */
			// Start line: 1677
			// Start offset: 0x8007A824

			/* begin block 1.1.1 */
				// Start line: 1680
				// Start offset: 0x8007A85C

				/* begin block 1.1.1.1 */
					// Start line: 1682
					// Start offset: 0x8007A85C

					/* begin block 1.1.1.1.1 */
						// Start line: 1683
						// Start offset: 0x8007A884

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1698
							// Start offset: 0x8007A8EC

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1699
								// Start offset: 0x8007A8FC

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1713
									// Start offset: 0x8007A8FC

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1714
										// Start offset: 0x8007A928
										// Variables:
									// 		int abut; // $v0

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 1715
											// Start offset: 0x8007A928

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 1717
												// Start offset: 0x8007A940
												// Variables:
											// 		int owait; // $s0
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x8007A95C
											// End Line: 1721
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x8007A95C
										// End Line: 1721
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8007A9E8
									// End Line: 1751
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8007A9E8
								// End Line: 1751

								/* begin block 1.1.1.1.1.1.1.2 */
									// Start line: 1757
									// Start offset: 0x8007A9E8

									/* begin block 1.1.1.1.1.1.1.2.1 */
										// Start line: 1781
										// Start offset: 0x8007AA30
										// Variables:
									// 		int dir; // $a1
									/* end block 1.1.1.1.1.1.1.2.1 */
									// End offset: 0x8007AAAC
									// End Line: 1788
								/* end block 1.1.1.1.1.1.1.2 */
								// End offset: 0x8007AAAC
								// End Line: 1788
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8007AAAC
							// End Line: 1788
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8007AAAC
						// End Line: 1788
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007AAAC
					// End Line: 1788
				/* end block 1.1.1.1 */
				// End offset: 0x8007AAAC
				// End Line: 1788
			/* end block 1.1.1 */
			// End offset: 0x8007AB58
			// End Line: 1804
		/* end block 1.1 */
		// End offset: 0x8007AB58
		// End Line: 1804

		/* begin block 1.2 */
			// Start line: 1809
			// Start offset: 0x8007AB58

			/* begin block 1.2.1 */
				// Start line: 1810
				// Start offset: 0x8007ABA4
			/* end block 1.2.1 */
			// End offset: 0x8007AC18
			// End Line: 1814
		/* end block 1.2 */
		// End offset: 0x8007AC18
		// End Line: 1814
	/* end block 1 */
	// End offset: 0x8007AC18
	// End Line: 1814

	/* begin block 2 */
		// Start line: 3285
	/* end block 2 */
	// End Line: 3286

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Handle__7GamePad(GamePad *this)

{
	bool bVar1;
	undefined uVar2;
	uchar uVar3;
	char cVar4;
	ushort uVar5;
	CPad *this_00;
	void *pvVar6;
	undefined *puVar7;
	uint uVar8;
	PLR_MODE PVar9;
	PLR_MODE *pPVar10;
	
	this_00 = PAD_GetPad__FiUc((int)this->pnum,'\0');
	bVar1 = FeFlag == '\0';
	this->Pad = this_00;
	if (bVar1) {
		if ((((this->player->plractive == '\0') || (pvVar6 = IsGameLoading__Fv(), pvVar6 != (void *)0x0)
				 ) || (this->player->_pmode == PM_DEATH)) || (this->player->_pHitPoints >> 6 < 1)) {
			ClrCursor__Fi((int)this->pnum);
		}
		else {
			puVar7 = (undefined *)Active__11SpellTarget(&this->spell);
			if ((((puVar7 != &DAT_00000001) && ((invflag | chrflag) == 0)) ||
					(((&_spselflag2)[(int)this->pnum] != (TASK *)0x0 && (sbookflag != '\0')))) &&
				 (uVar3 = TryIconCurs__Fv(), uVar3 != '\0')) {
				(&_pcursplr)[sel_data] = -1;
			}
			ClearPanel__Fv();
			this->player->_pLvlChanging = '\0';
			if ((options_pad == -1) || ((int)this->pnum == options_pad)) {
				if ((this->allow_walking < '\x01') && ((int)this->player->_pmode < 2)) {
					StartStand__Fii((int)this->pnum,(int)this->player->_pdir);
				}
				if (this->player->_pmode == PM_NEWLVL) {
					this->player->_pmode = PM_STAND;
				}
				this_00 = this->Pad;
				*(undefined *)&this[2].spell.active = 0;
				uVar5 = GetCur__C4CPad(this_00);
				if ((&_SpdBeltSelFlag)[(int)this->pnum] == '\0') {
					if (this->pad_up_action == select_belt_item__Fi) {
						this->allow_walking = '\x01';
					}
					this->pad_up_action = (_func_16 *)0x0;
					this->pad_up_button = 0;
				}
				else {
					this->allow_walking = '\0';
				}
				uVar3 = any_belt_items__Fv();
				if (uVar3 == '\0') {
					_pcurr_inv[sel_data] = -1;
					if ((&_SpdBeltSelFlag)[(int)this->pnum] != '\0') {
						this->allow_walking = '\x01';
					}
					(&_SpdBeltSelFlag)[(int)this->pnum] = '\0';
				}
				if ((qtextflag == '\0') && (stextflag == '\0')) {
					if ((PauseMode == '\0') && (gbRunGame != '\0')) {
						check_around_player__7GamePad(this);
						if (((uint)uVar5 & this->combo_key) == 0) {
							*(undefined *)&this[2].spell.active = 0;
							if (seen_combo == this->pnum) {
								seen_combo = -1;
							}
						}
						else {
							if ((byte)(invflag | questlog | chrflag) == 0) {
								*(undefined *)&this[2].spell.active = 1;
							}
						}
						if ('\0' < this->allow_walking) {
							if ((automapflag != '\0') && (this->player->_pmode == PM_STAND)) {
								uVar8 = GetActionButton__7GamePadPFi_v(this,pad_func_AutoMap__Fi);
								if (uVar8 == 0) {
									uVar2 = *(undefined *)&this[2].spell.active;
									*(undefined *)&this[2].spell.active = 1;
									uVar8 = GetActionButton__7GamePadPFi_v(this,pad_func_AutoMap__Fi);
									*(undefined *)&this[2].spell.active = uVar2;
								}
								if (((((uint)uVar5 & uVar8) != 0) && ((uVar5 & 0xf) != 0)) &&
									 (this->player->_pmode == PM_STAND)) {
									automapmoved = '\x01';
									if ((uVar5 & 1) != 0) {
										AutomapUp__Fv();
									}
									if ((uVar5 & 2) != 0) {
										AutomapDown__Fv();
									}
									if ((uVar5 & 4) != 0) {
										AutomapLeft__Fv();
									}
									if ((uVar5 & 8) == 0) {
										return;
									}
									AutomapRight__Fv();
									return;
								}
								automapmoved = '\0';
							}
							show_combos__7GamePad(this);
							Show__11SpellTarget(&this->spell);
							if (flyflag == '\0') {
								uVar5 = GetCur__C4CPad(this->Pad);
								cVar4 = pad_UpIsUpRight__Fic((uint)uVar5 & 0xf,this->style);
								if ((int)cVar4 == -1) {
									PVar9 = this->player->_pmode;
									if (((PVar9 != PM_STAND) && ((int)PVar9 < 4)) && (automapmoved == '\0')) {
										StartStand__Fii((int)this->pnum,(int)this->player->_pdir);
									}
								}
								else {
									walk__7GamePadi(this,(int)cVar4);
								}
							}
							else {
								puVar7 = (undefined *)Active__11SpellTarget(&this->spell);
								if (puVar7 != &DAT_00000001) {
									flyabout__7GamePad(this);
								}
							}
						}
					}
					if (invflag == '\0') {
						if ((((this->player->_pmode != PM_SPELL) && (select_flag == '\0')) &&
								(PauseMode == '\0')) || (sbookflag != '\0')) {
							TestButtons__7GamePad(this);
						}
					}
					else {
						uVar5 = GetDown__C4CPad(this->Pad);
						if ((uVar5 & 0x100) != 0) {
							CloseInvChr__Fv();
							StartStand__Fii((int)this->pnum,(int)this->player->_pdir);
						}
					}
				}
				else {
					CheckStoreBtn__Fv();
				}
				if ((((goldcheat != (void *)0x0) && (invflag != '\0')) && (_pcursinvitem[sel_data] != '\0'))
					 && ((uVar5 = GetCur__C4CPad(this->Pad), (uVar5 & 0x2420) == 0x2420 &&
							 (pPVar10 = &this->player->_pmode + ((int)_pcursinvitem[sel_data] + -7) * 0x1b,
							 *(short *)(pPVar10 + 0x134) == 0xb)))) {
					pPVar10[0x12e] = pPVar10[0x12e] + 500;
				}
			}
		}
	}
	else {
		if (qtextflag != '\0') {
			TSK_Sleep(1);
			options_pad = (int)this->pnum;
			CheckStoreBtn__Fv();
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GamePadTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 1914, offset 0x8007ac34
	/* begin block 1 */
		// Start line: 1915
		// Start offset: 0x8007AC34
		// Variables:
	// 		int omp; // $s1
	// 		int oms; // $s2
	/* end block 1 */
	// End offset: 0x8007AD0C
	// End Line: 1941

	/* begin block 2 */
		// Start line: 4007
	/* end block 2 */
	// End Line: 4008

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GamePadTask__FP4TASK(TASK *T)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	void *pvVar4;
	
	do {
		iVar3 = myplr;
		iVar2 = sel_data;
		bVar1 = false;
		pvVar4 = GLUE_Finished__Fv();
		if (((pvVar4 == (void *)0x0) && (CDWAIT == (void *)0x0)) && (demo_finish == 0)) {
			pvVar4 = IS_GameOver__Fv();
			bVar1 = pvVar4 == (void *)0x0;
		}
		if (bVar1) {
			sel_data = 1;
			myplr = 1;
			Handle__7GamePad(&GPad2);
			sel_data = 0;
			myplr = 0;
			Handle__7GamePad(&GPad1);
		}
		sel_data = iVar2;
		myplr = iVar3;
		TSK_Sleep(1);
	} while( true );
}



// decompiled code
// original method signature: 
// struct GamePad * /*$ra*/ GetGamePad__Fi(int pnum /*$a0*/)
 // line 1945, offset 0x8007ad2c
	/* begin block 1 */
		// Start line: 1946
		// Start offset: 0x8007AD2C
	/* end block 1 */
	// End offset: 0x8007AD44
	// End Line: 1947

	/* begin block 2 */
		// Start line: 4080
	/* end block 2 */
	// End Line: 4081

/* WARNING: Unknown calling convention yet parameter storage is locked */

GamePad * GetGamePad__Fi(int pnum)

{
	GamePad *pGVar1;
	
	pGVar1 = &GPad1;
	if (pnum != 0) {
		pGVar1 = &GPad2;
	}
	return pGVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostGamePad__Fiiii(int val /*$a0*/, int var1 /*$a1*/, int var2 /*$a2*/, int var3 /*$a3*/)
 // line 1952, offset 0x8007ad4c
	/* begin block 1 */
		// Start line: 1953
		// Start offset: 0x8007AD4C
		// Variables:
	// 		struct GamePad *GP1; // $v1
	// 		struct GamePad *GP2; // $t0
	/* end block 1 */
	// End offset: 0x8007AE40
	// End Line: 2009

	/* begin block 2 */
		// Start line: 4093
	/* end block 2 */
	// End Line: 4094

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostGamePad__Fiiii(int val,int var1,int var2,int var3)

{
	GamePad *this;
	
	this = &GPad2;
	switch(val) {
	case 2:
		GPad1.allow_walking = '\0';
	case 4:
		GPad2.allow_walking = '\0';
		break;
	case 3:
		GPad1.allow_walking = '\0';
		break;
	case 5:
		GPad1.allow_walking = '\x01';
	case 7:
		GPad2.allow_walking = '\x01';
		break;
	case 6:
		GPad1.allow_walking = '\x01';
		break;
	case 9:
		if (var1 == 0) {
			this = &GPad1;
		}
		else {
			if (var1 != 1) {
				return;
			}
		}
		SetAllButtons__7GamePadP11KEY_ASSIGNS(this,(KEY_ASSIGNS *)var2);
		break;
	case 10:
		if (var1 == 0) {
			this = &GPad1;
		}
		else {
			if (var1 != 1) {
				return;
			}
		}
		SetUpAction__7GamePadPFi_vT1
							(this,(TDRFuncPtr_SetUpAction__7GamePadPFi_vT11func)var2,
							 (TDRFuncPtr_SetUpAction__7GamePadPFi_vT12upfunc)var3);
		break;
	case 0xb:
		if (var1 == 0) {
			this = &GPad1;
		}
		else {
			if (var1 != 1) {
				return;
			}
		}
		GetAllButtons__7GamePadP11KEY_ASSIGNS(this,(KEY_ASSIGNS *)var2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init_GamePad__Fv()
 // line 2014, offset 0x8007ae50
	/* begin block 1 */
		// Start line: 2015
		// Start offset: 0x8007AE50
	/* end block 1 */
	// End offset: 0x8007AE70
	// End Line: 2017

	/* begin block 2 */
		// Start line: 4217
	/* end block 2 */
	// End Line: 4218

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Init_GamePad__Fv(void)

{
	TSK_AddTask(0x42,GamePadTask__FP4TASK,0x1000,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitGamePadVars__Fv()
 // line 2021, offset 0x8007ae80
	/* begin block 1 */
		// Start line: 2022
		// Start offset: 0x8007AE80
	/* end block 1 */
	// End offset: 0x8007AFFC
	// End Line: 2076

	/* begin block 2 */
		// Start line: 4231
	/* end block 2 */
	// End Line: 4232

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitGamePadVars__Fv(void)

{
	uchar uVar1;
	
	HappyManFlag = 0;
	RemoveTargetCursor__Fi(-1);
	TeleStop__Fi(0);
	TeleStop__Fi(1);
	ScrollFlag = 0;
	INT_8011b8bc = 0;
	automapmoved = '\0';
	if (_spselflag2 != (TASK *)0x0) {
		TSK_Kill(_spselflag2);
	}
	if (PTR_8011b654 != (TASK *)0x0) {
		TSK_Kill(PTR_8011b654);
	}
	PTR_8011b654 = (TASK *)0x0;
	_spselflag2 = (TASK *)0x0;
	_SpdBeltSelFlag = '\0';
	UCHAR_00h_8011bbc5 = '\0';
	PauseMode = '\0';
	chrflag = '\0';
	invflag = '\0';
	optionsflag = (void *)0x0;
	sbookflag = '\0';
	questlog = '\0';
	qtextflag = '\0';
	stextflag = '\0';
	ClrDiabloMsg__Fv();
	ClrCursor__Fi(0);
	ClrCursor__Fi(1);
	_pcursplr = -1;
	CHAR_00h_8011b76d = -1;
	gbActivePlayers = '\0';
	if (FePlayerNo == 0) {
		plr[1].plractive = '\0';
		uVar1 = '\x01';
		if (plr[0].plractive == '\0') goto LAB_8007afec;
	}
	else {
		gbActivePlayers = plr[0].plractive != '\0';
		if (plr[1].plractive == '\0') goto LAB_8007afec;
		uVar1 = (plr[0].plractive != '\0') + '\x01';
	}
	gbActivePlayers = uVar1;
LAB_8007afec:
	PostGamePad__Fiiii(5,0,0,0);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetWalkStyle__Fii(int pnum /*$a0*/, int style /*$s0*/)
 // line 2079, offset 0x8007b00c
	/* begin block 1 */
		// Start line: 2080
		// Start offset: 0x8007B00C
		// Variables:
	// 		int ret; // $s1
	// 		struct KEY_ASSIGNS *ta; // $s1
	/* end block 1 */
	// End offset: 0x8007B064
	// End Line: 2089

	/* begin block 2 */
		// Start line: 4360
	/* end block 2 */
	// End Line: 4361

/* WARNING: Unknown calling convention yet parameter storage is locked */

int SetWalkStyle__Fii(int pnum,int style)

{
	int iVar1;
	
	PostGamePad__Fiiii(0xb,0,(int)&txt_actions,0);
	iVar1 = KEY_ASSIGNS_ARRAY_800cc41c[1].pad_val;
	KEY_ASSIGNS_ARRAY_800cc41c[1].pad_val = style;
	PostGamePad__Fiiii(9,0,(int)&txt_actions,0);
	return iVar1;
}



// decompiled code
// original method signature: 
// char /*$ra*/ GetPadStyle__Fi(int pnum /*$a0*/)
 // line 2092, offset 0x8007b07c
	/* begin block 1 */
		// Start line: 2093
		// Start offset: 0x8007B07C
		// Variables:
	// 		struct GamePad *GPad; // $v0
	/* end block 1 */
	// End offset: 0x8007B098
	// End Line: 2096

	/* begin block 2 */
		// Start line: 4397
	/* end block 2 */
	// End Line: 4398

/* WARNING: Unknown calling convention yet parameter storage is locked */

char GetPadStyle__Fi(int pnum)

{
	GamePad *pGVar1;
	
	pGVar1 = &GPad1;
	if (pnum != 0) {
		pGVar1 = &GPad2;
	}
	return pGVar1->style;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.flyflag()
 // line 2096, offset 0x8007b0a0
	/* begin block 1 */
		// Start line: 2097
		// Start offset: 0x8007B0A0
	/* end block 1 */
	// End offset: 0x8007B0C8
	// End Line: 2097

	/* begin block 2 */
		// Start line: 4404
	/* end block 2 */
	// End Line: 4405

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_flyflag(void)

{
	__7GamePadi(&GPad1,0);
	__7GamePadi(&GPad2,1);
	return;
}





