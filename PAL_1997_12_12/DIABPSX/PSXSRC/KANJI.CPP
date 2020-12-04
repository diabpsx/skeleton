#include "THISDUST.H"
#include "KANJI.H"


// decompiled code
// original method signature: 
// void /*$ra*/ LoadKanjiFont__FPc(char *name /*$s0*/)
 // line 40, offset 0x800a0118
	/* begin block 1 */
		// Start line: 41
		// Start offset: 0x800A0118
	/* end block 1 */
	// End offset: 0x800A0198
	// End Line: 53

	/* begin block 2 */
		// Start line: 80
	/* end block 2 */
	// End Line: 81

void LoadKanjiFont__FPc(char *name)

{
	FileIO *this;
	
	this = SYSI_GetFs__Fv();
	hndKanjBuff = Read__6FileIOPCcUl(this,name,1);
	if (hndKanjBuff == -1) {
		DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0x2f);
	}
	GAL_SetMemName(hndKanjBuff,"KANJIDB");
	kanjbuff = (uchar *)GAL_Lock(hndKanjBuff);
	if (kanjbuff == (uchar *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0x34);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadKanjiIndex__FPc(char *name /*$s1*/)
 // line 57, offset 0x800a01ac
	/* begin block 1 */
		// Start line: 58
		// Start offset: 0x800A01AC
		// Variables:
	// 		struct FileIO *Fs; // $s0
	/* end block 1 */
	// End offset: 0x800A0248
	// End Line: 72

	/* begin block 2 */
		// Start line: 115
	/* end block 2 */
	// End Line: 116

void LoadKanjiIndex__FPc(char *name)

{
	FileIO *this;
	uint uVar1;
	
	this = SYSI_GetFs__Fv();
	uVar1 = FileLen__6FileIOPCc(this,name);
	indsize = uVar1 >> 2;
	hndKanjIndex = Read__6FileIOPCcUl(this,name,1);
	if (hndKanjIndex == -1) {
		DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0x42);
	}
	GAL_SetMemName(hndKanjIndex,"KANJIIDX");
	kindex = (kindexS *)GAL_Lock(hndKanjIndex);
	if (kindex == (kindexS *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0x47);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreeKanji__Fv()
 // line 76, offset 0x800a0260
	/* begin block 1 */
		// Start line: 77
		// Start offset: 0x800A0260
	/* end block 1 */
	// End offset: 0x800A02D8
	// End Line: 95

	/* begin block 2 */
		// Start line: 159
	/* end block 2 */
	// End Line: 160

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeKanji__Fv(void)

{
	uchar uVar1;
	
	if (kanjbuff != (uchar *)0x0) {
		uVar1 = GAL_Free(hndKanjBuff);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0x54);
		}
		kanjbuff = (uchar *)0x0;
	}
	if (kindex != (kindexS *)0x0) {
		uVar1 = GAL_Free(hndKanjIndex);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0x5d);
		}
		kindex = (kindexS *)0x0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo /*$a0*/)
 // line 101, offset 0x800a02e8
	/* begin block 1 */
		// Start line: 102
		// Start offset: 0x800A02E8
		// Variables:
	// 		char tmp[40]; // stack offset -48
	// 		char *bname; // $s0
	/* end block 1 */
	// End offset: 0x800A03A8
	// End Line: 124

	/* begin block 2 */
		// Start line: 209
	/* end block 2 */
	// End Line: 210

void LoadKanji__F10LANG_DB_NO(LANG_DB_NO NewLangDbNo)

{
	char *__src;
	char acStack48 [40];
	
	__src = (char *)0x0;
	if (NewLangDbNo == LANG_DB_QUEST) {
		__src = "questtxt.";
	}
	else {
		if ((int)NewLangDbNo < 2) {
			if (NewLangDbNo == LANG_DB_MAIN) {
				__src = "maintxt.";
			}
		}
		else {
			if (NewLangDbNo == LANG_DB_BACK) {
				__src = "backtxt.";
			}
		}
	}
	FreeKanji__Fv();
	strcpy(acStack48,__src);
	strcat(acStack48,(char *)&PTR_DAT_8012ae34);
	LoadKanjiIndex__FPc(acStack48);
	strcpy(acStack48,__src);
	strcat(acStack48,(char *)&PTR_DAT_8012ae38);
	LoadKanjiFont__FPc(acStack48);
	return;
}



// decompiled code
// original method signature: 
// unsigned short * /*$ra*/ getb__FUs(unsigned short n /*$a1*/)
 // line 129, offset 0x800a03bc
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x800A03BC
		// Variables:
	// 		struct kindexS *ii; // $a0
	// 		int i; // $v1
	// 		int off; // $s0
	/* end block 1 */
	// End offset: 0x800A0418
	// End Line: 148

	/* begin block 2 */
		// Start line: 265
	/* end block 2 */
	// End Line: 266

ushort * getb__FUs(ushort n)

{
	uchar *puVar1;
	int iVar2;
	kindexS *pkVar3;
	
	puVar1 = kanjbuff;
	iVar2 = indsize;
	pkVar3 = kindex;
	if (0 < indsize) {
		do {
			iVar2 = iVar2 + -1;
			if (pkVar3->kan == n) {
				return (ushort *)(kanjbuff + (uint)pkVar3->offset);
			}
			pkVar3 = pkVar3 + 1;
		} while (0 < iVar2);
	}
	printf("kanji arse: %04x\n",(uint)n);
	return (ushort *)puVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _get_font__FPUsUsUs(unsigned short *into /*$s0*/, unsigned short num /*$a1*/, unsigned short col /*$s1*/)
 // line 158, offset 0x800a042c
	/* begin block 1 */
		// Start line: 159
		// Start offset: 0x800A042C
		// Variables:
	// 		unsigned short *p; // $t0
	// 		unsigned short *d; // $s0
	// 		long i; // $a1
	// 		long j; // $v1
	// 		short by; // $a2
	/* end block 1 */
	// End offset: 0x800A04E4
	// End Line: 181

	/* begin block 2 */
		// Start line: 325
	/* end block 2 */
	// End Line: 326

void _get_font__FPUsUsUs(ushort *into,ushort num,ushort col)

{
	ushort uVar1;
	uint uVar2;
	ushort *puVar3;
	uint uVar4;
	ushort *puVar5;
	int iVar6;
	
	puVar3 = getb__FUs(num);
	iVar6 = 0;
	do {
		uVar4 = 7;
		uVar1 = *puVar3;
		puVar5 = into;
		do {
			into = into + 1;
			uVar2 = uVar4 & 0x1f;
			uVar4 = uVar4 - 1;
			*puVar5 = col & -((ushort)((int)(short)uVar1 >> uVar2) & 1);
			puVar5 = puVar5 + 1;
		} while (-1 < (int)uVar4);
		uVar4 = 0xf;
		puVar5 = into;
		do {
			*puVar5 = col & -((ushort)((int)(short)uVar1 >> (uVar4 & 0x1f)) & 1);
			uVar4 = uVar4 - 1;
			into = into + 1;
			puVar5 = puVar5 + 1;
		} while (0xb < (int)uVar4);
		iVar6 = iVar6 + 1;
		puVar3 = puVar3 + 1;
	} while (iVar6 < 0xb);
	iVar6 = 0xb;
	do {
		*into = 0;
		iVar6 = iVar6 + -1;
		into = into + 1;
	} while (-1 < iVar6);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ KPrintChar__FUsUsUcUcUs(unsigned short Cx /*$s2*/, unsigned short Cy /*$s3*/, unsigned char h /*$a2*/, unsigned char l /*$a3*/, int col /*stack 16*/)
 // line 188, offset 0x800a04fc
	/* begin block 1 */
		// Start line: 189
		// Start offset: 0x800A04FC
		// Variables:
	// 		struct POLY_FT4 *ft4; // stack offset -32
	// 		unsigned short buff[169]; // stack offset -384
	// 		unsigned short kan; // $a1
	// 		struct RECT r; // stack offset -40
	/* end block 1 */
	// End offset: 0x800A0650
	// End Line: 230

	/* begin block 2 */
		// Start line: 385
	/* end block 2 */
	// End Line: 386

int KPrintChar__FUsUsUcUcUs(ushort Cx,ushort Cy,uchar h,uchar l,int col)

{
	uint uVar1;
	int iVar2;
	ushort auStack384 [172];
	short local_28;
	undefined2 local_26;
	undefined2 local_24;
	undefined2 local_22;
	POLY_FT4 *local_20 [2];
	
	if (h == '\0') {
		iVar2 = 0;
	}
	else {
		_get_font__FPUsUsUs(auStack384,CONCAT11(h,l),(ushort)col);
		local_28 = 0x2c0;
		local_26 = 0;
		local_24 = 0xc;
		local_22 = 0xc;
		LoadImage(&local_28,auStack384);
		PRIM_GetPrim__FPP8POLY_FT4(local_20);
		*(undefined *)((int)&local_20[0]->tag + 3) = 9;
		local_20[0]->code = ',';
		local_20[0]->code = local_20[0]->code | 1;
		local_20[0]->u0 = '\0';
		local_20[0]->v0 = '\0';
		local_20[0]->u1 = '\f';
		local_20[0]->v1 = '\0';
		local_20[0]->u2 = '\0';
		local_20[0]->v2 = '\f';
		local_20[0]->u3 = '\f';
		local_20[0]->v3 = '\f';
		local_20[0]->x1 = Cx + 0xc;
		local_20[0]->x3 = Cx + 0xc;
		local_20[0]->x0 = Cx;
		local_20[0]->y0 = Cy - 0xc;
		local_20[0]->y1 = Cy - 0xc;
		local_20[0]->x2 = Cx;
		local_20[0]->y2 = Cy;
		local_20[0]->y3 = Cy;
		uVar1 = GetTPage(2,0,0x2c0,0);
		local_20[0]->tpage = (ushort)uVar1;
		DrawPrim((int)local_20[0]);
		iVar2 = 0xc;
	}
	return iVar2;
}





