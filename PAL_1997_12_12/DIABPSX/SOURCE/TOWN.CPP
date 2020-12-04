#include "THISDUST.H"
#include "TOWN.H"


// decompiled code
// original method signature: 
// void /*$ra*/ T_DrawView__Fii(int StartX /*$a0*/, int StartY /*$a1*/)
 // line 129, offset 0x8006d060
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x8006D060
	/* end block 1 */
	// End offset: 0x8006D1C4
	// End Line: 203

	/* begin block 2 */
		// Start line: 274
	/* end block 2 */
	// End Line: 275

void T_DrawView__Fii(int StartX,int StartY)

{
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
	if ((((msgflag != '\0') && (_spselflag2 == (TASK *)0x0)) && (PTR_8012b154 == (TASK *)0x0)) &&
		 ((iscflag == (void *)0x0 && (PauseMode == '\0')))) {
		DrawDiabloMsg__Fv();
	}
	if (CowPlaying != 0) {
		CowPlaying = CowPlaying - 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ T_FillSector__FPUcT0iiiib(unsigned char *P3Tiles /*$s2*/, unsigned char *pSector /*$s3*/, int xi /*$s1*/, int yi /*$a3*/, int w /*stack 16*/, int h /*stack 20*/, void * AddSec /*stack 24*/)
 // line 212, offset 0x8006d1d4
	/* begin block 1 */
		// Start line: 213
		// Start offset: 0x8006D1D4
		// Variables:
	// 		int i; // $t1
	// 		int j; // $t6
	// 		int xx; // $v1
	// 		int yy; // $a1
	// 		long v1; // $a3
	// 		long v2; // $a0
	// 		long v3; // $v1
	// 		long v4; // $t0
	// 		long ii; // $t9

		/* begin block 1.1 */
			// Start line: 213
			// Start offset: 0x8006D1D4

			/* begin block 1.1.1 */
				// Start line: 223
				// Start offset: 0x8006D210
				// Variables:
			// 		unsigned short *Map; // $t4
			/* end block 1.1.1 */
			// End offset: 0x8006D29C
			// End Line: 229
		/* end block 1.1 */
		// End offset: 0x8006D29C
		// End Line: 229

		/* begin block 1.2 */
			// Start line: 232
			// Start offset: 0x8006D29C

			/* begin block 1.2.1 */
				// Start line: 232
				// Start offset: 0x8006D2B4

				/* begin block 1.2.1.1 */
					// Start line: 234
					// Start offset: 0x8006D2C0

					/* begin block 1.2.1.1.1 */
						// Start line: 235
						// Start offset: 0x8006D2F0
						// Variables:
					// 		long Dave; // $v0
					/* end block 1.2.1.1.1 */
					// End offset: 0x8006D348
					// End Line: 258
				/* end block 1.2.1.1 */
				// End offset: 0x8006D39C
				// End Line: 264
			/* end block 1.2.1 */
			// End offset: 0x8006D39C
			// End Line: 265
		/* end block 1.2 */
		// End offset: 0x8006D3AC
		// End Line: 266
	/* end block 1 */
	// End offset: 0x8006D3AC
	// End Line: 266

	/* begin block 2 */
		// Start line: 440
	/* end block 2 */
	// End Line: 441

void T_FillSector__FPUcT0iiiib(uchar *P3Tiles,uchar *pSector,int xi,int yi,int w,int h,void *AddSec)

{
	short *psVar1;
	int iVar2;
	short sVar3;
	int iVar4;
	short sVar5;
	int iVar6;
	short sVar7;
	short sVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	short *psVar12;
	int iVar13;
	int iVar14;
	
	iVar14 = 4;
	if (AddSec != (void *)0x0) {
		iVar13 = 0;
		if (0 < h) {
			iVar11 = (int)(xi + ((uint)xi >> 0x1f)) >> 1;
			iVar9 = 0;
			do {
				iVar10 = 0;
				if (0 < w) {
					iVar6 = iVar11;
					do {
						iVar4 = iVar10 + iVar9;
						iVar10 = iVar10 + 1;
						(&dungeon)[iVar6 * 0x30 + ((int)(yi + ((uint)yi >> 0x1f)) >> 1) + iVar13] =
								 *(ushort *)(pSector + iVar4 * 2 + 4);
						iVar6 = iVar11 + iVar10;
					} while (iVar10 < w);
				}
				iVar13 = iVar13 + 1;
				iVar9 = iVar9 + w;
			} while (iVar13 < h);
		}
	}
	iVar13 = 0;
	yi = yi * 0xc;
	iVar9 = yi + 0xc;
	while (iVar11 = 0, iVar13 < h) {
		psVar12 = (short *)(pSector + iVar14);
		iVar10 = xi * 0x510;
		iVar4 = iVar10 + iVar9;
		iVar6 = iVar10 + 0x510;
		iVar10 = iVar10 + yi;
		while (iVar11 < w) {
			if ((int)*psVar12 == 0) {
				sVar7 = 0;
				sVar5 = 0;
				sVar3 = 0;
				sVar8 = 0;
			}
			else {
				psVar1 = (short *)(P3Tiles + ((int)*psVar12 + -1) * 8);
				sVar7 = *psVar1 + 1;
				sVar5 = psVar1[1] + 1;
				sVar3 = psVar1[2] + 1;
				sVar8 = psVar1[3] + 1;
			}
			*(short *)((int)&dung_map[0].dPiece + iVar10) = sVar7;
			*(short *)((int)&dung_map[0].dPiece + yi + iVar6) = sVar5;
			*(short *)((int)&dung_map[0].dPiece + iVar4) = sVar3;
			iVar4 = iVar4 + 0xa20;
			iVar2 = iVar9 + iVar6;
			iVar6 = iVar6 + 0xa20;
			iVar10 = iVar10 + 0xa20;
			psVar12 = psVar12 + 1;
			iVar14 = iVar14 + 2;
			*(short *)((int)&dung_map[0].dPiece + iVar2) = sVar8;
			iVar11 = iVar11 + 1;
		}
		iVar9 = iVar9 + 0x18;
		yi = yi + 0x18;
		iVar13 = iVar13 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ T_FillTile__FPUciii(unsigned char *P3Tiles /*$a0*/, int xx /*$a1*/, int yy /*$a2*/, int t /*$a3*/)
 // line 272, offset 0x8006d3cc
	/* begin block 1 */
		// Start line: 273
		// Start offset: 0x8006D3CC
		// Variables:
	// 		long v1; // $a0
	// 		long v2; // $t1
	// 		long v3; // $t1
	// 		long v4; // $v1
	/* end block 1 */
	// End offset: 0x8006D4B4
	// End Line: 320

	/* begin block 2 */
		// Start line: 607
	/* end block 2 */
	// End Line: 608

void T_FillTile__FPUciii(uchar *P3Tiles,int xx,int yy,int t)

{
	P3Tiles = P3Tiles + t * 8;
	dung_map[xx * 0x6c + yy].dPiece = *(short *)(P3Tiles + -8) + 1;
	dung_map[(xx + 1) * 0x6c + yy].dPiece = *(short *)(P3Tiles + -6) + 1;
	dung_map[xx * 0x6c + yy + 1].dPiece = *(short *)(P3Tiles + -4) + 1;
	dung_map[(xx + 1) * 0x6c + yy + 1].dPiece = *(short *)(P3Tiles + -2) + 1;
	(&dungeon)[((int)(xx + ((uint)xx >> 0x1f)) >> 1) * 0x30 + ((int)(yy + ((uint)yy >> 0x1f)) >> 1)] =
			 (ushort)t;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ T_Pass3__Fv()
 // line 326, offset 0x8006d4bc
	/* begin block 1 */
		// Start line: 327
		// Start offset: 0x8006D4BC
		// Variables:
	// 		unsigned char *pSector; // $s3
	// 		int xx; // $s0
	// 		int yy; // $t2

		/* begin block 1.1 */
			// Start line: 351
			// Start offset: 0x8006D55C
			// Variables:
		// 		int y; // $a1

			/* begin block 1.1.1 */
				// Start line: 351
				// Start offset: 0x8006D568

				/* begin block 1.1.1.1 */
					// Start line: 352
					// Start offset: 0x8006D574
					// Variables:
				// 		int x; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x8006D594
				// End Line: 353
			/* end block 1.1.1 */
			// End offset: 0x8006D594
			// End Line: 353
		/* end block 1.1 */
		// End offset: 0x8006D59C
		// End Line: 353

		/* begin block 1.2 */
			// Start line: 355
			// Start offset: 0x8006D59C
		/* end block 1.2 */
		// End offset: 0x8006D59C
		// End Line: 355

		/* begin block 1.3 */
			// Start line: 355
			// Start offset: 0x8006D59C
		/* end block 1.3 */
		// End offset: 0x8006D59C
		// End Line: 355

		/* begin block 1.4 */
			// Start line: 355
			// Start offset: 0x8006D59C
		/* end block 1.4 */
		// End offset: 0x8006D59C
		// End Line: 355

		/* begin block 1.5 */
			// Start line: 355
			// Start offset: 0x8006D59C
		/* end block 1.5 */
		// End offset: 0x8006D59C
		// End Line: 355

		/* begin block 1.6 */
			// Start line: 403
			// Start offset: 0x8006D84C
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.6 */
		// End offset: 0x8006D85C
		// End Line: 403
	/* end block 1 */
	// End offset: 0x8006D85C
	// End Line: 403

	/* begin block 2 */
		// Start line: 687
	/* end block 2 */
	// End Line: 688

/* WARNING: Unknown calling convention yet parameter storage is locked */

void T_Pass3__Fv(void)

{
	int iVar1;
	uchar *pSector;
	long lVar2;
	int iVar3;
	ushort *puVar4;
	int iVar5;
	int iVar6;
	int xx;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar8 = 0;
	iVar7 = 0xc;
	xx = 0;
	do {
		iVar9 = 0;
		iVar3 = 0x510;
		iVar5 = xx;
		iVar6 = iVar7;
		do {
			*(undefined2 *)((int)&dung_map[0].dPiece + iVar5) = 0;
			*(undefined2 *)((int)&dung_map[0].dPiece + xx + iVar3) = 0;
			*(undefined2 *)((int)&dung_map[0].dPiece + iVar6) = 0;
			iVar6 = iVar6 + 0xa20;
			iVar1 = iVar7 + iVar3;
			iVar3 = iVar3 + 0xa20;
			iVar9 = iVar9 + 2;
			*(undefined2 *)((int)&dung_map[0].dPiece + iVar1) = 0;
			iVar5 = iVar5 + 0xa20;
		} while (iVar9 < 0x6c);
		iVar7 = iVar7 + 0x18;
		iVar8 = iVar8 + 2;
		xx = xx + 0x18;
	} while (iVar8 < 0x6c);
	xx = 0;
	while (xx < 0x30) {
		iVar7 = 0;
		puVar4 = &dungeon;
		do {
			puVar4[xx] = 0;
			iVar7 = iVar7 + 1;
			puVar4 = puVar4 + 0x30;
		} while (iVar7 < 0x30);
		xx = xx + 1;
	}
	P3Tiles = GRL_LoadFileInMemSig__FPCcPUl("Levels\\TownData\\Town.TIL",(ulong *)0x0);
	pSector = GRL_LoadFileInMemSig__FPCcPUl("Levels\\TownData\\Sector1s.DUN",(ulong *)0x0);
	T_FillSector__FPUcT0iiiib(P3Tiles,pSector,0x2e,0x2e,0x19,0x19,&DAT_00000001);
	mem_free_dbg__FPv(pSector);
	pSector = GRL_LoadFileInMemSig__FPCcPUl("Levels\\TownData\\Sector2s.DUN",(ulong *)0x0);
	T_FillSector__FPUcT0iiiib(P3Tiles,pSector,0x2e,0,0x19,0x17,&DAT_00000001);
	mem_free_dbg__FPv(pSector);
	pSector = GRL_LoadFileInMemSig__FPCcPUl("Levels\\TownData\\Sector3s.DUN",(ulong *)0x0);
	T_FillSector__FPUcT0iiiib(P3Tiles,pSector,0,0x2e,0x17,0x19,&DAT_00000001);
	mem_free_dbg__FPv(pSector);
	pSector = GRL_LoadFileInMemSig__FPCcPUl("Levels\\TownData\\Sector4s.DUN",(ulong *)0x0);
	T_FillSector__FPUcT0iiiib(P3Tiles,pSector,0,0,0x17,0x17,&DAT_00000001);
	mem_free_dbg__FPv(pSector);
	if (gbMaxPlayers == '\x01') {
		if ((plr[myplr].pTownWarps & 1) == 0) {
			T_FillTile__FPUciii(P3Tiles,0x30,0x14,0x140);
		}
		if ((plr[myplr].pTownWarps & 2) == 0) {
			T_FillTile__FPUciii(P3Tiles,0x10,0x44,0x14c);
			T_FillTile__FPUciii(P3Tiles,0x10,0x46,0x14b);
		}
		if ((plr[myplr].pTownWarps & 4) == 0) {
			xx = 0x24;
			do {
				lVar2 = random__Fil(0,4);
				iVar7 = xx + 1;
				T_FillTile__FPUciii(P3Tiles,xx,0x4e,lVar2 + 1);
				xx = iVar7;
			} while (iVar7 < 0x2e);
		}
	}
	if ((QuestStruct_800e3490._qactive == '\x03') || (QuestStruct_800e3490._qactive == '\0')) {
		xx = 0x47;
	}
	else {
		xx = 0x156;
	}
	T_FillTile__FPUciii(P3Tiles,0x3c,0x46,xx);
	pSector = P3Tiles;
	P3Tiles = (uchar *)0x0;
	mem_free_dbg__FPv(pSector);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateTown__Fi(int entry /*$a0*/)
 // line 411, offset 0x8006d87c
	/* begin block 1 */
		// Start line: 412
		// Start offset: 0x8006D87C

		/* begin block 1.1 */
			// Start line: 445
			// Start offset: 0x8006D95C
			// Variables:
		// 		int y; // $a2

			/* begin block 1.1.1 */
				// Start line: 452
				// Start offset: 0x8006D96C

				/* begin block 1.1.1.1 */
					// Start line: 454
					// Start offset: 0x8006D978
					// Variables:
				// 		int x; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x8006D9C8
				// End Line: 464
			/* end block 1.1.1 */
			// End offset: 0x8006D9C8
			// End Line: 464
		/* end block 1.1 */
		// End offset: 0x8006D9D4
		// End Line: 465
	/* end block 1 */
	// End offset: 0x8006D9D4
	// End Line: 465

	/* begin block 2 */
		// Start line: 876
	/* end block 2 */
	// End Line: 877

void CreateTown__Fi(int entry)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
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
	iVar4 = 0;
	iVar3 = 0;
	while (iVar2 = 0, iVar1 = iVar3, iVar4 < 0x5c) {
		do {
			(&dung_map[0].dFlags)[iVar1] = '\0';
			(&dung_map[0].dPlayer)[iVar1] = '\0';
			*(undefined2 *)((int)&dung_map[0].dMonster + iVar1) = 0;
			(&dung_map[0].dObject)[iVar1] = '\0';
			(&dung_map[0].dItem)[iVar1] = '\0';
			iVar2 = iVar2 + 1;
			iVar1 = iVar1 + 0x510;
		} while (iVar2 < 0x5c);
		iVar3 = iVar3 + 0xc;
		iVar4 = iVar4 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char * /*$ra*/ GRL_LoadFileInMemSig__FPCcPUl(char *Name /*$s0*/, unsigned long *Len /*$s1*/)
 // line 526, offset 0x8006d9e4
	/* begin block 1 */
		// Start line: 527
		// Start offset: 0x8006D9E4
		// Variables:
	// 		struct FileIO *MyIo; // $s2
	// 		char SmallName[20]; // stack offset -40
	// 		unsigned char *Dest; // $s0
	// 		int FileLen; // $s0
	/* end block 1 */
	// End offset: 0x8006DAAC
	// End Line: 559

	/* begin block 2 */
		// Start line: 1111
	/* end block 2 */
	// End Line: 1112

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
		DBG_Error((char *)0x0,"source/TOWN.cpp",0x21d);
	}
	if (Len != (ulong *)0x0) {
		*Len = MemSize;
	}
	Dest = (uchar *)Tmalloc__Fi(MemSize);
	if (Dest == (uchar *)0x0) {
		DBG_Error((char *)0x0,"source/TOWN.cpp",0x225);
	}
	pvVar1 = ReadAtAddr__6FileIOPCcPUci(this,acStack40,Dest,-1);
	if (pvVar1 == (void *)0x0) {
		DBG_Error((char *)0x0,"source/TOWN.cpp",0x22b);
	}
	UPDATEPROGRESS__Fi(1);
	return Dest;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GRL_StripDir__FPcPCc(char *Dest /*$s2*/, char *Src /*$s0*/)
 // line 570, offset 0x8006dac8
	/* begin block 1 */
		// Start line: 571
		// Start offset: 0x8006DAC8
		// Variables:
	// 		char *BSlash; // $s1
	// 		char *FSlash; // $v1

		/* begin block 1.1 */
			// Start line: 571
			// Start offset: 0x8006DAC8

			/* begin block 1.1.1 */
				// Start line: 580
				// Start offset: 0x8006DB10
				// Variables:
			// 		char *Last; // $a1
			/* end block 1.1.1 */
			// End offset: 0x8006DB2C
			// End Line: 595
		/* end block 1.1 */
		// End offset: 0x8006DB44
		// End Line: 598
	/* end block 1 */
	// End offset: 0x8006DB44
	// End Line: 598

	/* begin block 2 */
		// Start line: 1199
	/* end block 2 */
	// End Line: 1200

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





