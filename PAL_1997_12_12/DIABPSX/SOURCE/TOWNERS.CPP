#include "THISDUST.H"
#include "TOWNERS.H"


// decompiled code
// original method signature: 
// int /*$ra*/ GetActiveTowner__Fi(int t /*$a0*/)
 // line 99, offset 0x8003721c
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x8003721C

		/* begin block 1.1 */
			// Start line: 100
			// Start offset: 0x8003721C
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x80037260
		// End Line: 103
	/* end block 1 */
	// End offset: 0x80037264
	// End Line: 104

	/* begin block 2 */
		// Start line: 198
	/* end block 2 */
	// End Line: 199

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
			iVar2 = iVar2 + 0xe0;
		} while (iVar1 < numtowners);
	}
	return -1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetTownerGPtrs__FPUcPPUc(unsigned char *pData /*$a0*/, unsigned char **pAnim /*$a1*/)
 // line 108, offset 0x80037270
	/* begin block 1 */
		// Start line: 109
		// Start offset: 0x80037270
		// Variables:
	// 		int i; // $v0
	/* end block 1 */
	// End offset: 0x80037288
	// End Line: 127

	/* begin block 2 */
		// Start line: 220
	/* end block 2 */
	// End Line: 221

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
 // line 132, offset 0x80037290
	/* begin block 1 */
		// Start line: 133
		// Start offset: 0x80037290
	/* end block 1 */
	// End offset: 0x800372D0
	// End Line: 143

	/* begin block 2 */
		// Start line: 271
	/* end block 2 */
	// End Line: 272

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
// void /*$ra*/ InitTownerInfo__FilUciiici(int i /*$s4*/, long w /*$s1*/, unsigned char sel /*$s5*/, int t /*$s6*/, int x /*stack 16*/, int y /*stack 20*/, int ao /*stack 24*/, int tp /*stack 28*/)
 // line 148, offset 0x800372d8
	/* begin block 1 */
		// Start line: 149
		// Start offset: 0x800372D8
	/* end block 1 */
	// End offset: 0x80037404
	// End Line: 161

	/* begin block 2 */
		// Start line: 297
	/* end block 2 */
	// End Line: 298

void InitTownerInfo__FilUciiici(int i,long w,uchar sel,int t,int x,int y,int ao,int tp)

{
	long lVar1;
	
	memset(towner + i,0,0xe0);
	towner[i]._tAnimWidth = w;
	towner[i]._tSelFlag = sel;
	towner[i]._tAnimWidth2 = w + -0x40 >> 1;
	towner[i]._tMsgSaid = '\0';
	towner[i]._ttype = t;
	towner[i]._tx = x;
	towner[i]._ty = y;
	dung_map[x * 0x6c + y].dMonster = (short)i + 1;
	towner[i]._tAnimOrder = (char)ao;
	towner[i]._tTenPer = tp;
	lVar1 = GetRndSeed__Fv();
	towner[i]._tSeed = lVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitQstSnds__Fi(int i /*$a3*/)
 // line 166, offset 0x80037438
	/* begin block 1 */
		// Start line: 167
		// Start offset: 0x80037438
		// Variables:
	// 		int j; // $a0

		/* begin block 1.1 */
			// Start line: 171
			// Start offset: 0x8003744C
			// Variables:
		// 		int quest; // $a2
		/* end block 1.1 */
		// End offset: 0x800374E8
		// End Line: 176
	/* end block 1 */
	// End offset: 0x800374E8
	// End Line: 176

	/* begin block 2 */
		// Start line: 349
	/* end block 2 */
	// End Line: 350

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
	i = i * 0xe0;
	do {
		(&towner[0].qsts[0]._qsttype)[i] = (&quests._qtype)[iVar1];
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
 // line 181, offset 0x800374f0
	/* begin block 1 */
		// Start line: 182
		// Start offset: 0x800374F0

		/* begin block 1.1 */
			// Start line: 182
			// Start offset: 0x800374F0
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x80037594
		// End Line: 187
	/* end block 1 */
	// End offset: 0x8003760C
	// End Line: 191

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
	char *__src;
	_func_35 **pp_Var3;
	int iVar4;
	_func_35 *pAnim;
	
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
	__src = GetStr__Fi(STR_GRISWOLD_THE_BLACKSMITH);
	strcpy(towner[numtowners]._tName,__src);
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitBarOwner__Fv()
 // line 196, offset 0x8003761c
	/* begin block 1 */
		// Start line: 197
		// Start offset: 0x8003761C

		/* begin block 1.1 */
			// Start line: 197
			// Start offset: 0x8003761C
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x800376C8
		// End Line: 203
	/* end block 1 */
	// End offset: 0x80037740
	// End Line: 207

	/* begin block 2 */
		// Start line: 411
	/* end block 2 */
	// End Line: 412

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitBarOwner__Fv(void)

{
	int iVar1;
	int tnum;
	uchar *puVar2;
	char *__src;
	_func_35 **pp_Var3;
	int iVar4;
	_func_35 *pAnim;
	
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
	__src = GetStr__Fi(STR_OGDEN_THE_TAVERN_OWNER);
	strcpy(towner[numtowners]._tName,__src);
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitTownDead__Fv()
 // line 211, offset 0x80037750
	/* begin block 1 */
		// Start line: 212
		// Start offset: 0x80037750

		/* begin block 1.1 */
			// Start line: 212
			// Start offset: 0x80037750
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x800377F8
		// End Line: 217
	/* end block 1 */
	// End offset: 0x80037870
	// End Line: 221

	/* begin block 2 */
		// Start line: 447
	/* end block 2 */
	// End Line: 448

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitTownDead__Fv(void)

{
	int iVar1;
	int tnum;
	uchar *puVar2;
	char *__src;
	_func_35 **pp_Var3;
	int iVar4;
	_func_35 *pAnim;
	
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
	__src = GetStr__Fi(STR_WOUNDED_TOWNSMAN);
	strcpy(towner[numtowners]._tName,__src);
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitWitch__Fv()
 // line 225, offset 0x80037880
	/* begin block 1 */
		// Start line: 226
		// Start offset: 0x80037880

		/* begin block 1.1 */
			// Start line: 226
			// Start offset: 0x80037880
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x80037928
		// End Line: 231
	/* end block 1 */
	// End offset: 0x800379A0
	// End Line: 235

	/* begin block 2 */
		// Start line: 480
	/* end block 2 */
	// End Line: 481

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitWitch__Fv(void)

{
	int iVar1;
	int tnum;
	uchar *puVar2;
	char *__src;
	_func_35 **pp_Var3;
	int iVar4;
	_func_35 *pAnim;
	
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
	__src = GetStr__Fi(STR_ADRIA_THE_WITCH);
	strcpy(towner[numtowners]._tName,__src);
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitBarmaid__Fv()
 // line 239, offset 0x800379b0
	/* begin block 1 */
		// Start line: 240
		// Start offset: 0x800379B0

		/* begin block 1.1 */
			// Start line: 240
			// Start offset: 0x800379B0
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x80037A58
		// End Line: 245
	/* end block 1 */
	// End offset: 0x80037AD0
	// End Line: 249

	/* begin block 2 */
		// Start line: 513
	/* end block 2 */
	// End Line: 514

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitBarmaid__Fv(void)

{
	int iVar1;
	int tnum;
	uchar *puVar2;
	char *__src;
	_func_35 **pp_Var3;
	int iVar4;
	_func_35 *pAnim;
	
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
	__src = GetStr__Fi(STR_GILLIAN_THE_BARMAID);
	strcpy(towner[numtowners]._tName,__src);
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitBoy__Fv()
 // line 253, offset 0x80037ae0
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x80037AE0

		/* begin block 1.1 */
			// Start line: 254
			// Start offset: 0x80037AE0
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x80037B90
		// End Line: 260
	/* end block 1 */
	// End offset: 0x80037C08
	// End Line: 264

	/* begin block 2 */
		// Start line: 546
	/* end block 2 */
	// End Line: 547

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitBoy__Fv(void)

{
	int iVar1;
	int tnum;
	uchar *puVar2;
	char *__src;
	_func_35 **pp_Var3;
	int iVar4;
	_func_35 *pAnim;
	
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
	__src = GetStr__Fi(STR_WIRT_THE_PEG_LEGGED_BOY);
	strcpy(towner[numtowners]._tName,__src);
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitHealer__Fv()
 // line 268, offset 0x80037c18
	/* begin block 1 */
		// Start line: 269
		// Start offset: 0x80037C18

		/* begin block 1.1 */
			// Start line: 269
			// Start offset: 0x80037C18
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x80037CC0
		// End Line: 274
	/* end block 1 */
	// End offset: 0x80037D38
	// End Line: 278

	/* begin block 2 */
		// Start line: 583
	/* end block 2 */
	// End Line: 584

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitHealer__Fv(void)

{
	int iVar1;
	int tnum;
	uchar *puVar2;
	char *__src;
	_func_35 **pp_Var3;
	int iVar4;
	_func_35 *pAnim;
	
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
	__src = GetStr__Fi(STR_PEPIN_THE_HEALER);
	strcpy(towner[numtowners]._tName,__src);
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitTeller__Fv()
 // line 283, offset 0x80037d48
	/* begin block 1 */
		// Start line: 284
		// Start offset: 0x80037D48

		/* begin block 1.1 */
			// Start line: 284
			// Start offset: 0x80037D48
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x80037DF0
		// End Line: 289
	/* end block 1 */
	// End offset: 0x80037E68
	// End Line: 293

	/* begin block 2 */
		// Start line: 618
	/* end block 2 */
	// End Line: 619

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitTeller__Fv(void)

{
	int iVar1;
	int tnum;
	uchar *puVar2;
	char *__src;
	_func_35 **pp_Var3;
	int iVar4;
	_func_35 *pAnim;
	
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
	__src = GetStr__Fi(STR_CAIN_THE_ELDER);
	strcpy(towner[numtowners]._tName,__src);
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitDrunk__Fv()
 // line 297, offset 0x80037e78
	/* begin block 1 */
		// Start line: 298
		// Start offset: 0x80037E78

		/* begin block 1.1 */
			// Start line: 298
			// Start offset: 0x80037E78
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x80037F20
		// End Line: 303
	/* end block 1 */
	// End offset: 0x80037F98
	// End Line: 307

	/* begin block 2 */
		// Start line: 651
	/* end block 2 */
	// End Line: 652

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitDrunk__Fv(void)

{
	int iVar1;
	int tnum;
	uchar *puVar2;
	char *__src;
	_func_35 **pp_Var3;
	int iVar4;
	_func_35 *pAnim;
	
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
	__src = GetStr__Fi(STR_FARNHAM_THE_DRUNK);
	strcpy(towner[numtowners]._tName,__src);
	numtowners = numtowners + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitCows__Fv()
 // line 312, offset 0x80037fa8
	/* begin block 1 */
		// Start line: 313
		// Start offset: 0x80037FA8
		// Variables:
	// 		int i; // $s4
	// 		int x; // $s1
	// 		int y; // $s3
	// 		int d; // $s2
	// 		int x2; // $s1
	// 		int y2; // $v1
	/* end block 1 */
	// End offset: 0x80038240
	// End Line: 338

	/* begin block 2 */
		// Start line: 686
	/* end block 2 */
	// End Line: 687

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitCows__Fv(void)

{
	uchar *pData;
	int iVar1;
	long lVar2;
	char *__src;
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
		iVar1 = numtowners * 0xe0;
		towner[numtowners]._tNFrames = 0xc;
		NewTownerAnim__FiPUcii(tnum,*(uchar **)(iVar3 * 4 + iVar1 + -0x7ff40c34),0xc,3);
		lVar2 = random__Fil(0,0xb);
		tnum = numtowners;
		towner[numtowners]._tSelFlag = '\x01';
		iVar1 = numtowners;
		towner[tnum]._tAnimFrame = lVar2 + 1;
		towner[iVar1]._tdir = iVar3;
		__src = GetStr__Fi(STR_COW);
		strcpy(towner[numtowners]._tName,__src);
		tnum = y + (&cowoffy)[iVar3];
		iVar1 = x + (&cowoffx)[iVar3];
		if (dung_map[x * 0x6c + tnum].dMonster == 0) {
			dung_map[x * 0x6c + tnum].dMonster = ~(ushort)numtowners;
		}
		if (dung_map[iVar1 * 0x6c + y].dMonster == 0) {
			dung_map[iVar1 * 0x6c + y].dMonster = ~(ushort)numtowners;
		}
		if (dung_map[iVar1 * 0x6c + tnum].dMonster == 0) {
			dung_map[iVar1 * 0x6c + tnum].dMonster = ~(ushort)numtowners;
		}
		iVar4 = iVar4 + 1;
		numtowners = numtowners + 1;
	} while (iVar4 < 3);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitTowners__Fv()
 // line 344, offset 0x8003826c
	/* begin block 1 */
		// Start line: 345
		// Start offset: 0x8003826C
	/* end block 1 */
	// End offset: 0x800382E8
	// End Line: 359

	/* begin block 2 */
		// Start line: 766
	/* end block 2 */
	// End Line: 767

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitTowners__Fv(void)

{
	numtowners = 0;
	boyloadflag = '\0';
	InitSmith__Fv();
	InitHealer__Fv();
	if ((QuestStruct_ARRAY_800e3404[0]._qactive != '\0') &&
		 (QuestStruct_ARRAY_800e3404[0]._qactive != '\x03')) {
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
 // line 363, offset 0x800382f8
	/* begin block 1 */
		// Start line: 364
		// Start offset: 0x800382F8
		// Variables:
	// 		int i; // $s1

		/* begin block 1.1 */
			// Start line: 364
			// Start offset: 0x800382F8

			/* begin block 1.1.1 */
				// Start line: 367
				// Start offset: 0x80038310

				/* begin block 1.1.1.1 */
					// Start line: 368
					// Start offset: 0x8003831C

					/* begin block 1.1.1.1.1 */
						// Start line: 372
						// Start offset: 0x8003834C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 372
							// Start offset: 0x8003834C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 372
								// Start offset: 0x80038354

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 373
									// Start offset: 0x80038354
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80038368
								// End Line: 373
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80038368
							// End Line: 373
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80038368
						// End Line: 373
					/* end block 1.1.1.1.1 */
					// End offset: 0x80038368
					// End Line: 373
				/* end block 1.1.1.1 */
				// End offset: 0x80038368
				// End Line: 373
			/* end block 1.1.1 */
			// End offset: 0x80038368
			// End Line: 373
		/* end block 1.1 */
		// End offset: 0x80038374
		// End Line: 375

		/* begin block 1.2 */
			// Start line: 378
			// Start offset: 0x80038374
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.2 */
		// End offset: 0x80038384
		// End Line: 378
	/* end block 1 */
	// End offset: 0x80038384
	// End Line: 378

	/* begin block 2 */
		// Start line: 804
	/* end block 2 */
	// End Line: 805

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
		iVar1 = iVar1 + 0xe0;
		iVar2 = iVar2 + 1;
	}
	pCowCels = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownCtrlMsg__Fi(int i /*$s2*/)
 // line 384, offset 0x8003839c
	/* begin block 1 */
		// Start line: 385
		// Start offset: 0x8003839C
		// Variables:
	// 		int p; // $v0
	// 		int dx; // $s0
	// 		int dy; // $v0
	/* end block 1 */
	// End offset: 0x800384A0
	// End Line: 396

	/* begin block 2 */
		// Start line: 852
	/* end block 2 */
	// End Line: 853

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
		if (towner[i]._tbtcnt == 0) {
			qtextflag = '\0';
			stream_stop__Fv();
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownBlackSmith__Fv()
 // line 404, offset 0x800384bc
	/* begin block 1 */
		// Start line: 405
		// Start offset: 0x800384BC
		// Variables:
	// 		int x; // $a0
	// 		int y; // $v0
	// 		int tidx; // $s0
	/* end block 1 */
	// End offset: 0x800384DC
	// End Line: 413

	/* begin block 2 */
		// Start line: 899
	/* end block 2 */
	// End Line: 900

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TownBlackSmith__Fv(void)

{
	int i;
	
	i = GetActiveTowner__Fi(0);
	TownCtrlMsg__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownBarOwner__Fv()
 // line 420, offset 0x800384f0
	/* begin block 1 */
		// Start line: 421
		// Start offset: 0x800384F0
		// Variables:
	// 		int x; // $a0
	// 		int y; // $v0
	// 		int tidx; // $s0
	/* end block 1 */
	// End offset: 0x80038510
	// End Line: 428

	/* begin block 2 */
		// Start line: 934
	/* end block 2 */
	// End Line: 935

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TownBarOwner__Fv(void)

{
	int i;
	
	i = GetActiveTowner__Fi(3);
	TownCtrlMsg__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownDead__Fv()
 // line 435, offset 0x80038524
	/* begin block 1 */
		// Start line: 436
		// Start offset: 0x80038524
		// Variables:
	// 		int tidx; // $s1
	/* end block 1 */
	// End offset: 0x800385F4
	// End Line: 447

	/* begin block 2 */
		// Start line: 966
	/* end block 2 */
	// End Line: 967

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TownDead__Fv(void)

{
	int i;
	char *__src;
	
	i = GetActiveTowner__Fi(2);
	TownCtrlMsg__Fi(i);
	if (qtextflag == '\0') {
		if ((QuestStruct_ARRAY_800e3404[0]._qactive == '\x02') &&
			 (QuestStruct_ARRAY_800e3404[0]._qlog == '\0')) {
			return;
		}
		if (QuestStruct_ARRAY_800e3404[0]._qactive == '\x01') {
			return;
		}
		towner[i]._tAnimDelay = 1000;
		towner[i]._tAnimFrame = 1;
		__src = GetStr__Fi(STR_SLAIN_TOWNSMAN);
		strcpy(towner[i]._tName,__src);
	}
	if (QuestStruct_ARRAY_800e3404[0]._qactive != '\x01') {
		towner[i]._tAnimCnt = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownHealer__Fv()
 // line 453, offset 0x8003860c
	/* begin block 1 */
		// Start line: 454
		// Start offset: 0x8003860C
	/* end block 1 */
	// End offset: 0x80038624
	// End Line: 456

	/* begin block 2 */
		// Start line: 1003
	/* end block 2 */
	// End Line: 1004

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
 // line 462, offset 0x80038634
	/* begin block 1 */
		// Start line: 463
		// Start offset: 0x80038634
	/* end block 1 */
	// End offset: 0x8003864C
	// End Line: 466

	/* begin block 2 */
		// Start line: 1021
	/* end block 2 */
	// End Line: 1022

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
 // line 472, offset 0x8003865c
	/* begin block 1 */
		// Start line: 473
		// Start offset: 0x8003865C
	/* end block 1 */
	// End offset: 0x80038674
	// End Line: 476

	/* begin block 2 */
		// Start line: 1041
	/* end block 2 */
	// End Line: 1042

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
 // line 482, offset 0x80038684
	/* begin block 1 */
		// Start line: 483
		// Start offset: 0x80038684
	/* end block 1 */
	// End offset: 0x8003869C
	// End Line: 486

	/* begin block 2 */
		// Start line: 1061
	/* end block 2 */
	// End Line: 1062

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
 // line 493, offset 0x800386ac
	/* begin block 1 */
		// Start line: 494
		// Start offset: 0x800386AC
	/* end block 1 */
	// End offset: 0x800386C4
	// End Line: 497

	/* begin block 2 */
		// Start line: 1083
	/* end block 2 */
	// End Line: 1084

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
 // line 503, offset 0x800386d4
	/* begin block 1 */
		// Start line: 504
		// Start offset: 0x800386D4
	/* end block 1 */
	// End offset: 0x800386EC
	// End Line: 506

	/* begin block 2 */
		// Start line: 1103
	/* end block 2 */
	// End Line: 1104

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
 // line 512, offset 0x800386fc
	/* begin block 1 */
		// Start line: 513
		// Start offset: 0x800386FC
	/* end block 1 */
	// End offset: 0x80038714
	// End Line: 516

	/* begin block 2 */
		// Start line: 1121
	/* end block 2 */
	// End Line: 1122

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
 // line 522, offset 0x80038724
	/* begin block 1 */
		// Start line: 523
		// Start offset: 0x80038724

		/* begin block 1.1 */
			// Start line: 523
			// Start offset: 0x80038724

			/* begin block 1.1.1 */
				// Start line: 526
				// Start offset: 0x8003874C

				/* begin block 1.1.1.1 */
					// Start line: 561
					// Start offset: 0x8003882C

					/* begin block 1.1.1.1.1 */
						// Start line: 562
						// Start offset: 0x80038864

						/* begin block 1.1.1.1.1.1 */
							// Start line: 563
							// Start offset: 0x80038864

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 564
								// Start offset: 0x80038884
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800388E0
							// End Line: 568
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8003894C
						// End Line: 571
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003894C
					// End Line: 571
				/* end block 1.1.1.1 */
				// End offset: 0x8003894C
				// End Line: 571
			/* end block 1.1.1 */
			// End offset: 0x8003894C
			// End Line: 571
		/* end block 1.1 */
		// End offset: 0x80038958
		// End Line: 574
	/* end block 1 */
	// End offset: 0x80038958
	// End Line: 574

	/* begin block 2 */
		// Start line: 1141
	/* end block 2 */
	// End Line: 1142

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessTowners__Fv(void)

{
	int iVar1;
	int iVar2;
	int *piVar3;
	
	piVar3 = &towner[0]._tAnimCnt;
	iVar2 = 0;
	do {
		if (-0x7ff3fec5 < (int)piVar3) {
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
						*(int *)((int)&towner[0]._tAnimLen + iVar2)) goto LAB_8003894c;
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
LAB_8003894c:
		piVar3 = piVar3 + 0x38;
		iVar2 = iVar2 + 0xe0;
	} while( true );
}



// decompiled code
// original method signature: 
// struct ItemStruct * /*$ra*/ PlrHasItem__FiiRi(int pnum /*$a0*/, int item /*$a1*/, int *i /*$a2*/)
 // line 579, offset 0x80038974
	/* begin block 1 */
		// Start line: 580
		// Start offset: 0x80038974
	/* end block 1 */
	// End offset: 0x80038A40
	// End Line: 585

	/* begin block 2 */
		// Start line: 1266
	/* end block 2 */
	// End Line: 1267

ItemStruct * PlrHasItem__FiiRi(int pnum,int item,int *i)

{
	int iVar1;
	
	*i = 0;
	if (0 < plr[pnum]._pNumInv) {
		do {
			iVar1 = *i;
			if ((int)plr[pnum].InvList[iVar1].IDidx == item) {
				return (ItemStruct *)(pnum * 0x23a8 + -0x7ff20f00 + iVar1 * 0x98);
			}
			*i = iVar1 + 1;
		} while (iVar1 + 1 < plr[pnum]._pNumInv);
	}
	return (ItemStruct *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CowSFX__Fi(int pnum /*$a2*/)
 // line 593, offset 0x80038a48
	/* begin block 1 */
		// Start line: 594
		// Start offset: 0x80038A48
		// Variables:
	// 		static int snSFX[3][3]; // offset 0x80121288
	// 		static int snLastCowSFX; // offset 0x8012b308
	/* end block 1 */
	// End offset: 0x80038B54
	// End Line: 639

	/* begin block 2 */
		// Start line: 1293
	/* end block 2 */
	// End Line: 1294

void CowSFX__Fi(int pnum)

{
	int iVar1;
	
	sgdwCowClicks = sgdwCowClicks + 1;
	if (CowPlaying == 0) {
		if (sgdwCowClicks < 4) {
			DAT_8012b308 = TSFX_COW1;
			if (sgdwCowClicks == 1) {
				DAT_8012b308 = TSFX_COW2;
			}
			CowPlaying = 100;
			iVar1 = pnum << 3;
		}
		else {
			sgdwCowClicks = 0;
			DAT_8012b308 = *(_125fake *)((int)plr[pnum]._pClass * 4 + sgnCowMsg * 0xc + -0x7feded78);
			sgnCowMsg = sgnCowMsg + 1;
			iVar1 = pnum * 8;
			if (2 < sgnCowMsg) {
				sgnCowMsg = 0;
			}
		}
		iVar1 = iVar1 * 0x80 + pnum * 0x75;
		PlaySfxLoc__Fiii(DAT_8012b308,(int)(&plr[0]._px)[iVar1 * 4],(int)(&plr[0]._py)[iVar1 * 4]);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownerTalk__Fii(int first /*$a0*/, int t /*$a1*/)
 // line 645, offset 0x80038b64
	/* begin block 1 */
		// Start line: 646
		// Start offset: 0x80038B64
	/* end block 1 */
	// End offset: 0x80038B94
	// End Line: 653

	/* begin block 2 */
		// Start line: 1417
	/* end block 2 */
	// End Line: 1418

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
 // line 659, offset 0x80038ba4
	/* begin block 1 */
		// Start line: 660
		// Start offset: 0x80038BA4
		// Variables:
	// 		int i; // stack offset -32
	// 		int dx; // $s0
	// 		int dy; // $v0
	// 		struct ItemStruct *Item; // $s1

		/* begin block 1.1 */
			// Start line: 686
			// Start offset: 0x80038CD4

			/* begin block 1.1.1 */
				// Start line: 759
				// Start offset: 0x800390E0

				/* begin block 1.1.1.1 */
					// Start line: 759
					// Start offset: 0x800390E0

					/* begin block 1.1.1.1.1 */
						// Start line: 759
						// Start offset: 0x800390F0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 760
							// Start offset: 0x800390F0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 760
								// Start offset: 0x80039118
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80039220
							// End Line: 770
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800392E4
						// End Line: 789
					/* end block 1.1.1.1.1 */
					// End offset: 0x800392E4
					// End Line: 789
				/* end block 1.1.1.1 */
				// End offset: 0x80039FA8
				// End Line: 1054
			/* end block 1.1.1 */
			// End offset: 0x80039FA8
			// End Line: 1054
		/* end block 1.1 */
		// End offset: 0x80039FA8
		// End Line: 1054
	/* end block 1 */
	// End offset: 0x80039FA8
	// End Line: 1054

	/* begin block 2 */
		// Start line: 1451
	/* end block 2 */
	// End Line: 1452

void TalkToTowner__Fii(int p,int t)

{
	uchar q;
	int m;
	int iVar1;
	ItemStruct *pIVar2;
	_125fake psfx;
	int local_20 [2];
	
	random__Fil(6,3);
	random__Fil(6,4);
	random__Fil(6,5);
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
	towner[t]._tMsgSaid = '\0';
	if ((0xb < _pcurs[myplr]) && (q = DropItemBeforeTrig__Fv(), q == '\0')) {
		return;
	}
	m = GetActiveTowner__Fi(3);
	if (t == m) {
		if ((plr[p]._pLvlVisited[0] == '\0') && (towner[t]._tMsgSaid == '\0')) {
			towner[t]._tbtcnt = 0x96;
			towner[t]._tVar1 = p;
			InitQTextMsg__Fi(0x102);
			towner[t]._tMsgSaid = '\x01';
		}
		if (((plr[p]._pLvlVisited[2] != '\0') || (plr[p]._pLvlVisited[4] != '\0')) &&
			 (QuestStruct_800e347c._qactive != '\0')) {
			if ((QuestStruct_800e347c._qvar2 == '\0') && (towner[t]._tMsgSaid == '\0')) {
				QuestStruct_800e347c._qvar2 = '\x01';
				QuestStruct_800e347c._qlog = '\x01';
				if (QuestStruct_800e347c._qactive == '\x01') {
					QuestStruct_800e347c._qactive = '\x02';
					QuestStruct_800e347c._qvar1 = '\x01';
				}
				towner[t]._tbtcnt = 0x96;
				towner[t]._tVar1 = p;
				InitQTextMsg__Fi(1);
				towner[t]._tMsgSaid = '\x01';
				NetSendCmdQuest__FUcUc('\x01','\f');
			}
			if (((QuestStruct_800e347c._qactive == '\x03') && (QuestStruct_800e347c._qvar2 == '\x01')) &&
				 (towner[t]._tMsgSaid == '\0')) {
				QuestStruct_800e347c._qvar2 = '\x02';
				QuestStruct_800e347c._qvar1 = '\x02';
				towner[t]._tbtcnt = 0x96;
				towner[t]._tVar1 = p;
				InitQTextMsg__Fi(3);
				towner[t]._tMsgSaid = '\x01';
				NetSendCmdQuest__FUcUc('\x01','\f');
			}
		}
		if ((gbMaxPlayers == '\x01') && (plr[p]._pLvlVisited[3] != '\0')) {
			if (QuestStruct_ARRAY_800e3404[1]._qactive != '\0') {
				if ((((uint)QuestStruct_ARRAY_800e3404[1]._qactive - 1 < 2) &&
						(QuestStruct_ARRAY_800e3404[1]._qvar2 == '\0')) && (towner[t]._tMsgSaid == '\0')) {
					QuestStruct_ARRAY_800e3404[1]._qvar2 = '\x01';
					if ((uint)QuestStruct_ARRAY_800e3404[1]._qactive == (uint)gbMaxPlayers) {
						QuestStruct_ARRAY_800e3404[1]._qvar1 = '\x01';
						QuestStruct_ARRAY_800e3404[1]._qactive = '\x02';
					}
					QuestStruct_ARRAY_800e3404[1]._qlog = '\x01';
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					InitQTextMsg__Fi(0xc);
					towner[t]._tMsgSaid = '\x01';
				}
				if (((QuestStruct_ARRAY_800e3404[1]._qvar2 == '\x01') &&
						(pIVar2 = PlrHasItem__FiiRi(p,0xc,local_20), pIVar2 != (ItemStruct *)0x0)) &&
					 (towner[t]._tMsgSaid == '\0')) {
					QuestStruct_ARRAY_800e3404[1]._qactive = '\x03';
					QuestStruct_ARRAY_800e3404[1]._qvar1 = '\x03';
					RemoveInvItem__Fii(p,local_20[0]);
					CreateItem__Fiii(5,towner[t]._tx,towner[t]._ty + 1);
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					InitQTextMsg__Fi(0xd);
					towner[t]._tMsgSaid = '\x01';
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
		if ((QuestStruct_ARRAY_800e3404[0]._qactive != '\x02') ||
			 (QuestStruct_ARRAY_800e3404[0]._qvar1 != '\x01')) {
			if ((QuestStruct_ARRAY_800e3404[0]._qactive == '\x03') &&
				 (QuestStruct_ARRAY_800e3404[0]._qvar1 == '\x01')) {
				QuestStruct_ARRAY_800e3404[0]._qvar1 = '\x01';
				towner[t]._tbtcnt = 0x96;
				towner[t]._tVar1 = p;
				towner[t]._tMsgSaid = '\x01';
				return;
			}
			if (QuestStruct_ARRAY_800e3404[0]._qactive != '\x01') {
				if (QuestStruct_ARRAY_800e3404[0]._qactive != '\x02') {
					return;
				}
				if (QuestStruct_ARRAY_800e3404[0]._qvar1 != '\0') {
					return;
				}
			}
			QuestStruct_ARRAY_800e3404[0]._qactive = '\x02';
			QuestStruct_ARRAY_800e3404[0]._qmsg = '?';
			QuestStruct_ARRAY_800e3404[0]._qlog = '\x01';
			QuestStruct_ARRAY_800e3404[0]._qvar1 = '\x01';
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
		QuestStruct_ARRAY_800e3404[0]._qvar1 = '\x01';
		if ((plr[p]._pClass == '\0') && (q = effect_is_playing__Fi(0x2d3), q == '\0')) {
			psfx = PS_WARR8;
		}
		else {
			if ((plr[p]._pClass == '\x01') && (q = effect_is_playing__Fi(0x26b), q == '\0')) {
				psfx = PS_ROGUE8;
			}
			else {
				if ((plr[p]._pClass != '\x02') || (q = effect_is_playing__Fi(0x203), q != '\0'))
				goto LAB_80039224;
				psfx = PS_MAGE8;
			}
		}
		PlaySFX__Fi(psfx);
LAB_80039224:
		towner[t]._tMsgSaid = '\x01';
		return;
	}
	m = GetActiveTowner__Fi(0);
	if (t == m) {
		if (gbMaxPlayers == '\x01') {
			if ((plr[p]._pLvlVisited[4] != '\0') && (quests._qactive != '\0')) {
				if (quests._qvar2 == '\0') {
					quests._qvar2 = '\x01';
					quests._qlog = '\x01';
					if (quests._qactive == '\x01') {
						quests._qactive = '\x02';
						quests._qvar1 = '\x01';
					}
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					InitQTextMsg__Fi(0x73);
					towner[t]._tMsgSaid = '\x01';
				}
				if (((quests._qvar2 == '\x01') &&
						(pIVar2 = PlrHasItem__FiiRi(p,9,local_20), pIVar2 != (ItemStruct *)0x0)) &&
					 (towner[t]._tMsgSaid == '\0')) {
					quests._qactive = '\x03';
					quests._qvar2 = '\x02';
					quests._qvar1 = '\x02';
					RemoveInvItem__Fii(p,local_20[0]);
					CreateItem__Fiii(2,towner[t]._tx,towner[t]._ty + 1);
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					InitQTextMsg__Fi(0x75);
					towner[t]._tMsgSaid = '\x01';
				}
			}
			if ((plr[p]._pLvlVisited[9] != '\0') && (QuestStruct_ARRAY_800e3404[4]._qactive != '\0')) {
				if ((((uint)QuestStruct_ARRAY_800e3404[4]._qactive - 1 < 2) &&
						((QuestStruct_ARRAY_800e3404[4]._qvar2 == '\0' && (towner[t]._tMsgSaid == '\0')))) &&
					 ((quests._qvar2 == '\x02' || ((quests._qactive == '\x02' && (quests._qvar2 == '\x01')))))
					 ) {
					QuestStruct_ARRAY_800e3404[4]._qvar2 = '\x01';
					QuestStruct_ARRAY_800e3404[4]._qlog = '\x01';
					if (QuestStruct_ARRAY_800e3404[4]._qactive == '\x01') {
						QuestStruct_ARRAY_800e3404[4]._qactive = '\x02';
						QuestStruct_ARRAY_800e3404[4]._qvar1 = '\x01';
					}
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					InitQTextMsg__Fi(0x58);
					towner[t]._tMsgSaid = '\x01';
				}
				if (((QuestStruct_ARRAY_800e3404[4]._qvar2 == '\x01') &&
						(pIVar2 = PlrHasItem__FiiRi(p,0x10,local_20), pIVar2 != (ItemStruct *)0x0)) &&
					 (towner[t]._tMsgSaid == '\0')) {
					QuestStruct_ARRAY_800e3404[4]._qactive = '\x03';
					QuestStruct_ARRAY_800e3404[4]._qvar2 = '\x02';
					QuestStruct_ARRAY_800e3404[4]._qvar1 = '\x02';
					RemoveInvItem__Fii(p,local_20[0]);
					CreateItem__Fiii(8,towner[t]._tx,towner[t]._ty + 1);
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					InitQTextMsg__Fi(0x5a);
					towner[t]._tMsgSaid = '\x01';
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
		if ((QuestStruct_ARRAY_800e33a0[0]._qactive == '\x01') &&
			 (pIVar2 = PlrHasItem__FiiRi(p,0x13,local_20), pIVar2 != (ItemStruct *)0x0)) {
			RemoveInvItem__Fii(p,local_20[0]);
			QuestStruct_ARRAY_800e33a0[0]._qactive = '\x02';
			QuestStruct_ARRAY_800e33a0[0]._qvar1 = '\x02';
			QuestStruct_ARRAY_800e33a0[0]._qlog = '\x01';
			towner[t]._tbtcnt = 0x96;
			towner[t]._tVar1 = p;
			InitQTextMsg__Fi(0x80);
			towner[t]._tMsgSaid = '\x01';
		}
		else {
			if (QuestStruct_ARRAY_800e33a0[0]._qactive == '\x02') {
				if ((uint)QuestStruct_ARRAY_800e33a0[0]._qvar1 - 2 < 3) {
					pIVar2 = PlrHasItem__FiiRi(p,0x11,local_20);
					if (pIVar2 == (ItemStruct *)0x0) {
						if (QuestStruct_ARRAY_800e33a0[0]._qmsg == -0x7f) goto LAB_800399ac;
						towner[t]._tbtcnt = 0x96;
						towner[t]._tVar1 = p;
						QuestStruct_ARRAY_800e33a0[0]._qmsg = -0x7f;
						m = 0x81;
					}
					else {
						RemoveInvItem__Fii(p,local_20[0]);
						QuestStruct_ARRAY_800e33a0[0]._qvar1 = '\x05';
						DAT_800bf098 = 0x7b;
						DAT_800bf1d8 = 0xffffffff;
						towner[t]._tbtcnt = 0x96;
						towner[t]._tVar1 = p;
						QuestStruct_ARRAY_800e33a0[0]._qmsg = -0x7e;
						m = 0x82;
					}
				}
				else {
					pIVar2 = PlrHasItem__FiiRi(p,0x14,local_20);
					if (pIVar2 != (ItemStruct *)0x0) {
						towner[t]._tbtcnt = 0x96;
						towner[t]._tVar1 = p;
						InitQTextMsg__Fi(0x84);
						QuestStruct_ARRAY_800e33a0[0]._qactive = '\x03';
						towner[t]._tMsgSaid = '\x01';
						(&AllItemsUseable)[(int)pIVar2->IDidx] = '\x01';
						goto LAB_800399ac;
					}
					pIVar2 = PlrHasItem__FiiRi(p,0x12,local_20);
					if ((pIVar2 == (ItemStruct *)0x0) ||
						 (m = 0x83, QuestStruct_ARRAY_800e33a0[0]._qvar2 == -0x7d)) goto LAB_800399ac;
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					QuestStruct_ARRAY_800e33a0[0]._qvar2 = -0x7d;
				}
				InitQTextMsg__Fi(m);
				towner[t]._tMsgSaid = '\x01';
			}
		}
LAB_800399ac:
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
			if ((plr[p]._pLvlVisited[1] != '\0') && (towner[t]._tMsgSaid == '\0')) {
				if (QuestStruct_800e3490._qactive == '\x01') {
					QuestStruct_800e3490._qactive = '\x02';
					QuestStruct_800e3490._qmsg = '\'';
					QuestStruct_800e3490._qlog = '\x01';
					QuestStruct_800e3490._qvar1 = '\x01';
					towner[t]._tbtcnt = 0x96;
					towner[t]._tVar1 = p;
					InitQTextMsg__Fi(0x27);
					towner[t]._tMsgSaid = '\x01';
				}
				else {
					if ((QuestStruct_800e3490._qactive == '\x03') && (QuestStruct_800e3490._qvar1 != '\x02'))
					{
						QuestStruct_800e3490._qvar1 = '\x02';
						towner[t]._tbtcnt = 0x96;
						towner[t]._tVar1 = p;
						InitQTextMsg__Fi(0x29);
						CreateItem__Fiii(4,towner[t]._tx,towner[t]._ty + 1);
						towner[t]._tMsgSaid = '\x01';
					}
				}
			}
			if (((QuestStruct_ARRAY_800e33a0[0]._qactive == '\x02') &&
					(QuestStruct_ARRAY_800e33a0[0]._qmsg == -0x7e)) &&
				 (pIVar2 = PlrHasItem__FiiRi(p,0x12,local_20), pIVar2 != (ItemStruct *)0x0)) {
				RemoveInvItem__Fii(p,local_20[0]);
				SpawnQuestItem__Fiiiii(0x14,towner[t]._tx,towner[t]._ty + 1,0,0);
				InitQTextMsg__Fi(0x7c);
				QuestStruct_ARRAY_800e33a0[0]._qvar1 = '\a';
				DAT_800bf098 = 0xffffffff;
			}
		}
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
		if ((QuestStruct_800e34b8._qactive == '\x01') &&
			 (pIVar2 = PlrHasItem__FiiRi(p,0x21,local_20), pIVar2 != (ItemStruct *)0x0)) {
			RemoveInvItem__Fii(p,local_20[0]);
			QuestStruct_800e34b8._qvar1 = '\x02';
			towner[t]._tbtcnt = 0x96;
			towner[t]._tVar1 = p;
			InitQTextMsg__Fi(0x17);
			towner[t]._tMsgSaid = '\x01';
			QuestStruct_800e34b8._qactive = '\x02';
			QuestStruct_800e34b8._qlog = '\x01';
		}
		else {
			if ((QuestStruct_800e34b8._qactive == '\x03') && (QuestStruct_800e34b8._qvar1 == '\a')) {
				QuestStruct_800e34b8._qvar1 = '\b';
				towner[t]._tbtcnt = 0x96;
				towner[t]._tVar1 = p;
				InitQTextMsg__Fi(0x19);
				towner[t]._tMsgSaid = '\x01';
				QuestStruct_ARRAY_800e33dc[1]._qlog = '\x01';
			}
		}
		if (gbMaxPlayers == '\x01') goto LAB_80039f30;
	}
	if ((QuestStruct_800e34b8._qactive == '\x02') && (QuestStruct_800e34b8._qlog == '\0')) {
		towner[t]._tbtcnt = 0x96;
		towner[t]._tVar1 = p;
		InitQTextMsg__Fi(0x17);
		towner[t]._tMsgSaid = '\x01';
		QuestStruct_800e34b8._qlog = '\x01';
		q = '\x0f';
	}
	else {
		if ((QuestStruct_800e34b8._qactive != '\x03') || (QuestStruct_800e34b8._qvar1 != '\a'))
		goto LAB_80039f30;
		QuestStruct_800e34b8._qvar1 = '\b';
		towner[t]._tbtcnt = 0x96;
		towner[t]._tVar1 = p;
		InitQTextMsg__Fi(0x19);
		towner[t]._tMsgSaid = '\x01';
		NetSendCmdQuest__FUcUc('\x01','\x0f');
		q = '\x05';
		QuestStruct_ARRAY_800e33dc[1]._qlog = '\x01';
	}
	NetSendCmdQuest__FUcUc('\x01',q);
LAB_80039f30:
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





