#include "THISDUST.H"
#include "CPLAYER.H"


// decompiled code
// original method signature: 
// struct CPlayer * /*$ra*/ __7CPlayerbi(struct CPlayer *this /*$s2*/, void * Town /*$s0*/, int mPlayerNum /*$s1*/)
 // line 66, offset 0x8008c04c
	/* begin block 1 */
		// Start line: 67
		// Start offset: 0x8008C04C
	/* end block 1 */
	// End offset: 0x8008C0FC
	// End Line: 112

	/* begin block 2 */
		// Start line: 132
	/* end block 2 */
	// End Line: 133

CPlayer * __7CPlayerbi(CPlayer *this,void *Town,int mPlayerNum)

{
	ushort uVar1;
	uint local_18;
	int nDecY;
	
	__7TextDat((TextDat *)this);
	this->InTown = Town;
	this->PlayerNum = (ushort)mPlayerNum;
	this->LastScrX = 0;
	this->LastScrY = 0;
	this->LastOtPos = 0;
	Init__7CPlayer(this);
	uVar1 = this->PlayerNum;
	local_18 = (uint)uVar1;
	if (uVar1 == 0) {
		local_18 = 0;
		nDecY = 2;
	}
	else {
		if (uVar1 != 1) {
			DBG_Error((char *)0x0,"psxsrc/CPLAYER.CPP",0x6b);
			goto LAB_8008c0fc;
		}
		nDecY = 0x66;
	}
	SetDecompArea__7TextDatiiii((TextDat *)this,0x2c1,nDecY,0x2c0,local_18);
LAB_8008c0fc:
	*(CPlayer **)(&PActiveArray + (uint)this->PlayerNum * 4) = this;
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._7CPlayer(struct CPlayer *this /*$s0*/, int __in_chrg /*$s1*/)
 // line 122, offset 0x8008c130
	/* begin block 1 */
		// Start line: 123
		// Start offset: 0x8008C130
	/* end block 1 */
	// End offset: 0x8008C130
	// End Line: 123

	/* begin block 2 */
		// Start line: 269
	/* end block 2 */
	// End Line: 270

void ___7CPlayer(CPlayer *this,int __in_chrg)

{
	*(undefined4 *)(&PActiveArray + (uint)this->PlayerNum * 4) = 0;
	Dump__7CPlayer(this);
	___7TextDat((TextDat *)this,__in_chrg);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Load__7CPlayeri(struct CPlayer *this /*$s0*/, int Id /*$s1*/)
 // line 134, offset 0x8008c188
	/* begin block 1 */
		// Start line: 135
		// Start offset: 0x8008C188
	/* end block 1 */
	// End offset: 0x8008C1CC
	// End Line: 139

	/* begin block 2 */
		// Start line: 293
	/* end block 2 */
	// End Line: 294

void Load__7CPlayeri(CPlayer *this,int Id)

{
	CTextFileInfo *NewInfo;
	
	DumpData__7TextDat((TextDat *)this);
	NewInfo = GetFileInfo__7TextDati((TextDat *)this,Id);
	SetFileInfo__7TextDatPC13CTextFileInfoi((TextDat *)this,NewInfo,-1);
	Use__7TextDat((TextDat *)this);
	this->TexId = Id;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBlockXY__7CPlayerR7CBlocksR12PlayerStruct(struct CPlayer *this /*$s4*/, struct CBlocks *Bg /*$s3*/, struct PlayerStruct *Plr /*$s2*/)
 // line 167, offset 0x8008c1e4
	/* begin block 1 */
		// Start line: 168
		// Start offset: 0x8008C1E4
		// Variables:
	// 		int ScrX; // $s1
	// 		int ScrY; // $s0
	// 		int WorldX; // $s0
	// 		int WorldY; // $a3
	/* end block 1 */
	// End offset: 0x8008C30C
	// End Line: 174

	/* begin block 2 */
		// Start line: 359
	/* end block 2 */
	// End Line: 360

void SetBlockXY__7CPlayerR7CBlocksR12PlayerStruct(CPlayer *this,CBlocks *Bg,PlayerStruct *Plr)

{
	short sVar1;
	int sy;
	int iVar2;
	int sx;
	
	sx = ((int)Plr->_pxoff * 0x28c) / 1000;
	sy = ((int)Plr->_pyoff * 0x271) / 1000;
	iVar2 = ScrToWorldX__7CBlocksii(Bg,sx,sy);
	sVar1 = Plr->_px;
	sx = ScrToWorldY__7CBlocksii(Bg,sx,sy);
	SetPlayerPosBlocks__7CBlocksiii
						(Bg,(uint)this->PlayerNum,((int)sVar1 * 0x14 + iVar2 + 10) / 0x14,
						 ((int)Plr->_py * 0x14 + sx + 10) / 0x14);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this /*$a0*/, struct PlayerStruct *Plr /*$s2*/, struct CBlocks *Bg /*$s3*/)
 // line 178, offset 0x8008c330
	/* begin block 1 */
		// Start line: 179
		// Start offset: 0x8008C330
		// Variables:
	// 		int ScrX; // $s1
	// 		int ScrY; // $s0
	// 		int NWorldX; // $s1
	// 		int NWorldY; // $s0
	// 		int pdir; // $v1
	// 		int wtime; // $a0
	/* end block 1 */
	// End offset: 0x8008C73C
	// End Line: 245

	/* begin block 2 */
		// Start line: 393
	/* end block 2 */
	// End Line: 394

void SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(CPlayer *this,PlayerStruct *Plr,CBlocks *Bg)

{
	uint uVar1;
	uint uVar2;
	int x;
	int sx;
	int sy;
	int iVar3;
	
	sx = ((int)Plr->_pxoff * 0x28c) / 1000;
	sy = ((int)Plr->_pyoff * 0x271) / 1000;
	if (plr[0].plractive == '\0') {
		if (plr[1].plractive == '\0') goto LAB_8008c63c;
		sx = ((int)plr[1]._pxoff * 0x28c) / 1000;
		sy = ((int)plr[1]._pyoff * 0x271) / 1000;
		x = ScrToWorldX__7CBlocksii(Bg,sx,sy);
		x = (int)plr[1]._px * 0x14 + x + 10;
		sx = ScrToWorldY__7CBlocksii(Bg,sx,sy);
		sx = (int)plr[1]._py * 0x14 + sx + 10;
		if ((1 < plr[1]._pmode - 1U) && (plr[1]._pmode != 3)) goto LAB_8008c710;
		sy = (int)plr[1]._pVar8;
		if (0x10 < sy) {
			sy = 0x10;
		}
		iVar3 = (int)(&TxyAdd)[(int)plr[1]._pdir * 2] * sy;
		sy = (int)SHORT_ARRAY_801203de[(int)plr[1]._pdir * 2] * sy;
	}
	else {
		if (plr[1].plractive != '\0') {
			uVar1 = (int)Plr->_pxoff + (int)plr[1]._pxoff;
			uVar2 = (int)Plr->_pyoff + (int)plr[1]._pyoff;
			sx = (((int)(uVar1 + (uVar1 >> 0x1f)) >> 1) * 0x271) / 1000;
			sy = (((int)(uVar2 + (uVar2 >> 0x1f)) >> 1) * 0x271) / 1000;
			x = ScrToWorldX__7CBlocksii(Bg,sx,sy);
			x = ((int)plr[0]._px + (int)plr[1]._px) * 10 + x + 10;
			sx = ScrToWorldY__7CBlocksii(Bg,sx,sy);
			sx = ((int)plr[0]._py + (int)plr[1]._py) * 10 + sx + 10;
			goto LAB_8008c710;
		}
LAB_8008c63c:
		x = ScrToWorldX__7CBlocksii(Bg,sx,sy);
		x = (int)Plr->_px * 0x14 + x + 10;
		sx = ScrToWorldY__7CBlocksii(Bg,sx,sy);
		sx = (int)Plr->_py * 0x14 + sx + 10;
		if ((1 < plr[0]._pmode - 1U) && (plr[0]._pmode != 3)) goto LAB_8008c710;
		sy = (int)plr[0]._pVar8;
		if (0x10 < sy) {
			sy = 0x10;
		}
		iVar3 = (int)(&TxyAdd)[(int)plr[0]._pdir * 2] * sy;
		sy = (int)SHORT_ARRAY_801203de[(int)plr[0]._pdir * 2] * sy;
	}
	x = x + iVar3;
	sx = sx + sy;
LAB_8008c710:
	WorldToScrX__7CBlocksii(Bg,0,0);
	WorldToScrY__7CBlocksii(Bg,0,0);
	SetScrollTarget__7CBlocksii(Bg,x,sx);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr /*$a0*/)
 // line 260, offset 0x8008c75c
	/* begin block 1 */
		// Start line: 261
		// Start offset: 0x8008C75C
	/* end block 1 */
	// End offset: 0x8008C7CC
	// End Line: 278

	/* begin block 2 */
		// Start line: 590
	/* end block 2 */
	// End Line: 591

int GetNumOfSpellAnims__FR12PlayerStruct(PlayerStruct *Plr)

{
	char cVar1;
	int iVar2;
	
	cVar1 = Plr->_pClass;
	if (cVar1 == '\x01') {
		iVar2 = 8;
	}
	else {
		if (cVar1 < '\x02') {
			if (cVar1 == '\0') {
				return 8;
			}
		}
		else {
			if (cVar1 == '\x02') {
				return 4;
			}
		}
		DBG_Error((char *)0x0,"psxsrc/CPLAYER.CPP",0x114);
		iVar2 = -1;
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Print__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this /*$s2*/, struct PlayerStruct *Plr /*$s1*/, struct CBlocks *Bg /*$s5*/)
 // line 282, offset 0x8008c7dc
	/* begin block 1 */
		// Start line: 283
		// Start offset: 0x8008C7DC
		// Variables:
	// 		int ScrXOff; // stack offset -48
	// 		int ScrYOff; // $fp
	// 		int Action; // $s0
	// 		int WorldX; // $s7
	// 		int WorldY; // $s6
	// 		struct POLY_FT4 *Ft4; // stack offset -56

		/* begin block 1.1 */
			// Start line: 283
			// Start offset: 0x8008C7DC

			/* begin block 1.1.1 */
				// Start line: 312
				// Start offset: 0x8008C8BC
				// Variables:
			// 		int Frame; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 313
					// Start offset: 0x8008C8BC

					/* begin block 1.1.1.1.1 */
						// Start line: 316
						// Start offset: 0x8008C8E0
						// Variables:
					// 		int FrmNum; // $v0
					// 		struct RECT R; // stack offset -64
					// 		int pOtPos; // $s1
					// 		struct POLY_FT4 *ShadFt4; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8008C8E0
					// End Line: 317
				/* end block 1.1.1.1 */
				// End offset: 0x8008C8E0
				// End Line: 317
			/* end block 1.1.1 */
			// End offset: 0x8008C8E0
			// End Line: 317

			/* begin block 1.1.2 */
				// Start line: 344
				// Start offset: 0x8008C9F4

				/* begin block 1.1.2.1 */
					// Start line: 345
					// Start offset: 0x8008C9F4

					/* begin block 1.1.2.1.1 */
						// Start line: 346
						// Start offset: 0x8008C9FC

						/* begin block 1.1.2.1.1.1 */
							// Start line: 349
							// Start offset: 0x8008C9FC

							/* begin block 1.1.2.1.1.1.1 */
								// Start line: 350
								// Start offset: 0x8008CA10
								// Variables:
							// 		int Frame; // $s4

								/* begin block 1.1.2.1.1.1.1.1 */
									// Start line: 351
									// Start offset: 0x8008CA10

									/* begin block 1.1.2.1.1.1.1.1.1 */
										// Start line: 354
										// Start offset: 0x8008CA38
										// Variables:
									// 		int FrmNum; // $s3
									// 		struct RECT R; // stack offset -64
									// 		int pOtPos; // $s1
									// 		struct POLY_FT4 *ShadFt4; // $s0

										/* begin block 1.1.2.1.1.1.1.1.1.1 */
											// Start line: 355
											// Start offset: 0x8008CA38

											/* begin block 1.1.2.1.1.1.1.1.1.1.1 */
												// Start line: 359
												// Start offset: 0x8008CA40
												// Variables:
											// 		int SpellFr; // $v1
											/* end block 1.1.2.1.1.1.1.1.1.1.1 */
											// End offset: 0x8008CA5C
											// End Line: 364
										/* end block 1.1.2.1.1.1.1.1.1.1 */
										// End offset: 0x8008CA5C
										// End Line: 364

										/* begin block 1.1.2.1.1.1.1.1.1.2 */
											// Start line: 398
											// Start offset: 0x8008CC1C

											/* begin block 1.1.2.1.1.1.1.1.1.2.1 */
												// Start line: 399
												// Start offset: 0x8008CC30
												// Variables:
											// 		int zX; // $s1
											// 		int zY; // $s0
											/* end block 1.1.2.1.1.1.1.1.1.2.1 */
											// End offset: 0x8008CC9C
											// End Line: 406
										/* end block 1.1.2.1.1.1.1.1.1.2 */
										// End offset: 0x8008CC9C
										// End Line: 406
									/* end block 1.1.2.1.1.1.1.1.1 */
									// End offset: 0x8008CC9C
									// End Line: 406
								/* end block 1.1.2.1.1.1.1.1 */
								// End offset: 0x8008CC9C
								// End Line: 410
							/* end block 1.1.2.1.1.1.1 */
							// End offset: 0x8008CC9C
							// End Line: 410
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x8008CC9C
						// End Line: 413
					/* end block 1.1.2.1.1 */
					// End offset: 0x8008CC9C
					// End Line: 413
				/* end block 1.1.2.1 */
				// End offset: 0x8008CC9C
				// End Line: 416
			/* end block 1.1.2 */
			// End offset: 0x8008CC9C
			// End Line: 416
		/* end block 1.1 */
		// End offset: 0x8008CC9C
		// End Line: 416
	/* end block 1 */
	// End offset: 0x8008CC9C
	// End Line: 416

	/* begin block 2 */
		// Start line: 634
	/* end block 2 */
	// End Line: 635

void Print__7CPlayerR12PlayerStructR7CBlocks(CPlayer *this,PlayerStruct *Plr,CBlocks *Bg)

{
	byte bVar1;
	int Action;
	int iVar2;
	POLY_FT4 *Ft4;
	int syoff;
	ulong *puVar3;
	int Frame;
	int iVar4;
	int iVar5;
	RECT local_40;
	POLY_FT4 *local_38 [2];
	int local_30;
	
	local_30 = ((int)Plr->_pxoff * 0x271) / 1000;
	syoff = ((int)Plr->_pyoff * 0x271) / 1000;
	iVar5 = (int)Plr->_px * 0x14;
	iVar4 = (int)Plr->_py * 0x14;
	Action = FindAction__7CPlayerR12PlayerStruct(this,Plr);
	if (Action == 5) {
		Action = Plr->_pAnimFrame;
		iVar2 = GetNumOfFrames__7TextDatii((TextDat *)this,0,5);
		if (Action + -1 < iVar2) {
			Action = GetFrNum__7TextDatiiii((TextDat *)this,0,5,(int)Plr->_pdir,Plr->_pAnimFrame + -1);
			iVar2 = GetPlrOt__7CBlocksi(Bg,(uint)this->PlayerNum);
			GetScrXY__7CBlocksR4RECTiiii(Bg,&local_40,iVar5 + 10,iVar4 + 10,local_30,syoff);
			local_38[0] = PrintFt4__7TextDatiiiiii
															((TextDat *)this,Action,(int)local_40.x,(int)local_40.y,0,iVar2 + 1,0)
			;
			this->LastScrX = (int)local_40.x;
			this->LastOtPos = iVar2;
			this->LastScrY = (int)local_40.y;
			local_38[0]->code = local_38[0]->code & 0xfd;
			Ft4 = PRIM_GetCopy__FP8POLY_FT4(local_38[0]);
			ShadScaleSkew__7CBlocksP8POLY_FT4(Ft4);
			puVar3 = ThisOt + iVar2;
			Ft4->tag = Ft4->tag & 0xff000000 | puVar3[1] & 0xffffff;
			puVar3[1] = puVar3[1] & 0xff000000 | (uint)Ft4 & 0xffffff;
			local_38[0]->code = local_38[0]->code | 1;
		}
	}
	else {
		if ((Action != -1) && (iVar2 = GetNumOfActions__7TextDati((TextDat *)this,0), Action < iVar2)) {
			Frame = Plr->_pAnimFrame + -1;
			iVar2 = GetNumOfFrames__7TextDatii((TextDat *)this,0,Action);
			if ((Frame < iVar2) || (Action == 4)) {
				if ((Action == 4) && (iVar2 = GetNumOfSpellAnims__FR12PlayerStruct(Plr), iVar2 <= Frame)) {
					Frame = iVar2 + -1;
				}
				Action = GetFrNum__7TextDatiiii((TextDat *)this,0,Action,(int)Plr->_pdir,Frame);
				iVar2 = GetPlrOt__7CBlocksi(Bg,(uint)this->PlayerNum);
				GetScrXY__7CBlocksR4RECTiiii(Bg,&local_40,iVar5 + 10,iVar4 + 10,local_30,syoff);
				local_38[0] = PrintFt4__7TextDatiiiiii
																((TextDat *)this,Action,(int)local_40.x,(int)local_40.y,0,iVar2 + 1,
																 0);
				this->LastScrX = (int)local_40.x;
				this->LastOtPos = iVar2;
				this->LastScrY = (int)local_40.y;
				if ((((&SpellFXDat)[(uint)this->PlayerNum].teleflag |
						 (&SpellFXDat)[(uint)this->PlayerNum].phaseflag) & 1U) == 0) {
					bVar1 = local_38[0]->code & 0xfd;
				}
				else {
					bVar1 = local_38[0]->code | 2;
				}
				local_38[0]->code = bVar1;
				Ft4 = PRIM_GetCopy__FP8POLY_FT4(local_38[0]);
				ShadScaleSkew__7CBlocksP8POLY_FT4(Ft4);
				puVar3 = ThisOt + iVar2;
				Ft4->tag = Ft4->tag & 0xff000000 | puVar3[1] & 0xffffff;
				puVar3[1] = puVar3[1] & 0xff000000 | (uint)Ft4 & 0xffffff;
				if (((&SpellFXDat)[(uint)this->PlayerNum].phaseflag & 1U) == 0) {
					local_38[0]->code = local_38[0]->code | 1;
				}
				else {
					local_38[0]->code = local_38[0]->code & 0xfe;
					local_38[0]->r0 = '@';
					local_38[0]->g0 = '@';
					local_38[0]->b0 = '@';
				}
				if (leveltype == '\0') {
					PRIM_GetPrim__FPP8POLY_FT4(local_38);
					PrepareFt4__7TextDatP8POLY_FT4iiiii
										((TextDat *)this,local_38[0],Action,(int)local_40.x,(int)local_40.y + 0x26,0,1);
					syoff = (int)daylight + 1;
					DoReflection__FP8POLY_FT4iii(local_38[0],syoff * 0x28,syoff * 0x48,syoff * 0x78);
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this /*$a0*/, struct PlayerStruct *Plr /*$a1*/)
 // line 426, offset 0x8008ccd0
	/* begin block 1 */
		// Start line: 427
		// Start offset: 0x8008CCD0
		// Variables:
	// 		int RetVal; // $v0
	/* end block 1 */
	// End offset: 0x8008CD3C
	// End Line: 485

	/* begin block 2 */
		// Start line: 1031
	/* end block 2 */
	// End Line: 1032

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
	case PL_DEATH:
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
		iVar2 = 5;
		break;
	case PL_LMAGIC:
	case PL_QMAGIC:
	case PL_FMAGIC:
		iVar2 = 4;
		break;
	default:
		iVar2 = -1;
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// enum PACTION /*$ra*/ FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this /*$a0*/, struct PlayerStruct *Plr /*$a1*/)
 // line 489, offset 0x8008cd4c
	/* begin block 1 */
		// Start line: 490
		// Start offset: 0x8008CD4C
	/* end block 1 */
	// End offset: 0x8008CDC0
	// End Line: 521

	/* begin block 2 */
		// Start line: 1159
	/* end block 2 */
	// End Line: 1160

PACTION FindActionEnum__7CPlayerR12PlayerStruct(CPlayer *this,PlayerStruct *Plr)

{
	PACTION PVar1;
	
	switch(Plr->_pmode) {
	case 0:
	case 10:
	case 0xb:
		PVar1 = PL_STAND;
		break;
	case 1:
	case 2:
	case 3:
		PVar1 = PL_WALK;
		break;
	case 4:
	case 5:
		PVar1 = PL_ATTACK;
		break;
	case 6:
	case 9:
		PVar1 = PL_STAND;
		if (leveltype != '\0') {
			PVar1 = PL_LMAGIC;
		}
		break;
	case 7:
		PVar1 = PL_HIT;
		break;
	case 8:
		PVar1 = PL_DEATH;
		break;
	default:
		PVar1 = PL_NOACTION;
	}
	return PVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init__7CPlayer(struct CPlayer *this /*$a0*/)
 // line 531, offset 0x8008cdc8
	/* begin block 1 */
		// Start line: 532
		// Start offset: 0x8008CDC8
	/* end block 1 */
	// End offset: 0x8008CDC8
	// End Line: 532

	/* begin block 2 */
		// Start line: 1242
	/* end block 2 */
	// End Line: 1243

void Init__7CPlayer(CPlayer *this)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Dump__7CPlayer(struct CPlayer *this /*$a0*/)
 // line 541, offset 0x8008cdd0
	/* begin block 1 */
		// Start line: 542
		// Start offset: 0x8008CDD0
	/* end block 1 */
	// End offset: 0x8008CDD0
	// End Line: 542

	/* begin block 2 */
		// Start line: 1262
	/* end block 2 */
	// End Line: 1263

void Dump__7CPlayer(CPlayer *this)

{
	return;
}





