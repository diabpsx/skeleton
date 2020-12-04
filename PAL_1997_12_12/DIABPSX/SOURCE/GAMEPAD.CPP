#include "THISDUST.H"
#include "GAMEPAD.H"


// decompiled code
// original method signature: 
// void /*$ra*/ flyabout__7GamePad(struct GamePad *this /*$s1*/)
 // line 98, offset 0x80070c00
	/* begin block 1 */
		// Start line: 99
		// Start offset: 0x80070C00
		// Variables:
	// 		int cp; // $s0
	// 		int owx; // $s4
	// 		int owy; // $s5
	// 		int wx; // $s2
	// 		int wy; // $s3
	// 		struct CBlocks *gblocks; // $s7
	// 		int step; // $a0
	/* end block 1 */
	// End offset: 0x8007108C
	// End Line: 162

	/* begin block 2 */
		// Start line: 196
	/* end block 2 */
	// End Line: 197

void flyabout__7GamePad(GamePad *this)

{
	ushort uVar1;
	CBlocks *Bg;
	PlayerStruct *pPVar2;
	int pnum;
	byte bVar3;
	int WorldY;
	int iVar4;
	int iVar5;
	int x1;
	int y1;
	int WorldX;
	
	iVar4 = 0;
	iVar5 = 0;
	uVar1 = GetCur__C4CPad(this->Pad);
	x1 = this->player->WorldX;
	y1 = this->player->WorldY;
	Bg = BL_GetCurrentBlocks__Fv();
	pnum = 4;
	if (this->await_combo != '\0') {
		pnum = 8;
	}
	if ((uVar1 & 1) == 0) {
		WorldY = pnum;
		if ((uVar1 & 2) != 0) goto LAB_80070c8c;
	}
	else {
		WorldY = -pnum;
LAB_80070c8c:
		iVar5 = WorldY;
	}
	if ((uVar1 & 4) == 0) {
		WorldY = x1;
		if ((uVar1 & 8) == 0) goto LAB_80070cb0;
	}
	else {
		pnum = -pnum;
	}
	iVar4 = pnum;
	WorldY = x1 + iVar4;
LAB_80070cb0:
	if (WorldY < 0) {
		iVar4 = 0;
	}
	if (y1 + iVar5 < 0) {
		iVar5 = 0;
	}
	if (0x348 < x1 + iVar4) {
		iVar4 = 0;
	}
	if (0x348 < y1 + iVar5) {
		iVar5 = 0;
	}
	WorldX = x1 + iVar4;
	dung_map[(int)this->player->_px * 0x6c + (int)this->player->_py].dPlayer = '\0';
	pnum = (int)(char)(this->pnum ^ 1);
	WorldY = y1 + iVar5;
	dung_map[(int)plr[pnum]._px * 0x6c + (int)plr[pnum]._py].dPlayer = '\0';
	WorldToOffset__Fiii((int)this->pnum,WorldX,WorldY);
	pnum = (int)(char)(this->pnum ^ 1);
	WorldToOffset__Fiii(pnum,plr[pnum].WorldX + iVar4,plr[pnum].WorldY + iVar5);
	dung_map[(int)this->player->_px * 0x6c + (int)this->player->_py].dPlayer = this->pnum + '\x01';
	bVar3 = this->pnum ^ 1;
	dung_map[(int)plr[(int)(char)bVar3]._px * 0x6c + (int)plr[(int)(char)bVar3]._py].dPlayer =
			 bVar3 + 1;
	pPVar2 = this->player;
	ChangeLightXY__Fiii((int)pPVar2->_plid,(int)pPVar2->_px,(int)pPVar2->_py);
	pPVar2 = this->player;
	ChangeVisionXY__Fiii((int)pPVar2->_pvid,(int)pPVar2->_px,(int)pPVar2->_py);
	iVar4 = (int)this->pnum;
	ChangeLightXY__Fiii((int)plr[iVar4]._plid,(int)plr[iVar4]._px,(int)plr[iVar4]._py);
	iVar4 = (int)this->pnum;
	ChangeVisionXY__Fiii((int)plr[iVar4]._pvid,(int)plr[iVar4]._px,(int)plr[iVar4]._py);
	PM_ChangeLightOff__Fi((int)this->pnum);
	if (((x1 != WorldX) || (y1 != WorldY)) && (this->player->_pmode < 3)) {
		iVar4 = GetDirection__Fiiii(x1,y1,WorldX,WorldY);
		this->player->_pdir = (char)iVar4;
		StartStand__Fii((int)this->pnum,(int)(char)iVar4);
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
 // line 172, offset 0x800710bc
	/* begin block 1 */
		// Start line: 173
		// Start offset: 0x800710BC
	/* end block 1 */
	// End offset: 0x800710F4
	// End Line: 179

	/* begin block 2 */
		// Start line: 353
	/* end block 2 */
	// End Line: 354

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CloseInvChr__Fv(void)

{
	chrflag = '\0';
	invflag = '\0';
	options_pad = -1;
	PostGamePad__Fiiii(5,0,0,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WorldToOffset__Fiii(int pnum /*$a0*/, int WorldX /*$a1*/, int WorldY /*$a2*/)
 // line 189, offset 0x80071104
	/* begin block 1 */
		// Start line: 190
		// Start offset: 0x80071104
		// Variables:
	// 		int x; // $t0
	// 		int y; // $a3
	// 		struct PlayerStruct *player; // $v1
	/* end block 1 */
	// End offset: 0x800711A8
	// End Line: 201

	/* begin block 2 */
		// Start line: 394
	/* end block 2 */
	// End Line: 395

void WorldToOffset__Fiii(int pnum,int WorldX,int WorldY)

{
	int iVar1;
	int iVar2;
	
	iVar1 = WorldX;
	if (WorldX < 0) {
		iVar1 = WorldX + 7;
	}
	iVar2 = WorldX + (iVar1 >> 3) * -8;
	iVar1 = WorldY;
	if (WorldY < 0) {
		iVar1 = WorldY + 7;
	}
	iVar1 = WorldY + (iVar1 >> 3) * -8;
	if (WorldX < 0) {
		WorldX = 0;
	}
	if (WorldY < 0) {
		WorldY = 0;
	}
	plr[pnum]._px = (short)(WorldX >> 3);
	plr[pnum]._py = (short)(WorldY >> 3);
	plr[pnum]._pxoff = ((char)iVar2 - (char)iVar1) * '\x04';
	plr[pnum].WorldX = WorldX;
	plr[pnum].WorldY = WorldY;
	plr[pnum]._pyoff = (char)((iVar2 + iVar1 + -8 >> 1) << 2);
	return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ pad_UpIsUp__Fi(int pval /*$a0*/)
 // line 209, offset 0x800711b0
	/* begin block 1 */
		// Start line: 210
		// Start offset: 0x800711B0
		// Variables:
	// 		int walk_dir; // $v1
	/* end block 1 */
	// End offset: 0x80071218
	// End Line: 241

	/* begin block 2 */
		// Start line: 441
	/* end block 2 */
	// End Line: 442

char pad_UpIsUp__Fi(int pval)

{
	char cVar1;
	
	cVar1 = -1;
	switch(pval) {
	case 1:
		cVar1 = '\x04';
		break;
	case 2:
		cVar1 = '\0';
		break;
	case 4:
		cVar1 = '\x02';
		break;
	case 5:
		cVar1 = '\x03';
		break;
	case 6:
		cVar1 = '\x01';
		break;
	case 8:
		cVar1 = '\x06';
		break;
	case 9:
		cVar1 = '\x05';
		break;
	case 10:
		cVar1 = '\a';
	}
	return cVar1;
}



// decompiled code
// original method signature: 
// char /*$ra*/ pad_UpIsUpRight__Fi(int pval /*$a0*/)
 // line 249, offset 0x80071220
	/* begin block 1 */
		// Start line: 250
		// Start offset: 0x80071220
		// Variables:
	// 		int walk_dir; // $v1
	/* end block 1 */
	// End offset: 0x80071288
	// End Line: 280

	/* begin block 2 */
		// Start line: 521
	/* end block 2 */
	// End Line: 522

char pad_UpIsUpRight__Fi(int pval)

{
	char cVar1;
	
	cVar1 = -1;
	switch(pval) {
	case 1:
		cVar1 = '\x05';
		break;
	case 2:
		cVar1 = '\x01';
		break;
	case 4:
		cVar1 = '\x03';
		break;
	case 5:
		cVar1 = '\x04';
		break;
	case 6:
		cVar1 = '\x02';
		break;
	case 8:
		cVar1 = '\a';
		break;
	case 9:
		cVar1 = '\x06';
		break;
	case 10:
		cVar1 = '\0';
	}
	return cVar1;
}



// decompiled code
// original method signature: 
// struct GamePad * /*$ra*/ __7GamePadi(struct GamePad *this /*$s1*/, int player_num /*$s0*/)
 // line 292, offset 0x80071290
	/* begin block 1 */
		// Start line: 293
		// Start offset: 0x80071290
	/* end block 1 */
	// End offset: 0x80071290
	// End Line: 293

	/* begin block 2 */
		// Start line: 604
	/* end block 2 */
	// End Line: 605

GamePad * __7GamePadi(GamePad *this,int player_num)

{
	this->player = plr + player_num;
	this->pad_up_button = 0;
	this->pad_up_action = (_func_18 *)0x0;
	this->pnum = (char)player_num;
	this->allow_walking = '\x01';
	this->combo_key = 0;
	this->await_combo = '\0';
	this->position_lock = '\0';
	SetAllButtons__7GamePadP11KEY_ASSIGNS(this,txt_actions);
	(&_pcursmonst)[player_num] = -1;
	(&_pcursobj)[player_num] = -1;
	(&_pcursitem)[player_num] = -1;
	_pcursinvitem[player_num] = -1;
	(&_pcursplr)[player_num] = -1;
	SplTarget[player_num]._sx = '\0';
	SplTarget[player_num]._sy = '\0';
	this->player->_pRSpell = -1;
	QSpell[player_num] = -1;
	this->player->_pRSplType = '\x04';
	_spltotype[player_num] = '\x04';
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetMoveStyle__7GamePadc(struct GamePad *this /*$a0*/, char style_num /*$a1*/)
 // line 328, offset 0x800713c0
	/* begin block 1 */
		// Start line: 329
		// Start offset: 0x800713C0
	/* end block 1 */
	// End offset: 0x800713F8
	// End Line: 331

	/* begin block 2 */
		// Start line: 695
	/* end block 2 */
	// End Line: 696

void SetMoveStyle__7GamePadc(GamePad *this,char style_num)

{
	_func_16 *p_Var1;
	
	this->style = style_num;
	p_Var1 = *(_func_16 **)((int)&pad_styles + ((int)((uint)(byte)style_num << 0x18) >> 0x16));
	*(_func_16 **)&this->walk_style = p_Var1;
	SplTarget[(int)this->pnum].walk = p_Var1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetDownButton__7GamePadiPFi_v(struct GamePad *this /*$s0*/, int pad_val /*$a1*/, TDRFuncPtr_SetDownButton__7GamePadiPFi_v2func func /*$s1*/)
 // line 339, offset 0x80071400
	/* begin block 1 */
		// Start line: 340
		// Start offset: 0x80071400
	/* end block 1 */
	// End offset: 0x8007142C
	// End Line: 343

	/* begin block 2 */
		// Start line: 718
	/* end block 2 */
	// End Line: 719

void SetDownButton__7GamePadiPFi_v
							 (GamePad *this,int pad_val,TDRFuncPtr_SetDownButton__7GamePadiPFi_v2func func)

{
	int iVar1;
	
	iVar1 = get_key_pad__Fi(pad_val);
	*(TDRFuncPtr_SetDownButton__7GamePadiPFi_v2func *)(&this[1].player + iVar1) = func;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetComboDownButton__7GamePadiPFi_v(struct GamePad *this /*$s0*/, int pad_val /*$a1*/, TDRFuncPtr_SetComboDownButton__7GamePadiPFi_v2func func /*$s1*/)
 // line 351, offset 0x80071444
	/* begin block 1 */
		// Start line: 352
		// Start offset: 0x80071444
	/* end block 1 */
	// End offset: 0x80071470
	// End Line: 355

	/* begin block 2 */
		// Start line: 742
	/* end block 2 */
	// End Line: 743

void SetComboDownButton__7GamePadiPFi_v
							 (GamePad *this,int pad_val,TDRFuncPtr_SetComboDownButton__7GamePadiPFi_v2func func)

{
	int iVar1;
	
	iVar1 = get_key_pad__Fi(pad_val);
	*(TDRFuncPtr_SetComboDownButton__7GamePadiPFi_v2func *)(&this[2].restart_time + iVar1) = func;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this /*$s1*/, struct KEY_ASSIGNS *actions /*$s3*/)
 // line 395, offset 0x80071488
	/* begin block 1 */
		// Start line: 396
		// Start offset: 0x80071488
		// Variables:
	// 		int i; // $s2
	/* end block 1 */
	// End offset: 0x800716D8
	// End Line: 454

	/* begin block 2 */
		// Start line: 830
	/* end block 2 */
	// End Line: 831

void SetAllButtons__7GamePadP11KEY_ASSIGNS(GamePad *this,KEY_ASSIGNS *actions)

{
	GamePad *pGVar1;
	int iVar2;
	_func_15 **pp_Var3;
	int iVar4;
	
	iVar4 = 0;
	pGVar1 = this;
	do {
		pGVar1[1].player = (PlayerStruct *)0x0;
		pGVar1[2].restart_time = 0;
		iVar4 = iVar4 + 1;
		pGVar1 = (GamePad *)&pGVar1->pnum;
	} while (iVar4 < 0xe);
	iVar4 = 0;
	pp_Var3 = &actions->func;
	do {
		iVar2 = actions->txt;
		if (iVar2 == 0x28c) {
			SetMoveStyle__7GamePadc(this,*(char *)(pp_Var3 + -1));
		}
		else {
			if (iVar2 < 0x28d) {
				if (iVar2 == 0xa2) {
LAB_80071600:
					if (pp_Var3[-1] != (_func_15 *)0x0) {
						SetDownButton__7GamePadiPFi_v
											(this,(int)pp_Var3[-1],(TDRFuncPtr_SetDownButton__7GamePadiPFi_v2func)*pp_Var3
											);
					}
					if (pp_Var3[1] != (_func_15 *)0x0) {
						SetComboDownButton__7GamePadiPFi_v
											(this,(int)pp_Var3[1],
											 (TDRFuncPtr_SetComboDownButton__7GamePadiPFi_v2func)*pp_Var3);
					}
				}
				else {
					if (iVar2 < 0xa3) {
						if ((iVar2 == 9) || (((8 < iVar2 && (iVar2 < 0x36)) && (0x33 < iVar2))))
						goto LAB_80071600;
					}
					else {
						if (iVar2 == 0xc4) {
							*(_func_15 **)&this->combo_key = pp_Var3[-1];
						}
						else {
							if (iVar2 < 0xc5) {
								if (iVar2 == 0xae) goto LAB_80071600;
							}
							else {
								if (iVar2 == 0x215) goto LAB_80071600;
							}
						}
					}
				}
			}
			else {
				if (iVar2 == 0x3a9) {
					*(_func_15 **)&this->position_key = pp_Var3[-1];
				}
				else {
					if (iVar2 < 0x3aa) {
						if ((iVar2 == 0x311) || (((0x310 < iVar2 && (iVar2 < 0x317)) && (0x314 < iVar2))))
						goto LAB_80071600;
					}
					else {
						if (iVar2 == 0x3cb) goto LAB_80071600;
						if (iVar2 < 0x3cc) {
							if (iVar2 == 0x3c7) goto LAB_80071600;
						}
						else {
							if ((iVar2 == 0x462) || (iVar2 == 0x480)) goto LAB_80071600;
						}
					}
				}
			}
		}
		pp_Var3 = pp_Var3 + 4;
		iVar4 = iVar4 + 1;
		actions = actions + 1;
		if (0x12 < iVar4) {
			iVar4 = get_key_pad__Fi(0x20);
			(&this[1].player)[iVar4] = (PlayerStruct *)0x80096d98;
			iVar4 = get_key_pad__Fi(1);
			(&this[1].player)[iVar4] = (PlayerStruct *)0x80096d30;
			iVar4 = get_key_pad__Fi(2);
			(&this[1].player)[iVar4] = (PlayerStruct *)0x80096d5c;
			iVar4 = get_key_pad__Fi(4);
			(&this[1].player)[iVar4] = (PlayerStruct *)0x80096d88;
			iVar4 = get_key_pad__Fi(8);
			(&this[1].player)[iVar4] = (PlayerStruct *)0x80096d90;
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this /*$s1*/, struct KEY_ASSIGNS *actions /*$s2*/)
 // line 463, offset 0x800716f8
	/* begin block 1 */
		// Start line: 464
		// Start offset: 0x800716F8
		// Variables:
	// 		int i; // $s3
	// 		int oc; // $s4
	/* end block 1 */
	// End offset: 0x80071894
	// End Line: 517

	/* begin block 2 */
		// Start line: 973
	/* end block 2 */
	// End Line: 974

void GetAllButtons__7GamePadP11KEY_ASSIGNS(GamePad *this,KEY_ASSIGNS *actions)

{
	uchar uVar1;
	int iVar2;
	int *piVar3;
	int iVar4;
	
	iVar4 = 0;
	piVar3 = &actions->combo_val;
	uVar1 = this->await_combo;
	do {
		iVar2 = actions->txt;
		if (iVar2 == 0x28c) {
			piVar3[-2] = (int)this->style;
		}
		else {
			if (iVar2 < 0x28d) {
				if (iVar2 == 0xa2) {
LAB_80071850:
					this->await_combo = '\0';
				}
				else {
					if (0xa2 < iVar2) {
						if (iVar2 == 0xc4) {
							piVar3[-2] = this->combo_key;
						}
						else {
							if (iVar2 < 0xc5) {
								if (iVar2 == 0xae) goto LAB_80071850;
							}
							else {
								if (iVar2 == 0x215) goto LAB_80071850;
							}
						}
						goto LAB_80071880;
					}
					if (iVar2 == 9) goto LAB_80071850;
					if (((iVar2 < 9) || (0x35 < iVar2)) || (iVar2 < 0x34)) goto LAB_80071880;
					this->await_combo = '\0';
				}
LAB_80071854:
				iVar2 = GetActionButton__7GamePadPFi_v
													(this,(TDRFuncPtr_GetActionButton__7GamePadPFi_v1func)piVar3[-1]);
				piVar3[-2] = iVar2;
				this->await_combo = '\x01';
				iVar2 = GetActionButton__7GamePadPFi_v
													(this,(TDRFuncPtr_GetActionButton__7GamePadPFi_v1func)piVar3[-1]);
				*piVar3 = iVar2;
			}
			else {
				if (iVar2 == 0x3a9) {
					piVar3[-2] = this->position_key;
				}
				else {
					if (iVar2 < 0x3aa) {
						if (iVar2 == 0x311) goto LAB_80071850;
						if (((0x310 < iVar2) && (iVar2 < 0x317)) && (0x314 < iVar2)) {
							this->await_combo = '\0';
							goto LAB_80071854;
						}
					}
					else {
						if (iVar2 == 0x3cb) goto LAB_80071850;
						if (iVar2 < 0x3cc) {
							if (iVar2 == 0x3c7) goto LAB_80071850;
						}
						else {
							if ((iVar2 == 0x462) || (iVar2 == 0x480)) goto LAB_80071850;
						}
					}
				}
			}
		}
LAB_80071880:
		piVar3 = piVar3 + 4;
		iVar4 = iVar4 + 1;
		actions = actions + 1;
		if (0x12 < iVar4) {
			this->await_combo = uVar1;
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetActionButton__7GamePadPFi_v(struct GamePad *this /*$a0*/, TDRFuncPtr_GetActionButton__7GamePadPFi_v1func func /*$a1*/)
 // line 524, offset 0x800718b8
	/* begin block 1 */
		// Start line: 525
		// Start offset: 0x800718B8

		/* begin block 1.1 */
			// Start line: 527
			// Start offset: 0x800718B8
		/* end block 1.1 */
		// End offset: 0x80071908
		// End Line: 543
	/* end block 1 */
	// End offset: 0x8007190C
	// End Line: 544

	/* begin block 2 */
		// Start line: 1105
	/* end block 2 */
	// End Line: 1106

int GetActionButton__7GamePadPFi_v
							(GamePad *this,TDRFuncPtr_GetActionButton__7GamePadPFi_v1func func)

{
	uchar *puVar1;
	PlayerStruct *pPVar2;
	int *piVar3;
	
	puVar1 = &this->await_combo;
	piVar3 = &pad_txt[0].pnum;
	while( true ) {
		if (*puVar1 == '\0') {
			pPVar2 = this[1].player;
		}
		else {
			pPVar2 = (PlayerStruct *)this[2].restart_time;
		}
		if (pPVar2 == (PlayerStruct *)func) break;
		piVar3 = piVar3 + 3;
		this = (GamePad *)&this->pnum;
		if (-0x7ff44029 < (int)piVar3) {
			return 0;
		}
	}
	return *piVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetUpAction__7GamePadPFi_vT1(struct GamePad *this /*$s0*/, TDRFuncPtr_SetUpAction__7GamePadPFi_vT11func func /*$a1*/, TDRFuncPtr_SetUpAction__7GamePadPFi_vT12upfunc upfunc /*$s1*/)
 // line 551, offset 0x80071914
	/* begin block 1 */
		// Start line: 552
		// Start offset: 0x80071914
	/* end block 1 */
	// End offset: 0x80071938
	// End Line: 555

	/* begin block 2 */
		// Start line: 1157
	/* end block 2 */
	// End Line: 1158

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
 // line 563, offset 0x80071950
	/* begin block 1 */
		// Start line: 564
		// Start offset: 0x80071950
		// Variables:
	// 		int i; // $v0
	/* end block 1 */
	// End offset: 0x800719DC
	// End Line: 588

	/* begin block 2 */
		// Start line: 1181
	/* end block 2 */
	// End Line: 1182

void RunFunc__7GamePadi(GamePad *this,int pad)

{
	int iVar1;
	PlayerStruct *pPVar2;
	
	if ((FeFlag == '\0') && (this->player->_pHitPoints >> 6 != 0)) {
		iVar1 = get_key_pad__Fi(pad);
		if (this->await_combo == '\0') {
			pPVar2 = (&this[1].player)[iVar1];
		}
		else {
			pPVar2 = (PlayerStruct *)(&this[2].restart_time)[iVar1];
		}
		if (pPVar2 != (PlayerStruct *)0x0) {
			(*(code *)pPVar2)((int)this->pnum);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ButtonDown__7GamePadi(struct GamePad *this /*$s0*/, int button /*$a1*/)
 // line 599, offset 0x800719f0
	/* begin block 1 */
		// Start line: 600
		// Start offset: 0x800719F0
	/* end block 1 */
	// End offset: 0x80071DAC
	// End Line: 712

	/* begin block 2 */
		// Start line: 1261
	/* end block 2 */
	// End Line: 1262

void ButtonDown__7GamePadi(GamePad *this,int button)

{
	if (button != 0x80) {
		if (button < 0x81) {
			if (button == 4) {
				if (this->pad_up_action == select_belt_item__Fi) {
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
						if ((this->pad_up_action == select_belt_item__Fi) && (_pcurr_inv[sel_data] != -1)) {
							NewCursor__Fi(1);
							UseInvItem__Fii((int)this->pnum,_pcurr_inv[sel_data] + 0x2f);
							get_next_inv__Fv();
							_pcursinvitem[sel_data] = -1;
							return;
						}
					}
				}
				else {
					if (button != 0x20) {
						if (button < 0x21) {
							if (button != 8) {
								return;
							}
							if (this->pad_up_action == select_belt_item__Fi) {
								get_next_inv__Fv();
								return;
							}
							button = 8;
						}
						else {
							if (button != 0x40) {
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
					if (button != 0x100) {
						if (button != 0x200) {
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
						if (questlog != '\0') {
							QuestlogESC__Fv();
							return;
						}
						if (sbookflag != '\0') {
							sbookflag = '\0';
							PostGamePad__Fiiii(5,0,0,0);
							options_pad = -1;
							return;
						}
						if (optionsflag != (void *)0x0) {
							optionsflag = &DAT_00000001;
							return;
						}
						if ((&_spselflag2)[(int)this->pnum] != (TASK *)0x0) {
							ToggleSpell__Fi((int)this->pnum);
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
 // line 721, offset 0x80071dc4
	/* begin block 1 */
		// Start line: 722
		// Start offset: 0x80071DC4
		// Variables:
	// 		int hand; // $s0
	// 		int joydown; // $s2
	// 		int joyup; // $s3
	/* end block 1 */
	// End offset: 0x80071E78
	// End Line: 751

	/* begin block 2 */
		// Start line: 1510
	/* end block 2 */
	// End Line: 1511

void TestButtons__7GamePad(GamePad *this)

{
	ushort uVar1;
	ushort uVar2;
	uint uVar3;
	uint button;
	
	button = 1;
	uVar1 = GetDown__C4CPad(this->Pad);
	uVar2 = GetUp__C4CPad(this->Pad);
	uVar3 = (uint)uVar1 & 1;
	do {
		if (uVar3 != 0) {
			ButtonDown__7GamePadi(this,button);
		}
		button = button << 1;
		uVar3 = (uint)uVar1 & 0x3fff & button;
	} while (button != 0);
	if (this->pad_up_button != 0) {
		if (((uint)uVar2 & 0x3fff & this->pad_up_button) == 0) {
			uVar1 = GetCur__C4CPad(this->Pad);
			if (((uint)uVar1 & this->pad_up_button) != 0) {
				return;
			}
			this->pad_up_action = (_func_18 *)0x0;
		}
		else {
			(*this->pad_up_action)((int)this->pnum);
			this->pad_up_action = (_func_18 *)0x0;
		}
		this->pad_up_button = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckDirs__7GamePadi(struct GamePad *this /*$a0*/, int dir /*$a1*/)
 // line 761, offset 0x80071e98
	/* begin block 1 */
		// Start line: 762
		// Start offset: 0x80071E98
		// Variables:
	// 		int wx; // $v1
	// 		int wy; // $a0
	/* end block 1 */
	// End offset: 0x80071FA8
	// End Line: 808

	/* begin block 2 */
		// Start line: 1592
	/* end block 2 */
	// End Line: 1593

int CheckDirs__7GamePadi(GamePad *this,int dir)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = this->player->WorldX;
	iVar4 = this->player->WorldY;
	iVar2 = iVar3;
	if (iVar3 < 0) {
		iVar2 = iVar3 + 7;
	}
	iVar3 = iVar3 + (iVar2 >> 3) * -8;
	iVar2 = iVar4;
	if (iVar4 < 0) {
		iVar2 = iVar4 + 7;
	}
	iVar4 = iVar4 + (iVar2 >> 3) * -8;
	switch(dir) {
	case 0:
		if (3 < iVar3) {
			return -1;
		}
		if (iVar4 < 4) {
			return dir;
		}
		return -1;
	case 1:
		if (iVar4 < 4) {
			return dir;
		}
		return -1;
	case 2:
		if (iVar3 < 4) {
			return -1;
		}
		if (iVar4 < 4) {
			return dir;
		}
		return -1;
	case 3:
		bVar1 = iVar3 < 4;
		break;
	case 4:
		if (iVar3 < 4) {
			return -1;
		}
		bVar1 = iVar4 < 4;
		break;
	case 5:
		bVar1 = iVar4 < 4;
		break;
	case 6:
		if (3 < iVar3) {
			return -1;
		}
		bVar1 = iVar4 < 4;
		break;
	case 7:
		if (iVar3 < 4) {
			return dir;
		}
		return -1;
	default:
		return dir;
	}
	if (bVar1) {
		return -1;
	}
	return dir;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckSide__7GamePadi(struct GamePad *this /*$a0*/, int dir /*$v0*/)
 // line 818, offset 0x80071fb0
	/* begin block 1 */
		// Start line: 819
		// Start offset: 0x80071FB0
		// Variables:
	// 		int lnd; // $a1
	/* end block 1 */
	// End offset: 0x80071FE4
	// End Line: 828

	/* begin block 2 */
		// Start line: 1704
	/* end block 2 */
	// End Line: 1705

int CheckSide__7GamePadi(GamePad *this,int dir)

{
	int iVar1;
	int dir_00;
	
	dir_00 = dir + -2;
	if (dir_00 < 0) {
		dir_00 = dir + 6;
	}
	dir_00 = CheckDirs__7GamePadi(this,dir_00);
	iVar1 = 1;
	if (dir_00 != -1) {
		iVar1 = 2;
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckBodge__7GamePadi(struct GamePad *this /*$s3*/, int dir /*$s2*/)
 // line 835, offset 0x80071ff4
	/* begin block 1 */
		// Start line: 836
		// Start offset: 0x80071FF4
		// Variables:
	// 		int x; // $s4
	// 		int y; // $s5
	// 		int lnd; // $s0
	// 		int rnd; // $s1
	// 		int newdir; // $s6
	// 		int fx; // $s1
	// 		int fy; // $s0
	/* end block 1 */
	// End offset: 0x800722CC
	// End Line: 932

	/* begin block 2 */
		// Start line: 1738
	/* end block 2 */
	// End Line: 1739

int CheckBodge__7GamePadi(GamePad *this,int dir)

{
	uchar uVar1;
	void *pvVar2;
	int iVar3;
	int y;
	int x;
	int iVar4;
	int iVar5;
	
	iVar4 = (int)this->player->_px;
	iVar5 = (int)this->player->_py;
	x = iVar4 + (int)offset_x[dir];
	y = iVar5 + (int)offset_y[dir];
	iVar3 = dir;
	if (this->position_lock == '\0') {
		pvVar2 = IsTrigger__Fii(x,y);
		if (pvVar2 != (void *)0x0) {
			return dir;
		}
		if ((0 < dung_map[x * 0x6c + y].dMonster) ||
			 ((0 < (int)dung_map[x * 0x6c + y].dObject &&
				(object[(int)dung_map[x * 0x6c + y].dObject + -1]._otype == '0')))) {
			this->player->_pdir = (char)dir;
			iVar3 = CheckDirs__7GamePadi(this,dir);
			return iVar3;
		}
		y = dir + -1;
		iVar3 = dir + 1;
		if (y < 0) {
			y = dir + 7;
		}
		if (7 < iVar3) {
			iVar3 = dir + -7;
		}
		uVar1 = PosOkPlayer__Fiii((int)this->pnum,iVar4 + (int)offset_x[dir],iVar5 + (int)offset_y[dir])
		;
		if (uVar1 == '\0') {
			x = CheckSide__7GamePadi(this,dir);
			if (x == 1) {
				uVar1 = PosOkPlayer__Fiii((int)this->pnum,iVar4 + (int)offset_x[y],iVar5 + (int)offset_y[y])
				;
				iVar3 = y;
			}
			else {
				if (x != 2) {
					return -1;
				}
				uVar1 = PosOkPlayer__Fiii((int)this->pnum,iVar4 + (int)offset_x[iVar3],
																	iVar5 + (int)offset_y[iVar3]);
			}
			if (uVar1 == '\0') {
				return -1;
			}
			return iVar3;
		}
		uVar1 = PosOkPlayer__Fiii((int)this->pnum,iVar4 + (int)offset_x[y],iVar5 + (int)offset_y[y]);
		if (uVar1 == '\0') {
			x = y + -1;
			if (x < 0) {
				x = y + 7;
			}
			x = CheckDirs__7GamePadi(this,x);
		}
		else {
			uVar1 = PosOkPlayer__Fiii((int)this->pnum,iVar4 + (int)offset_x[iVar3],
																iVar5 + (int)offset_y[iVar3]);
			if (uVar1 != '\0') {
				return dir;
			}
			x = iVar3 + 1;
			if (7 < x) {
				x = iVar3 + -7;
			}
			x = CheckDirs__7GamePadi(this,x);
			iVar3 = y;
		}
		if (x != -1) {
			return dir;
		}
	}
	return iVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ walk__7GamePadc(struct GamePad *this /*$s0*/, char cmd /*$a1*/)
 // line 941, offset 0x800722f8
	/* begin block 1 */
		// Start line: 942
		// Start offset: 0x800722F8
		// Variables:
	// 		int xv; // $s2
	// 		int yv; // $s3
	// 		int dir; // $s1
	/* end block 1 */
	// End offset: 0x800725E4
	// End Line: 1000

	/* begin block 2 */
		// Start line: 1951
	/* end block 2 */
	// End Line: 1952

void walk__7GamePadc(GamePad *this,char cmd)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	PlayerStruct *pPVar6;
	
	pPVar6 = this->player;
	if ((pPVar6->_pInvincible == '\0') || (pPVar6->_pHitPoints != 0)) {
		if ((pPVar6->_pmode < 4) &&
			 ((SplTarget[(int)this->pnum].active == '\0' && (this->pad_up_button == 0)))) {
			if ((this->position_lock == '\0') && (pPVar6->destAction == -1)) {
				iVar4 = CheckBodge__7GamePadi(this,(int)cmd);
				if (iVar4 == -1) {
					StartStand__Fii((int)this->pnum,(int)this->player->_pdir);
				}
				else {
					pPVar6 = this->player;
					cVar1 = offset_x[iVar4];
					cVar2 = offset_y[iVar4];
					if ((iVar4 != (int)pPVar6->_pdir) || (pPVar6->_pmode == 0)) {
						NewPlrAnim__Fiiii((int)this->pnum,8,pPVar6->_pWFrames,0);
						this->player->_pVar8 = 0;
						this->player->_pVar3 = (short)iVar4;
						PlrClrTrans__Fii((int)this->player->_px,(int)this->player->_py);
						PlrDoTrans__Fii((int)this->player->_px,(int)this->player->_py);
					}
					this->player->_pdir = (char)iVar4;
					if ((this->position_lock == '\0') && ((cVar1 != '\0' || (cVar2 != '\0')))) {
						this->player->_pmode = 1;
						this->player->_pVar1 = (short)cVar1;
						this->player->_pVar2 = (short)cVar2;
						ScrollInfo._sdx = (int)this->player->_px - ViewX;
						ScrollInfo._sdy = (int)this->player->_py - ViewY;
						if (svgamode == '\0') {
							bVar3 = false;
							iVar5 = abs(ScrollInfo._sdx);
							if (iVar5 < 2) {
								iVar5 = abs(ScrollInfo._sdy);
								bVar3 = iVar5 < 2;
							}
						}
						else {
							bVar3 = false;
							iVar5 = abs(ScrollInfo._sdx);
							if (iVar5 < 3) {
								iVar5 = abs(ScrollInfo._sdy);
								bVar3 = iVar5 < 3;
							}
						}
						if (bVar3) {
							if (iVar4 + -3 < 1) {
								ScrollInfo._sdir = iVar4 + 5;
							}
							else {
								ScrollInfo._sdir = iVar4 + -2;
							}
						}
						else {
							ScrollInfo._sdir = 0;
						}
					}
				}
			}
			else {
				if ((int)cmd != (int)pPVar6->_pdir) {
					StartStand__Fii((int)this->pnum,(int)cmd);
				}
			}
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
 // line 1011, offset 0x80072604
	/* begin block 1 */
		// Start line: 1012
		// Start offset: 0x80072604
		// Variables:
	// 		int x; // $s1
	// 		int y; // $s2

		/* begin block 1.1 */
			// Start line: 1029
			// Start offset: 0x800726D4

			/* begin block 1.1.1 */
				// Start line: 1029
				// Start offset: 0x800726E8
				// Variables:
			// 		struct ItemStruct *pi; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800727E8
			// End Line: 1043
		/* end block 1.1 */
		// End offset: 0x800727E8
		// End Line: 1047
	/* end block 1 */
	// End offset: 0x80072940
	// End Line: 1070

	/* begin block 2 */
		// Start line: 2099
	/* end block 2 */
	// End Line: 2100

void check_around_player__7GamePad(GamePad *this)

{
	uchar uVar1;
	PlayerStruct *pPVar2;
	char *__src;
	int range;
	ItemStruct *ItemPtr;
	int xx;
	int yy;
	
	range = sel_data;
	pPVar2 = this->player;
	xx = (int)pPVar2->_px;
	yy = (int)pPVar2->_py;
	if ((pPVar2->_pmode != 9) && (SplTarget[(int)this->pnum].active == '\0')) {
		(&_pcursobj)[sel_data] = -1;
		(&_pcursitem)[sel_data] = -1;
		uVar1 = invflag;
		(&_pcursmonst)[range] = -1;
		if (uVar1 == '\0') {
			if (this->pad_up_action == select_belt_item__Fi) {
				_pcursinvitem[sel_data] = (char)_pcurr_inv[sel_data];
				ClearPanel__Fv();
				ItemPtr = (ItemStruct *)
									(&DAT_00001de8 + (int)(&this->player->_pmode + _pcurr_inv[sel_data] * 0x26));
				__src = MakeItemStr__FP10ItemStructUsUs(ItemPtr,ItemPtr->_iIName,0x100);
				strcpy(tempstr,__src);
				strcpy(_infostr + sel_data * 0x100,tempstr);
				if (ItemPtr->_iMagical == '\x01') {
					_infoclr[sel_data] = '\x01';
				}
				else {
					if (ItemPtr->_iMagical == '\x02') {
						_infoclr[sel_data] = '\x03';
					}
				}
			}
			else {
				_pcursinvitem[sel_data] = -1;
				if ((_pcurr_inv[sel_data] == -1) ||
					 (*(short *)(&DAT_00001e42 + (int)(&this->player->_pmode + _pcurr_inv[sel_data] * 0x26))
						== -1)) {
					get_next_inv__Fv();
				}
				if (_pcursinvitem[sel_data] == -1) {
					CheckArea__FiiicUci(xx,yy,2,'\x04',0,(int)this->pnum);
					CheckArea__FiiicUci(xx,yy,2,'\x02',0,(int)this->pnum);
					if ((leveltype == '\0') || (this->player->_pwtype == 0)) {
						range = 2;
					}
					else {
						range = 4;
					}
					CheckArea__FiiicUci(xx,yy,range,'\x01',0,(int)this->pnum);
					cursmx = (int)this->player->_px;
					cursmy = (int)this->player->_py;
					CheckTrigForce__Fv();
					CheckTown__Fv();
					CheckRportal__Fv();
				}
				CheckPanelInfo__Fv();
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
 // line 1079, offset 0x8007295c
	/* begin block 1 */
		// Start line: 1080
		// Start offset: 0x8007295C
		// Variables:
	// 		int x; // $s6
	// 		int y; // $s5

		/* begin block 1.1 */
			// Start line: 1088
			// Start offset: 0x80072A14
			// Variables:
		// 		int i; // $s3
		/* end block 1.1 */
		// End offset: 0x80072AE0
		// End Line: 1098
	/* end block 1 */
	// End offset: 0x80072AE0
	// End Line: 1098

	/* begin block 2 */
		// Start line: 2249
	/* end block 2 */
	// End Line: 2250

void show_combos__7GamePad(GamePad *this)

{
	char cVar1;
	int n;
	char *pcVar2;
	GamePad *pGVar3;
	int iVar4;
	uint G;
	int Y;
	int X;
	
	X = 0x32;
	if (this->pnum != '\0') {
		X = 0xa0;
	}
	if ((((this->await_combo != '\0') && ((chrflag | invflag) == 0)) && (gbActivePlayers < 2)) &&
		 ((this->player->_pHitPoints >> 6 != 0 && (demo_pad_time == 0)))) {
		iVar4 = 0;
		ClrDiabloMsg__Fv();
		G = (uint)WHITEG;
		pGVar3 = this;
		Y = 0x54;
		do {
			n = Y;
			if ((TDRFuncPtr_GetActionButton__7GamePadPFi_v1func)pGVar3[2].restart_time !=
					(TDRFuncPtr_GetActionButton__7GamePadPFi_v1func)0x0) {
				n = GetActionButton__7GamePadPFi_v
											(this,(TDRFuncPtr_GetActionButton__7GamePadPFi_v1func)pGVar3[2].restart_time);
				n = get_key_pad__Fi(n);
				cVar1 = pad_txt[n].font_num;
				n = GetActionButton__7GamePadPFi_v
											(this,(TDRFuncPtr_GetActionButton__7GamePadPFi_v1func)pGVar3[2].restart_time);
				pcVar2 = get_action_str__Fii(n,1);
				sprintf(tempstr,"%c - %s",(int)cVar1,pcVar2);
				n = Y + 0x10;
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(&MediumFont,X,Y,tempstr,JustLeft,(RECT *)0x0,(uint)WHITER,G,G);
			}
			iVar4 = iVar4 + 1;
			pGVar3 = (GamePad *)&pGVar3->pnum;
			Y = n;
		} while (iVar4 < 0xe);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Handle__7GamePad(struct GamePad *this /*$s0*/)
 // line 1166, offset 0x80072b10
	/* begin block 1 */
		// Start line: 1167
		// Start offset: 0x80072B10
		// Variables:
	// 		int cp; // $s1

		/* begin block 1.1 */
			// Start line: 1253
			// Start offset: 0x80072C64

			/* begin block 1.1.1 */
				// Start line: 1257
				// Start offset: 0x80072C98

				/* begin block 1.1.1.1 */
					// Start line: 1258
					// Start offset: 0x80072C98
				/* end block 1.1.1.1 */
				// End offset: 0x80072CB4
				// End Line: 1259
			/* end block 1.1.1 */
			// End offset: 0x80072CC4
			// End Line: 1261
		/* end block 1.1 */
		// End offset: 0x80072CC4
		// End Line: 1261

		/* begin block 1.2 */
			// Start line: 1265
			// Start offset: 0x80072CC4

			/* begin block 1.2.1 */
				// Start line: 1265
				// Start offset: 0x80072CD8
				// Variables:
			// 		unsigned long msk; // $a2
			/* end block 1.2.1 */
			// End offset: 0x80072D04
			// End Line: 1270
		/* end block 1.2 */
		// End offset: 0x80072D04
		// End Line: 1270

		/* begin block 1.3 */
			// Start line: 1299
			// Start offset: 0x80072E10

			/* begin block 1.3.1 */
				// Start line: 1302
				// Start offset: 0x80072E48

				/* begin block 1.3.1.1 */
					// Start line: 1303
					// Start offset: 0x80072E48

					/* begin block 1.3.1.1.1 */
						// Start line: 1304
						// Start offset: 0x80072E5C

						/* begin block 1.3.1.1.1.1 */
							// Start line: 1305
							// Start offset: 0x80072E5C

							/* begin block 1.3.1.1.1.1.1 */
								// Start line: 1306
								// Start offset: 0x80072E6C

								/* begin block 1.3.1.1.1.1.1.1 */
									// Start line: 1344
									// Start offset: 0x80072F44

									/* begin block 1.3.1.1.1.1.1.1.1 */
										// Start line: 1352
										// Start offset: 0x80072FA4
									/* end block 1.3.1.1.1.1.1.1.1 */
									// End offset: 0x80073014
									// End Line: 1359
								/* end block 1.3.1.1.1.1.1.1 */
								// End offset: 0x80073014
								// End Line: 1359
							/* end block 1.3.1.1.1.1.1 */
							// End offset: 0x80073014
							// End Line: 1359
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x80073014
						// End Line: 1359
					/* end block 1.3.1.1.1 */
					// End offset: 0x80073014
					// End Line: 1359
				/* end block 1.3.1.1 */
				// End offset: 0x80073014
				// End Line: 1359
			/* end block 1.3.1 */
			// End offset: 0x800730A8
			// End Line: 1375
		/* end block 1.3 */
		// End offset: 0x800730A8
		// End Line: 1375

		/* begin block 1.4 */
			// Start line: 1380
			// Start offset: 0x800730A8

			/* begin block 1.4.1 */
				// Start line: 1381
				// Start offset: 0x800730F4
			/* end block 1.4.1 */
			// End offset: 0x8007315C
			// End Line: 1388
		/* end block 1.4 */
		// End offset: 0x8007315C
		// End Line: 1388
	/* end block 1 */
	// End offset: 0x8007315C
	// End Line: 1388

	/* begin block 2 */
		// Start line: 2424
	/* end block 2 */
	// End Line: 2425

void Handle__7GamePad(GamePad *this)

{
	uchar uVar1;
	char cmd;
	ushort uVar2;
	ushort uVar3;
	CPad *this_00;
	void *pvVar4;
	int iVar5;
	uint uVar6;
	PlayerStruct *pPVar7;
	int *piVar8;
	
	this_00 = PAD_GetPad__FiUc((int)this->pnum,'\0');
	this->Pad = this_00;
	uVar2 = GetCur__C4CPad(this_00);
	_uVar2 = (uint)uVar2;
	if (demo_finish == 0) {
		if (FeFlag == '\0') {
			if ((this->player->plractive != '\0') && (pvVar4 = IsGameLoading__Fv(), pvVar4 == (void *)0x0)
				 ) {
				if ((((SplTarget[(int)this->pnum].active == '\0') && ((invflag | chrflag) == 0)) ||
						(((&_spselflag2)[(int)this->pnum] != (TASK *)0x0 && (sbookflag != '\0')))) &&
					 (uVar1 = TryIconCurs__Fv(), uVar1 != '\0')) {
					(&_pcursplr)[sel_data] = -1;
				}
				ClearPanel__Fv();
				if ((stextflag == '\x12') && (uVar3 = GetDown__C4CPad(this->Pad), (uVar3 & 0x20) != 0)) {
					iVar5 = 0x2f8;
					do {
						*(undefined2 *)((int)&premiumitem._itype + iVar5) = 0xffff;
						iVar5 = iVar5 + -0x98;
					} while (-1 < iVar5);
					numpremium = 0;
					SpawnPremium__Fi(0x32);
				}
				if (FePlayerNo != 0) {
					pPVar7 = this->player;
					uVar6 = *(uint *)((int)&pPVar7->_pMemSpells + 4);
					*(uint *)&pPVar7->_pMemSpells = *(uint *)&pPVar7->_pMemSpells & 0xffbffdff;
					*(uint *)((int)&pPVar7->_pMemSpells + 4) = uVar6 & 0xff;
				}
				this->player->_pLvlChanging = '\0';
				if ((options_pad == -1) || ((int)this->pnum == options_pad)) {
					if ((this->allow_walking < '\x01') && (this->player->_pmode < 2)) {
						StartStand__Fii((int)this->pnum,(int)this->player->_pdir);
					}
					if (this->player->_pmode == 10) {
						this->player->_pmode = 0;
					}
					this->await_combo = '\0';
					if ((_uVar2 & this->position_key) == 0) {
						this->position_lock = '\0';
						(&force_attack)[(int)this->pnum] = (void *)0x0;
					}
					else {
						this->position_lock = '\x01';
						(&force_attack)[(int)this->pnum] = (void *)0x1;
						iVar5 = this->player->_pmode;
						if ((iVar5 != 0) && (iVar5 < 4)) {
							StartStand__Fii((int)this->pnum,(int)this->player->_pdir);
						}
					}
					if ((qtextflag == '\0') && (stextflag == '\0')) {
						if ((PauseMode == '\0') && ('\0' < this->allow_walking)) {
							check_around_player__7GamePad(this);
							if ((_uVar2 & this->combo_key) == 0) {
								this->await_combo = '\0';
							}
							else {
								this->await_combo = '\x01';
							}
							if ((automapflag != '\0') && (this->player->_pmode == 0)) {
								uVar6 = GetActionButton__7GamePadPFi_v(this,pad_func_AutoMap__Fi);
								if ((_uVar2 & uVar6) != 0) {
									if ((uVar2 & 0xc0f) != 0) {
										automapmoved = '\x01';
										if ((uVar2 & 1) != 0) {
											AutomapUp__Fv();
										}
										if ((uVar2 & 2) != 0) {
											AutomapDown__Fv();
										}
										if ((uVar2 & 4) != 0) {
											AutomapLeft__Fv();
										}
										if ((uVar2 & 8) == 0) {
											return;
										}
										AutomapRight__Fv();
										return;
									}
									automapmoved = '\0';
								}
							}
							show_combos__7GamePad(this);
							show_spell_dir__Fi((int)this->pnum);
							if (flyflag == '\0') {
								uVar2 = GetCur__C4CPad(this->Pad);
								cmd = (*this->walk_style)((uint)uVar2 & 0xf);
								if (cmd == -1) {
									iVar5 = this->player->_pmode;
									if ((iVar5 != 0) && (iVar5 < 4)) {
										StartStand__Fii((int)this->pnum,(int)this->player->_pdir);
									}
								}
								else {
									walk__7GamePadc(this,cmd);
								}
							}
							else {
								if (SplTarget[(int)this->pnum].active == '\0') {
									flyabout__7GamePad(this);
								}
							}
						}
						if (invflag == '\0') {
							if (((select_flag == '\0') && (PauseMode == '\0')) || (sbookflag != '\0')) {
								TestButtons__7GamePad(this);
							}
						}
						else {
							uVar2 = GetDown__C4CPad(this->Pad);
							if ((uVar2 & 0x200) != 0) {
								CloseInvChr__Fv();
								StartStand__Fii((int)this->pnum,(int)this->player->_pdir);
							}
						}
					}
					else {
						CheckStoreBtn__Fv();
					}
					if (((goldcheat != (void *)0x0) && (invflag != '\0')) &&
						 ((_pcursinvitem[sel_data] != '\0' &&
							((uVar2 = GetCur__C4CPad(this->Pad), (uVar2 & 0x2420) == 0x2420 &&
							 (piVar8 = &this->player->_pmode + ((int)_pcursinvitem[sel_data] + -7) * 0x26,
							 *(short *)((int)piVar8 + 0x656) == 0xb)))))) {
						piVar8[0x184] = 5000;
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
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GamePadTask__FP4TASK(struct TASK *T /*$s0*/)
 // line 1456, offset 0x80073174
	/* begin block 1 */
		// Start line: 1457
		// Start offset: 0x80073174
		// Variables:
	// 		struct GamePad GPad1; // stack offset -344
	// 		struct GamePad GPad2; // stack offset -184
	// 		struct DEF_ARGS *args; // $s2
	// 		int omp; // $s0
	// 		int oms; // $s1
	/* end block 1 */
	// End offset: 0x80073358
	// End Line: 1550

	/* begin block 2 */
		// Start line: 3007
	/* end block 2 */
	// End Line: 3008

void GamePadTask__FP4TASK(TASK *T)

{
	int iVar1;
	int iVar2;
	GamePad *this;
	TDRFuncPtr_SetUpAction__7GamePadPFi_vT11func func;
	TDRFuncPtr_SetUpAction__7GamePadPFi_vT12upfunc upfunc;
	int *piVar3;
	GamePad aGStack344 [3];
	GamePad aGStack184 [3];
	
	__7GamePadi(aGStack344,0);
	__7GamePadi(aGStack184,1);
	piVar3 = (int *)T->fActive;
	*piVar3 = 0;
	do {
		if (*piVar3 == 0) goto LAB_800732f8;
		switch(*piVar3) {
		case 2:
			aGStack344[0].allow_walking = '\0';
		case 4:
			aGStack184[0].allow_walking = '\0';
			break;
		case 3:
			aGStack344[0].allow_walking = '\0';
			break;
		case 5:
			aGStack344[0].allow_walking = '\x01';
			options_pad = -1;
		case 7:
			aGStack184[0].allow_walking = '\x01';
			break;
		case 6:
			aGStack344[0].allow_walking = '\x01';
			break;
		case 9:
			if (piVar3[1] == 0) {
				SetAllButtons__7GamePadP11KEY_ASSIGNS(aGStack344,(KEY_ASSIGNS *)piVar3[2]);
				*piVar3 = 0;
			}
			else {
				if (piVar3[1] == 1) {
					SetAllButtons__7GamePadP11KEY_ASSIGNS(aGStack184,(KEY_ASSIGNS *)piVar3[2]);
					*piVar3 = 0;
				}
				else {
					*piVar3 = 0;
				}
			}
			goto LAB_800732f8;
		case 10:
			if (piVar3[1] == 0) {
				func = (TDRFuncPtr_SetUpAction__7GamePadPFi_vT11func)piVar3[2];
				upfunc = (TDRFuncPtr_SetUpAction__7GamePadPFi_vT12upfunc)piVar3[3];
				this = aGStack344;
			}
			else {
				this = aGStack184;
				if (piVar3[1] != 1) {
					*piVar3 = 0;
					goto LAB_800732f8;
				}
				func = (TDRFuncPtr_SetUpAction__7GamePadPFi_vT11func)piVar3[2];
				upfunc = (TDRFuncPtr_SetUpAction__7GamePadPFi_vT12upfunc)piVar3[3];
			}
			SetUpAction__7GamePadPFi_vT1(this,func,upfunc);
			break;
		case 0xb:
			if (piVar3[1] == 0) {
				GetAllButtons__7GamePadP11KEY_ASSIGNS(aGStack344,(KEY_ASSIGNS *)piVar3[2]);
				*piVar3 = 0;
			}
			else {
				if (piVar3[1] == 1) {
					GetAllButtons__7GamePadP11KEY_ASSIGNS(aGStack184,(KEY_ASSIGNS *)piVar3[2]);
					*piVar3 = 0;
				}
				else {
					*piVar3 = 0;
				}
			}
			goto LAB_800732f8;
		}
		*piVar3 = 0;
LAB_800732f8:
		iVar2 = myplr;
		iVar1 = sel_data;
		sel_data = 1;
		myplr = 1;
		Handle__7GamePad(aGStack184);
		sel_data = 0;
		myplr = 0;
		Handle__7GamePad(aGStack344);
		sel_data = iVar1;
		myplr = iVar2;
		TSK_Sleep(1);
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostGamePad__Fiiii(int val /*$s1*/, int var1 /*$s2*/, int var2 /*$s3*/, int var3 /*$s4*/)
 // line 1555, offset 0x80073378
	/* begin block 1 */
		// Start line: 1556
		// Start offset: 0x80073378
		// Variables:
	// 		struct TASK *gtask; // $v0
	// 		struct DEF_ARGS *args; // $s0
	/* end block 1 */
	// End offset: 0x80073404
	// End Line: 1572

	/* begin block 2 */
		// Start line: 3209
	/* end block 2 */
	// End Line: 3210

void PostGamePad__Fiiii(int val,int var1,int var2,int var3)

{
	TASK *pTVar1;
	int iVar2;
	int *piVar3;
	
	pTVar1 = TSK_Exist((TASK *)GamePadTask__FP4TASK,0x42,0xffffffff);
	if (pTVar1 != (TASK *)0x0) {
		piVar3 = (int *)pTVar1->fActive;
		iVar2 = *piVar3;
		while (iVar2 != 0) {
			TSK_Sleep(1);
			iVar2 = *piVar3;
		}
		*piVar3 = val;
		piVar3[1] = var1;
		piVar3[2] = var2;
		piVar3[3] = var3;
		TSK_Sleep(1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init_GamePad__Fv()
 // line 1584, offset 0x80073428
	/* begin block 1 */
		// Start line: 1585
		// Start offset: 0x80073428
	/* end block 1 */
	// End offset: 0x80073448
	// End Line: 1586

	/* begin block 2 */
		// Start line: 3268
	/* end block 2 */
	// End Line: 3269

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Init_GamePad__Fv(void)

{
	TSK_AddTask(0x42,GamePadTask__FP4TASK,0x1000,0x10);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitGamePadVars__Fv()
 // line 1590, offset 0x80073458
	/* begin block 1 */
		// Start line: 1591
		// Start offset: 0x80073458
	/* end block 1 */
	// End offset: 0x800734D8
	// End Line: 1605

	/* begin block 2 */
		// Start line: 3281
	/* end block 2 */
	// End Line: 3282

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitGamePadVars__Fv(void)

{
	if (_spselflag2 != (TASK *)0x0) {
		TSK_Kill(_spselflag2);
	}
	if (PTR_8012b154 != (TASK *)0x0) {
		TSK_Kill(PTR_8012b154);
	}
	PTR_8012b154 = (TASK *)0x0;
	_spselflag2 = (TASK *)0x0;
	RemoveTargetCursor__Fi(-1);
	automapmoved = '\0';
	PostGamePad__Fiiii(5,0,0,0);
	force_attack = (void *)0x0;
	PTR_8012ace4 = (void *)0x0;
	PauseMode = '\0';
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetWalkStyle__Fii(int pnum /*$a0*/, int style /*$s0*/)
 // line 1608, offset 0x800734e8
	/* begin block 1 */
		// Start line: 1609
		// Start offset: 0x800734E8
		// Variables:
	// 		int ret; // $s1
	// 		struct KEY_ASSIGNS *ta; // $s1
	/* end block 1 */
	// End offset: 0x80073540
	// End Line: 1618

	/* begin block 2 */
		// Start line: 3318
	/* end block 2 */
	// End Line: 3319

int SetWalkStyle__Fii(int pnum,int style)

{
	int iVar1;
	
	PostGamePad__Fiiii(0xb,0,(int)txt_actions,0);
	iVar1 = txt_actions[1].pad_val;
	txt_actions[1].pad_val = style;
	PostGamePad__Fiiii(9,0,(int)txt_actions,0);
	return iVar1;
}





