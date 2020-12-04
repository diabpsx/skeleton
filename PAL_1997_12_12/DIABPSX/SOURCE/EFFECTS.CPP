#include "THISDUST.H"
#include "EFFECTS.H"


// decompiled code
// original method signature: 
// unsigned char /*$ra*/ effect_is_playing__Fi(int nSFX /*$a0*/)
 // line 77, offset 0x80039fcc
	/* begin block 1 */
		// Start line: 78
		// Start offset: 0x80039FCC
	/* end block 1 */
	// End offset: 0x80039FCC
	// End Line: 89

	/* begin block 2 */
		// Start line: 165
	/* end block 2 */
	// End Line: 166

uchar effect_is_playing__Fi(int nSFX)

{
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ stream_stop__Fv()
 // line 96, offset 0x80039fd4
	/* begin block 1 */
		// Start line: 97
		// Start offset: 0x80039FD4
	/* end block 1 */
	// End offset: 0x8003A00C
	// End Line: 104

	/* begin block 2 */
		// Start line: 192
	/* end block 2 */
	// End Line: 193

/* WARNING: Unknown calling convention yet parameter storage is locked */

void stream_stop__Fv(void)

{
	if ((FileSYS == 2) && (sghStream != (SFXHDR *)0x0)) {
		STR_SoundCommand__FP6SFXHDRi(sghStream,8);
		sghStream = (SFXHDR *)0x0;
		sgpStreamSFX = (TSFX *)0x0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ stream_play__FP4TSFXll(struct TSFX *pSFX /*$s1*/, long lVolume /*$s0*/, long lPan /*$a2*/)
 // line 116, offset 0x8003a01c
	/* begin block 1 */
		// Start line: 117
		// Start offset: 0x8003A01C
	/* end block 1 */
	// End offset: 0x8003A0C8
	// End Line: 141

	/* begin block 2 */
		// Start line: 232
	/* end block 2 */
	// End Line: 233

void stream_play__FP4TSFXll(TSFX *pSFX,long lVolume,long lPan)

{
	long lVar1;
	int volume;
	
	if (FileSYS == 2) {
		lVar1 = sglSoundVolume;
		if (((pSFX->bFlags & 1) == 0) && (lVar1 = sglSpeechVolume, (pSFX->bFlags & 0x70) == 0)) {
			stream_stop__Fv();
			lVar1 = sglSpeechVolume;
		}
		volume = lVolume + (lVar1 * sglMasterVolume >> 8);
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
 // line 149, offset 0x8003a0e0
	/* begin block 1 */
		// Start line: 150
		// Start offset: 0x8003A0E0
	/* end block 1 */
	// End offset: 0x8003A0E0
	// End Line: 152

	/* begin block 2 */
		// Start line: 314
	/* end block 2 */
	// End Line: 315

/* WARNING: Unknown calling convention yet parameter storage is locked */

void stream_update__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ sfx_stop__Fv()
 // line 171, offset 0x8003a0e8
	/* begin block 1 */
		// Start line: 172
		// Start offset: 0x8003A0E8

		/* begin block 1.1 */
			// Start line: 175
			// Start offset: 0x8003A0E8
			// Variables:
		// 		unsigned long d; // $v0
		/* end block 1.1 */
		// End offset: 0x8003A0FC
		// End Line: 179
	/* end block 1 */
	// End offset: 0x8003A0FC
	// End Line: 179

	/* begin block 2 */
		// Start line: 345
	/* end block 2 */
	// End Line: 346

/* WARNING: Unknown calling convention yet parameter storage is locked */

void sfx_stop__Fv(void)

{
	bool bVar1;
	int iVar2;
	
	iVar2 = 0x3d2;
	do {
		bVar1 = iVar2 != -1;
		iVar2 = iVar2 + -1;
	} while (bVar1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitMonsterSND__Fi(int monst /*$a0*/)
 // line 185, offset 0x8003a104
	/* begin block 1 */
		// Start line: 186
		// Start offset: 0x8003A104
		// Variables:
	// 		int mtype; // $a0
	/* end block 1 */
	// End offset: 0x8003A154
	// End Line: 193

	/* begin block 2 */
		// Start line: 372
	/* end block 2 */
	// End Line: 373

void InitMonsterSND__Fi(int monst)

{
	if (gbSndInited != '\0') {
		Monsters[monst].Snds = monsterdata[(uint)Monsters[monst].mtype].sndfile;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreeMonsterSnd__Fv()
 // line 222, offset 0x8003a15c
	/* begin block 1 */
		// Start line: 223
		// Start offset: 0x8003A15C
	/* end block 1 */
	// End offset: 0x8003A15C
	// End Line: 223

	/* begin block 2 */
		// Start line: 467
	/* end block 2 */
	// End Line: 468

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeMonsterSnd__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ calc_snd_position__FiiPlT2(int x /*$s2*/, int y /*$s1*/, long *plVolume /*$s4*/, long *plPan /*$s5*/)
 // line 251, offset 0x8003a164
	/* begin block 1 */
		// Start line: 252
		// Start offset: 0x8003A164
		// Variables:
	// 		long volume; // $v1
	// 		long pan; // $s3
	/* end block 1 */
	// End offset: 0x8003A240
	// End Line: 272

	/* begin block 2 */
		// Start line: 506
	/* end block 2 */
	// End Line: 507

uchar calc_snd_position__FiiPlT2(int x,int y,long *plVolume,long *plPan)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	int __x;
	
	x = x - (int)plr[myplr]._px;
	y = y - (int)plr[myplr]._py;
	__x = (x - y) * 0x100;
	iVar2 = abs(__x);
	uVar1 = '\0';
	if (iVar2 < 0x1901) {
		iVar2 = abs(x);
		iVar3 = abs(y);
		if (iVar2 <= iVar3) {
			x = y;
		}
		iVar2 = abs(x);
		uVar1 = '\x01';
		if (iVar2 << 6 < 0x1900) {
			*plVolume = iVar2 << 6;
			*plPan = __x;
		}
		else {
			uVar1 = '\0';
		}
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX /*$s0*/, unsigned char loc /*$a1*/, int x /*$a0*/, int y /*$a3*/)
 // line 278, offset 0x8003a268
	/* begin block 1 */
		// Start line: 279
		// Start offset: 0x8003A268
		// Variables:
	// 		long lPan; // stack offset -12
	// 		long lVolume; // stack offset -16
	/* end block 1 */
	// End offset: 0x8003A364
	// End Line: 308

	/* begin block 2 */
		// Start line: 563
	/* end block 2 */
	// End Line: 564

void PlaySFX_priv__FP4TSFXUcii(TSFX *pSFX,uchar loc,int x,int y)

{
	uchar uVar1;
	long local_10;
	long local_c;
	
	if ((((plr[myplr].pLvlLoad == '\0') || (gbMaxPlayers == '\x01')) && (gbSndInited != '\0')) &&
		 (gbSoundOn != '\0')) {
		local_c = 0;
		local_10 = 0;
		if ((loc == '\0') || (uVar1 = calc_snd_position__FiiPlT2(x,y,&local_10,&local_c), uVar1 != '\0')
			 ) {
			if (((pSFX->bFlags & 1) == 0) && ((pSFX->bFlags & 2) == 0)) {
				snd_play_snd__FP4TSFXll(pSFX,local_10,local_c);
			}
			else {
				stream_play__FP4TSFXll(pSFX,local_10,local_c);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlayEffect__Fii(int i /*$s0*/, int mode /*$s1*/)
 // line 318, offset 0x8003a378
	/* begin block 1 */
		// Start line: 319
		// Start offset: 0x8003A378
		// Variables:
	// 		int mi; // $s0
	// 		long lPan; // stack offset -20
	// 		long lVolume; // stack offset -24
	/* end block 1 */
	// End offset: 0x8003A48C
	// End Line: 363

	/* begin block 2 */
		// Start line: 643
	/* end block 2 */
	// End Line: 644

void PlayEffect__Fii(int i,int mode)

{
	char cVar1;
	uchar uVar2;
	long local_18;
	long local_14;
	
	random__Fil(0xa4,2);
	if ((((plr[myplr].pLvlLoad == '\0') && (gbSndInited != '\0')) && (gbSoundOn != '\0')) &&
		 (gbBufferMsgs == '\0')) {
		cVar1 = monster[i]._mMTidx;
		uVar2 = calc_snd_position__FiiPlT2((int)monster[i]._mx,(int)monster[i]._my,&local_18,&local_14);
		if (uVar2 != '\0') {
			snd_play_msnd__FUsll(Monsters[(int)cVar1].Snds + (short)mode,local_18,local_14);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndSFX__Fi(int psfx /*$s0*/)
 // line 370, offset 0x8003a4a4
	/* begin block 1 */
		// Start line: 371
		// Start offset: 0x8003A4A4
		// Variables:
	// 		int nRand; // $a1
	/* end block 1 */
	// End offset: 0x8003A528
	// End Line: 393

	/* begin block 2 */
		// Start line: 768
	/* end block 2 */
	// End Line: 769

int RndSFX__Fi(int psfx)

{
	long v;
	
	if (psfx == 0x316) {
LAB_8003a508:
		v = 2;
	}
	else {
		if (((psfx != 0x2d9) && (psfx != 0x2dc)) && (psfx != 0x2df)) {
			if ((((psfx == 0x240) || (psfx == 0x2a8)) ||
					((psfx == 9 || ((psfx == 0x43 || (psfx == 0x2c)))))) || (psfx == 0x10)) goto LAB_8003a508;
			if (psfx != 0x2cd) {
				return psfx;
			}
		}
		v = 3;
	}
	v = random__Fil(0xa5,v);
	return psfx + v;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaySFX__Fi(int psfx /*$a0*/)
 // line 407, offset 0x8003a53c
	/* begin block 1 */
		// Start line: 408
		// Start offset: 0x8003A53C
	/* end block 1 */
	// End offset: 0x8003A56C
	// End Line: 411

	/* begin block 2 */
		// Start line: 842
	/* end block 2 */
	// End Line: 843

void PlaySFX__Fi(_125fake psfx)

{
	int iVar1;
	
	iVar1 = RndSFX__Fi(psfx);
	PlaySFX_priv__FP4TSFXUcii(&sgSFX + iVar1,'\0',0,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaySfxLoc__Fiii(int psfx /*$a0*/, int x /*$s0*/, int y /*$s1*/)
 // line 418, offset 0x8003a57c
	/* begin block 1 */
		// Start line: 419
		// Start offset: 0x8003A57C
	/* end block 1 */
	// End offset: 0x8003A5B8
	// End Line: 429

	/* begin block 2 */
		// Start line: 864
	/* end block 2 */
	// End Line: 865

void PlaySfxLoc__Fiii(_125fake psfx,int x,int y)

{
	int iVar1;
	
	iVar1 = RndSFX__Fi(psfx);
	PlaySFX_priv__FP4TSFXUcii(&sgSFX + iVar1,'\x01',x,y);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ sound_stop__Fv()
 // line 435, offset 0x8003a5d0
	/* begin block 1 */
		// Start line: 436
		// Start offset: 0x8003A5D0
		// Variables:
	// 		int mi; // $s2
	// 		int mode; // $s1
	// 		int nr; // $s0

		/* begin block 1.1 */
			// Start line: 436
			// Start offset: 0x8003A5D0

			/* begin block 1.1.1 */
				// Start line: 444
				// Start offset: 0x8003A5FC

				/* begin block 1.1.1.1 */
					// Start line: 445
					// Start offset: 0x8003A614

					/* begin block 1.1.1.1.1 */
						// Start line: 445
						// Start offset: 0x8003A614

						/* begin block 1.1.1.1.1.1 */
							// Start line: 446
							// Start offset: 0x8003A620

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 446
								// Start offset: 0x8003A620
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8003A62C
							// End Line: 448
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8003A63C
						// End Line: 449
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003A63C
					// End Line: 449
				/* end block 1.1.1.1 */
				// End offset: 0x8003A644
				// End Line: 450
			/* end block 1.1.1 */
			// End offset: 0x8003A644
			// End Line: 450
		/* end block 1.1 */
		// End offset: 0x8003A64C
		// End Line: 451
	/* end block 1 */
	// End offset: 0x8003A64C
	// End Line: 451

	/* begin block 2 */
		// Start line: 898
	/* end block 2 */
	// End Line: 899

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
 // line 457, offset 0x8003a668
	/* begin block 1 */
		// Start line: 458
		// Start offset: 0x8003A668
	/* end block 1 */
	// End offset: 0x8003A68C
	// End Line: 463

	/* begin block 2 */
		// Start line: 946
	/* end block 2 */
	// End Line: 947

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
 // line 475, offset 0x8003a69c
	/* begin block 1 */
		// Start line: 476
		// Start offset: 0x8003A69C

		/* begin block 1.1 */
			// Start line: 484
			// Start offset: 0x8003A6B0
		/* end block 1.1 */
		// End offset: 0x8003A6D8
		// End Line: 506
	/* end block 1 */
	// End offset: 0x8003A6D8
	// End Line: 506

	/* begin block 2 */
		// Start line: 984
	/* end block 2 */
	// End Line: 985

void priv_sound_init__FUc(uchar bLoadMask)

{
	uint uVar1;
	
	if (gbSndInited != '\0') {
		uVar1 = 0;
		do {
			uVar1 = uVar1 + 4;
		} while (uVar1 < 0xf50);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ sound_init__Fv()
 // line 512, offset 0x8003a6e0
	/* begin block 1 */
		// Start line: 513
		// Start offset: 0x8003A6E0
		// Variables:
	// 		unsigned char bLoadMask; // $a0
	/* end block 1 */
	// End offset: 0x8003A778
	// End Line: 526

	/* begin block 2 */
		// Start line: 1056
	/* end block 2 */
	// End Line: 1057

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





