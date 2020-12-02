#include "THISDUST.H"
#include "DPIECE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DPIECE_ERROR__Fv()
 // line 82, offset 0x800827d8
	/* begin block 1 */
		// Start line: 83
		// Start offset: 0x800827D8
	/* end block 1 */
	// End offset: 0x800827D8
	// End Line: 83

	/* begin block 2 */
		// Start line: 174
	/* end block 2 */
	// End Line: 175

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DPIECE_ERROR__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AllocdPiece__Fv()
 // line 98, offset 0x800827e0
	/* begin block 1 */
		// Start line: 99
		// Start offset: 0x800827E0

		/* begin block 1.1 */
			// Start line: 101
			// Start offset: 0x80082804
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x80082828
		// End Line: 102
	/* end block 1 */
	// End offset: 0x80082828
	// End Line: 102

	/* begin block 2 */
		// Start line: 197
	/* end block 2 */
	// End Line: 198

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AllocdPiece__Fv(void)

{
	short *psVar1;
	int iVar2;
	
	if (dPiece != (short *)0x0) {
		DBG_Error((char *)0x0,"source/DPIECE.cpp",99);
	}
	dPiece = (short *)Tmalloc__Fi((int)&DAT_00006200);
	iVar2 = 0x30ff;
	psVar1 = dPiece + 0x30ff;
	do {
		*psVar1 = 0;
		iVar2 = iVar2 + -1;
		psVar1 = psVar1 + -1;
	} while (-1 < iVar2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreedPiece__Fv()
 // line 105, offset 0x80082838
	/* begin block 1 */
		// Start line: 106
		// Start offset: 0x80082838
	/* end block 1 */
	// End offset: 0x8008286C
	// End Line: 109

	/* begin block 2 */
		// Start line: 212
	/* end block 2 */
	// End Line: 213

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreedPiece__Fv(void)

{
	if (dPiece == (short *)0x0) {
		DBG_Error((char *)0x0,"source/DPIECE.cpp",0x6a);
	}
	Tfree__FPv(dPiece);
	dPiece = (short *)0x0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ConvertdPiece__Fv()
 // line 113, offset 0x8008287c
	/* begin block 1 */
		// Start line: 114
		// Start offset: 0x8008287C

		/* begin block 1.1 */
			// Start line: 117
			// Start offset: 0x800828B0
			// Variables:
		// 		int y; // $s1

			/* begin block 1.1.1 */
				// Start line: 117
				// Start offset: 0x800828B4

				/* begin block 1.1.1.1 */
					// Start line: 119
					// Start offset: 0x800828C0
					// Variables:
				// 		int x; // $s0

					/* begin block 1.1.1.1.1 */
						// Start line: 119
						// Start offset: 0x800828C4
						// Variables:
					// 		short dp; // $s2
					/* end block 1.1.1.1.1 */
					// End offset: 0x80082A10
					// End Line: 141
				/* end block 1.1.1.1 */
				// End offset: 0x80082A1C
				// End Line: 144
			/* end block 1.1.1 */
			// End offset: 0x80082A1C
			// End Line: 144
		/* end block 1.1 */
		// End offset: 0x80082A24
		// End Line: 145
	/* end block 1 */
	// End offset: 0x80082A24
	// End Line: 145

	/* begin block 2 */
		// Start line: 229
	/* end block 2 */
	// End Line: 230

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ConvertdPiece__Fv(void)

{
	ushort uVar1;
	int x;
	int y;
	int iVar2;
	
	if (dPiece == (short *)0x0) {
		DBG_Error((char *)0x0,"source/DPIECE.cpp",0x72);
	}
	y = 0;
	while (x = 0, y < 0x70) {
		iVar2 = y << 3;
		while (x < 0x70) {
			uVar1 = GetDPiece__Fii(x,y);
			if (0x801 < uVar1) {
				DBG_Error((char *)0x0,"source/DPIECE.cpp",0x7a);
			}
			(&dung_map.dBits)[iVar2] = (&dung_map.dBits)[iVar2] & 0xf0;
			if (nSolidTable[(int)(short)uVar1] == '\0') {
				ClearSOLID__Fii(x,y);
			}
			else {
				SetSOLID__Fii(x,y);
			}
			if (nMissileTable[(int)(short)uVar1] == '\0') {
				ClearMISSILE__Fii(x,y);
			}
			else {
				SetMISSILE__Fii(x,y);
			}
			if (nBlockTable[(int)(short)uVar1] == '\0') {
				ClearBLOCK__Fii(x,y);
			}
			else {
				SetBLOCK__Fii(x,y);
			}
			if (nTrapTable[(int)(short)uVar1] == '\0') {
				ClearTRAP__Fii(x,y);
			}
			else {
				SetTRAP__Fii(x,y);
			}
			if (uVar1 == 0) {
				SetSOLID__Fii(x,y);
			}
			iVar2 = iVar2 + 0x380;
			x = x + 1;
		}
		y = y + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ GetDPiece__Fii(int x /*$s1*/, int y /*$s0*/)
 // line 151, offset 0x80082a44
	/* begin block 1 */
		// Start line: 152
		// Start offset: 0x80082A44
	/* end block 1 */
	// End offset: 0x80082AB4
	// End Line: 155

	/* begin block 2 */
		// Start line: 306
	/* end block 2 */
	// End Line: 307

/* WARNING: Unknown calling convention yet parameter storage is locked */

short GetDPiece__Fii(int x,int y)

{
	if (dPiece == (short *)0x0) {
		DPIECE_ERROR__Fv();
	}
	if ((0x70 < (uint)x) || (0x70 < (uint)y)) {
		DBG_Error((char *)0x0,"source/DPIECE.cpp",0x99);
	}
	return dPiece[y * 0x70 + x];
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetDPiece__Fiis(int x /*$s1*/, int y /*$s0*/, short v /*$s2*/)
 // line 158, offset 0x80082acc
	/* begin block 1 */
		// Start line: 159
		// Start offset: 0x80082ACC
	/* end block 1 */
	// End offset: 0x80082B44
	// End Line: 162

	/* begin block 2 */
		// Start line: 321
	/* end block 2 */
	// End Line: 322

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetDPiece__Fiis(int x,int y,short v)

{
	if (dPiece == (short *)0x0) {
		DPIECE_ERROR__Fv();
	}
	if ((0x70 < (uint)x) || (0x70 < (uint)y)) {
		DBG_Error((char *)0x0,"source/DPIECE.cpp",0xa0);
	}
	dPiece[y * 0x70 + x] = v;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetdDead__FiiUc(int x /*$a0*/, int y /*$a1*/, unsigned char v /*$a2*/)
 // line 168, offset 0x80082b60
	/* begin block 1 */
		// Start line: 169
		// Start offset: 0x80082B60
	/* end block 1 */
	// End offset: 0x80082B98
	// End Line: 171

	/* begin block 2 */
		// Start line: 342
	/* end block 2 */
	// End Line: 343

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetdDead__FiiUc(int x,int y,uchar v)

{
	(&dung_map)[x * 0x70 + y].dBits = (&dung_map)[x * 0x70 + y].dBits & 0xf | v << 4;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GetdDead__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 174, offset 0x80082ba0
	/* begin block 1 */
		// Start line: 175
		// Start offset: 0x80082BA0
	/* end block 1 */
	// End offset: 0x80082BC0
	// End Line: 176

	/* begin block 2 */
		// Start line: 355
	/* end block 2 */
	// End Line: 356

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar GetdDead__Fii(int x,int y)

{
	return (&dung_map)[x * 0x70 + y].dBits >> 4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetSOLID__Fii(int x /*$s0*/, int y /*$s1*/)
 // line 182, offset 0x80082bc8
	/* begin block 1 */
		// Start line: 183
		// Start offset: 0x80082BC8
	/* end block 1 */
	// End offset: 0x80082C3C
	// End Line: 185

	/* begin block 2 */
		// Start line: 370
	/* end block 2 */
	// End Line: 371

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetSOLID__Fii(int x,int y)

{
	if ((0x70 < (uint)x) || (0x70 < (uint)y)) {
		DBG_Error((char *)0x0,"source/DPIECE.cpp",0xb7);
	}
	(&dung_map)[x * 0x70 + y].dBits = (&dung_map)[x * 0x70 + y].dBits | 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearSOLID__Fii(int x /*$s0*/, int y /*$s1*/)
 // line 188, offset 0x80082c54
	/* begin block 1 */
		// Start line: 189
		// Start offset: 0x80082C54
	/* end block 1 */
	// End offset: 0x80082CC8
	// End Line: 191

	/* begin block 2 */
		// Start line: 382
	/* end block 2 */
	// End Line: 383

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearSOLID__Fii(int x,int y)

{
	if ((0x70 < (uint)x) || (0x70 < (uint)y)) {
		DBG_Error((char *)0x0,"source/DPIECE.cpp",0xbd);
	}
	(&dung_map)[x * 0x70 + y].dBits = (&dung_map)[x * 0x70 + y].dBits & 0xfe;
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GetSOLID__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 194, offset 0x80082ce0
	/* begin block 1 */
		// Start line: 195
		// Start offset: 0x80082CE0
	/* end block 1 */
	// End offset: 0x80082D20
	// End Line: 199

	/* begin block 2 */
		// Start line: 395
	/* end block 2 */
	// End Line: 396

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * GetSOLID__Fii(int x,int y)

{
	undefined *puVar1;
	
	if ((x < 0x70) && (y < 0x70)) {
		puVar1 = (undefined *)((uint)(&dung_map)[x * 0x70 + y].dBits & 1);
	}
	else {
		puVar1 = &DAT_00000001;
	}
	return puVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetMISSILE__Fii(int x /*$s0*/, int y /*$s1*/)
 // line 207, offset 0x80082d28
	/* begin block 1 */
		// Start line: 208
		// Start offset: 0x80082D28
	/* end block 1 */
	// End offset: 0x80082D9C
	// End Line: 210

	/* begin block 2 */
		// Start line: 420
	/* end block 2 */
	// End Line: 421

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetMISSILE__Fii(int x,int y)

{
	if ((0x70 < (uint)x) || (0x70 < (uint)y)) {
		DBG_Error((char *)0x0,"source/DPIECE.cpp",0xd0);
	}
	(&dung_map)[x * 0x70 + y].dBits = (&dung_map)[x * 0x70 + y].dBits | 2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearMISSILE__Fii(int x /*$s0*/, int y /*$s1*/)
 // line 213, offset 0x80082db4
	/* begin block 1 */
		// Start line: 214
		// Start offset: 0x80082DB4
	/* end block 1 */
	// End offset: 0x80082E28
	// End Line: 216

	/* begin block 2 */
		// Start line: 432
	/* end block 2 */
	// End Line: 433

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearMISSILE__Fii(int x,int y)

{
	if ((0x70 < (uint)x) || (0x70 < (uint)y)) {
		DBG_Error((char *)0x0,"source/DPIECE.cpp",0xd6);
	}
	(&dung_map)[x * 0x70 + y].dBits = (&dung_map)[x * 0x70 + y].dBits & 0xfd;
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GetMISSILE__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 219, offset 0x80082e40
	/* begin block 1 */
		// Start line: 220
		// Start offset: 0x80082E40
	/* end block 1 */
	// End offset: 0x80082E68
	// End Line: 222

	/* begin block 2 */
		// Start line: 445
	/* end block 2 */
	// End Line: 446

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * GetMISSILE__Fii(int x,int y)

{
	return (void *)(uint)(((&dung_map)[x * 0x70 + y].dBits & 2) != 0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBLOCK__Fii(int x /*$s0*/, int y /*$s1*/)
 // line 230, offset 0x80082e70
	/* begin block 1 */
		// Start line: 231
		// Start offset: 0x80082E70
	/* end block 1 */
	// End offset: 0x80082EE4
	// End Line: 233

	/* begin block 2 */
		// Start line: 466
	/* end block 2 */
	// End Line: 467

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBLOCK__Fii(int x,int y)

{
	if ((0x70 < (uint)x) || (0x70 < (uint)y)) {
		DBG_Error((char *)0x0,"source/DPIECE.cpp",0xe7);
	}
	(&dung_map)[x * 0x70 + y].dBits = (&dung_map)[x * 0x70 + y].dBits | 4;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearBLOCK__Fii(int x /*$s0*/, int y /*$s1*/)
 // line 236, offset 0x80082efc
	/* begin block 1 */
		// Start line: 237
		// Start offset: 0x80082EFC
	/* end block 1 */
	// End offset: 0x80082F70
	// End Line: 239

	/* begin block 2 */
		// Start line: 478
	/* end block 2 */
	// End Line: 479

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearBLOCK__Fii(int x,int y)

{
	if ((0x70 < (uint)x) || (0x70 < (uint)y)) {
		DBG_Error((char *)0x0,"source/DPIECE.cpp",0xed);
	}
	(&dung_map)[x * 0x70 + y].dBits = (&dung_map)[x * 0x70 + y].dBits & 0xfb;
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GetBLOCK__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 242, offset 0x80082f88
	/* begin block 1 */
		// Start line: 243
		// Start offset: 0x80082F88
	/* end block 1 */
	// End offset: 0x80082FB0
	// End Line: 245

	/* begin block 2 */
		// Start line: 491
	/* end block 2 */
	// End Line: 492

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * GetBLOCK__Fii(int x,int y)

{
	return (void *)(uint)(((&dung_map)[x * 0x70 + y].dBits & 4) != 0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetTRAP__Fii(int x /*$s0*/, int y /*$s1*/)
 // line 253, offset 0x80082fb8
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x80082FB8
	/* end block 1 */
	// End offset: 0x8008302C
	// End Line: 256

	/* begin block 2 */
		// Start line: 512
	/* end block 2 */
	// End Line: 513

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetTRAP__Fii(int x,int y)

{
	if ((0x70 < (uint)x) || (0x70 < (uint)y)) {
		DBG_Error((char *)0x0,"source/DPIECE.cpp",0xfe);
	}
	(&dung_map)[x * 0x70 + y].dBits = (&dung_map)[x * 0x70 + y].dBits | 8;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearTRAP__Fii(int x /*$s0*/, int y /*$s1*/)
 // line 259, offset 0x80083044
	/* begin block 1 */
		// Start line: 260
		// Start offset: 0x80083044
	/* end block 1 */
	// End offset: 0x800830B8
	// End Line: 262

	/* begin block 2 */
		// Start line: 524
	/* end block 2 */
	// End Line: 525

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearTRAP__Fii(int x,int y)

{
	if ((0x70 < (uint)x) || (0x70 < (uint)y)) {
		DBG_Error((char *)0x0,"source/DPIECE.cpp",0x104);
	}
	(&dung_map)[x * 0x70 + y].dBits = (&dung_map)[x * 0x70 + y].dBits & 0xf7;
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GetTRAP__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 265, offset 0x800830d0
	/* begin block 1 */
		// Start line: 266
		// Start offset: 0x800830D0
	/* end block 1 */
	// End offset: 0x800830F8
	// End Line: 268

	/* begin block 2 */
		// Start line: 537
	/* end block 2 */
	// End Line: 538

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * GetTRAP__Fii(int x,int y)

{
	return (void *)(uint)(((&dung_map)[x * 0x70 + y].dBits & 8) != 0);
}





