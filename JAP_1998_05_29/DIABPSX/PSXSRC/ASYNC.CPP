#include "THISDUST.H"
#include "ASYNC.H"


// decompiled code
// original method signature: 
// void /*$ra*/ AS_CallBack0__Fi(int ah /*$s0*/)
 // line 88, offset 0x8009a9b4
	/* begin block 1 */
		// Start line: 89
		// Start offset: 0x8009A9B4
		// Variables:
	// 		unsigned long OldGp; // $s0
	/* end block 1 */
	// End offset: 0x8009AA08
	// End Line: 99

	/* begin block 2 */
		// Start line: 176
	/* end block 2 */
	// End Line: 177

void AS_CallBack0__Fi(int ah)

{
	undefined4 uVar1;
	
	if (SFXTab.ChunkGot == '\0') {
		uVar1 = ReloadGP();
		SFXTab.ChunkGot = '\x01';
		cancelasyncload(ah);
		systemtask(0);
		SetGP(uVar1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AS_CallBack1__Fi(int ah /*$s0*/)
 // line 102, offset 0x8009aa20
	/* begin block 1 */
		// Start line: 103
		// Start offset: 0x8009AA20
		// Variables:
	// 		unsigned long OldGp; // $s0
	/* end block 1 */
	// End offset: 0x8009AA74
	// End Line: 113

	/* begin block 2 */
		// Start line: 205
	/* end block 2 */
	// End Line: 206

void AS_CallBack1__Fi(int ah)

{
	undefined4 uVar1;
	
	if (SFXHDR_800b9c64.ChunkGot == '\0') {
		uVar1 = ReloadGP();
		SFXHDR_800b9c64.ChunkGot = '\x01';
		cancelasyncload(ah);
		systemtask(0);
		SetGP(uVar1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah /*$s0*/, struct STRHDR *sh /*$s2*/, struct SFXHDR *sfh /*$s1*/)
 // line 122, offset 0x8009aa8c
	/* begin block 1 */
		// Start line: 123
		// Start offset: 0x8009AA8C
		// Variables:
	// 		unsigned char *ptr; // $s0
	/* end block 1 */
	// End offset: 0x8009AB38
	// End Line: 143

	/* begin block 2 */
		// Start line: 246
	/* end block 2 */
	// End Line: 247

void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah,STRHDR *sh,SFXHDR *sfh)

{
	int iVar1;
	ulong uVar2;
	int iVar3;
	code *pcVar4;
	uchar *puVar5;
	
	iVar1 = sfh->SizeIn + -0x2f80;
	sfh->SizeIn = iVar1;
	if (0 < iVar1) {
		iVar1 = sfh->stream_sec;
		puVar5 = sfh->mem;
		setasyncfile(STREAM_BIN);
		systemtask(0);
		if (sfh->voice == 0) {
			uVar2 = sh->Offset;
			iVar3 = sfh->stream_read;
			pcVar4 = AS_CallBack0__Fi;
		}
		else {
			uVar2 = sh->Offset;
			iVar3 = sfh->stream_read;
			pcVar4 = AS_CallBack1__Fi;
		}
		iVar1 = asyncloadsegmentcallback(uVar2 + iVar3,puVar5 + iVar1 * 0x3000,0x3000,pcVar4);
		systemtask(0);
		sfh->ah = iVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh /*$s0*/, struct SFXHDR *sfh /*$s1*/)
 // line 166, offset 0x8009ab54
	/* begin block 1 */
		// Start line: 167
		// Start offset: 0x8009AB54
		// Variables:
	// 		int ah; // $s0
	/* end block 1 */
	// End offset: 0x8009ABDC
	// End Line: 184

	/* begin block 2 */
		// Start line: 342
	/* end block 2 */
	// End Line: 343

int AS_OpenStream__FP6STRHDRP6SFXHDR(STRHDR *sh,SFXHDR *sfh)

{
	int iVar1;
	ulong uVar2;
	uchar *puVar3;
	code *pcVar4;
	
	sfh->SizeIn = sh->Size;
	setasyncfile(STREAM_BIN);
	systemtask(0);
	if (sfh->voice == 0) {
		uVar2 = sh->Offset;
		puVar3 = sfh->mem;
		pcVar4 = AS_CallBack0__Fi;
	}
	else {
		uVar2 = sh->Offset;
		puVar3 = sfh->mem;
		pcVar4 = AS_CallBack1__Fi;
	}
	iVar1 = asyncloadsegmentcallback(uVar2,puVar3,0x3000,pcVar4);
	systemtask(0);
	sfh->ah = iVar1;
	return iVar1;
}



// decompiled code
// original method signature: 
// char /*$ra*/ AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh /*$s0*/)
 // line 193, offset 0x8009abf4
	/* begin block 1 */
		// Start line: 194
		// Start offset: 0x8009ABF4
	/* end block 1 */
	// End offset: 0x8009AC10
	// End Line: 196

	/* begin block 2 */
		// Start line: 396
	/* end block 2 */
	// End Line: 397

char AS_GetBlock__FP6SFXHDR(SFXHDR *sfh)

{
	systemtask(0);
	return (char)sfh->ChunkGot;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh /*$a0*/, struct SFXHDR *sfh /*$s0*/)
 // line 205, offset 0x8009ac24
	/* begin block 1 */
		// Start line: 206
		// Start offset: 0x8009AC24
	/* end block 1 */
	// End offset: 0x8009AC64
	// End Line: 213

	/* begin block 2 */
		// Start line: 420
	/* end block 2 */
	// End Line: 421

void AS_CloseStream__FP6STRHDRP6SFXHDR(STRHDR *sh,SFXHDR *sfh)

{
	char cVar1;
	
	cVar1 = AS_GetBlock__FP6SFXHDR(sfh);
	if (cVar1 == '\0') {
		cancelasyncload(sfh->ah);
		sfh->ChunkGot = '\x01';
		systemtask(0);
	}
	return;
}





