#include "THISDUST.H"
#include "SOUND.H"


// decompiled code
// original method signature: 
// void /*$ra*/ snd_update__FUc(unsigned char bStopAll /*$a0*/)
 // line 108, offset 0x80077d14
	/* begin block 1 */
		// Start line: 109
		// Start offset: 0x80077D14
	/* end block 1 */
	// End offset: 0x80077D14
	// End Line: 109

	/* begin block 2 */
		// Start line: 217
	/* end block 2 */
	// End Line: 218

/* WARNING: Unknown calling convention yet parameter storage is locked */

void snd_update__FUc(uchar bStopAll)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ snd_stop_snd__FP4TSnd(struct TSnd *pSnd /*$a0*/)
 // line 132, offset 0x80077d1c
	/* begin block 1 */
		// Start line: 133
		// Start offset: 0x80077D1C

		/* begin block 1.1 */
			// Start line: 133
			// Start offset: 0x80077D1C
			// Variables:
		// 		int v; // $s0
		/* end block 1.1 */
		// End offset: 0x80077D44
		// End Line: 137
	/* end block 1 */
	// End offset: 0x80077D44
	// End Line: 137

	/* begin block 2 */
		// Start line: 264
	/* end block 2 */
	// End Line: 265

/* WARNING: Unknown calling convention yet parameter storage is locked */

void snd_stop_snd__FP4TSnd(TSnd *pSnd)

{
	int voice;
	
	voice = 0;
	do {
		SND_StopSnd__Fi(voice);
		voice = voice + 1;
	} while (voice < 0x18);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ snd_play_snd__FP4TSFXll(struct TSFX *pSnd /*$a0*/, long lVolume /*$a1*/, long lPan /*$a2*/)
 // line 145, offset 0x80077d58
	/* begin block 1 */
		// Start line: 146
		// Start offset: 0x80077D58
	/* end block 1 */
	// End offset: 0x80077D90
	// End Line: 163

	/* begin block 2 */
		// Start line: 291
	/* end block 2 */
	// End Line: 292

/* WARNING: Unknown calling convention yet parameter storage is locked */

void snd_play_snd__FP4TSFXll(TSFX *pSnd,long lVolume,long lPan)

{
	int vol;
	
	if (pSnd != (TSFX *)0x0) {
		vol = lVolume << 1;
		if (vol < 0) {
			vol = 0;
		}
		else {
			if (0x3fff < vol) {
				vol = 0x3fff;
			}
		}
		SND_PlaySnd__FUsiii(pSnd->pszName,vol,lPan,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ snd_play_msnd__FUsll(unsigned short pszName /*$s0*/, long lVolume /*$s1*/, long lPan /*$s3*/)
 // line 172, offset 0x80077da0
	/* begin block 1 */
		// Start line: 173
		// Start offset: 0x80077DA0
		// Variables:
	// 		int padj; // $s2
	/* end block 1 */
	// End offset: 0x80077E20
	// End Line: 202

	/* begin block 2 */
		// Start line: 345
	/* end block 2 */
	// End Line: 346

/* WARNING: Unknown calling convention yet parameter storage is locked */

void snd_play_msnd__FUsll(ushort pszName,long lVolume,long lPan)

{
	ulong uVar1;
	int pitchadj;
	
	if (lVolume < 0) {
		lVolume = 0;
	}
	else {
		if (0x3fff < lVolume) {
			lVolume = 0x3fff;
		}
	}
	uVar1 = GU_GetRnd();
	pitchadj = (uVar1 & 0x7f) - 0x40;
	SND_PlaySnd__FUsiii(pszName,lVolume,lPan,pitchadj);
	if (pszName == 0x391) {
		SND_PlaySnd__FUsiii(0x395,lVolume,lPan,pitchadj);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ snd_init__FUl(unsigned long hWnd /*$a0*/)
 // line 209, offset 0x80077e40
	/* begin block 1 */
		// Start line: 210
		// Start offset: 0x80077E40
	/* end block 1 */
	// End offset: 0x80077E48
	// End Line: 217

	/* begin block 2 */
		// Start line: 429
	/* end block 2 */
	// End Line: 430

/* WARNING: Unknown calling convention yet parameter storage is locked */

void snd_init__FUl(ulong hWnd)

{
	gbSndInited = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ music_stop__Fv()
 // line 227, offset 0x80077e50
	/* begin block 1 */
		// Start line: 228
		// Start offset: 0x80077E50
	/* end block 1 */
	// End offset: 0x80077E80
	// End Line: 233

	/* begin block 2 */
		// Start line: 458
	/* end block 2 */
	// End Line: 459

/* WARNING: Unknown calling convention yet parameter storage is locked */

void music_stop__Fv(void)

{
	if ((FileSYS == 2) && (sghMusic != (SFXHDR *)0x0)) {
		STR_SoundCommand__FP6SFXHDRi(sghMusic,8);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ music_fade__Fv()
 // line 245, offset 0x80077e90
	/* begin block 1 */
		// Start line: 246
		// Start offset: 0x80077E90
	/* end block 1 */
	// End offset: 0x80077EC0
	// End Line: 252

	/* begin block 2 */
		// Start line: 494
	/* end block 2 */
	// End Line: 495

/* WARNING: Unknown calling convention yet parameter storage is locked */

void music_fade__Fv(void)

{
	if ((FileSYS == 2) && (sghMusic != (SFXHDR *)0x0)) {
		STR_SoundCommand__FP6SFXHDRi(sghMusic,5);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ music_start__Fi(int nTrack /*$s0*/)
 // line 261, offset 0x80077ed0
	/* begin block 1 */
		// Start line: 262
		// Start offset: 0x80077ED0

		/* begin block 1.1 */
			// Start line: 262
			// Start offset: 0x80077ED0

			/* begin block 1.1.1 */
				// Start line: 264
				// Start offset: 0x80077EF0
				// Variables:
			// 		int MusicVolume; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80077F5C
			// End Line: 277
		/* end block 1.1 */
		// End offset: 0x80077F5C
		// End Line: 277
	/* end block 1 */
	// End offset: 0x80077F5C
	// End Line: 277

	/* begin block 2 */
		// Start line: 526
	/* end block 2 */
	// End Line: 527

/* WARNING: Unknown calling convention yet parameter storage is locked */

void music_start__Fi(int nTrack)

{
	int iVar1;
	
	iVar1 = sgnMusicTrack;
	if (FileSYS == 2) {
		if (sghMusic != (SFXHDR *)0x0) {
			music_stop__Fv();
		}
		sghMusic = STR_PlaySound__FUscic
												 (sgszMusicTracks[nTrack],'\x01',sglMusicVolume * sglMasterVolume >> 8,
													'\x01');
		iVar1 = nTrack;
		if (sghMusic == (SFXHDR *)0x0) {
			DBG_Error((char *)0x0,"source/SOUND.cpp",0x113);
			iVar1 = nTrack;
		}
	}
	sgnMusicTrack = iVar1;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ snd_playing__Fi(int SFXNo /*$a0*/)
 // line 315, offset 0x80077f70
	/* begin block 1 */
		// Start line: 316
		// Start offset: 0x80077F70
	/* end block 1 */
	// End offset: 0x80077F80
	// End Line: 317

	/* begin block 2 */
		// Start line: 634
	/* end block 2 */
	// End Line: 635

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar snd_playing__Fi(int SFXNo)

{
	void *pvVar1;
	
	pvVar1 = SND_IsSfxPlaying__Fi(SFXNo);
	return (uchar)pvVar1;
}





