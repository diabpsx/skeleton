#include "THISDUST.H"
#include "TOWN.H"


// decompiled code
// original method signature: 
// void /*$ra*/ T_DrawView__Fii(int StartX /*$a0*/, int StartY /*$a1*/)
 // line 129, offset 0x80074478
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x80074478
	/* end block 1 */
	// End offset: 0x80074614
	// End Line: 207

	/* begin block 2 */
		// Start line: 258
	/* end block 2 */
	// End Line: 259

/* WARNING: Unknown calling convention yet parameter storage is locked */

void T_DrawView__Fii(int StartX,int StartY)

{
	bool bVar1;
	void *pvVar2;
	
	bVar1 = false;
	pvVar2 = GLUE_Finished__Fv();
	if ((pvVar2 != (void *)0x0) || (pvVar2 = IsGameLoading__Fv(), pvVar2 != (void *)0x0)) {
		bVar1 = true;
	}
	if (!bVar1) {
		if ((stextflag != '\0') && (qtextflag == '\0')) {
			DrawSText__Fv();
		}
		if ((chrflag == '\0') && (questlog == '\0')) {
			if (invflag == '\0') {
				if ((plr[0].plractive != '\0') && (plr[0]._pStatPts != 0)) {
					DrawLevelUpIcon__Fi(0);
				}
				if ((plr[1].plractive != '\0') && (plr[1]._pStatPts != 0)) {
					DrawLevelUpIcon__Fi(1);
				}
			}
			else {
				DrawInv__Fv();
			}
		}
		if ((((msgflag != '\0') && (_spselflag2 == (TASK *)0x0)) && (PTR_8011b654 == (TASK *)0x0)) &&
			 ((iscflag == (void *)0x0 && (PauseMode == '\0')))) {
			DrawDiabloMsg__Fv();
		}
		if (CowPlaying != 0) {
			CowPlaying = CowPlaying - 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ T_FillSector__FPUcT0iiiib(unsigned char *P3Tiles /*stack -96*/, unsigned char *pSector /*stack -88*/, int xi /*stack -80*/, int yi /*$a3*/, int w /*stack 16*/, int h /*stack 20*/, void * AddSec /*stack 24*/)
 // line 216, offset 0x80074628
	/* begin block 1 */
		// Start line: 217
		// Start offset: 0x80074628
		// Variables:
	// 		int i; // $s1
	// 		int j; // $s6
	// 		int xx; // $s4
	// 		int yy; // stack offset -72
	// 		long v1; // $a2
	// 		long v2; // $s2
	// 		long v3; // $s3
	// 		long v4; // $s5
	// 		long ii; // stack offset -64

		/* begin block 1.1 */
			// Start line: 217
			// Start offset: 0x80074628

			/* begin block 1.1.1 */
				// Start line: 227
				// Start offset: 0x80074674
				// Variables:
			// 		unsigned short *Map; // $t1
			/* end block 1.1.1 */
			// End offset: 0x80074720
			// End Line: 233
		/* end block 1.1 */
		// End offset: 0x80074720
		// End Line: 233

		/* begin block 1.2 */
			// Start line: 236
			// Start offset: 0x80074720

			/* begin block 1.2.1 */
				// Start line: 236
				// Start offset: 0x80074724

				/* begin block 1.2.1.1 */
					// Start line: 238
					// Start offset: 0x80074738

					/* begin block 1.2.1.1.1 */
						// Start line: 239
						// Start offset: 0x80074750
						// Variables:
					// 		long Dave; // $v0
					/* end block 1.2.1.1.1 */
					// End offset: 0x800747B4
					// End Line: 262
				/* end block 1.2.1.1 */
				// End offset: 0x80074824
				// End Line: 274
			/* end block 1.2.1 */
			// End offset: 0x80074824
			// End Line: 275
		/* end block 1.2 */
		// End offset: 0x80074838
		// End Line: 276
	/* end block 1 */
	// End offset: 0x80074838
	// End Line: 276

	/* begin block 2 */
		// Start line: 432
	/* end block 2 */
	// End Line: 433

/* WARNING: Unknown calling convention yet parameter storage is locked */

void T_FillSector__FPUcT0iiiib(uchar *P3Tiles,uchar *pSector,int xi,int yi,int w,int h,void *AddSec)

{
	short *psVar1;
	int iVar2;
	int iVar3;
	short v;
	int x;
	int iVar4;
	short v_00;
	short v_01;
	short v_02;
	int iVar5;
	short *psVar6;
	int local_48;
	int local_40;
	
	local_40 = 4;
	if (AddSec != (void *)0x0) {
		iVar5 = 0;
		local_48 = yi;
		if (h < 1) goto LAB_80074724;
		x = (int)(xi + ((uint)xi >> 0x1f)) >> 1;
		iVar3 = 0;
		do {
			iVar4 = 0;
			if (0 < w) {
				iVar2 = x;
				do {
					dungeon[iVar2 * 0x30 + ((int)(yi + ((uint)yi >> 0x1f)) >> 1) + iVar5] =
							 *(ushort *)(pSector + (iVar4 + iVar3) * 2 + 4);
					iVar4 = iVar4 + 1;
					iVar2 = x + iVar4;
				} while (iVar4 < w);
			}
			iVar5 = iVar5 + 1;
			iVar3 = iVar3 + w;
		} while (iVar5 < h);
	}
	iVar5 = 0;
	local_48 = yi;
LAB_80074724:
	while (iVar3 = 0, iVar5 < h) {
		psVar6 = (short *)(pSector + local_40);
		x = xi;
		while (iVar3 < w) {
			if ((int)*psVar6 == 0) {
				v = 0;
				v_00 = 0;
				v_01 = 0;
				v_02 = 0;
			}
			else {
				psVar1 = (short *)(P3Tiles + ((int)*psVar6 + -1) * 8);
				v = *psVar1 + 1;
				v_00 = psVar1[1] + 1;
				v_01 = psVar1[2] + 1;
				v_02 = psVar1[3] + 1;
			}
			SetDPiece__Fiis(x,local_48,v);
			SetDPiece__Fiis(x + 1,local_48,v_00);
			SetDPiece__Fiis(x,local_48 + 1,v_01);
			SetDPiece__Fiis(x + 1,local_48 + 1,v_02);
			x = x + 2;
			psVar6 = psVar6 + 1;
			iVar3 = iVar3 + 1;
			local_40 = local_40 + 2;
		}
		iVar5 = iVar5 + 1;
		local_48 = local_48 + 2;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ T_FillTile__FPUciii(unsigned char *P3Tiles /*$a0*/, int xx /*$s1*/, int yy /*$s0*/, int t /*$s5*/)
 // line 282, offset 0x8007486c
	/* begin block 1 */
		// Start line: 283
		// Start offset: 0x8007486C
		// Variables:
	// 		long v1; // $a2
	// 		long v2; // $a2
	// 		long v3; // $a2
	// 		long v4; // $a2
	/* end block 1 */
	// End offset: 0x80074954
	// End Line: 334

	/* begin block 2 */
		// Start line: 574
	/* end block 2 */
	// End Line: 575

/* WARNING: Unknown calling convention yet parameter storage is locked */

void T_FillTile__FPUciii(uchar *P3Tiles,int xx,int yy,int t)

{
	P3Tiles = P3Tiles + t * 8;
	SetDPiece__Fiis(xx,yy,(short)((uint)(((int)*(short *)(P3Tiles + -8) + 1) * 0x10000) >> 0x10));
	SetDPiece__Fiis(xx + 1,yy,(short)((uint)(((int)*(short *)(P3Tiles + -6) + 1) * 0x10000) >> 0x10));
	SetDPiece__Fiis(xx,yy + 1,(short)((uint)(((int)*(short *)(P3Tiles + -4) + 1) * 0x10000) >> 0x10));
	SetDPiece__Fiis(xx + 1,yy + 1,
									(short)((uint)(((int)*(short *)(P3Tiles + -2) + 1) * 0x10000) >> 0x10));
	dungeon[((int)(xx + ((uint)xx >> 0x1f)) >> 1) * 0x30 + ((int)(yy + ((uint)yy >> 0x1f)) >> 1)] =
			 (ushort)t;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TownFixupBodges__Fv()
 // line 343, offset 0x8007497c
	/* begin block 1 */
		// Start line: 344
		// Start offset: 0x8007497C
	/* end block 1 */
	// End offset: 0x800749AC
	// End Line: 347

	/* begin block 2 */
		// Start line: 747
	/* end block 2 */
	// End Line: 748

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TownFixupBodges__Fv(void)

{
	T_FillTile__FPUciii(P3Tiles,0x34,0x36,0x10b);
	T_FillTile__FPUciii(P3Tiles,0x28,0x3f,0x10b);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ T_Pass3__Fv()
 // line 351, offset 0x800749bc
	/* begin block 1 */
		// Start line: 352
		// Start offset: 0x800749BC
		// Variables:
	// 		unsigned char *pSector; // $s3
	// 		int xx; // $s1
	// 		int yy; // $s2

		/* begin block 1.1 */
			// Start line: 381
			// Start offset: 0x80074A44
			// Variables:
		// 		int y; // $a1

			/* begin block 1.1.1 */
				// Start line: 381
				// Start offset: 0x80074A4C

				/* begin block 1.1.1.1 */
					// Start line: 382
					// Start offset: 0x80074A58
					// Variables:
				// 		int x; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x80074A78
				// End Line: 383
			/* end block 1.1.1 */
			// End offset: 0x80074A78
			// End Line: 383
		/* end block 1.1 */
		// End offset: 0x80074A80
		// End Line: 383

		/* begin block 1.2 */
			// Start line: 386
			// Start offset: 0x80074A80
		/* end block 1.2 */
		// End offset: 0x80074A80
		// End Line: 386

		/* begin block 1.3 */
			// Start line: 386
			// Start offset: 0x80074A80
		/* end block 1.3 */
		// End offset: 0x80074A80
		// End Line: 386

		/* begin block 1.4 */
			// Start line: 386
			// Start offset: 0x80074A80
		/* end block 1.4 */
		// End offset: 0x80074A80
		// End Line: 386

		/* begin block 1.5 */
			// Start line: 386
			// Start offset: 0x80074A80
		/* end block 1.5 */
		// End offset: 0x80074A80
		// End Line: 386
	/* end block 1 */
	// End offset: 0x80074D28
	// End Line: 438

	/* begin block 2 */
		// Start line: 764
	/* end block 2 */
	// End Line: 765

/* WARNING: Unknown calling convention yet parameter storage is locked */

void T_Pass3__Fv(void)

{
	uchar *pSector;
	long lVar1;
	ushort *puVar2;
	int x;
	int y;
	
	y = 0;
	do {
		x = 0;
		do {
			SetDPiece__Fiis(x,y,0);
			SetDPiece__Fiis(x + 1,y,0);
			SetDPiece__Fiis(x,y + 1,0);
			SetDPiece__Fiis(x + 1,y + 1,0);
			x = x + 2;
		} while (x < 0x70);
		y = y + 2;
		x = 0;
	} while (y < 0x70);
	while (x < 0x28) {
		y = 0;
		puVar2 = dungeon;
		do {
			puVar2[x] = 0;
			y = y + 1;
			puVar2 = puVar2 + 0x30;
		} while (y < 0x28);
		x = x + 1;
	}
	LoadMegaTiles__FPCc("TOWN.TIL");
	P3Tiles = pMegaTiles;
	pSector = GRL_LoadFileInMemSig__FPCcPUl("Sector1s.DUN",(ulong *)0x0);
	T_FillSector__FPUcT0iiiib(P3Tiles,pSector,0x2e,0x2e,0x19,0x19,&DAT_00000001);
	mem_free_dbg__FPv(pSector);
	pSector = GRL_LoadFileInMemSig__FPCcPUl("Sector2s.DUN",(ulong *)0x0);
	T_FillSector__FPUcT0iiiib(P3Tiles,pSector,0x2e,0,0x19,0x17,&DAT_00000001);
	mem_free_dbg__FPv(pSector);
	pSector = GRL_LoadFileInMemSig__FPCcPUl("Sector3s.DUN",(ulong *)0x0);
	T_FillSector__FPUcT0iiiib(P3Tiles,pSector,0,0x2e,0x17,0x19,&DAT_00000001);
	mem_free_dbg__FPv(pSector);
	pSector = GRL_LoadFileInMemSig__FPCcPUl("Sector4s.DUN",(ulong *)0x0);
	T_FillSector__FPUcT0iiiib(P3Tiles,pSector,0,0,0x17,0x17,&DAT_00000001);
	mem_free_dbg__FPv(pSector);
	TownFixupBodges__Fv();
	if ((plr[myplr].pTownWarps & 1) == 0) {
		T_FillTile__FPUciii(P3Tiles,0x30,0x14,0x140);
	}
	if ((plr[myplr].pTownWarps & 2) == 0) {
		T_FillTile__FPUciii(P3Tiles,0x10,0x44,0x14c);
		T_FillTile__FPUciii(P3Tiles,0x10,0x46,0x14b);
	}
	if ((plr[myplr].pTownWarps & 4) == 0) {
		y = 0x24;
		do {
			lVar1 = ENG_random__Fl(4);
			x = y + 1;
			T_FillTile__FPUciii(P3Tiles,y,0x4e,lVar1 + 1);
			y = x;
		} while (x < 0x2e);
	}
	if ((quests[13]._qactive == '\x03') || (quests[13]._qactive == '\0')) {
		y = 0x47;
	}
	else {
		y = 0x156;
	}
	T_FillTile__FPUciii(P3Tiles,0x3c,0x46,y);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateTown__Fi(int entry /*$a0*/)
 // line 453, offset 0x80074d48
	/* begin block 1 */
		// Start line: 454
		// Start offset: 0x80074D48

		/* begin block 1.1 */
			// Start line: 487
			// Start offset: 0x80074E28
			// Variables:
		// 		int y; // $a1

			/* begin block 1.1.1 */
				// Start line: 494
				// Start offset: 0x80074E34

				/* begin block 1.1.1.1 */
					// Start line: 496
					// Start offset: 0x80074E40
					// Variables:
				// 		int x; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x80074E84
				// End Line: 506
			/* end block 1.1.1 */
			// End offset: 0x80074E84
			// End Line: 506
		/* end block 1.1 */
		// End offset: 0x80074E8C
		// End Line: 507
	/* end block 1 */
	// End offset: 0x80074E8C
	// End Line: 507

	/* begin block 2 */
		// Start line: 984
	/* end block 2 */
	// End Line: 985

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreateTown__Fi(int entry)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	dminx = 10;
	dminy = 10;
	dmaxx = 0x54;
	dmaxy = 0x54;
	if (entry == 0) {
		ViewX = 0x4b;
		ViewY = 0x44;
	}
	else {
		if (entry == 1) {
			ViewX = 0x19;
			ViewY = 0x1f;
		}
		else {
			if (entry == 7) {
				if (TWarpFrom == 5) {
					ViewX = 0x31;
					ViewY = 0x16;
				}
				if (TWarpFrom == 9) {
					ViewX = 0x12;
					ViewY = 0x45;
				}
				if (TWarpFrom == 0xd) {
					ViewX = 0x29;
					ViewY = 0x51;
				}
			}
		}
	}
	T_Pass3__Fv();
	iVar3 = 0;
	while (iVar2 = 0, iVar3 < 0x70) {
		iVar1 = iVar3 << 3;
		do {
			(&dung_map[0].dFlags)[iVar1] = '\0';
			*(undefined2 *)((int)&dung_map[0].dMonster + iVar1) = 0;
			(&dung_map[0].dObject)[iVar1] = '\0';
			(&dung_map[0].dItem)[iVar1] = '\0';
			iVar2 = iVar2 + 1;
			iVar1 = iVar1 + 0x380;
		} while (iVar2 < 0x70);
		iVar3 = iVar3 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char * /*$ra*/ GRL_LoadFileInMemSig__FPCcPUl(char *Name /*$s0*/, unsigned long *Len /*$s1*/)
 // line 568, offset 0x80074e9c
	/* begin block 1 */
		// Start line: 569
		// Start offset: 0x80074E9C
		// Variables:
	// 		struct FileIO *MyIo; // $s2
	// 		char SmallName[20]; // stack offset -40
	// 		unsigned char *Dest; // $s0
	// 		int FileLen; // $s0
	/* end block 1 */
	// End offset: 0x80074F64
	// End Line: 601

	/* begin block 2 */
		// Start line: 1219
	/* end block 2 */
	// End Line: 1220

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar * GRL_LoadFileInMemSig__FPCcPUl(char *Name,ulong *Len)

{
	FileIO *this;
	ulong MemSize;
	uchar *Dest;
	void *pvVar1;
	char acStack40 [24];
	
	this = SYSI_GetFs__Fv();
	GRL_StripDir__FPcPCc(acStack40,Name);
	MemSize = FileLen__6FileIOPCc(this,acStack40);
	if (MemSize == 0xffffffff) {
		DBG_Error((char *)0x0,"source/TOWN.cpp",0x247);
	}
	if (Len != (ulong *)0x0) {
		*Len = MemSize;
	}
	Dest = (uchar *)Tmalloc__Fi(MemSize);
	if (Dest == (uchar *)0x0) {
		DBG_Error((char *)0x0,"source/TOWN.cpp",0x24f);
	}
	pvVar1 = ReadAtAddr__6FileIOPCcPUci(this,acStack40,Dest,-1);
	if (pvVar1 == (void *)0x0) {
		DBG_Error((char *)0x0,"source/TOWN.cpp",0x255);
	}
	UPDATEPROGRESS__Fi(1);
	return Dest;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GRL_StripDir__FPcPCc(char *Dest /*$s2*/, char *Src /*$s0*/)
 // line 612, offset 0x80074f80
	/* begin block 1 */
		// Start line: 613
		// Start offset: 0x80074F80
		// Variables:
	// 		char *BSlash; // $s1
	// 		char *FSlash; // $v1

		/* begin block 1.1 */
			// Start line: 613
			// Start offset: 0x80074F80

			/* begin block 1.1.1 */
				// Start line: 622
				// Start offset: 0x80074FC8
				// Variables:
			// 		char *Last; // $a1
			/* end block 1.1.1 */
			// End offset: 0x80074FE4
			// End Line: 637
		/* end block 1.1 */
		// End offset: 0x80074FFC
		// End Line: 640
	/* end block 1 */
	// End offset: 0x80074FFC
	// End Line: 640

	/* begin block 2 */
		// Start line: 1307
	/* end block 2 */
	// End Line: 1308

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GRL_StripDir__FPcPCc(char *Dest,char *Src)

{
	char *pcVar1;
	char *pcVar2;
	
	pcVar1 = strrchr(Src,0x5c);
	pcVar2 = strrchr(Src,0x2f);
	if ((pcVar1 != (char *)0x0) || (pcVar1 = Src, pcVar2 != (char *)0x0)) {
		if (pcVar2 == (char *)0x0) {
			pcVar2 = Src;
		}
		if (pcVar1 < pcVar2) {
			pcVar1 = pcVar2;
		}
		Src = pcVar1 + 1;
	}
	strcpy(Dest,Src);
	return;
}





