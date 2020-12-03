#include "THISDUST.H"
#include "CPLAYER.H"


// decompiled code
// original method signature: 
// struct CPlayer * /*$ra*/ __7CPlayerbii(struct CPlayer *this /*$s1*/, void * Town /*$s0*/, int mPlayerNum /*$s3*/, int NewNumOfPlayers /*$s2*/)
 // line 72, offset 0x80095854
	/* begin block 1 */
		// Start line: 73
		// Start offset: 0x80095854
		// Variables:
	// 		int SizeToAlloc; // $a0

		/* begin block 1.1 */
			// Start line: 122
			// Start offset: 0x80095920

			/* begin block 1.1.1 */
				// Start line: 131
				// Start offset: 0x80095954
				// Variables:
			// 		long hnd; // $s0
			/* end block 1.1.1 */
			// End offset: 0x80095988
			// End Line: 135
		/* end block 1.1 */
		// End offset: 0x80095988
		// End Line: 135
	/* end block 1 */
	// End offset: 0x80095988
	// End Line: 135

	/* begin block 2 */
		// Start line: 144
	/* end block 2 */
	// End Line: 145

CPlayer * __7CPlayerbii(CPlayer *this,void *Town,int mPlayerNum,int NewNumOfPlayers)

{
	ushort uVar1;
	ulong Size;
	long lVar2;
	uint local_20;
	int nDecY;
	
	__7TextDat((TextDat *)this);
	this->InTown = Town;
	this->PlayerNum = (ushort)mPlayerNum;
	this->TexId = -1;
	this->hndDatMem = -1;
	this->NumOfPlayers = (ushort)NewNumOfPlayers;
	this->LastScrX = 0;
	this->LastScrY = 0;
	this->LastOtPos = 0;
	Init__7CPlayer(this);
	uVar1 = this->PlayerNum;
	local_20 = (uint)uVar1;
	if (uVar1 == 0) {
		local_20 = 0;
		nDecY = 2;
	}
	else {
		if (uVar1 != 1) {
			DBG_Error((char *)0x0,"psxsrc/CPLAYER.CPP",0x75);
			goto LAB_80095920;
		}
		nDecY = 0x66;
	}
	SetDecompArea__7TextDatiiii((TextDat *)this,0x2c1,nDecY,0x2c0,local_20);
LAB_80095920:
	*(CPlayer **)(&PActiveArray + (uint)this->PlayerNum * 4) = this;
	Size = GetDatMaxSize__7CPlayer(this);
	if ((NewNumOfPlayers != 0) || (mPlayerNum != 1)) {
		lVar2 = GAL_Alloc(Size,1,"PLRDAT");
		if (lVar2 == -1) {
			DBG_Error((char *)0x0,"psxsrc/CPLAYER.CPP",0x85);
		}
		this->hndDatMem = lVar2;
	}
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._7CPlayer(struct CPlayer *this /*$s0*/, int __in_chrg /*$s1*/)
 // line 147, offset 0x800959ac
	/* begin block 1 */
		// Start line: 148
		// Start offset: 0x800959AC

		/* begin block 1.1 */
			// Start line: 148
			// Start offset: 0x800959AC

			/* begin block 1.1.1 */
				// Start line: 153
				// Start offset: 0x800959F0
			/* end block 1.1.1 */
			// End offset: 0x80095A18
			// End Line: 156
		/* end block 1.1 */
		// End offset: 0x80095A18
		// End Line: 156
	/* end block 1 */
	// End offset: 0x80095A18
	// End Line: 156

	/* begin block 2 */
		// Start line: 323
	/* end block 2 */
	// End Line: 324

void ___7CPlayer(CPlayer *this,int __in_chrg)

{
	uchar uVar1;
	
	*(undefined4 *)(&PActiveArray + (uint)this->PlayerNum * 4) = 0;
	Dump__7CPlayer(this);
	if ((this->hndDatMem != -1) && (uVar1 = GAL_Free(this->hndDatMem), uVar1 == '\0')) {
		DBG_Error((char *)0x0,"psxsrc/CPLAYER.CPP",0x9b);
	}
	___7TextDat((TextDat *)this,__in_chrg);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Load__7CPlayeri(struct CPlayer *this /*$s0*/, int Id /*$s1*/)
 // line 166, offset 0x80095a3c
	/* begin block 1 */
		// Start line: 167
		// Start offset: 0x80095A3C
	/* end block 1 */
	// End offset: 0x80095A90
	// End Line: 171

	/* begin block 2 */
		// Start line: 361
	/* end block 2 */
	// End Line: 362

void Load__7CPlayeri(CPlayer *this,int Id)

{
	CTextFileInfo *NewInfo;
	int size;
	
	DumpData__7TextDat((TextDat *)this);
	NewInfo = GetFileInfo__7TextDati(Id);
	SetFileInfo__7TextDatPC13CTextFileInfoi((TextDat *)this,NewInfo,-1);
	size = GetDatMaxSize__7CPlayer(this);
	Use__7TextDatlbi((TextDat *)this,this->hndDatMem,(void *)0x0,size);
	this->TexId = Id;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this /*$a0*/, struct PlayerStruct *Plr /*$s4*/, struct CBlocks *Bg /*$s6*/)
 // line 210, offset 0x80095aa8
	/* begin block 1 */
		// Start line: 211
		// Start offset: 0x80095AA8
		// Variables:
	// 		int ScrX; // $s2
	// 		int ScrY; // $s0
	// 		int WorldX; // $s0
	// 		int WorldY; // $a2
	// 		int NWorldX; // $s3
	// 		int NWorldY; // $s1
	// 		int wtime; // $v0
	// 		void * ok; // $s5
	/* end block 1 */
	// End offset: 0x80095E5C
	// End Line: 285

	/* begin block 2 */
		// Start line: 449
	/* end block 2 */
	// End Line: 450

void SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(CPlayer *this,PlayerStruct *Plr,CBlocks *Bg)

{
	short sVar1;
	bool bVar2;
	int sy;
	uint uVar3;
	uint uVar4;
	int sx;
	int y;
	int x;
	
	x = 0;
	y = 0;
	bVar2 = false;
	sx = ((int)Plr->_pxoff * 0x28c) / 1000;
	sy = ((int)Plr->_pyoff * 0x271) / 1000;
	if ((plr[0].plractive == '\0') || (plr[0]._pmode == PM_DEATH)) {
LAB_80095ca0:
		if ((plr[1].plractive == '\0') || (plr[1]._pmode == PM_DEATH)) goto LAB_80095d88;
		sx = ((int)plr[1]._pxoff * 0x28c) / 1000;
		sy = ((int)plr[1]._pyoff * 0x271) / 1000;
		y = ScrToWorldX__7CBlocksii(Bg,sx,sy);
		y = (int)plr[1]._px * 0x14 + y;
		sx = ScrToWorldY__7CBlocksii(Bg,sx,sy);
		sVar1 = plr[1]._py;
	}
	else {
		if (plr[1].plractive != '\0') {
			if (plr[1]._pmode != PM_DEATH) {
				uVar3 = (int)Plr->_pxoff + (int)plr[1]._pxoff;
				uVar4 = (int)Plr->_pyoff + (int)plr[1]._pyoff;
				sx = (((int)(uVar3 + (uVar3 >> 0x1f)) >> 1) * 0x271) / 1000;
				sy = (((int)(uVar4 + (uVar4 >> 0x1f)) >> 1) * 0x271) / 1000;
				y = ScrToWorldX__7CBlocksii(Bg,sx,sy);
				x = ((int)plr[0]._px + (int)plr[1]._px) * 10 + y + 10;
				sx = ScrToWorldY__7CBlocksii(Bg,sx,sy);
				bVar2 = true;
				y = ((int)plr[0]._py + (int)plr[1]._py) * 10 + sx + 10;
				goto LAB_80095e28;
			}
			goto LAB_80095ca0;
		}
LAB_80095d88:
		if (plr[0]._pmode == PM_DEATH) goto LAB_80095e28;
		y = ScrToWorldX__7CBlocksii(Bg,sx,sy);
		y = (int)Plr->_px * 0x14 + y;
		sx = ScrToWorldY__7CBlocksii(Bg,sx,sy);
		sVar1 = Plr->_py;
	}
	bVar2 = true;
	x = y + 10 + ((int)((WWorldX - OWorldX) + ((uint)(WWorldX - OWorldX) >> 0x1f)) >> 1);
	y = (int)sVar1 * 0x14 + sx + 10 +
			((int)((WWorldY - OWorldY) + ((uint)(WWorldY - OWorldY) >> 0x1f)) >> 1);
LAB_80095e28:
	WorldToScrX__7CBlocksii(Bg,0,0);
	WorldToScrY__7CBlocksii(Bg,0,0);
	if (bVar2) {
		SetScrollTarget__7CBlocksii(Bg,x,y);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Print__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this /*$s2*/, struct PlayerStruct *Plr /*$s1*/, struct CBlocks *Bg /*$s4*/)
 // line 316, offset 0x80095e8c
	/* begin block 1 */
		// Start line: 317
		// Start offset: 0x80095E8C
		// Variables:
	// 		int ScrXOff; // $fp
	// 		int ScrYOff; // $s7
	// 		int Action; // $s0
	// 		int WorldX; // $s6
	// 		int WorldY; // $s5
	// 		struct POLY_FT4 *Ft4; // stack offset -48

		/* begin block 1.1 */
			// Start line: 337
			// Start offset: 0x80095EE8

			/* begin block 1.1.1 */
				// Start line: 349
				// Start offset: 0x80095F90
				// Variables:
			// 		int Frame; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 350
					// Start offset: 0x80095F90

					/* begin block 1.1.1.1.1 */
						// Start line: 353
						// Start offset: 0x80095FB4
						// Variables:
					// 		int FrmNum; // $v0
					// 		struct RECT R; // stack offset -56
					// 		struct POLY_FT4 *ShadFt4; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x80095FB4
					// End Line: 356
				/* end block 1.1.1.1 */
				// End offset: 0x80095FB4
				// End Line: 356
			/* end block 1.1.1 */
			// End offset: 0x80095FB4
			// End Line: 356

			/* begin block 1.1.2 */
				// Start line: 383
				// Start offset: 0x800960B0

				/* begin block 1.1.2.1 */
					// Start line: 384
					// Start offset: 0x800960B0

					/* begin block 1.1.2.1.1 */
						// Start line: 385
						// Start offset: 0x800960B8
						// Variables:
					// 		int Frame; // $s3

						/* begin block 1.1.2.1.1.1 */
							// Start line: 397
							// Start offset: 0x800960D8

							/* begin block 1.1.2.1.1.1.1 */
								// Start line: 398
								// Start offset: 0x800960EC

								/* begin block 1.1.2.1.1.1.1.1 */
									// Start line: 399
									// Start offset: 0x800960EC

									/* begin block 1.1.2.1.1.1.1.1.1 */
										// Start line: 400
										// Start offset: 0x80096104
										// Variables:
									// 		struct RECT R; // stack offset -56
									// 		int OtPos; // $s1
									// 		struct POLY_FT4 *ShadFt4; // $s0

										/* begin block 1.1.2.1.1.1.1.1.1.1 */
											// Start line: 437
											// Start offset: 0x80096310

											/* begin block 1.1.2.1.1.1.1.1.1.1.1 */
												// Start line: 438
												// Start offset: 0x80096324
												// Variables:
											// 		int zX; // $s1
											// 		int zY; // $s0
											/* end block 1.1.2.1.1.1.1.1.1.1.1 */
											// End offset: 0x80096390
											// End Line: 445
										/* end block 1.1.2.1.1.1.1.1.1.1 */
										// End offset: 0x80096390
										// End Line: 445
									/* end block 1.1.2.1.1.1.1.1.1 */
									// End offset: 0x80096390
									// End Line: 445
								/* end block 1.1.2.1.1.1.1.1 */
								// End offset: 0x80096390
								// End Line: 461
							/* end block 1.1.2.1.1.1.1 */
							// End offset: 0x80096390
							// End Line: 461
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x80096390
						// End Line: 464
					/* end block 1.1.2.1.1 */
					// End offset: 0x80096390
					// End Line: 464
				/* end block 1.1.2.1 */
				// End offset: 0x80096390
				// End Line: 467
			/* end block 1.1.2 */
			// End offset: 0x80096390
			// End Line: 467
		/* end block 1.1 */
		// End offset: 0x80096390
		// End Line: 467
	/* end block 1 */
	// End offset: 0x80096390
	// End Line: 467

	/* begin block 2 */
		// Start line: 709
	/* end block 2 */
	// End Line: 710

void Print__7CPlayerR12PlayerStructR7CBlocks(CPlayer *this,PlayerStruct *Plr,CBlocks *Bg)

{
	int syoff;
	byte bVar1;
	int Action;
	int Frame;
	POLY_FT4 *Ft4;
	int iVar2;
	int sxoff;
	ulong *puVar3;
	int iVar4;
	int iVar5;
	RECT local_38;
	POLY_FT4 *local_30 [2];
	
	if ((Plr->plractive != '\0') || ((uint)currlevel == (int)Plr->DeadLevel)) {
		sxoff = ((int)Plr->_pxoff * 0x271) / 1000;
		syoff = ((int)Plr->_pyoff * 0x271) / 1000;
		iVar5 = (int)Plr->_px * 0x14;
		iVar4 = (int)Plr->_py * 0x14;
		Action = FindAction__7CPlayerR12PlayerStruct(this,Plr);
		if (Action == 6) {
			Action = Plr->_pAnimFrame;
			Frame = GetNumOfFrames__7TextDatii((TextDat *)this,0,0);
			if (Action + -1 < Frame) {
				Action = GetFrNum__7TextDatiiii((TextDat *)this,0,0,(int)Plr->_pdir,Plr->_pAnimFrame + -1);
				GetScrXY__7CBlocksR4RECTiiii(Bg,&local_38,iVar5 + 10,iVar4 + 10,sxoff,syoff);
				local_30[0] = PrintFt4__7TextDatiiiiii
																((TextDat *)this,Action,(int)local_38.x,(int)local_38.y,0,4,0);
				this->LastScrX = (int)local_38.x;
				this->LastOtPos = 4;
				this->LastScrY = (int)local_38.y;
				local_30[0]->code = local_30[0]->code & 0xfd;
				Ft4 = PRIM_GetCopy__FP8POLY_FT4(local_30[0]);
				ShadScaleSkew__7CBlocksP8POLY_FT4(Ft4);
				puVar3 = ThisOt;
				Ft4->tag = Ft4->tag & 0xff000000 | ThisOt[5] & 0xffffff;
				puVar3[5] = puVar3[5] & 0xff000000 | (uint)Ft4 & 0xffffff;
				local_30[0]->code = local_30[0]->code | 1;
			}
		}
		else {
			if (Action != -1) {
				Frame = Plr->_pAnimFrame + -1;
				if (Action == 5) {
					Action = 0;
					Frame = 0;
				}
				iVar2 = GetNumOfActions__7TextDati((TextDat *)this,0);
				if ((Action < iVar2) &&
					 (iVar2 = GetNumOfFrames__7TextDatii((TextDat *)this,0,Action), Frame < iVar2)) {
					Action = GetFrNum__7TextDatiiii((TextDat *)this,0,Action,(int)Plr->_pdir,Frame);
					GetScrXY__7CBlocksR4RECTiiii(Bg,&local_38,iVar5 + 10,iVar4 + 10,sxoff,syoff);
					PRIM_GetPrim__FPP8POLY_FT4(local_30);
					PrepareFt4__7TextDatP8POLY_FT4iiiii
										((TextDat *)this,local_30[0],Action,(int)local_38.x,(int)local_38.y,0,0);
					sxoff = GetOtPos__7CBlocksi(Bg,(int)local_38.y);
					puVar3 = ThisOt + sxoff;
					local_30[0]->tag = local_30[0]->tag & 0xff000000 | *puVar3 & 0xffffff;
					*puVar3 = *puVar3 & 0xff000000 | (uint)local_30[0] & 0xffffff;
					this->LastScrX = (int)local_38.x;
					this->LastOtPos = sxoff;
					this->LastScrY = (int)local_38.y;
					if (((SpellFXDat[(uint)this->PlayerNum].teleflag |
							 SpellFXDat[(uint)this->PlayerNum].phaseflag) & 1U) == 0) {
						bVar1 = local_30[0]->code & 0xfd;
					}
					else {
						bVar1 = local_30[0]->code | 2;
					}
					local_30[0]->code = bVar1;
					Ft4 = PRIM_GetCopy__FP8POLY_FT4(local_30[0]);
					ShadScaleSkew__7CBlocksP8POLY_FT4(Ft4);
					puVar3 = ThisOt + sxoff;
					Ft4->tag = Ft4->tag & 0xff000000 | *puVar3 & 0xffffff;
					*puVar3 = *puVar3 & 0xff000000 | (uint)Ft4 & 0xffffff;
					if ((SpellFXDat[(uint)this->PlayerNum].phaseflag & 1U) == 0) {
						local_30[0]->code = local_30[0]->code | 1;
					}
					else {
						local_30[0]->code = local_30[0]->code & 0xfe;
						local_30[0]->r0 = '@';
						local_30[0]->g0 = '@';
						local_30[0]->b0 = '@';
					}
					if (leveltype == '\0') {
						PRIM_GetPrim__FPP8POLY_FT4(local_30);
						PrepareFt4__7TextDatP8POLY_FT4iiiii
											((TextDat *)this,local_30[0],Action,(int)local_38.x,(int)local_38.y + 0x26,0,1
											);
						sxoff = (int)daylight + 1;
						DoReflection__FP8POLY_FT4iii(local_30[0],sxoff * 0x28,sxoff * 0x48,sxoff * 0x78);
					}
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this /*$a0*/, struct PlayerStruct *Plr /*$a1*/)
 // line 477, offset 0x800963c4
	/* begin block 1 */
		// Start line: 478
		// Start offset: 0x800963C4
		// Variables:
	// 		int RetVal; // $v0
	/* end block 1 */
	// End offset: 0x80096438
	// End Line: 536

	/* begin block 2 */
		// Start line: 1075
	/* end block 2 */
	// End Line: 1076

int FindAction__7CPlayerR12PlayerStruct(CPlayer *this,PlayerStruct *Plr)

{
	PACTION PVar1;
	int iVar2;
	
	PVar1 = FindActionEnum__7CPlayerR12PlayerStruct(this,Plr);
	switch(PVar1) {
	case PL_WALK:
	case PL_TWALK:
		iVar2 = 1;
		break;
	case PL_STAND:
	case PL_TSTAND:
		iVar2 = 0;
		break;
	case PL_ATTACK:
		iVar2 = 2;
		break;
	case PL_HIT:
		iVar2 = 3;
		break;
	case PL_BLOCK:
		iVar2 = 4;
		break;
	case PL_DEATH:
		iVar2 = 6;
		break;
	case PL_LMAGIC:
	case PL_QMAGIC:
	case PL_FMAGIC:
		iVar2 = 5;
		break;
	default:
		iVar2 = -1;
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// enum PACTION /*$ra*/ FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this /*$a0*/, struct PlayerStruct *Plr /*$a1*/)
 // line 540, offset 0x80096448
	/* begin block 1 */
		// Start line: 541
		// Start offset: 0x80096448
	/* end block 1 */
	// End offset: 0x800964C4
	// End Line: 575

	/* begin block 2 */
		// Start line: 1203
	/* end block 2 */
	// End Line: 1204

PACTION FindActionEnum__7CPlayerR12PlayerStruct(CPlayer *this,PlayerStruct *Plr)

{
	PACTION PVar1;
	
	switch(Plr->_pmode) {
	case PM_STAND:
	case PM_NEWLVL:
	case PM_QUIT:
		PVar1 = PL_STAND;
		break;
	case PM_WALK:
	case PM_WALK2:
	case PM_WALK3:
		PVar1 = PL_WALK;
		break;
	case PM_ATTACK:
	case PM_RATTACK:
		PVar1 = PL_ATTACK;
		break;
	case PM_BLOCK:
		PVar1 = PL_BLOCK;
		break;
	case PM_GOTHIT:
		PVar1 = PL_HIT;
		break;
	case PM_DEATH:
		PVar1 = PL_DEATH;
		break;
	case PM_SPELL:
		PVar1 = PL_STAND;
		if (leveltype != '\0') {
			PVar1 = PL_LMAGIC;
		}
		break;
	default:
		PVar1 = PL_NOACTION;
	}
	return PVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init__7CPlayer(struct CPlayer *this /*$a0*/)
 // line 585, offset 0x800964cc
	/* begin block 1 */
		// Start line: 586
		// Start offset: 0x800964CC
	/* end block 1 */
	// End offset: 0x800964CC
	// End Line: 586

	/* begin block 2 */
		// Start line: 1292
	/* end block 2 */
	// End Line: 1293

void Init__7CPlayer(CPlayer *this)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Dump__7CPlayer(struct CPlayer *this /*$a0*/)
 // line 595, offset 0x800964d4
	/* begin block 1 */
		// Start line: 596
		// Start offset: 0x800964D4
	/* end block 1 */
	// End offset: 0x800964D4
	// End Line: 596

	/* begin block 2 */
		// Start line: 1312
	/* end block 2 */
	// End Line: 1313

void Dump__7CPlayer(CPlayer *this)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadThis__7CPlayeri(struct CPlayer *this /*$s0*/, int Id /*$s1*/)
 // line 606, offset 0x800964dc
	/* begin block 1 */
		// Start line: 607
		// Start offset: 0x800964DC
	/* end block 1 */
	// End offset: 0x80096534
	// End Line: 611

	/* begin block 2 */
		// Start line: 1333
	/* end block 2 */
	// End Line: 1334

void LoadThis__7CPlayeri(CPlayer *this,int Id)

{
	CTextFileInfo *NewInfo;
	int size;
	
	NewInfo = GetFileInfo__7TextDati(Id);
	SetFileInfo__7TextDatPC13CTextFileInfoi((TextDat *)this,NewInfo,-1);
	DumpData__7TextDat((TextDat *)this);
	size = GetDatMaxSize__7CPlayer(this);
	Use__7TextDatlbi((TextDat *)this,this->hndDatMem,(void *)0x0,size);
	this->TexId = Id;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NonBlockingLoadNewGFX__7CPlayeri(struct CPlayer *this /*$s0*/, int Id /*$s1*/)
 // line 626, offset 0x8009654c
	/* begin block 1 */
		// Start line: 627
		// Start offset: 0x8009654C

		/* begin block 1.1 */
			// Start line: 627
			// Start offset: 0x8009654C

			/* begin block 1.1.1 */
				// Start line: 629
				// Start offset: 0x8009657C
				// Variables:
			// 		struct PlayerParam *Pp; // $v0
			/* end block 1.1.1 */
			// End offset: 0x800965A0
			// End Line: 635
		/* end block 1.1 */
		// End offset: 0x800965A0
		// End Line: 635
	/* end block 1 */
	// End offset: 0x800965A0
	// End Line: 635

	/* begin block 2 */
		// Start line: 1373
	/* end block 2 */
	// End Line: 1374

/* WARNING: Type propagation algorithm not settling */

void NonBlockingLoadNewGFX__7CPlayeri(CPlayer *this,int Id)

{
	TASK *pTVar1;
	CPlayer *pCVar2;
	
	pTVar1 = TSK_Exist((TASK *)0x0,(ulong)&DAT_00008002,0xffffffff);
	if (pTVar1 == (TASK *)0x0) {
		pTVar1 = TSK_AddTask((ulong)&DAT_00008002,FilthyTask__FP4TASK,0xc78,8);
		pCVar2 = (CPlayer *)pTVar1->fActive;
		*(CPlayer **)&pCVar2->TextDat = this;
		*(int *)((int)&pCVar2->TextDat + 4) = Id;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FilthyTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 641, offset 0x800965b8
	/* begin block 1 */
		// Start line: 642
		// Start offset: 0x800965B8
		// Variables:
	// 		struct CPlayer *ThePlayer; // $s0
	// 		char FName[15]; // stack offset -32
	// 		int Id; // $s1
	// 		struct PlayerParam *Pp; // $v1
	/* end block 1 */
	// End offset: 0x80096628
	// End Line: 669

	/* begin block 2 */
		// Start line: 1404
	/* end block 2 */
	// End Line: 1405

/* WARNING: Type propagation algorithm not settling */

void FilthyTask__FP4TASK(TASK *T)

{
	CPlayer *this;
	CPlayer *Id;
	
	CDWAIT = &DAT_00000001;
	PauseMode = '\x01';
	this = *(CPlayer **)&((CPlayer *)T->fActive)->TextDat;
	Id = *(CPlayer **)((int)&((CPlayer *)T->fActive)->TextDat + 4);
	GLUE_SuspendGame__Fv();
	TSK_Sleep(3);
	stream_stop__Fv();
	LoadThis__7CPlayeri(this,(int)Id);
	GLUE_ResumeGame__Fv();
	CDWAIT = (void *)0x0;
	PauseMode = '\0';
	return;
}





