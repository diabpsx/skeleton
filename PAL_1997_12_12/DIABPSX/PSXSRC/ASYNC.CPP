#include "THISDUST.H"
#include "ASYNC.H"


// decompiled code
// original method signature: 
// void /*$ra*/ AS_CallBack0__Fi(int handle /*$a0*/)
 // line 86, offset 0x8009060c
	/* begin block 1 */
		// Start line: 87
		// Start offset: 0x8009060C
	/* end block 1 */
	// End offset: 0x80090618
	// End Line: 88

	/* begin block 2 */
		// Start line: 173
	/* end block 2 */
	// End Line: 174

void AS_CallBack0__Fi(int handle)

{
	SFXTab.ChunkGot = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AS_CallBack1__Fi(int handle /*$a0*/)
 // line 91, offset 0x80090620
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x80090620
	/* end block 1 */
	// End offset: 0x8009062C
	// End Line: 93

	/* begin block 2 */
		// Start line: 183
	/* end block 2 */
	// End Line: 184

void AS_CallBack1__Fi(int handle)

{
	SFXHDR_800a9964.ChunkGot = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah /*$s0*/, struct STRHDR *sh /*$s2*/, struct SFXHDR *sfh /*$s1*/)
 // line 102, offset 0x80090634
	/* begin block 1 */
		// Start line: 103
		// Start offset: 0x80090634
		// Variables:
	// 		unsigned char *ptr; // $s0
	/* end block 1 */
	// End offset: 0x800906F4
	// End Line: 126

	/* begin block 2 */
		// Start line: 204
	/* end block 2 */
	// End Line: 205

void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah,STRHDR *sh,SFXHDR *sfh)

{
	int iVar1;
	ulong uVar2;
	int iVar3;
	STRHDR *pSVar4;
	SFXHDR *pSVar5;
	undefined4 in_a3;
	code *pcVar6;
	uchar *puVar7;
	
	iVar1 = sfh->SizeIn + -0x2f80;
	sfh->SizeIn = iVar1;
	if (0 < iVar1) {
		pSVar4 = sh;
		pSVar5 = sfh;
		cancelasyncload(ah,sh,sfh,in_a3);
		systemtask(0);
		iVar1 = sfh->stream_sec;
		puVar7 = sfh->mem;
		setasyncfile(STREAM_BIN,pSVar4,pSVar5,in_a3);
		systemtask(0);
		if (sfh->voice == 0) {
			uVar2 = sh->Offset;
			iVar3 = sfh->stream_read;
			pcVar6 = AS_CallBack0__Fi;
		}
		else {
			uVar2 = sh->Offset;
			iVar3 = sfh->stream_read;
			pcVar6 = AS_CallBack1__Fi;
		}
		iVar1 = asyncloadsegmentcallback(uVar2 + iVar3,puVar7 + iVar1 * 0x3000,0x3000,pcVar6);
		systemtask(0);
		sfh->ah = iVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh /*$s0*/, struct SFXHDR *sfh /*$s1*/)
 // line 148, offset 0x80090710
	/* begin block 1 */
		// Start line: 149
		// Start offset: 0x80090710
		// Variables:
	// 		int ah; // $s0
	/* end block 1 */
	// End offset: 0x80090798
	// End Line: 165

	/* begin block 2 */
		// Start line: 304
	/* end block 2 */
	// End Line: 305

int AS_OpenStream__FP6STRHDRP6SFXHDR(STRHDR *sh,SFXHDR *sfh)

{
	int iVar1;
	ulong uVar2;
	uchar *puVar3;
	undefined4 in_a2;
	undefined4 in_a3;
	code *pcVar4;
	
	sfh->SizeIn = sh->Size;
	setasyncfile(STREAM_BIN,sfh,in_a2,in_a3);
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
// char /*$ra*/ AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh /*$a0*/)
 // line 174, offset 0x800907b0
	/* begin block 1 */
		// Start line: 175
		// Start offset: 0x800907B0
	/* end block 1 */
	// End offset: 0x800907B4
	// End Line: 176

	/* begin block 2 */
		// Start line: 357
	/* end block 2 */
	// End Line: 358

char AS_GetBlock__FP6SFXHDR(SFXHDR *sfh)

{
	return (char)sfh->ChunkGot;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh /*$a0*/, struct SFXHDR *sfh /*$a1*/)
 // line 185, offset 0x800907bc
	/* begin block 1 */
		// Start line: 186
		// Start offset: 0x800907BC
	/* end block 1 */
	// End offset: 0x800907D8
	// End Line: 190

	/* begin block 2 */
		// Start line: 378
	/* end block 2 */
	// End Line: 379

void AS_CloseStream__FP6STRHDRP6SFXHDR(STRHDR *sh,SFXHDR *sfh)

{
	undefined4 in_a2;
	undefined4 in_a3;
	
	cancelasyncload(sfh->ah,sfh,in_a2,in_a3);
	systemtask(0);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah /*$s1*/, struct STRHDR *sh /*$s2*/, struct SFXHDR *sfh /*$s0*/)
 // line 200, offset 0x800907e8
	/* begin block 1 */
		// Start line: 201
		// Start offset: 0x800907E8
		// Variables:
	// 		unsigned char *ptr; // $s1
	/* end block 1 */
	// End offset: 0x800908EC
	// End Line: 243

	/* begin block 2 */
		// Start line: 408
	/* end block 2 */
	// End Line: 409

int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah,STRHDR *sh,SFXHDR *sfh)

{
	ulong uVar1;
	int iVar2;
	STRHDR *pSVar3;
	SFXHDR *pSVar4;
	undefined4 in_a3;
	code *pcVar5;
	uchar *puVar6;
	
	pSVar3 = sh;
	pSVar4 = sfh;
	cancelasyncload(ah,sh,sfh,in_a3);
	systemtask(0);
	sfh->stream_sec = 0;
	sfh->SPU_frame = 0;
	sfh->SPU_sec = 0;
	sfh->stream_offs = 0;
	sfh->playing = '\0';
	sfh->stream_read = 0;
	sfh->stream_stall = 0;
	uVar1 = VID_GetTick__Fv();
	sfh->framecount = uVar1;
	uVar1 = VID_GetTick__Fv();
	iVar2 = sfh->volume;
	sfh->lastcount = uVar1;
	sfh->sec_num = 0;
	sfh->stream_pos = 0;
	sfh->SPU_pos = 0;
	sfh->DMA_size = 0;
	sfh->ChunkGot = '\0';
	sfh->SPU_sec_num = 0;
	sfh->stream_ending = 0;
	sfh->volume = 0;
	sfh->s_volume = iVar2;
	STR_setvolume__FP6SFXHDR(sfh);
	puVar6 = sfh->mem;
	sfh->volume = sfh->s_volume;
	sfh->SizeIn = sh->Size;
	setasyncfile(STREAM_BIN,pSVar3,pSVar4,in_a3);
	systemtask(0);
	if (sfh->voice == 0) {
		uVar1 = sh->Offset;
		iVar2 = sfh->stream_read;
		pcVar5 = AS_CallBack0__Fi;
	}
	else {
		uVar1 = sh->Offset;
		iVar2 = sfh->stream_read;
		pcVar5 = AS_CallBack1__Fi;
	}
	iVar2 = asyncloadsegmentcallback(uVar1 + iVar2,puVar6,0x3000,pcVar5);
	systemtask(0);
	sfh->ah = iVar2;
	return iVar2;
}





