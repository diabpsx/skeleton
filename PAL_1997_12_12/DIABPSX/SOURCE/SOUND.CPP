#include "THISDUST.H"
#include "SOUND.H"


// decompiled code
// original method signature: 
// void /*$ra*/ snd_update__FUc(unsigned char bStopAll /*$a0*/)
 // line 106, offset 0x80070848
	/* begin block 1 */
		// Start line: 107
		// Start offset: 0x80070848
	/* end block 1 */
	// End offset: 0x80070848
	// End Line: 107

	/* begin block 2 */
		// Start line: 213
	/* end block 2 */
	// End Line: 214

void snd_update__FUc(uchar bStopAll)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ snd_get_volume__FPCcPl(char *pszKey /*$a0*/, long *plVolume /*$a1*/)
 // line 113, offset 0x80070850
	/* begin block 1 */
		// Start line: 114
		// Start offset: 0x80070850
		// Variables:
	// 		unsigned long dwTemp; // $v0
	/* end block 1 */
	// End offset: 0x800708B0
	// End Line: 122

	/* begin block 2 */
		// Start line: 227
	/* end block 2 */
	// End Line: 228

void snd_get_volume__FPCcPl(char *pszKey,long *plVolume)

{
	int iVar1;
	
	iVar1 = *plVolume;
	*plVolume = iVar1;
	if (iVar1 < 0) {
		*plVolume = 0;
	}
	else {
		if (0x3fff < iVar1) {
			*plVolume = 0x3fff;
		}
	}
	*plVolume = (*plVolume / 100) * 100;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ snd_stop_snd__FP4TSnd(struct TSnd *pSnd /*$a0*/)
 // line 128, offset 0x800708b8
	/* begin block 1 */
		// Start line: 129
		// Start offset: 0x800708B8
	/* end block 1 */
	// End offset: 0x800708C8
	// End Line: 131

	/* begin block 2 */
		// Start line: 256
	/* end block 2 */
	// End Line: 257

void snd_stop_snd__FP4TSnd(TSnd *pSnd)

{
	SND_StopSnd__Fi(-1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ snd_play_snd__FP4TSFXll(struct TSFX *pSnd /*$a0*/, long lVolume /*$a1*/, long lPan /*$a2*/)
 // line 141, offset 0x800708d8
	/* begin block 1 */
		// Start line: 142
		// Start offset: 0x800708D8
	/* end block 1 */
	// End offset: 0x80070938
	// End Line: 158

	/* begin block 2 */
		// Start line: 282
	/* end block 2 */
	// End Line: 283

void snd_play_snd__FP4TSFXll(TSFX *pSnd,long lVolume,long lPan)

{
	int vol;
	
	if ((pSnd != (TSFX *)0x0) && (gbSoundOn != '\0')) {
		vol = lVolume + (sglSoundVolume * sglMasterVolume >> 8);
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
// void /*$ra*/ snd_play_msnd__FUsll(unsigned short pszName /*$s1*/, long lVolume /*$s0*/, long lPan /*$s2*/)
 // line 167, offset 0x80070948
	/* begin block 1 */
		// Start line: 168
		// Start offset: 0x80070948
	/* end block 1 */
	// End offset: 0x800709C8
	// End Line: 195

	/* begin block 2 */
		// Start line: 338
	/* end block 2 */
	// End Line: 339

void snd_play_msnd__FUsll(ushort pszName,long lVolume,long lPan)

{
	ulong uVar1;
	int vol;
	
	if (gbSoundOn != '\0') {
		vol = lVolume + (sglSoundVolume * sglMasterVolume >> 8);
		if (vol < 0) {
			vol = 0;
		}
		else {
			if (0x3fff < vol) {
				vol = 0x3fff;
			}
		}
		uVar1 = GU_GetRnd();
		SND_PlaySnd__FUsiii(pszName,vol,lPan,(uVar1 & 0x7f) - 0x40);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ snd_init__FUl(unsigned long hWnd /*$a0*/)
 // line 209, offset 0x800709e4
	/* begin block 1 */
		// Start line: 210
		// Start offset: 0x800709E4
	/* end block 1 */
	// End offset: 0x80070A30
	// End Line: 217

	/* begin block 2 */
		// Start line: 422
	/* end block 2 */
	// End Line: 423

void snd_init__FUl(ulong hWnd)

{
	char *pszKey;
	
	pszKey = GetStr__Fi(STR_SOUND_VOLUME);
	snd_get_volume__FPCcPl(pszKey,&sglSoundVolume);
	gbSoundOn = 0 < sglSoundVolume;
	snd_get_volume__FPCcPl("Music Volume",&sglMusicVolume);
	gbSndInited = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ music_stop__Fv()
 // line 227, offset 0x80070a40
	/* begin block 1 */
		// Start line: 228
		// Start offset: 0x80070A40
	/* end block 1 */
	// End offset: 0x80070A74
	// End Line: 234

	/* begin block 2 */
		// Start line: 460
	/* end block 2 */
	// End Line: 461

/* WARNING: Unknown calling convention yet parameter storage is locked */

void music_stop__Fv(void)

{
	if ((FileSYS == 2) && (sghMusic != (SFXHDR *)0x0)) {
		STR_SoundCommand__FP6SFXHDRi(sghMusic,8);
		sghMusic = (SFXHDR *)0x0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ music_fade__Fv()
 // line 245, offset 0x80070a84
	/* begin block 1 */
		// Start line: 246
		// Start offset: 0x80070A84
	/* end block 1 */
	// End offset: 0x80070AB4
	// End Line: 252

	/* begin block 2 */
		// Start line: 496
	/* end block 2 */
	// End Line: 497

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
 // line 261, offset 0x80070ac4
	/* begin block 1 */
		// Start line: 262
		// Start offset: 0x80070AC4

		/* begin block 1.1 */
			// Start line: 262
			// Start offset: 0x80070AC4

			/* begin block 1.1.1 */
				// Start line: 264
				// Start offset: 0x80070AE4
				// Variables:
			// 		int MusicVolume; // $a2
			/* end block 1.1.1 */
			// End offset: 0x80070B3C
			// End Line: 276
		/* end block 1.1 */
		// End offset: 0x80070B3C
		// End Line: 276
	/* end block 1 */
	// End offset: 0x80070B3C
	// End Line: 276

	/* begin block 2 */
		// Start line: 528
	/* end block 2 */
	// End Line: 529

void music_start__Fi(int nTrack)

{
	int iVar1;
	
	if (FileSYS == 2) {
		music_stop__Fv();
		iVar1 = sglMusicVolume + -0x1000;
		if (iVar1 < 0) {
			iVar1 = 0;
		}
		sghMusic = STR_PlaySound__FUscic
												 (sgszMusicTracks[nTrack],'\x01',iVar1 * sglMasterVolume >> 8,'\x01');
		sgnMusicTrack = nTrack;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ music_hold__Fv()
 // line 284, offset 0x80070b50
	/* begin block 1 */
		// Start line: 285
		// Start offset: 0x80070B50
	/* end block 1 */
	// End offset: 0x80070BA0
	// End Line: 291

	/* begin block 2 */
		// Start line: 575
	/* end block 2 */
	// End Line: 576

/* WARNING: Unknown calling convention yet parameter storage is locked */

void music_hold__Fv(void)

{
	if (sghMusic != (SFXHDR *)0x0) {
		STR_SoundCommand__FP6SFXHDRi(sghMusic,9);
		music_fade__Fv();
		while (0 < sghMusic->volume) {
			TSK_Sleep(1);
		}
		music_stop__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ music_release__Fv()
 // line 299, offset 0x80070bb0
	/* begin block 1 */
		// Start line: 300
		// Start offset: 0x80070BB0
	/* end block 1 */
	// End offset: 0x80070BF0
	// End Line: 306

	/* begin block 2 */
		// Start line: 606
	/* end block 2 */
	// End Line: 607

/* WARNING: Unknown calling convention yet parameter storage is locked */

void music_release__Fv(void)

{
	music_start__Fi(sgnMusicTrack);
	TSK_Sleep(2);
	if (sghMusic != (SFXHDR *)0x0) {
		STR_SoundCommand__FP6SFXHDRi(sghMusic,10);
		STR_SoundCommand__FP6SFXHDRi(sghMusic,7);
	}
	return;
}





