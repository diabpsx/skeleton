#include "THISDUST.H"
#include "EFFECTS.H"


// decompiled code
// original method signature: 
// unsigned char /*$ra*/ effect_is_playing__Fi(int nSFX /*$a0*/)
 // line 83, offset 0x8003cf34
	/* begin block 1 */
		// Start line: 84
		// Start offset: 0x8003CF34
	/* end block 1 */
	// End offset: 0x8003CF54
	// End Line: 100

	/* begin block 2 */
		// Start line: 177
	/* end block 2 */
	// End Line: 178

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar effect_is_playing__Fi(int nSFX)

{
	bool bVar1;
	
	bVar1 = false;
	if (sghStream != (SFXHDR *)0x0) {
		bVar1 = sghStream->SfxNo == nSFX;
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ stream_stop__Fv()
 // line 107, offset 0x8003cf5c
	/* begin block 1 */
		// Start line: 108
		// Start offset: 0x8003CF5C
	/* end block 1 */
	// End offset: 0x8003CFA8
	// End Line: 118

	/* begin block 2 */
		// Start line: 214
	/* end block 2 */
	// End Line: 215

/* WARNING: Unknown calling convention yet parameter storage is locked */

void stream_stop__Fv(void)

{
	if (FileSYS == 2) {
		SFXHDR_800b9c64.volume = 0;
		STR_setvolume__FP6SFXHDR(&SFXHDR_800b9c64);
		if (sghStream != (SFXHDR *)0x0) {
			STR_SoundCommand__FP6SFXHDRi(sghStream,8);
			TSK_Sleep(1);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ stream_pause__Fv()
 // line 127, offset 0x8003cfb8
	/* begin block 1 */
		// Start line: 128
		// Start offset: 0x8003CFB8
	/* end block 1 */
	// End offset: 0x8003D00C
	// End Line: 138

	/* begin block 2 */
		// Start line: 254
	/* end block 2 */
	// End Line: 255

/* WARNING: Unknown calling convention yet parameter storage is locked */

void stream_pause__Fv(void)

{
	if (FileSYS == 2) {
		SFXHDR_800b9c64.volume = 0;
		STR_setvolume__FP6SFXHDR(&SFXHDR_800b9c64);
		if ((sghStream != (SFXHDR *)0x0) && (sghStream->used != '\0')) {
			STR_SoundCommand__FP6SFXHDRi(sghStream,3);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ stream_resume__Fv()
 // line 148, offset 0x8003d01c
	/* begin block 1 */
		// Start line: 149
		// Start offset: 0x8003D01C
	/* end block 1 */
	// End offset: 0x8003D05C
	// End Line: 157

	/* begin block 2 */
		// Start line: 296
	/* end block 2 */
	// End Line: 297

/* WARNING: Unknown calling convention yet parameter storage is locked */

void stream_resume__Fv(void)

{
	if (((FileSYS == 2) && (sghStream != (SFXHDR *)0x0)) && (sghStream->used != '\0')) {
		STR_SoundCommand__FP6SFXHDRi(sghStream,4);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ stream_play__FP4TSFXll(struct TSFX *pSFX /*$s1*/, long lVolume /*$s0*/, long lPan /*$a2*/)
 // line 169, offset 0x8003d06c
	/* begin block 1 */
		// Start line: 170
		// Start offset: 0x8003D06C
	/* end block 1 */
	// End offset: 0x8003D140
	// End Line: 205

	/* begin block 2 */
		// Start line: 338
	/* end block 2 */
	// End Line: 339

/* WARNING: Unknown calling convention yet parameter storage is locked */

void stream_play__FP4TSFXll(TSFX *pSFX,long lVolume,long lPan)

{
	int volume;
	
	if ((FileSYS == 2) && (CDWAIT == (void *)0x0)) {
		if ((pSFX->bFlags & 1) == 0) {
			if ((pSFX->bFlags & 0x70) == 0) {
				stream_stop__Fv();
			}
			volume = sglSpeechVolume * sglMasterVolume;
		}
		else {
			volume = sglSoundVolume * sglMasterVolume;
			stream_stop__Fv();
		}
		volume = volume >> 8;
		if (-1 < volume) {
			if (0x3fff < volume) {
				volume = 0x3fff;
			}
			sghStream = STR_PlaySound__FUscic(pSFX->pszName,'\0',volume,'\0');
			sgpStreamSFX = pSFX;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ stream_update__Fv()
 // line 213, offset 0x8003d158
	/* begin block 1 */
		// Start line: 214
		// Start offset: 0x8003D158
	/* end block 1 */
	// End offset: 0x8003D158
	// End Line: 216

	/* begin block 2 */
		// Start line: 447
	/* end block 2 */
	// End Line: 448

/* WARNING: Unknown calling convention yet parameter storage is locked */

void stream_update__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ sfx_stop__Fv()
 // line 235, offset 0x8003d160
	/* begin block 1 */
		// Start line: 236
		// Start offset: 0x8003D160

		/* begin block 1.1 */
			// Start line: 239
			// Start offset: 0x8003D160
			// Variables:
		// 		unsigned long d; // $v0
		/* end block 1.1 */
		// End offset: 0x8003D174
		// End Line: 243
	/* end block 1 */
	// End offset: 0x8003D174
	// End Line: 243

	/* begin block 2 */
		// Start line: 478
	/* end block 2 */
	// End Line: 479

/* WARNING: Unknown calling convention yet parameter storage is locked */

void sfx_stop__Fv(void)

{
	bool bVar1;
	int iVar2;
	
	iVar2 = 0x3de;
	do {
		bVar1 = iVar2 != -1;
		iVar2 = iVar2 + -1;
	} while (bVar1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitMonsterSND__Fi(int monst /*$a0*/)
 // line 249, offset 0x8003d17c
	/* begin block 1 */
		// Start line: 250
		// Start offset: 0x8003D17C
		// Variables:
	// 		int mtype; // $a0
	/* end block 1 */
	// End offset: 0x8003D1CC
	// End Line: 257

	/* begin block 2 */
		// Start line: 505
	/* end block 2 */
	// End Line: 506

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitMonsterSND__Fi(int monst)

{
	if (gbSndInited != '\0') {
		(&monster[0xc5].mMagicRes)[monst * 0xe] =
				 monsterdata[(uint)(byte)(&monster[0xc5]._mMTidx)[monst * 0x1c]].sndfile;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreeMonsterSnd__Fv()
 // line 286, offset 0x8003d1d4
	/* begin block 1 */
		// Start line: 287
		// Start offset: 0x8003D1D4
	/* end block 1 */
	// End offset: 0x8003D1D4
	// End Line: 287

	/* begin block 2 */
		// Start line: 600
	/* end block 2 */
	// End Line: 601

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeMonsterSnd__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ calc_snd_position__FiiPlT2(int x /*$s0*/, int y /*$s1*/, long *plVolume /*$s2*/, long *plPan /*$s3*/)
 // line 327, offset 0x8003d1dc
	/* begin block 1 */
		// Start line: 328
		// Start offset: 0x8003D1DC
		// Variables:
	// 		char Temp[64]; // stack offset -96
	// 		long volume; // $-1
	// 		long pan; // $a2
	// 		int scrx; // $a1
	// 		int scry; // $a0
	// 		struct CBlocks *gblocks; // $v0
	// 		struct RECT R; // stack offset -32
	// 		long vol; // $v1
	/* end block 1 */
	// End offset: 0x8003D3A4
	// End Line: 369

	/* begin block 2 */
		// Start line: 664
	/* end block 2 */
	// End Line: 665

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar calc_snd_position__FiiPlT2(int x,int y,long *plVolume,long *plPan)

{
	CBlocks *this;
	int iVar1;
	int iVar2;
	int iVar3;
	RECT local_20;
	
	*plVolume = sglSoundVolume * sglMasterVolume >> 8;
	*plPan = 0x8000;
	if (dung_map[x * 0x70 + y].dFlags != '\0') {
		if (x + y == 0) {
			return '\x01';
		}
		this = BL_GetCurrentBlocks__Fv();
		if (this != (CBlocks *)0x0) {
			GetScrXY__7CBlocksR4RECTiiii(this,&local_20,x * 0x14,y * 0x14,0,0);
			iVar2 = (int)local_20.x;
			if (iVar2 < SFXX) {
				return '\0';
			}
			if (SFXX + SFXW < iVar2) {
				return '\0';
			}
			if ((int)local_20.y < SFXY) {
				return '\0';
			}
			if ((int)local_20.y <= SFXY + SFXH) {
				if (MONO != (void *)0x0) {
					return '\x01';
				}
				iVar3 = iVar2 * 0xcc;
				if (iVar3 < 0) {
					iVar3 = 0;
				}
				if (0x10000 < iVar3) {
					iVar3 = 0x10000;
				}
				iVar1 = (int)(SFXW + ((uint)SFXW >> 0x1f)) >> 1;
				if (iVar1 < iVar2) {
					iVar2 = SFXW - iVar2;
				}
				*plVolume = iVar2 * 2 * ((sglSoundVolume * sglMasterVolume * 0x100) / iVar1) >> 0x10;
				*plPan = iVar3;
				return '\x01';
			}
		}
	}
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX /*$s0*/, unsigned char loc /*$a1*/, int x /*$a0*/, int y /*$a3*/)
 // line 375, offset 0x8003d3c4
	/* begin block 1 */
		// Start line: 376
		// Start offset: 0x8003D3C4
		// Variables:
	// 		long lPan; // stack offset -20
	// 		long lVolume; // stack offset -24
	/* end block 1 */
	// End offset: 0x8003D510
	// End Line: 423

	/* begin block 2 */
		// Start line: 771
	/* end block 2 */
	// End Line: 772

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlaySFX_priv__FP4TSFXUcii(TSFX *pSFX,uchar loc,int x,int y)

{
	uchar uVar1;
	int local_18;
	long local_14;
	
	if (gbSndInited != '\0') {
		local_14 = 0x8000;
		local_18 = sglSoundVolume * sglMasterVolume >> 8;
		if ((loc == '\0') ||
			 (uVar1 = calc_snd_position__FiiPlT2(x,y,&local_18,&local_14), uVar1 != '\0')) {
			if (((pSFX->bFlags & 1) == 0) && ((pSFX->bFlags & 2) == 0)) {
				if (((*(ushort *)pSFX & 0xc00) != 0) ||
					 (uVar1 = snd_playing__Fi((uint)pSFX->pszName), uVar1 == '\0')) {
					snd_play_snd__FP4TSFXll(pSFX,local_18,local_14);
				}
			}
			else {
				local_14 = 0x8000;
				local_18 = sglSoundVolume * sglMasterVolume >> 8;
				if (optionsflag == (void *)0x0) {
					stream_play__FP4TSFXll(pSFX,local_18,0x8000);
				}
				else {
					local_18 = sglSpeechVolume * sglMasterVolume >> 8;
					SND_PlaySnd__FUsiii(sgSFX[50].pszName,local_18,0x8000,0);
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlayEffect__Fii(int i /*$s0*/, int mode /*$s2*/)
 // line 433, offset 0x8003d528
	/* begin block 1 */
		// Start line: 434
		// Start offset: 0x8003D528
		// Variables:
	// 		int mi; // $v1
	// 		long lPan; // stack offset -20
	// 		long lVolume; // stack offset -24
	/* end block 1 */
	// End offset: 0x8003D654
	// End Line: 478

	/* begin block 2 */
		// Start line: 896
	/* end block 2 */
	// End Line: 897

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlayEffect__Fii(int i,int mode)

{
	char cVar1;
	uchar uVar2;
	long local_18;
	long local_14;
	
	ENG_random__Fl(2);
	if (((plr[myplr].pLvlLoad == '\0') && (gbSndInited != '\0')) && (gbBufferMsgs == '\0')) {
		cVar1 = monster[i]._mMTidx;
		uVar2 = snd_playing__Fi((uint)(&monster[0xc5].mMagicRes)[(int)cVar1 * 0xe] + mode);
		if ((uVar2 == '\0') &&
			 (uVar2 = calc_snd_position__FiiPlT2
													((int)monster[i]._mx,(int)monster[i]._my,&local_18,&local_14),
			 uVar2 != '\0')) {
			snd_play_msnd__FUsll
								((&monster[0xc5].mMagicRes)[(int)cVar1 * 0xe] + (short)mode,local_18,local_14);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndSFX__Fi(int psfx /*$s0*/)
 // line 485, offset 0x8003d670
	/* begin block 1 */
		// Start line: 486
		// Start offset: 0x8003D670
		// Variables:
	// 		int nRand; // $a0
	/* end block 1 */
	// End offset: 0x8003D704
	// End Line: 512

	/* begin block 2 */
		// Start line: 1004
	/* end block 2 */
	// End Line: 1005

/* WARNING: Unknown calling convention yet parameter storage is locked */

int RndSFX__Fi(int psfx)

{
	long v;
	
	if (psfx == 0x316) {
LAB_8003d6d4:
		v = 2;
	}
	else {
		if (((psfx != 0x2d9) && (psfx != 0x2dc)) && (psfx != 0x2df)) {
			if ((((psfx == 0x240) || (psfx == 0x2a8)) ||
					((psfx == 9 || ((psfx == 0x43 || (psfx == 0x2c)))))) || (psfx == 0x10)) goto LAB_8003d6d4;
			if (psfx == 0) {
				return 2;
			}
			if (psfx != 0x2cd) {
				return psfx;
			}
		}
		v = 3;
	}
	v = ENG_random__Fl(v);
	return psfx + v;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaySFX__Fi(int psfx /*$a0*/)
 // line 520, offset 0x8003d718
	/* begin block 1 */
		// Start line: 521
		// Start offset: 0x8003D718
	/* end block 1 */
	// End offset: 0x8003D774
	// End Line: 528

	/* begin block 2 */
		// Start line: 1074
	/* end block 2 */
	// End Line: 1075

void PlaySFX__Fi(_135fake psfx)

{
	int iVar1;
	
	if (((psfx != PS_WALK1) || (plr[0].plractive == '\0')) || (plr[1].plractive == '\0')) {
		iVar1 = RndSFX__Fi(psfx);
		PlaySFX_priv__FP4TSFXUcii(sgSFX + iVar1,'\0',0,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaySfxLoc__Fiii(int psfx /*$v1*/, int x /*$s0*/, int y /*$s1*/)
 // line 535, offset 0x8003d784
	/* begin block 1 */
		// Start line: 536
		// Start offset: 0x8003D784
	/* end block 1 */
	// End offset: 0x8003D818
	// End Line: 548

	/* begin block 2 */
		// Start line: 1104
	/* end block 2 */
	// End Line: 1105

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlaySfxLoc__Fiii(int psfx,int x,int y)

{
	uint uVar1;
	uchar loc;
	
	uVar1 = RndSFX__Fi(psfx);
	if (uVar1 < 4) {
		if ((plr[0].plractive != '\0') && (plr[1].plractive != '\0')) {
			return;
		}
		loc = '\0';
		x = 0;
		y = 0;
	}
	else {
		loc = '\x01';
	}
	PlaySFX_priv__FP4TSFXUcii(sgSFX + uVar1,loc,x,y);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ sound_stop__Fv()
 // line 554, offset 0x8003d830
	/* begin block 1 */
		// Start line: 555
		// Start offset: 0x8003D830
		// Variables:
	// 		int mi; // $s2
	// 		int mode; // $s1
	// 		int nr; // $s0

		/* begin block 1.1 */
			// Start line: 555
			// Start offset: 0x8003D830

			/* begin block 1.1.1 */
				// Start line: 563
				// Start offset: 0x8003D85C

				/* begin block 1.1.1.1 */
					// Start line: 564
					// Start offset: 0x8003D874

					/* begin block 1.1.1.1.1 */
						// Start line: 564
						// Start offset: 0x8003D874

						/* begin block 1.1.1.1.1.1 */
							// Start line: 565
							// Start offset: 0x8003D880

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 565
								// Start offset: 0x8003D880
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8003D88C
							// End Line: 567
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8003D89C
						// End Line: 568
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003D89C
					// End Line: 568
				/* end block 1.1.1.1 */
				// End offset: 0x8003D8A4
				// End Line: 569
			/* end block 1.1.1 */
			// End offset: 0x8003D8A4
			// End Line: 569
		/* end block 1.1 */
		// End offset: 0x8003D8AC
		// End Line: 570
	/* end block 1 */
	// End offset: 0x8003D8AC
	// End Line: 570

	/* begin block 2 */
		// Start line: 1142
	/* end block 2 */
	// End Line: 1143

/* WARNING: Unknown calling convention yet parameter storage is locked */

void sound_stop__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	snd_update__FUc('\x01');
	iVar3 = 0;
	stream_stop__Fv();
	sfx_stop__Fv();
	while (iVar2 = 0, iVar3 < nummtypes) {
		while (iVar1 = 0, iVar2 < 4) {
			while (iVar1 < 2) {
				snd_stop_snd__FP4TSnd((TSnd *)0x0);
				iVar1 = iVar1 + 1;
			}
			iVar2 = iVar2 + 1;
		}
		iVar3 = iVar3 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ sound_update__Fv()
 // line 576, offset 0x8003d8c8
	/* begin block 1 */
		// Start line: 577
		// Start offset: 0x8003D8C8
	/* end block 1 */
	// End offset: 0x8003D8EC
	// End Line: 582

	/* begin block 2 */
		// Start line: 1190
	/* end block 2 */
	// End Line: 1191

/* WARNING: Unknown calling convention yet parameter storage is locked */

void sound_update__Fv(void)

{
	if (gbSndInited != '\0') {
		snd_update__FUc('\0');
		stream_update__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ priv_sound_init__FUc(unsigned char bLoadMask /*$a1*/)
 // line 594, offset 0x8003d8fc
	/* begin block 1 */
		// Start line: 595
		// Start offset: 0x8003D8FC

		/* begin block 1.1 */
			// Start line: 603
			// Start offset: 0x8003D910
		/* end block 1.1 */
		// End offset: 0x8003D938
		// End Line: 625
	/* end block 1 */
	// End offset: 0x8003D938
	// End Line: 625

	/* begin block 2 */
		// Start line: 1228
	/* end block 2 */
	// End Line: 1229

/* WARNING: Unknown calling convention yet parameter storage is locked */

void priv_sound_init__FUc(uchar bLoadMask)

{
	uint uVar1;
	
	if (gbSndInited != '\0') {
		uVar1 = 0;
		do {
			uVar1 = uVar1 + 4;
		} while (uVar1 < 0xf80);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ sound_init__Fv()
 // line 631, offset 0x8003d940
	/* begin block 1 */
		// Start line: 632
		// Start offset: 0x8003D940
		// Variables:
	// 		unsigned char bLoadMask; // $a0
	/* end block 1 */
	// End offset: 0x8003D9D8
	// End Line: 645

	/* begin block 2 */
		// Start line: 1300
	/* end block 2 */
	// End Line: 1301

/* WARNING: Unknown calling convention yet parameter storage is locked */

void sound_init__Fv(void)

{
	char cVar1;
	uchar bLoadMask;
	
	bLoadMask = '\0';
	if (gbMaxPlayers < 2) {
		cVar1 = plr[myplr]._pClass;
		if (cVar1 == '\0') {
			bLoadMask = ' ';
		}
		else {
			if (cVar1 == '\x01') {
				bLoadMask = '\x10';
			}
			else {
				if (cVar1 == '\x02') {
					bLoadMask = '@';
				}
			}
		}
	}
	else {
		bLoadMask = 'p';
	}
	priv_sound_init__FUc(bLoadMask);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ stream_fade__Fv()
 // line 656, offset 0x8003d9e8
	/* begin block 1 */
		// Start line: 657
		// Start offset: 0x8003D9E8
	/* end block 1 */
	// End offset: 0x8003DA18
	// End Line: 664

	/* begin block 2 */
		// Start line: 1351
	/* end block 2 */
	// End Line: 1352

/* WARNING: Unknown calling convention yet parameter storage is locked */

void stream_fade__Fv(void)

{
	if ((FileSYS == 2) && (sghStream != (SFXHDR *)0x0)) {
		STR_SoundCommand__FP6SFXHDRi(sghStream,5);
	}
	return;
}





