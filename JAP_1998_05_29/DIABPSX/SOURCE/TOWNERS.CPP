#include "THISDUST.H"
#include "TOWNERS.H"


// decompiled code
// original method signature: 
// int /*$ra*/ GetActiveTowner__Fi(int t /*$a0*/)
 // line 99, offset 0x80039f88
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x80039F88

		/* begin block 1.1 */
			// Start line: 100
			// Start offset: 0x80039F88
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x80039FCC
		// End Line: 103
	/* end block 1 */
	// End offset: 0x80039FD0
	// End Line: 104

	/* begin block 2 */
		// Start line: 198
	/* end block 2 */
	// End Line: 199

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetActiveTowner__Fi(int t)

{
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (0 < numtowners) {
		iVar2 = 0;
		do {
			if (*(int *)((int)&towner[0]._ttype + iVar2) == t) {
				return iVar1;
			}
			iVar1 = iVar1 + 1;
			iVar2 = iVar2 + 0xc4;
		} while (iVar1 < numtowners);
	}
	return -1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetTownerGPtrs__FPUcPPUc(unsigned char *pData /*$a0*/, unsigned char **pAnim /*$a1*/)
 // line 108, offset 0x80039fdc
	/* begin block 1 */
		// Start line: 109
		// Start offset: 0x80039FDC
		// Variables:
	// 		int i; // $v0
	/* end block 1 */
	// End offset: 0x80039FF4
	// End Line: 127

	/* begin block 2 */
		// Start line: 220
	/* end block 2 */
	// End Line: 221

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetTownerGPtrs__FPUcPPUc(uchar *pData,uchar **pAnim)

{
	int iVar1;
	
	iVar1 = 7;
	pAnim = pAnim + 7;
	do {
		*pAnim = pData;
		iVar1 = iVar1 + -1;
		pAnim = pAnim + -1;
	} while (-1 < iVar1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NewTownerAnim__FiPUcii(int tnum /*$a0*/, unsigned char *pAnim /*$a1*/, int numFrames /*$a2*/, int Delay /*$a3*/)
 // line 132, offset 0x80039ffc
	/* begin block 1 */
		// Start line: 133
		// Start offset: 0x80039FFC
	/* end block 1 */
	// End offset: 0x8003A044
	// End Line: 143

	/* begin block 2 */
		// Start line: 271
	/* end block 2 */
	// End Line: 272

/* WARNING: Unknown calling convention yet parameter storage is locked */

void NewTownerAnim__FiPUcii(int tnum,uchar *pAnim,int numFrames,int Delay)

{
	towner[tnum]._tAnimLen = numFrames;
	towner[tnum]._tAnimFrame = 1;
	towner[tnum]._tAnimCnt = 0;
	towner[tnum]._tAnimDelay = Delay;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitTownerInfo__FilUciiici(int i /*$s4*/, long w /*$s2*/, unsigned char sel /*$s5*/, int t /*$fp*/, int x /*stack 16*/, int y /*stack 20*/, int ao /*stack 24*/, int tp /*stack 28*/)
 // line 148, offset 0x8003a04c
	/* begin block 1 */
		// Start line: 149
		// Start offset: 0x8003A04C
	/* end block 1 */
	// End offset: 0x8003A170
	// End Line: 161

	/* begin block 2 */
		// Start line: 297
	/* end block 2 */
	// End Line: 298

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitTownerInfo__FilUciiici(int i,long w,uchar sel,int t,int x,int y,int ao,int tp)

{
	long lVar1;
	
	memset(towner + i,0,0xc4);
	towner[i]._tAnimWidth = w;
	towner[i]._tSelFlag = sel;
	towner[i]._tAnimWidth2 = w + -0x40 >> 1;
	towner[i]._tMsgSaid = '\0';
	towner[i]._ttype = t;
	towner[i]._ty = y;
	towner[i]._tx = x;
	dung_map[x * 0x70 + y].dMonster = (short)i + 1;
	towner[i]._tAnimOrder = (char)ao;
	towner[i]._tTenPer = tp;
	lVar1 = GetRndSeed__Fv();
	towner[i]._tSeed = lVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitQstSnds__Fi(int i /*$a2*/)
 // line 166, offset 0x8003a1a4
	/* begin block 1 */
		// Start line: 167
		// Start offset: 0x8003A1A4
		// Variables:
	// 		int j; // $a0

		/* begin block 1.1 */
			// Start line: 171
			// Start offset: 0x8003A1B8
			// Variables:
		// 		int quest; // $a3
		/* end block 1.1 */
		// End offset: 0x8003A25C
		// End Line: 176
	/* end block 1 */
	// End offset: 0x8003A25C
	// End Line: 176

	/* begin block 2 */
		// Start line: 349
	/* end block 2 */
	// End Line: 350

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitQstSnds__Fi(int i)

{
	int iVar1;
	int *piVar2;
	int iVar3;
	
	iVar1 = i;
	if (boyloadflag != '\0') {
		iVar1 = i + 1;
	}
	iVar3 = 0;
	piVar2 = &Qtalklist + iVar1 * 0x10;
	iVar1 = 0;
	i = i * 0xc4;
	do {
		(&towner[0].qsts[0]._qsttype)[i] = (&quests[0]._qtype)[iVar1];
		(&towner[0].qsts[0]._qstmsg)[i] = (uchar)*piVar2;
		if (*piVar2 == -1) {
			(&towner[0].qsts[0]._qstmsgact)[i] = '\0';
		}
		else {
			(&towner[0].qsts[0]._qstmsgact)[i] = '\x01';
		}
		piVar2 = piVar2 + 1;
		iVar1 = iVar1 + 0x14;
		iVar3 = iVar3 + 1;
		i = i + 3;
	} while (iVar3 < 0x10);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitSmith__Fv()
 // line 181, offset 0x8003a264
	/* begin block 1 */
		// Start line: 182
		// Start offset: 0x8003A264

		/* begin block 1.1 */
			// Start line: 182
			// Start offset: 0x8003A264
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x8003A310
		// End Line: 187
	/* end block 1 */
	// End offset: 0x8003A384
	// End Line: 192

	/* begin block 2 */
		// Start line: 376
	/* end block 2 */
	// End Line: 377

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitSmith__Fv(void)

{
	int iVar1;
	int tnum;
	uchar *puVar2;
	_func_33 **pp_Var3;
	int iVar4;
	_func_33 *pAnim;
	
	InitTownerInfo__FilUciiici(numtowners,0x60,'\x01',0,0x3e,0x3f,0,10);
	InitQstSnds__Fi(numtowners);
	puVar2 = LoadFileInMem__FPCcPUl("Towners\\Smith\\SmithN.CEL",(ulong *)0x0);
	iVar1 = numtowners;
	iVar4 = 0;
	pp_Var3 = towner[numtowners]._tNAnim;
	towner[numtowners]._tNData = puVar2;
	do {
		iVar4 = iVar4 + 1;
		*(uchar **)pp_Var3 = towner[iVar1]._tNData;
		tnum = numtowners;
		pp_Var3 = pp_Var3 + 1;
	} while (iVar4 < 8);
	pAnim = towner[numtowners]._tNAnim[1];
	towner[numtowners]._tNFrames = 0x10;
	NewTownerAnim__FiPUcii(tnum,(uchar *)pAnim,0x10,3);
	towner[numtowners]._tName = 0x1a8;
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitBarOwner__Fv()
 // line 197, offset 0x8003a394
	/* begin block 1 */
		// Start line: 198
		// Start offset: 0x8003A394

		/* begin block 1.1 */
			// Start line: 198
			// Start offset: 0x8003A394
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x8003A448
		// End Line: 204
	/* end block 1 */
	// End offset: 0x8003A4BC
	// End Line: 209

	/* begin block 2 */
		// Start line: 414
	/* end block 2 */
	// End Line: 415

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitBarOwner__Fv(void)

{
	int iVar1;
	int tnum;
	uchar *puVar2;
	_func_33 **pp_Var3;
	int iVar4;
	_func_33 *pAnim;
	
	bannerflag = '\0';
	InitTownerInfo__FilUciiici(numtowners,0x60,'\x01',3,0x37,0x3e,3,10);
	InitQstSnds__Fi(numtowners);
	puVar2 = LoadFileInMem__FPCcPUl("Towners\\TwnF\\TwnFN.CEL",(ulong *)0x0);
	iVar1 = numtowners;
	iVar4 = 0;
	pp_Var3 = towner[numtowners]._tNAnim;
	towner[numtowners]._tNData = puVar2;
	do {
		iVar4 = iVar4 + 1;
		*(uchar **)pp_Var3 = towner[iVar1]._tNData;
		tnum = numtowners;
		pp_Var3 = pp_Var3 + 1;
	} while (iVar4 < 8);
	pAnim = towner[numtowners]._tNAnim[1];
	towner[numtowners]._tNFrames = 0x10;
	NewTownerAnim__FiPUcii(tnum,(uchar *)pAnim,0x10,3);
	towner[numtowners]._tName = 0x2e5;
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitTownDead__Fv()
 // line 213, offset 0x8003a4cc
	/* begin block 1 */
		// Start line: 214
		// Start offset: 0x8003A4CC

		/* begin block 1.1 */
			// Start line: 214
			// Start offset: 0x8003A4CC
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x8003A57C
		// End Line: 219
	/* end block 1 */
	// End offset: 0x8003A5F0
	// End Line: 224

	/* begin block 2 */
		// Start line: 453
	/* end block 2 */
	// End Line: 454

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitTownDead__Fv(void)

{
	int iVar1;
	int tnum;
	uchar *puVar2;
	_func_33 **pp_Var3;
	int iVar4;
	_func_33 *pAnim;
	
	InitTownerInfo__FilUciiici(numtowners,0x60,'\x01',2,0x18,0x20,-1,10);
	InitQstSnds__Fi(numtowners);
	puVar2 = LoadFileInMem__FPCcPUl("Towners\\Butch\\Deadguy.CEL",(ulong *)0x0);
	iVar1 = numtowners;
	iVar4 = 0;
	pp_Var3 = towner[numtowners]._tNAnim;
	towner[numtowners]._tNData = puVar2;
	do {
		iVar4 = iVar4 + 1;
		*(uchar **)pp_Var3 = towner[iVar1]._tNData;
		tnum = numtowners;
		pp_Var3 = pp_Var3 + 1;
	} while (iVar4 < 8);
	pAnim = towner[numtowners]._tNAnim[4];
	towner[numtowners]._tNFrames = 8;
	NewTownerAnim__FiPUcii(tnum,(uchar *)pAnim,8,6);
	towner[numtowners]._tName = 0x4e0;
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitWitch__Fv()
 // line 228, offset 0x8003a600
	/* begin block 1 */
		// Start line: 229
		// Start offset: 0x8003A600

		/* begin block 1.1 */
			// Start line: 229
			// Start offset: 0x8003A600
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x8003A6B0
		// End Line: 234
	/* end block 1 */
	// End offset: 0x8003A724
	// End Line: 239

	/* begin block 2 */
		// Start line: 489
	/* end block 2 */
	// End Line: 490

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitWitch__Fv(void)

{
	int iVar1;
	int tnum;
	uchar *puVar2;
	_func_33 **pp_Var3;
	int iVar4;
	_func_33 *pAnim;
	
	InitTownerInfo__FilUciiici(numtowners,0x60,'\x01',6,0x50,0x14,5,10);
	InitQstSnds__Fi(numtowners);
	puVar2 = LoadFileInMem__FPCcPUl("Towners\\TownWmn1\\Witch.CEL",(ulong *)0x0);
	iVar1 = numtowners;
	iVar4 = 0;
	pp_Var3 = towner[numtowners]._tNAnim;
	towner[numtowners]._tNData = puVar2;
	do {
		iVar4 = iVar4 + 1;
		*(uchar **)pp_Var3 = towner[iVar1]._tNData;
		tnum = numtowners;
		pp_Var3 = pp_Var3 + 1;
	} while (iVar4 < 8);
	pAnim = towner[numtowners]._tNAnim[0];
	towner[numtowners]._tNFrames = 0x13;
	NewTownerAnim__FiPUcii(tnum,(uchar *)pAnim,0x13,6);
	towner[numtowners]._tName = 0xe;
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitBarmaid__Fv()
 // line 243, offset 0x8003a734
	/* begin block 1 */
		// Start line: 244
		// Start offset: 0x8003A734

		/* begin block 1.1 */
			// Start line: 244
			// Start offset: 0x8003A734
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x8003A7E4
		// End Line: 249
	/* end block 1 */
	// End offset: 0x8003A858
	// End Line: 254

	/* begin block 2 */
		// Start line: 525
	/* end block 2 */
	// End Line: 526

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitBarmaid__Fv(void)

{
	int iVar1;
	int tnum;
	uchar *puVar2;
	_func_33 **pp_Var3;
	int iVar4;
	_func_33 *pAnim;
	
	InitTownerInfo__FilUciiici(numtowners,0x60,'\x01',7,0x2b,0x42,-1,10);
	InitQstSnds__Fi(numtowners);
	puVar2 = LoadFileInMem__FPCcPUl("Towners\\TownWmn1\\WmnN.CEL",(ulong *)0x0);
	iVar1 = numtowners;
	iVar4 = 0;
	pp_Var3 = towner[numtowners]._tNAnim;
	towner[numtowners]._tNData = puVar2;
	do {
		iVar4 = iVar4 + 1;
		*(uchar **)pp_Var3 = towner[iVar1]._tNData;
		tnum = numtowners;
		pp_Var3 = pp_Var3 + 1;
	} while (iVar4 < 8);
	pAnim = towner[numtowners]._tNAnim[0];
	towner[numtowners]._tNFrames = 0x12;
	NewTownerAnim__FiPUcii(tnum,(uchar *)pAnim,0x12,6);
	towner[numtowners]._tName = 0x184;
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitBoy__Fv()
 // line 258, offset 0x8003a868
	/* begin block 1 */
		// Start line: 259
		// Start offset: 0x8003A868

		/* begin block 1.1 */
			// Start line: 259
			// Start offset: 0x8003A868
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x8003A920
		// End Line: 265
	/* end block 1 */
	// End offset: 0x8003A994
	// End Line: 270

	/* begin block 2 */
		// Start line: 561
	/* end block 2 */
	// End Line: 562

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitBoy__Fv(void)

{
	int iVar1;
	int tnum;
	uchar *puVar2;
	_func_33 **pp_Var3;
	int iVar4;
	_func_33 *pAnim;
	
	boyloadflag = '\x01';
	InitTownerInfo__FilUciiici(numtowners,0x60,'\x01',8,0xb,0x35,-1,10);
	InitQstSnds__Fi(numtowners);
	puVar2 = LoadFileInMem__FPCcPUl("Towners\\TownBoy\\PegKid1.CEL",(ulong *)0x0);
	iVar1 = numtowners;
	iVar4 = 0;
	pp_Var3 = towner[numtowners]._tNAnim;
	towner[numtowners]._tNData = puVar2;
	do {
		iVar4 = iVar4 + 1;
		*(uchar **)pp_Var3 = towner[iVar1]._tNData;
		tnum = numtowners;
		pp_Var3 = pp_Var3 + 1;
	} while (iVar4 < 8);
	pAnim = towner[numtowners]._tNAnim[0];
	towner[numtowners]._tNFrames = 0x14;
	NewTownerAnim__FiPUcii(tnum,(uchar *)pAnim,0x14,6);
	towner[numtowners]._tName = 0x4d8;
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitHealer__Fv()
 // line 274, offset 0x8003a9a4
	/* begin block 1 */
		// Start line: 275
		// Start offset: 0x8003A9A4

		/* begin block 1.1 */
			// Start line: 275
			// Start offset: 0x8003A9A4
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x8003AA54
		// End Line: 280
	/* end block 1 */
	// End offset: 0x8003AAC8
	// End Line: 285

	/* begin block 2 */
		// Start line: 601
	/* end block 2 */
	// End Line: 602

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitHealer__Fv(void)

{
	int iVar1;
	int tnum;
	uchar *puVar2;
	_func_33 **pp_Var3;
	int iVar4;
	_func_33 *pAnim;
	
	InitTownerInfo__FilUciiici(numtowners,0x60,'\x01',1,0x37,0x4f,1,10);
	InitQstSnds__Fi(numtowners);
	puVar2 = LoadFileInMem__FPCcPUl("Towners\\Healer\\Healer.CEL",(ulong *)0x0);
	iVar1 = numtowners;
	iVar4 = 0;
	pp_Var3 = towner[numtowners]._tNAnim;
	towner[numtowners]._tNData = puVar2;
	do {
		iVar4 = iVar4 + 1;
		*(uchar **)pp_Var3 = towner[iVar1]._tNData;
		tnum = numtowners;
		pp_Var3 = pp_Var3 + 1;
	} while (iVar4 < 8);
	pAnim = towner[numtowners]._tNAnim[7];
	towner[numtowners]._tNFrames = 0x14;
	NewTownerAnim__FiPUcii(tnum,(uchar *)pAnim,0x14,6);
	towner[numtowners]._tName = 0x306;
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitTeller__Fv()
 // line 290, offset 0x8003aad8
	/* begin block 1 */
		// Start line: 291
		// Start offset: 0x8003AAD8

		/* begin block 1.1 */
			// Start line: 291
			// Start offset: 0x8003AAD8
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x8003AB88
		// End Line: 296
	/* end block 1 */
	// End offset: 0x8003ABFC
	// End Line: 301

	/* begin block 2 */
		// Start line: 639
	/* end block 2 */
	// End Line: 640

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitTeller__Fv(void)

{
	int iVar1;
	int tnum;
	uchar *puVar2;
	_func_33 **pp_Var3;
	int iVar4;
	_func_33 *pAnim;
	
	InitTownerInfo__FilUciiici(numtowners,0x60,'\x01',4,0x3e,0x47,2,10);
	InitQstSnds__Fi(numtowners);
	puVar2 = LoadFileInMem__FPCcPUl("Towners\\Strytell\\Strytell.CEL",(ulong *)0x0);
	iVar1 = numtowners;
	iVar4 = 0;
	pp_Var3 = towner[numtowners]._tNAnim;
	towner[numtowners]._tNData = puVar2;
	do {
		iVar4 = iVar4 + 1;
		*(uchar **)pp_Var3 = towner[iVar1]._tNData;
		tnum = numtowners;
		pp_Var3 = pp_Var3 + 1;
	} while (iVar4 < 8);
	pAnim = towner[numtowners]._tNAnim[0];
	towner[numtowners]._tNFrames = 0x19;
	NewTownerAnim__FiPUcii(tnum,(uchar *)pAnim,0x19,3);
	towner[numtowners]._tName = 0x9c;
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitDrunk__Fv()
 // line 305, offset 0x8003ac0c
	/* begin block 1 */
		// Start line: 306
		// Start offset: 0x8003AC0C

		/* begin block 1.1 */
			// Start line: 306
			// Start offset: 0x8003AC0C
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x8003ACBC
		// End Line: 311
	/* end block 1 */
	// End offset: 0x8003AD30
	// End Line: 316

	/* begin block 2 */
		// Start line: 675
	/* end block 2 */
	// End Line: 676

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitDrunk__Fv(void)

{
	int iVar1;
	int tnum;
	uchar *puVar2;
	_func_33 **pp_Var3;
	int iVar4;
	_func_33 *pAnim;
	
	InitTownerInfo__FilUciiici(numtowners,0x60,'\x01',5,0x47,0x54,4,10);
	InitQstSnds__Fi(numtowners);
	puVar2 = LoadFileInMem__FPCcPUl("Towners\\Drunk\\TwnDrunk.CEL",(ulong *)0x0);
	iVar1 = numtowners;
	iVar4 = 0;
	pp_Var3 = towner[numtowners]._tNAnim;
	towner[numtowners]._tNData = puVar2;
	do {
		iVar4 = iVar4 + 1;
		*(uchar **)pp_Var3 = towner[iVar1]._tNData;
		tnum = numtowners;
		pp_Var3 = pp_Var3 + 1;
	} while (iVar4 < 8);
	pAnim = towner[numtowners]._tNAnim[0];
	towner[numtowners]._tNFrames = 0x12;
	NewTownerAnim__FiPUcii(tnum,(uchar *)pAnim,0x12,3);
	towner[numtowners]._tName = 0x13e;
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitCows__Fv()
 // line 321, offset 0x8003ad40
	/* begin block 1 */
		// Start line: 322
		// Start offset: 0x8003AD40
		// Variables:
	// 		int i; // $s4
	// 		int x; // $s1
	// 		int y; // $s3
	// 		int d; // $s2
	// 		int x2; // $s1
	// 		int y2; // $v0
	/* end block 1 */
	// End offset: 0x8003AFB0
	// End Line: 348

	/* begin block 2 */
		// Start line: 713
	/* end block 2 */
	// End Line: 714

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitCows__Fv(void)

{
	uchar *pData;
	int iVar1;
	long lVar2;
	int tnum;
	int x;
	int iVar3;
	int y;
	int iVar4;
	
	pCowCels = LoadFileInMem__FPCcPUl("Towners\\Animals\\Cow.CEL",(ulong *)0x0);
	iVar4 = 0;
	do {
		x = (&TownCowX)[iVar4];
		y = (&TownCowY)[iVar4];
		iVar3 = (&TownCowDir)[iVar4];
		InitTownerInfo__FilUciiici(numtowners,0x80,'\0',9,x,y,-1,10);
		pData = pCowCels;
		tnum = numtowners;
		towner[numtowners]._tNData = pCowCels;
		SetTownerGPtrs__FPUcPPUc(pData,(uchar **)towner[tnum]._tNAnim);
		tnum = numtowners;
		iVar1 = numtowners * 0xc4;
		towner[numtowners]._tNFrames = 0xc;
		NewTownerAnim__FiPUcii(tnum,*(uchar **)(iVar3 * 4 + iVar1 + -0x7ff300e4),0xc,3);
		lVar2 = ENG_random__Fl(0xb);
		tnum = numtowners;
		towner[numtowners]._tSelFlag = '\x01';
		iVar1 = numtowners;
		towner[tnum]._tAnimFrame = lVar2 + 1;
		towner[iVar1]._tdir = iVar3;
		towner[iVar1]._tName = 0xd2;
		tnum = y + (&cowoffy)[iVar3];
		iVar3 = x + (&cowoffx)[iVar3];
		if (dung_map[x * 0x70 + tnum].dMonster == 0) {
			dung_map[x * 0x70 + tnum].dMonster = ~(ushort)iVar1;
		}
		if (dung_map[iVar3 * 0x70 + y].dMonster == 0) {
			dung_map[iVar3 * 0x70 + y].dMonster = ~(ushort)numtowners;
		}
		if (dung_map[iVar3 * 0x70 + tnum].dMonster == 0) {
			dung_map[iVar3 * 0x70 + tnum].dMonster = ~(ushort)numtowners;
		}
		iVar4 = iVar4 + 1;
		numtowners = numtowners + 1;
	} while (iVar4 < 3);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitTowners__Fv()
 // line 354, offset 0x8003afd8
	/* begin block 1 */
		// Start line: 355
		// Start offset: 0x8003AFD8
	/* end block 1 */
	// End offset: 0x8003B054
	// End Line: 369

	/* begin block 2 */
		// Start line: 797
	/* end block 2 */
	// End Line: 798

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitTowners__Fv(void)

{
	numtowners = 0;
	boyloadflag = '\0';
	InitSmith__Fv();
	InitHealer__Fv();
	if ((quests[6]._qactive != '\0') && (quests[6]._qactive != '\x03')) {
		InitTownDead__Fv();
	}
	InitBarOwner__Fv();
	InitTeller__Fv();
	InitDrunk__Fv();
	InitWitch__Fv();
	InitBarmaid__Fv();
	InitBoy__Fv();
	InitCows__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreeTownerGFX__Fv()
 // line 373, offset 0x8003b064
	/* begin block 1 */
		// Start line: 374
		// Start offset: 0x8003B064
		// Variables:
	// 		int i; // $s1

		/* begin block 1.1 */
			// Start line: 374
			// Start offset: 0x8003B064

			/* begin block 1.1.1 */
				// Start line: 377
				// Start offset: 0x8003B07C

				/* begin block 1.1.1.1 */
					// Start line: 378
					// Start offset: 0x8003B088

					/* begin block 1.1.1.1.1 */
						// Start line: 382
						// Start offset: 0x8003B0B8

						/* begin block 1.1.1.1.1.1 */
							// Start line: 382
							// Start offset: 0x8003B0B8

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 382
								// Start offset: 0x8003B0C0

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 383
									// Start offset: 0x8003B0C0
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8003B0D4
								// End Line: 383
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8003B0D4
							// End Line: 383
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8003B0D4
						// End Line: 383
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003B0D4
					// End Line: 383
				/* end block 1.1.1.1 */
				// End offset: 0x8003B0D4
				// End Line: 383
			/* end block 1.1.1 */
			// End offset: 0x8003B0D4
			// End Line: 383
		/* end block 1.1 */
		// End offset: 0x8003B0E0
		// End Line: 385

		/* begin block 1.2 */
			// Start line: 388
			// Start offset: 0x8003B0E0
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.2 */
		// End offset: 0x8003B0F0
		// End Line: 388
	/* end block 1 */
	// End offset: 0x8003B0F0
	// End Line: 388

	/* begin block 2 */
		// Start line: 835
	/* end block 2 */
	// End Line: 836

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeTownerGFX__Fv(void)

{
	uchar *p;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = 0;
	while (p = pCowCels, iVar2 < 0x10) {
		p = *(uchar **)((int)&towner[0]._tNData + iVar1);
		if (p == pCowCels) {
			*(undefined4 *)((int)&towner[0]._tNData + iVar1) = 0;
		}
		else {
			if (p != (uchar *)0x0) {
				*(undefined4 *)((int)&towner[0]._tNData + iVar1) = 0;
				mem_free_dbg__FPv(p);
			}
		}
		iVar1 = iVar1 + 0xc4;
		iVar2 = iVar2 + 1;
	}
	pCowCels = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownCtrlMsg__Fi(int i /*$a0*/)
 // line 394, offset 0x8003b108
	/* begin block 1 */
		// Start line: 395
		// Start offset: 0x8003B108
		// Variables:
	// 		int p; // $v0
	// 		int dx; // $s0
	// 		int dy; // $v0
	/* end block 1 */
	// End offset: 0x8003B1D8
	// End Line: 402

	/* begin block 2 */
		// Start line: 883
	/* end block 2 */
	// End Line: 884

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TownCtrlMsg__Fi(int i)

{
	int iVar1;
	int iVar2;
	
	if (towner[i]._tbtcnt != 0) {
		iVar1 = towner[i]._tVar1;
		iVar2 = abs(towner[i]._tx - (int)plr[iVar1]._px);
		iVar1 = abs(towner[i]._ty - (int)plr[iVar1]._py);
		if ((1 < iVar2) || (1 < iVar1)) {
			towner[i]._tbtcnt = 0;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownBlackSmith__Fv()
 // line 417, offset 0x8003b1f0
	/* begin block 1 */
		// Start line: 418
		// Start offset: 0x8003B1F0
		// Variables:
	// 		int tidx; // $s0
	/* end block 1 */
	// End offset: 0x8003B268
	// End Line: 426

	/* begin block 2 */
		// Start line: 936
	/* end block 2 */
	// End Line: 937

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TownBlackSmith__Fv(void)

{
	int i;
	
	i = GetActiveTowner__Fi(0);
	TownCtrlMsg__Fi(i);
	if ((qtextflag == '\0') && (quests[0]._qactive == '\x03')) {
		IsDplayer__Fii(towner[i]._tx,towner[i]._ty + 1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownBarOwner__Fv()
 // line 433, offset 0x8003b27c
	/* begin block 1 */
		// Start line: 434
		// Start offset: 0x8003B27C
		// Variables:
	// 		int tidx; // $s0
	/* end block 1 */
	// End offset: 0x8003B304
	// End Line: 441

	/* begin block 2 */
		// Start line: 971
	/* end block 2 */
	// End Line: 972

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TownBarOwner__Fv(void)

{
	int i;
	
	i = GetActiveTowner__Fi(3);
	TownCtrlMsg__Fi(i);
	if (((qtextflag == '\0') && (quests[7]._qactive == '\x03')) && (bannerflag != '\0')) {
		IsDplayer__Fii(towner[i]._tx,towner[i]._ty + 1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownDead__Fv()
 // line 448, offset 0x8003b318
	/* begin block 1 */
		// Start line: 449
		// Start offset: 0x8003B318
		// Variables:
	// 		int tidx; // $s0
	/* end block 1 */
	// End offset: 0x8003B3EC
	// End Line: 461

	/* begin block 2 */
		// Start line: 1003
	/* end block 2 */
	// End Line: 1004

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TownDead__Fv(void)

{
	int i;
	
	i = GetActiveTowner__Fi(2);
	TownCtrlMsg__Fi(i);
	if (qtextflag == '\0') {
		if ((quests[6]._qactive == '\x02') && (quests[6]._qlog == '\0')) {
			return;
		}
		if (quests[6]._qactive == '\x01') {
			return;
		}
		towner[i]._tAnimDelay = 1000;
		towner[i]._tAnimFrame = 1;
		towner[i]._tName = 0x3da;
	}
	if (quests[6]._qactive != '\x01') {
		towner[i]._tAnimCnt = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownHealer__Fv()
 // line 467, offset 0x8003b400
	/* begin block 1 */
		// Start line: 468
		// Start offset: 0x8003B400
	/* end block 1 */
	// End offset: 0x8003B418
	// End Line: 470

	/* begin block 2 */
		// Start line: 1044
	/* end block 2 */
	// End Line: 1045

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TownHealer__Fv(void)

{
	int i;
	
	i = GetActiveTowner__Fi(1);
	TownCtrlMsg__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownStory__Fv()
 // line 476, offset 0x8003b428
	/* begin block 1 */
		// Start line: 477
		// Start offset: 0x8003B428
	/* end block 1 */
	// End offset: 0x8003B440
	// End Line: 480

	/* begin block 2 */
		// Start line: 1062
	/* end block 2 */
	// End Line: 1063

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TownStory__Fv(void)

{
	int i;
	
	i = GetActiveTowner__Fi(4);
	TownCtrlMsg__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownDrunk__Fv()
 // line 486, offset 0x8003b450
	/* begin block 1 */
		// Start line: 487
		// Start offset: 0x8003B450
	/* end block 1 */
	// End offset: 0x8003B468
	// End Line: 490

	/* begin block 2 */
		// Start line: 1082
	/* end block 2 */
	// End Line: 1083

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TownDrunk__Fv(void)

{
	int i;
	
	i = GetActiveTowner__Fi(5);
	TownCtrlMsg__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownBoy__Fv()
 // line 496, offset 0x8003b478
	/* begin block 1 */
		// Start line: 497
		// Start offset: 0x8003B478
	/* end block 1 */
	// End offset: 0x8003B490
	// End Line: 500

	/* begin block 2 */
		// Start line: 1102
	/* end block 2 */
	// End Line: 1103

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TownBoy__Fv(void)

{
	int i;
	
	i = GetActiveTowner__Fi(8);
	TownCtrlMsg__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownWitch__Fv()
 // line 507, offset 0x8003b4a0
	/* begin block 1 */
		// Start line: 508
		// Start offset: 0x8003B4A0
	/* end block 1 */
	// End offset: 0x8003B4B8
	// End Line: 511

	/* begin block 2 */
		// Start line: 1124
	/* end block 2 */
	// End Line: 1125

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TownWitch__Fv(void)

{
	int i;
	
	i = GetActiveTowner__Fi(6);
	TownCtrlMsg__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownBarMaid__Fv()
 // line 517, offset 0x8003b4c8
	/* begin block 1 */
		// Start line: 518
		// Start offset: 0x8003B4C8
	/* end block 1 */
	// End offset: 0x8003B4E0
	// End Line: 520

	/* begin block 2 */
		// Start line: 1144
	/* end block 2 */
	// End Line: 1145

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TownBarMaid__Fv(void)

{
	int i;
	
	i = GetActiveTowner__Fi(7);
	TownCtrlMsg__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownCow__Fv()
 // line 526, offset 0x8003b4f0
	/* begin block 1 */
		// Start line: 527
		// Start offset: 0x8003B4F0
	/* end block 1 */
	// End offset: 0x8003B508
	// End Line: 530

	/* begin block 2 */
		// Start line: 1162
	/* end block 2 */
	// End Line: 1163

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TownCow__Fv(void)

{
	int i;
	
	i = GetActiveTowner__Fi(9);
	TownCtrlMsg__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessTowners__Fv()
 // line 536, offset 0x8003b518
	/* begin block 1 */
		// Start line: 537
		// Start offset: 0x8003B518

		/* begin block 1.1 */
			// Start line: 537
			// Start offset: 0x8003B518

			/* begin block 1.1.1 */
				// Start line: 540
				// Start offset: 0x8003B540

				/* begin block 1.1.1.1 */
					// Start line: 575
					// Start offset: 0x8003B620

					/* begin block 1.1.1.1.1 */
						// Start line: 576
						// Start offset: 0x8003B658

						/* begin block 1.1.1.1.1.1 */
							// Start line: 577
							// Start offset: 0x8003B658

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 578
								// Start offset: 0x8003B678
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8003B6D4
							// End Line: 582
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8003B740
						// End Line: 585
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003B740
					// End Line: 585
				/* end block 1.1.1.1 */
				// End offset: 0x8003B740
				// End Line: 585
			/* end block 1.1.1 */
			// End offset: 0x8003B740
			// End Line: 585
		/* end block 1.1 */
		// End offset: 0x8003B74C
		// End Line: 588
	/* end block 1 */
	// End offset: 0x8003B74C
	// End Line: 588

	/* begin block 2 */
		// Start line: 1182
	/* end block 2 */
	// End Line: 1183

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessTowners__Fv(void)

{
	int iVar1;
	int iVar2;
	int *piVar3;
	
	piVar3 = &towner[0]._tAnimCnt;
	iVar2 = 0;
	do {
		if (-0x7ff2f519 < (int)piVar3) {
			return;
		}
		switch(*(undefined4 *)((int)&towner[0]._ttype + iVar2)) {
		case 0:
			TownBlackSmith__Fv();
			break;
		case 1:
			TownHealer__Fv();
			break;
		case 2:
			TownDead__Fv();
			break;
		case 3:
			TownBarOwner__Fv();
			break;
		case 4:
			TownStory__Fv();
			break;
		case 5:
			TownDrunk__Fv();
			break;
		case 6:
			TownWitch__Fv();
			break;
		case 7:
			TownBarMaid__Fv();
			break;
		case 8:
			TownBoy__Fv();
			break;
		case 9:
			TownCow__Fv();
		}
		*(int *)((int)&towner[0]._tAnimCnt + iVar2) = *piVar3 + 1;
		if (*(int *)((int)&towner[0]._tAnimDelay + iVar2) <= *piVar3) {
			*(undefined4 *)((int)&towner[0]._tAnimCnt + iVar2) = 0;
			if ((int)(&towner[0]._tAnimOrder)[iVar2] < 0) {
				*(int *)((int)&towner[0]._tAnimFrame + iVar2) =
						 *(int *)((int)&towner[0]._tAnimFrame + iVar2) + 1;
				iVar1 = 1;
				if (*(int *)((int)&towner[0]._tAnimFrame + iVar2) <=
						*(int *)((int)&towner[0]._tAnimLen + iVar2)) goto LAB_8003b740;
			}
			else {
				*(int *)((int)&towner[0]._tAnimFrameCnt + iVar2) =
						 *(int *)((int)&towner[0]._tAnimFrameCnt + iVar2) + 1;
				if ((AnimOrder + (int)(&towner[0]._tAnimOrder)[iVar2] * 0x94)
						[*(int *)((int)&towner[0]._tAnimFrameCnt + iVar2)] == -1) {
					*(undefined4 *)((int)&towner[0]._tAnimFrameCnt + iVar2) = 0;
				}
				iVar1 = (int)(AnimOrder + (int)(&towner[0]._tAnimOrder)[iVar2] * 0x94)
										 [*(int *)((int)&towner[0]._tAnimFrameCnt + iVar2)];
			}
			*(int *)((int)&towner[0]._tAnimFrame + iVar2) = iVar1;
		}
LAB_8003b740:
		piVar3 = piVar3 + 0x31;
		iVar2 = iVar2 + 0xc4;
	} while( true );
}



// decompiled code
// original method signature: 
// struct ItemStruct * /*$ra*/ PlrHasItem__FiiRi(int pnum /*$a0*/, int item /*$a1*/, int *i /*$a2*/)
 // line 593, offset 0x8003b768
	/* begin block 1 */
		// Start line: 594
		// Start offset: 0x8003B768
	/* end block 1 */
	// End offset: 0x8003B834
	// End Line: 599

	/* begin block 2 */
		// Start line: 1307
	/* end block 2 */
	// End Line: 1308

/* WARNING: Unknown calling convention yet parameter storage is locked */

ItemStruct * PlrHasItem__FiiRi(int pnum,int item,int *i)

{
	int iVar1;
	
	*i = 0;
	if (0 < plr[pnum]._pNumInv) {
		do {
			iVar1 = *i;
			if ((int)plr[pnum].InvList[iVar1].IDidx == item) {
				return (ItemStruct *)(pnum * 0x19e8 + -0x7ff25624 + iVar1 * 0x6c);
			}
			*i = iVar1 + 1;
		} while (iVar1 + 1 < plr[pnum]._pNumInv);
	}
	return (ItemStruct *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CowSFX__Fi(int pnum /*$a2*/)
 // line 607, offset 0x8003b83c
	/* begin block 1 */
		// Start line: 608
		// Start offset: 0x8003B83C
		// Variables:
	// 		static int snSFX[3][3]; // offset 0x801112cc
	// 		static int snLastCowSFX; // offset 0x8011b818
	/* end block 1 */
	// End offset: 0x8003B948
	// End Line: 653

	/* begin block 2 */
		// Start line: 1334
	/* end block 2 */
	// End Line: 1335

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CowSFX__Fi(int pnum)

{
	int iVar1;
	
	sgdwCowClicks = sgdwCowClicks + 1;
	if (CowPlaying == 0) {
		if (sgdwCowClicks < 4) {
			PTR_8011b818 = (int *)0xd9;
			if (sgdwCowClicks == 1) {
				PTR_8011b818 = (int *)0xda;
			}
			CowPlaying = 100;
			iVar1 = pnum << 1;
		}
		else {
			sgdwCowClicks = 0;
			PTR_8011b818 = *(int **)((int)plr[pnum]._pClass * 4 + sgnCowMsg * 0xc + -0x7feeed34);
			sgnCowMsg = sgnCowMsg + 1;
			iVar1 = pnum * 2;
			if (2 < sgnCowMsg) {
				sgnCowMsg = 0;
			}
		}
		iVar1 = iVar1 * 0x100 + pnum * 0x13d;
		PlaySfxLoc__Fiii((int)PTR_8011b818,(int)(&plr[0]._px)[iVar1 * 4],(int)(&plr[0]._py)[iVar1 * 4]);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownerTalk__Fii(int first /*$a0*/, int t /*$a1*/)
 // line 659, offset 0x8003b958
	/* begin block 1 */
		// Start line: 660
		// Start offset: 0x8003B958
	/* end block 1 */
	// End offset: 0x8003B988
	// End Line: 667

	/* begin block 2 */
		// Start line: 1458
	/* end block 2 */
	// End Line: 1459

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TownerTalk__Fii(int first,int t)

{
	sgdwCowClicks = 0;
	sgnCowMsg = 0;
	storeflag = '\x01';
	options_pad = myplr;
	InitQTextMsg__Fi(first);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TalkToTowner__Fii(int p /*$s2*/, int t /*$s3*/)
 // line 673, offset 0x8003b998
	/* begin block 1 */
		// Start line: 674
		// Start offset: 0x8003B998
		// Variables:
	// 		int i; // stack offset -32
	// 		int dx; // $s0
	// 		int dy; // $v0
	// 		struct ItemStruct *Item; // $s1

		/* begin block 1.1 */
			// Start line: 700
			// Start offset: 0x8003BAD8

			/* begin block 1.1.1 */
				// Start line: 775
				// Start offset: 0x8003BF1C

				/* begin block 1.1.1.1 */
					// Start line: 775
					// Start offset: 0x8003BF1C

					/* begin block 1.1.1.1.1 */
						// Start line: 775
						// Start offset: 0x8003BF2C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 776
							// Start offset: 0x8003BF2C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 776
								// Start offset: 0x8003BF54
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8003C05C
							// End Line: 786
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8003C148
						// End Line: 807
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003C148
					// End Line: 807
				/* end block 1.1.1.1 */
				// End offset: 0x8003CF10
				// End Line: 1099
			/* end block 1.1.1 */
			// End offset: 0x8003CF10
			// End Line: 1099
		/* end block 1.1 */
		// End offset: 0x8003CF10
		// End Line: 1099
	/* end block 1 */
	// End offset: 0x8003CF10
	// End Line: 1099

	/* begin block 2 */
		// Start line: 1492
	/* end block 2 */
	// End Line: 1493

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TalkToTowner__Fii(int p,int t)

{
	uchar q;
	int m;
	int iVar1;
	ItemStruct *pIVar2;
	_135fake psfx;
	int local_20 [2];
	
	ENG_random__Fl(3);
	ENG_random__Fl(4);
	ENG_random__Fl(5);
	m = abs((int)plr[p]._px - towner[t]._tx);
	iVar1 = abs((int)plr[p]._py - towner[t]._ty);
	if (2 < m) {
		return;
	}
	if (2 < iVar1) {
		return;
	}
	if (qtextflag != '\0') {
		return;
	}
	if (stextflag != '\0') {
		return;
	}
	towner[t]._tMsgSaid = '\0';
	if ((0xb < (&_pcurs)[myplr]) && (q = DropItemBeforeTrig__Fv(), q == '\0')) {
		return;
	}
	m = GetActiveTowner__Fi(3);
	if (t == m) {
		if ((plr[p]._pLvlVisited[1] == '\0') && (towner[t]._tMsgSaid == '\0')) {
			towner[t]._tbtcnt = 0x96;
			towner[t]._tVar1 = p;
			InitQTextMsg__Fi(0x102);
			towner[t]._tMsgSaid = '\x01';
		}
		if (((plr[p]._pLvlVisited[2] != '\0') || (plr[p]._pLvlVisited[4] != '\0')) &&
			 (quests[12]._qactive != '\0')) {
			if ((quests[12]._qvar2 == '\0') && (towner[t]._tMsgSaid == '\0')) {
				quests[12]._qvar2 = '\x01';
				quests[12]._qlog = '\x01';
				if (quests[12]._qactive == '\x01') {
					quests[12]._qactive = '\x02';
					quests[12]._qvar1 = '\x01';
				}
				towner[t]._tbtcnt = 0x96;
				towner[t]._tVar1 = p;
				InitQTextMsg__Fi(1);
				towner[t]._tMsgSaid = '\x01';
				NetSendCmdQuest__FUcUc('\x01','\f');
			}
			if (((quests[12]._qactive == '\x03') && (quests[12]._qvar2 == '\x01')) &&
				 (towner[t]._tMsgSaid == '\0')) {
				quests[12]._qvar2 = '\x02';
				quests[12]._qvar1 = '\x02';
				towner[t]._tbtcnt = 0x96;
				towner[t]._tVar1 = p;
				InitQTextMsg__Fi(3);
				towner[t]._tMsgSaid = '\x01';
				NetSendCmdQuest__FUcUc('\x01','\f');
			}
		}
		if ((gbMaxPlayers == '\x01') && (plr[p]._pLvlVisited[3] != '\0')) {
			if (quests[7]._qactive != '\0') {
				if ((((uint)quests[7]._qactive - 1 < 2) && (quests[7]._qvar2 == '\0')) &&
					 (towner[t]._tMsgSaid == '\0')) {
					quests[7]._qvar2 = '\x01';
					if ((uint)quests[7]._qactive == (uint)gbMaxPlayers) {
						quests[7]._qvar1 = '\x01';
						quests[7]._qactive = '\x02';
					}
					quests[7]._qlog = '\x01';
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					InitQTextMsg__Fi(0xc);
					towner[t]._tMsgSaid = '\x01';
					NetSendCmdQuest__FUcUc('\x01','\a');
				}
				if (((quests[7]._qvar2 == '\x01') &&
						(pIVar2 = PlrHasItem__FiiRi(p,0xc,local_20), pIVar2 != (ItemStruct *)0x0)) &&
					 (towner[t]._tMsgSaid == '\0')) {
					quests[7]._qactive = '\x03';
					quests[7]._qvar1 = '\x03';
					RemoveInvItem__Fii(p,local_20[0]);
					CreateItem__Fiii(5,towner[t]._tx,towner[t]._ty + 1);
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					InitQTextMsg__Fi(0xd);
					towner[t]._tMsgSaid = '\x01';
					NetSendCmdQuest__FUcUc('\x01','\a');
				}
			}
		}
		if (qtextflag != '\0') {
			return;
		}
		TownerTalk__Fii(0xa0,t);
		if (storeflag == '\0') {
			return;
		}
		StartStore__Fc('\x15');
		return;
	}
	m = GetActiveTowner__Fi(2);
	if (t == m) {
		if ((quests[6]._qactive != '\x02') || (quests[6]._qvar1 != '\x01')) {
			if ((quests[6]._qactive == '\x03') && (quests[6]._qvar1 == '\x01')) {
				quests[6]._qvar1 = '\x01';
				towner[t]._tbtcnt = 0x96;
				towner[t]._tVar1 = p;
				towner[t]._tMsgSaid = '\x01';
				NetSendCmdQuest__FUcUc('\x01','\x06');
				return;
			}
			if (quests[6]._qactive != '\x01') {
				if (quests[6]._qactive != '\x02') {
					return;
				}
				if (quests[6]._qvar1 != '\0') {
					return;
				}
			}
			quests[6]._qactive = '\x02';
			quests[6]._qmsg = '?';
			quests[6]._qlog = '\x01';
			quests[6]._qvar1 = '\x01';
			towner[t]._tbtcnt = 0x32;
			towner[t]._tVar1 = p;
			towner[t]._tVar2 = 3;
			InitQTextMsg__Fi(0x3f);
			towner[t]._tMsgSaid = '\x01';
			NetSendCmdQuest__FUcUc('\x01','\x06');
			return;
		}
		towner[t]._tbtcnt = 0x96;
		towner[t]._tVar1 = p;
		quests[6]._qvar1 = '\x01';
		if ((plr[p]._pClass == '\0') && (q = effect_is_playing__Fi(0x2d3), q == '\0')) {
			psfx = PS_WARR8;
		}
		else {
			if ((plr[p]._pClass == '\x01') && (q = effect_is_playing__Fi(0x26b), q == '\0')) {
				psfx = PS_ROGUE8;
			}
			else {
				if ((plr[p]._pClass != '\x02') || (q = effect_is_playing__Fi(0x203), q != '\0'))
				goto LAB_8003c060;
				psfx = PS_MAGE8;
			}
		}
		PlaySFX__Fi(psfx);
LAB_8003c060:
		towner[t]._tMsgSaid = '\x01';
		NetSendCmdQuest__FUcUc('\x01','\x06');
		return;
	}
	m = GetActiveTowner__Fi(0);
	if (t == m) {
		if (gbMaxPlayers == '\x01') {
			if ((plr[p]._pLvlVisited[4] != '\0') && (quests[0]._qactive != '\0')) {
				if (quests[0]._qvar2 == '\0') {
					quests[0]._qvar2 = '\x01';
					quests[0]._qlog = '\x01';
					if (quests[0]._qactive == '\x01') {
						quests[0]._qactive = '\x02';
						quests[0]._qvar1 = '\x01';
					}
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					InitQTextMsg__Fi(0x73);
					towner[t]._tMsgSaid = '\x01';
					NetSendCmdQuest__FUcUc('\x01','\0');
				}
				if (((quests[0]._qvar2 == '\x01') &&
						(pIVar2 = PlrHasItem__FiiRi(p,9,local_20), pIVar2 != (ItemStruct *)0x0)) &&
					 (towner[t]._tMsgSaid == '\0')) {
					quests[0]._qactive = '\x03';
					quests[0]._qvar2 = '\x02';
					quests[0]._qvar1 = '\x02';
					RemoveInvItem__Fii(p,local_20[0]);
					CreateItem__Fiii(2,towner[t]._tx,towner[t]._ty + 1);
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					InitQTextMsg__Fi(0x75);
					towner[t]._tMsgSaid = '\x01';
					NetSendCmdQuest__FUcUc('\x01','\0');
				}
			}
			if ((plr[p]._pLvlVisited[9] != '\0') && (quests[10]._qactive != '\0')) {
				if ((((uint)quests[10]._qactive - 1 < 2) &&
						((quests[10]._qvar2 == '\0' && (towner[t]._tMsgSaid == '\0')))) &&
					 ((quests[0]._qvar2 == '\x02' ||
						((quests[0]._qactive == '\x02' && (quests[0]._qvar2 == '\x01')))))) {
					quests[10]._qvar2 = '\x01';
					quests[10]._qlog = '\x01';
					if (quests[10]._qactive == '\x01') {
						quests[10]._qactive = '\x02';
						quests[10]._qvar1 = '\x01';
					}
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					InitQTextMsg__Fi(0x58);
					towner[t]._tMsgSaid = '\x01';
					NetSendCmdQuest__FUcUc('\x01','\0');
				}
				if (((quests[10]._qvar2 == '\x01') &&
						(pIVar2 = PlrHasItem__FiiRi(p,0x10,local_20), pIVar2 != (ItemStruct *)0x0)) &&
					 (towner[t]._tMsgSaid == '\0')) {
					quests[10]._qactive = '\x03';
					quests[10]._qvar2 = '\x02';
					quests[10]._qvar1 = '\x02';
					RemoveInvItem__Fii(p,local_20[0]);
					CreateItem__Fiii(8,towner[t]._tx,towner[t]._ty + 1);
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					InitQTextMsg__Fi(0x5a);
					towner[t]._tMsgSaid = '\x01';
					NetSendCmdQuest__FUcUc('\x01','\n');
				}
			}
		}
		if (qtextflag != '\0') {
			return;
		}
		TownerTalk__Fii(0xbc,t);
		if (storeflag == '\0') {
			return;
		}
		StartStore__Fc('\x01');
		return;
	}
	m = GetActiveTowner__Fi(6);
	if (t == m) {
		if ((quests[1]._qactive == '\x01') &&
			 (pIVar2 = PlrHasItem__FiiRi(p,0x13,local_20), pIVar2 != (ItemStruct *)0x0)) {
			RemoveInvItem__Fii(p,local_20[0]);
			quests[1]._qactive = '\x02';
			quests[1]._qvar1 = '\x02';
			quests[1]._qlog = '\x01';
			towner[t]._tbtcnt = 0x96;
			towner[t]._tVar1 = p;
			InitQTextMsg__Fi(0x80);
			towner[t]._tMsgSaid = '\x01';
		}
		else {
			if (quests[1]._qactive != '\x02') goto LAB_8003c898;
			if ((uint)quests[1]._qvar1 - 2 < 3) {
				pIVar2 = PlrHasItem__FiiRi(p,0x11,local_20);
				if (pIVar2 == (ItemStruct *)0x0) {
					if (quests[1]._qmsg == -0x7f) goto LAB_8003c898;
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					quests[1]._qmsg = -0x7f;
					m = 0x81;
				}
				else {
					RemoveInvItem__Fii(p,local_20[0]);
					quests[1]._qvar1 = '\x05';
					DAT_800cfc04 = 0x7b;
					DAT_800cfd44 = 0xffffffff;
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					quests[1]._qmsg = -0x7e;
					m = 0x82;
				}
			}
			else {
				pIVar2 = PlrHasItem__FiiRi(p,0x14,local_20);
				if (pIVar2 != (ItemStruct *)0x0) {
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					InitQTextMsg__Fi(0x84);
					quests[1]._qactive = '\x03';
					towner[t]._tMsgSaid = '\x01';
					(&AllItemsUseable)[(int)pIVar2->IDidx] = '\x01';
					goto LAB_8003c890;
				}
				pIVar2 = PlrHasItem__FiiRi(p,0x12,local_20);
				if ((pIVar2 == (ItemStruct *)0x0) || (m = 0x83, quests[1]._qvar2 == -0x7d))
				goto LAB_8003c898;
				towner[t]._tbtcnt = 0x96;
				towner[t]._tVar1 = p;
				quests[1]._qvar2 = -0x7d;
			}
			InitQTextMsg__Fi(m);
			towner[t]._tMsgSaid = '\x01';
		}
LAB_8003c890:
		NetSendCmdQuest__FUcUc('\x01','\x01');
LAB_8003c898:
		if (qtextflag != '\0') {
			return;
		}
		TownerTalk__Fii(0xd4,t);
		if (storeflag == '\0') {
			return;
		}
		StartStore__Fc('\x05');
		return;
	}
	m = GetActiveTowner__Fi(7);
	if (t == m) {
		if (qtextflag != '\0') {
			return;
		}
		TownerTalk__Fii(0xb3,t);
		if (storeflag == '\0') {
			return;
		}
		StartStore__Fc('\x17');
		return;
	}
	m = GetActiveTowner__Fi(5);
	if (t == m) {
		if (qtextflag != '\0') {
			return;
		}
		TownerTalk__Fii(200,t);
		if (storeflag == '\0') {
			return;
		}
		StartStore__Fc('\x16');
		return;
	}
	m = GetActiveTowner__Fi(1);
	if (t == m) {
		if (gbMaxPlayers == '\x01') {
			if ((quests[1]._qactive == '\x02') && (quests[1]._qmsg == -0x7e)) {
				pIVar2 = PlrHasItem__FiiRi(p,0x12,local_20);
				if (pIVar2 == (ItemStruct *)0x0) goto LAB_8003cb9c;
				RemoveInvItem__Fii(p,local_20[0]);
				SpawnQuestItem__Fiiiii(0x14,towner[t]._tx,towner[t]._ty + 1,0,0);
				InitQTextMsg__Fi(0x7c);
				quests[1]._qvar1 = '\a';
				DAT_800cfc04 = 0xffffffff;
				q = '\x01';
			}
			else {
				if ((plr[p]._pLvlVisited[1] == '\0') || (towner[t]._tMsgSaid != '\0')) goto LAB_8003cb9c;
				if (quests[13]._qactive == '\x01') {
					quests[13]._qactive = '\x02';
					quests[13]._qmsg = '\'';
					quests[13]._qlog = '\x01';
					quests[13]._qvar1 = '\x01';
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					InitQTextMsg__Fi(0x27);
					towner[t]._tMsgSaid = '\x01';
					q = '\r';
				}
				else {
					if ((quests[13]._qactive != '\x03') || (quests[13]._qvar1 == '\x02')) goto LAB_8003cb9c;
					quests[13]._qvar1 = '\x02';
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					InitQTextMsg__Fi(0x29);
					CreateItem__Fiii(4,towner[t]._tx,towner[t]._ty + 1);
					q = '\r';
					towner[t]._tMsgSaid = '\x01';
				}
			}
			NetSendCmdQuest__FUcUc('\x01',q);
		}
LAB_8003cb9c:
		if (qtextflag != '\0') {
			return;
		}
		TownerTalk__Fii(0xa9,t);
		if (storeflag == '\0') {
			return;
		}
		StartStore__Fc('\x0e');
		return;
	}
	m = GetActiveTowner__Fi(8);
	if (t == m) {
		if (qtextflag != '\0') {
			return;
		}
		TownerTalk__Fii(0xe0,t);
		if (storeflag == '\0') {
			return;
		}
		StartStore__Fc('\f');
		return;
	}
	m = GetActiveTowner__Fi(4);
	if (t != m) {
		if (towner[t]._ttype != 9) {
			return;
		}
		if (qtextflag != '\0') {
			return;
		}
		CowSFX__Fi(p);
		return;
	}
	if (gbMaxPlayers == '\x01') {
		if ((quests[15]._qactive == '\x01') &&
			 (pIVar2 = PlrHasItem__FiiRi(p,0x21,local_20), pIVar2 != (ItemStruct *)0x0)) {
			RemoveInvItem__Fii(p,local_20[0]);
			quests[15]._qvar1 = '\x02';
			towner[t]._tbtcnt = 0x96;
			towner[t]._tVar1 = p;
			InitQTextMsg__Fi(0x17);
			towner[t]._tMsgSaid = '\x01';
			quests[15]._qactive = '\x02';
			quests[15]._qlog = '\x01';
LAB_8003cd60:
			NetSendCmdQuest__FUcUc('\x01','\x0f');
		}
		else {
			if ((quests[15]._qactive == '\x03') && (quests[15]._qvar1 == '\a')) {
				quests[15]._qvar1 = '\b';
				towner[t]._tbtcnt = 0x96;
				towner[t]._tVar1 = p;
				InitQTextMsg__Fi(0x19);
				towner[t]._tMsgSaid = '\x01';
				quests[5]._qlog = '\x01';
				goto LAB_8003cd60;
			}
		}
		if (gbMaxPlayers == '\x01') goto LAB_8003ce90;
	}
	if ((quests[15]._qactive == '\x02') && (quests[15]._qlog == '\0')) {
		towner[t]._tbtcnt = 0x96;
		towner[t]._tVar1 = p;
		InitQTextMsg__Fi(0x17);
		towner[t]._tMsgSaid = '\x01';
		quests[15]._qlog = '\x01';
		q = '\x0f';
	}
	else {
		if ((quests[15]._qactive != '\x03') || (quests[15]._qvar1 != '\a')) goto LAB_8003ce90;
		quests[15]._qvar1 = '\b';
		towner[t]._tbtcnt = 0x96;
		towner[t]._tVar1 = p;
		InitQTextMsg__Fi(0x19);
		towner[t]._tMsgSaid = '\x01';
		NetSendCmdQuest__FUcUc('\x01','\x0f');
		q = '\x05';
		quests[5]._qlog = '\x01';
	}
	NetSendCmdQuest__FUcUc('\x01',q);
LAB_8003ce90:
	if (qtextflag != '\0') {
		return;
	}
	TownerTalk__Fii(0x96,t);
	if (storeflag == '\0') {
		return;
	}
	StartStore__Fc('\x0f');
	return;
}





