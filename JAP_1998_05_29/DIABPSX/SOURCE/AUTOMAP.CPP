#include "THISDUST.H"
#include "AUTOMAP.H"


// decompiled code
// original method signature: 
// void /*$ra*/ StartAutomap__Fv()
 // line 130, offset 0x80161f58
	/* begin block 1 */
		// Start line: 131
		// Start offset: 0x80161F58
	/* end block 1 */
	// End offset: 0x80161F60
	// End Line: 132

	/* begin block 2 */
		// Start line: 261
	/* end block 2 */
	// End Line: 262

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartAutomap__Fv(void)

{
	automapflag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AutomapUp__Fv()
 // line 136, offset 0x80161f68
	/* begin block 1 */
		// Start line: 137
		// Start offset: 0x80161F68
	/* end block 1 */
	// End offset: 0x80161F80
	// End Line: 138

	/* begin block 2 */
		// Start line: 273
	/* end block 2 */
	// End Line: 274

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AutomapUp__Fv(void)

{
	if (-0x28 < AutoMapYOfs) {
		AutoMapYOfs = AutoMapYOfs + -2;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AutomapDown__Fv()
 // line 142, offset 0x80161f88
	/* begin block 1 */
		// Start line: 143
		// Start offset: 0x80161F88
	/* end block 1 */
	// End offset: 0x80161FA0
	// End Line: 144

	/* begin block 2 */
		// Start line: 285
	/* end block 2 */
	// End Line: 286

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AutomapDown__Fv(void)

{
	if (AutoMapYOfs < 0x28) {
		AutoMapYOfs = AutoMapYOfs + 2;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AutomapLeft__Fv()
 // line 148, offset 0x80161fa8
	/* begin block 1 */
		// Start line: 149
		// Start offset: 0x80161FA8
	/* end block 1 */
	// End offset: 0x80161FC0
	// End Line: 150

	/* begin block 2 */
		// Start line: 297
	/* end block 2 */
	// End Line: 298

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AutomapLeft__Fv(void)

{
	if (-0x50 < AutoMapXOfs) {
		AutoMapXOfs = AutoMapXOfs + -2;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AutomapRight__Fv()
 // line 154, offset 0x80161fc8
	/* begin block 1 */
		// Start line: 155
		// Start offset: 0x80161FC8
	/* end block 1 */
	// End offset: 0x80161FE0
	// End Line: 156

	/* begin block 2 */
		// Start line: 309
	/* end block 2 */
	// End Line: 310

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AutomapRight__Fv(void)

{
	if (AutoMapXOfs < 0x50) {
		AutoMapXOfs = AutoMapXOfs + 2;
	}
	return;
}



// decompiled code
// original method signature: 
// struct LINE_F2 * /*$ra*/ AMGetLine__FUcUcUc(unsigned char R /*$s0*/, unsigned char G /*$s1*/, unsigned char B /*$s2*/)
 // line 176, offset 0x80161fe8
	/* begin block 1 */
		// Start line: 177
		// Start offset: 0x80161FE8
		// Variables:
	// 		struct LINE_F2 *L2; // stack offset -24
	/* end block 1 */
	// End offset: 0x80162084
	// End Line: 186

	/* begin block 2 */
		// Start line: 352
	/* end block 2 */
	// End Line: 353

LINE_F2 * AMGetLine__FUcUcUc(uchar R,uchar G,uchar B)

{
	ulong *puVar1;
	LINE_F2 *local_18 [2];
	
	PRIM_GetPrim__FPP7LINE_F2(local_18);
	SetLineF2(local_18[0]);
	local_18[0]->r0 = R;
	local_18[0]->g0 = G;
	local_18[0]->b0 = B;
	puVar1 = ThisOt + AutoMapOt;
	local_18[0]->tag = local_18[0]->tag & 0xff000000 | *puVar1 & 0xffffff;
	*puVar1 = *puVar1 & 0xff000000 | (uint)local_18[0] & 0xffffff;
	return local_18[0];
}



// decompiled code
// original method signature: 
// void /*$ra*/ AmDrawPlayer__Fiiiii(int x0 /*$s0*/, int y0 /*$s1*/, int x1 /*$s2*/, int y1 /*$s3*/, int PNum /*stack 16*/)
 // line 202, offset 0x801620a0
	/* begin block 1 */
		// Start line: 203
		// Start offset: 0x801620A0
		// Variables:
	// 		struct LINE_F2 *L2; // $v0
	/* end block 1 */
	// End offset: 0x80162104
	// End Line: 210

	/* begin block 2 */
		// Start line: 413
	/* end block 2 */
	// End Line: 414

void AmDrawPlayer__Fiiiii(int x0,int y0,int x1,int y1,int PNum)

{
	LINE_F2 *pLVar1;
	uchar R;
	uchar G;
	uchar B;
	
	if (PNum == 0) {
		R = ' ';
		G = -1;
		B = '\0';
	}
	else {
		R = -1;
		G = '\0';
		B = -0x20;
	}
	pLVar1 = AMGetLine__FUcUcUc(R,G,B);
	pLVar1->x0 = (short)x0;
	pLVar1->y0 = (short)y0;
	pLVar1->x1 = (short)x1;
	pLVar1->y1 = (short)y1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutomapPlr__Fv()
 // line 221, offset 0x80162124
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x80162124
		// Variables:
	// 		int x; // $s2
	// 		int y; // $s3
	// 		int automaps3; // $s7
	// 		int automaps4; // $s6
	// 		int automaps5; // $s5

		/* begin block 1.1 */
			// Start line: 222
			// Start offset: 0x80162124
			// Variables:
		// 		int pc; // $s4
		/* end block 1.1 */
		// End offset: 0x8016245C
		// End Line: 286
	/* end block 1 */
	// End offset: 0x8016245C
	// End Line: 286

	/* begin block 2 */
		// Start line: 451
	/* end block 2 */
	// End Line: 452

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawAutomapPlr__Fv(void)

{
	int iVar1;
	int x1;
	int y1;
	int x0;
	int x1_00;
	int y0;
	int PNum;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	
	iVar1 = AutoMapScale;
	PNum = 0;
	puVar4 = (undefined *)0x0;
	iVar3 = AutoMapScale >> 1;
	iVar2 = AutoMapScale >> 2;
	do {
		if ((&plr[0].plractive)[(int)puVar4] != '\0') {
			x0 = AutoMapXOfs + (&AMPx)[PNum] + 0x9e;
			y0 = AutoMapYOfs + (&AMPy)[PNum] + 0x65;
			switch((&plr[0]._pdir)[(int)puVar4]) {
			case '\0':
				y1 = y0 + iVar1;
				AmDrawPlayer__Fiiiii(x0,y0,x0,y1,PNum);
				y0 = y0 + iVar3;
				AmDrawPlayer__Fiiiii(x0,y1,x0 + iVar2,y0,PNum);
				x1_00 = x0 - iVar2;
				x1 = x0;
				break;
			case '\x01':
				x1 = x0 - iVar1;
				y1 = y0 + iVar3;
				AmDrawPlayer__Fiiiii(x0,y0,x1,y1,PNum);
				x1_00 = x0 - iVar3;
				AmDrawPlayer__Fiiiii(x1,y1,x1_00 - iVar2,y0,PNum);
				y0 = y1;
				break;
			case '\x02':
				x1 = x0 - iVar1;
				AmDrawPlayer__Fiiiii(x0,y0,x1,y0,PNum);
				x1_00 = x0 - iVar3;
				AmDrawPlayer__Fiiiii(x1,y0,x1_00,y0 - iVar2,PNum);
				y1 = y0;
				y0 = y0 + iVar2;
				break;
			case '\x03':
				x1 = x0 - iVar1;
				y1 = y0 - iVar3;
				AmDrawPlayer__Fiiiii(x0,y0,x1,y1,PNum);
				AmDrawPlayer__Fiiiii(x1,y1,x0 - iVar3,y1,PNum);
				x1_00 = (x0 - iVar3) - iVar2;
				break;
			case '\x04':
				y1 = y0 - iVar1;
				AmDrawPlayer__Fiiiii(x0,y0,x0,y1,PNum);
				AmDrawPlayer__Fiiiii(x0,y1,x0 - iVar2,y0 - iVar3,PNum);
				x1_00 = x0 + iVar2;
				x1 = x0;
				y0 = y0 - iVar3;
				break;
			case '\x05':
				x1 = x0 + iVar1;
				y1 = y0 - iVar3;
				AmDrawPlayer__Fiiiii(x0,y0,x1,y1,PNum);
				AmDrawPlayer__Fiiiii(x1,y1,x0 + iVar3,y1,PNum);
				x1_00 = x0 + iVar3 + iVar2;
				break;
			case '\x06':
				x1 = x0 + iVar1;
				AmDrawPlayer__Fiiiii(x0,y0,x1,y0,PNum);
				x1_00 = x0 + iVar3;
				AmDrawPlayer__Fiiiii(x1,y0,x1_00,y0 - iVar2,PNum);
				y1 = y0;
				y0 = y0 + iVar2;
				break;
			case '\a':
				x1 = x0 + iVar1;
				y1 = y0 + iVar3;
				AmDrawPlayer__Fiiiii(x0,y0,x1,y1,PNum);
				x1_00 = x0 + iVar3;
				AmDrawPlayer__Fiiiii(x1,y1,x1_00 + iVar2,y0,PNum);
				y0 = y1;
				break;
			default:
				goto switchD_801621d4_caseD_8;
			}
			AmDrawPlayer__Fiiiii(x1,y1,x1_00,y0,PNum);
		}
switchD_801621d4_caseD_8:
		PNum = PNum + 1;
		puVar4 = &DAT_000019e8 + (int)puVar4;
		if (1 < PNum) {
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutoMapVertDoor__Fii(int X /*$s1*/, int Y /*$v0*/)
 // line 335, offset 0x80162490
	/* begin block 1 */
		// Start line: 336
		// Start offset: 0x80162490
		// Variables:
	// 		struct LINE_F2 *L2; // $t0
	// 		int Lx; // $s1
	// 		int Ly; // $s6
	// 		int Frac; // $s2
	// 		int y0; // $s6
	// 		int x1; // $s5
	// 		int y1; // $s3
	// 		int y2; // $s0
	// 		int x3; // $s4
	/* end block 1 */
	// End offset: 0x80162620
	// End Line: 378

	/* begin block 2 */
		// Start line: 714
	/* end block 2 */
	// End Line: 715

void DrawAutoMapVertDoor__Fii(int X,int Y)

{
	short sVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	int iVar6;
	LINE_F2 *pLVar7;
	short sVar8;
	int iVar9;
	short sVar10;
	short sVar11;
	short sVar12;
	
	iVar6 = AutoMapScale;
	sVar5 = (short)X * (short)AutoMapScale;
	sVar4 = (short)Y * (short)AutoMapScale;
	sVar1 = sVar4 + sVar5 + (short)AMPlayerY;
	sVar4 = (sVar5 - sVar4) * 2 + (short)AMPlayerX;
	pLVar7 = AMGetLine__FUcUcUc('_','X','8');
	iVar9 = iVar6 >> 1;
	sVar5 = (short)iVar9;
	pLVar7->x1 = sVar4 - sVar5;
	sVar8 = (short)((int)(iVar9 + ((uint)iVar6 >> 0x1f)) >> 1);
	pLVar7->x0 = sVar4;
	pLVar7->y0 = sVar1;
	pLVar7->y1 = sVar1 + sVar8;
	pLVar7 = AMGetLine__FUcUcUc('_','X','8');
	sVar3 = (short)AutoMapScale;
	sVar2 = sVar4 + sVar3 * -2;
	sVar4 = sVar4 + sVar5 * -2;
	sVar11 = sVar1 + sVar3;
	sVar12 = sVar4 + sVar3 * -2 + sVar5 * 2;
	pLVar7->y1 = sVar11;
	sVar10 = sVar11 - sVar5;
	pLVar7->y0 = sVar11 - sVar8;
	sVar8 = sVar1 + sVar3 * 2 + sVar5 * -2;
	sVar11 = sVar4 + sVar3 * 2 + sVar5 * -2;
	pLVar7->x0 = sVar2 + sVar5;
	pLVar7->x1 = sVar2;
	pLVar7 = AMGetLine__FUcUcUc('\x7f','\x7f','d');
	pLVar7->x0 = sVar4;
	pLVar7->y0 = sVar1;
	pLVar7->x1 = sVar12;
	pLVar7->y1 = sVar10;
	pLVar7 = AMGetLine__FUcUcUc('\x7f','\x7f','d');
	pLVar7->x0 = sVar12;
	pLVar7->y0 = sVar10;
	pLVar7->x1 = sVar4;
	pLVar7->y1 = sVar8;
	pLVar7 = AMGetLine__FUcUcUc('\x7f','\x7f','d');
	pLVar7->x0 = sVar4;
	pLVar7->y0 = sVar8;
	pLVar7->x1 = sVar11;
	pLVar7->y1 = sVar10;
	pLVar7 = AMGetLine__FUcUcUc('\x7f','\x7f','d');
	pLVar7->x0 = sVar11;
	pLVar7->y0 = sVar10;
	pLVar7->x1 = sVar4;
	pLVar7->y1 = sVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutoMapHorzDoor__Fii(int X /*$s0*/, int Y /*$v0*/)
 // line 383, offset 0x8016264c
	/* begin block 1 */
		// Start line: 384
		// Start offset: 0x8016264C
		// Variables:
	// 		struct LINE_F2 *L2; // $t1
	// 		int Lx; // $s0
	// 		int Ly; // $s4
	// 		int Frac; // $s2
	// 		int y0; // $s4
	// 		int x1; // $s1
	// 		int y1; // $s5
	// 		int y2; // $s6
	// 		int x3; // $s3
	/* end block 1 */
	// End offset: 0x801627E0
	// End Line: 425

	/* begin block 2 */
		// Start line: 891
	/* end block 2 */
	// End Line: 892

void DrawAutoMapHorzDoor__Fii(int X,int Y)

{
	short sVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	short sVar6;
	short sVar7;
	int iVar8;
	LINE_F2 *pLVar9;
	short sVar10;
	int iVar11;
	short sVar12;
	short sVar13;
	short sVar14;
	
	iVar8 = AutoMapScale;
	sVar7 = (short)X * (short)AutoMapScale;
	sVar6 = (short)Y * (short)AutoMapScale;
	sVar1 = sVar6 + sVar7 + (short)AMPlayerY;
	sVar6 = (sVar7 - sVar6) * 2 + (short)AMPlayerX;
	pLVar9 = AMGetLine__FUcUcUc('_','X','8');
	iVar11 = iVar8 >> 1;
	sVar7 = (short)iVar11;
	pLVar9->x1 = sVar6 + sVar7;
	sVar10 = (short)((int)(iVar11 + ((uint)iVar8 >> 0x1f)) >> 1);
	pLVar9->x0 = sVar6;
	pLVar9->y0 = sVar1;
	pLVar9->y1 = sVar1 + sVar10;
	pLVar9 = AMGetLine__FUcUcUc('_','X','8');
	sVar5 = (short)AutoMapScale;
	sVar4 = sVar5 * 2;
	sVar2 = sVar6 + sVar7 * 2;
	sVar3 = sVar1 - sVar7;
	pLVar9->y0 = (sVar1 + sVar5) - sVar10;
	sVar10 = sVar2 + sVar5 * -2 + sVar7 * 2;
	sVar13 = sVar3 + sVar5;
	sVar14 = (sVar3 + sVar4) - sVar7;
	sVar12 = sVar2 + sVar4 + sVar7 * -2;
	pLVar9->x0 = (sVar6 + sVar4) - sVar7;
	pLVar9->x1 = sVar6 + sVar4;
	pLVar9->y1 = sVar1 + sVar5;
	pLVar9 = AMGetLine__FUcUcUc('\x7f','\x7f','d');
	pLVar9->x0 = sVar2;
	pLVar9->y0 = sVar3 + sVar7;
	pLVar9->x1 = sVar10;
	pLVar9->y1 = sVar13;
	pLVar9 = AMGetLine__FUcUcUc('\x7f','\x7f','d');
	pLVar9->x0 = sVar10;
	pLVar9->y0 = sVar13;
	pLVar9->x1 = sVar2;
	pLVar9->y1 = sVar14;
	pLVar9 = AMGetLine__FUcUcUc('\x7f','\x7f','d');
	pLVar9->x0 = sVar2;
	pLVar9->y0 = sVar14;
	pLVar9->x1 = sVar12;
	pLVar9->y1 = sVar13;
	pLVar9 = AMGetLine__FUcUcUc('\x7f','\x7f','d');
	pLVar9->x0 = sVar12;
	pLVar9->y0 = sVar13;
	pLVar9->x1 = sVar2;
	pLVar9->y1 = sVar3 + sVar7;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutoMapVertGrate__Fii(int X /*$s0*/, int Y /*$s1*/)
 // line 430, offset 0x8016280c
	/* begin block 1 */
		// Start line: 431
		// Start offset: 0x8016280C
		// Variables:
	// 		struct LINE_F2 *L2; // $v0
	// 		int Lx; // $s0
	// 		int Ly; // $a0
	/* end block 1 */
	// End offset: 0x8016288C
	// End Line: 444

	/* begin block 2 */
		// Start line: 1063
	/* end block 2 */
	// End Line: 1064

void DrawAutoMapVertGrate__Fii(int X,int Y)

{
	short sVar1;
	short sVar2;
	int iVar3;
	LINE_F2 *pLVar4;
	short sVar5;
	short sVar6;
	
	pLVar4 = AMGetLine__FUcUcUc(':','8','-');
	iVar3 = AMPlayerX;
	sVar2 = (short)AutoMapScale;
	sVar1 = (short)X * sVar2;
	sVar6 = (short)Y * sVar2;
	sVar5 = sVar6 + sVar1 + (short)AMPlayerY;
	pLVar4->y0 = sVar5;
	pLVar4->y1 = sVar5 + sVar2;
	sVar6 = (sVar1 - sVar6) * 2 + (short)iVar3;
	pLVar4->x0 = sVar6;
	pLVar4->x1 = sVar6 + sVar2 * -2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutoMapHorzGrate__Fii(int X /*$s0*/, int Y /*$s1*/)
 // line 449, offset 0x801628a4
	/* begin block 1 */
		// Start line: 450
		// Start offset: 0x801628A4
		// Variables:
	// 		struct LINE_F2 *L2; // $v0
	// 		int Lx; // $s0
	// 		int Ly; // $a0
	/* end block 1 */
	// End offset: 0x80162924
	// End Line: 463

	/* begin block 2 */
		// Start line: 1119
	/* end block 2 */
	// End Line: 1120

void DrawAutoMapHorzGrate__Fii(int X,int Y)

{
	short sVar1;
	short sVar2;
	int iVar3;
	LINE_F2 *pLVar4;
	short sVar5;
	short sVar6;
	
	pLVar4 = AMGetLine__FUcUcUc(':','8','-');
	iVar3 = AMPlayerX;
	sVar2 = (short)AutoMapScale;
	sVar1 = (short)X * sVar2;
	sVar6 = (short)Y * sVar2;
	sVar5 = sVar6 + sVar1 + (short)AMPlayerY;
	pLVar4->y0 = sVar5;
	pLVar4->y1 = sVar5 + sVar2;
	sVar6 = (sVar1 - sVar6) * 2 + (short)iVar3;
	pLVar4->x0 = sVar6;
	pLVar4->x1 = sVar6 + sVar2 * 2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutoMapSquare__Fii(int X /*$s0*/, int Y /*$v0*/)
 // line 467, offset 0x8016293c
	/* begin block 1 */
		// Start line: 468
		// Start offset: 0x8016293C
		// Variables:
	// 		struct LINE_F2 *L2; // $v0
	// 		int Lx; // $s0
	// 		int Ly; // $s1
	// 		int Frac; // $a3
	// 		int y0; // $s5
	// 		int x1; // $s4
	// 		int y1; // $s3
	// 		int y2; // $s1
	// 		int x3; // $s2
	/* end block 1 */
	// End offset: 0x80162A48
	// End Line: 502

	/* begin block 2 */
		// Start line: 1173
	/* end block 2 */
	// End Line: 1174

void DrawAutoMapSquare__Fii(int X,int Y)

{
	short sVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	LINE_F2 *pLVar5;
	short sVar6;
	short sVar7;
	short sVar8;
	short sVar9;
	
	sVar4 = (short)AutoMapScale;
	sVar7 = (short)X * sVar4;
	sVar3 = (short)Y * sVar4;
	sVar2 = (short)(AutoMapScale >> 1);
	sVar1 = ((sVar3 + sVar7) - sVar2) + (short)AMPlayerY;
	sVar8 = sVar1 + sVar4;
	sVar6 = (sVar1 + sVar4 * 2) - sVar2;
	sVar3 = (sVar7 - sVar3) * 2 + sVar2 * -2 + (short)AMPlayerX;
	sVar9 = sVar3 + sVar4 * -2 + sVar2 * 2;
	sVar7 = sVar3 + sVar4 * 2 + sVar2 * -2;
	pLVar5 = AMGetLine__FUcUcUc('_','X','8');
	pLVar5->x0 = sVar3;
	pLVar5->y0 = sVar1 + sVar2;
	pLVar5->x1 = sVar9;
	pLVar5->y1 = sVar8;
	pLVar5 = AMGetLine__FUcUcUc('_','X','8');
	pLVar5->x0 = sVar9;
	pLVar5->y0 = sVar8;
	pLVar5->x1 = sVar3;
	pLVar5->y1 = sVar6;
	pLVar5 = AMGetLine__FUcUcUc('_','X','8');
	pLVar5->x0 = sVar3;
	pLVar5->y0 = sVar6;
	pLVar5->x1 = sVar7;
	pLVar5->y1 = sVar8;
	pLVar5 = AMGetLine__FUcUcUc('_','X','8');
	pLVar5->x0 = sVar7;
	pLVar5->y0 = sVar8;
	pLVar5->x1 = sVar3;
	pLVar5->y1 = sVar1 + sVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawVertArch__Fii(int X /*$a0*/, int Y /*$s0*/)
 // line 507, offset 0x80162a70
	/* begin block 1 */
		// Start line: 508
		// Start offset: 0x80162A70
		// Variables:
	// 		struct LINE_F2 *L2; // $v0
	// 		int Lx; // $s1
	// 		int Ly; // $s0
	// 		int Frac; // $v0
	// 		int x0; // $s6
	// 		int y0; // $s7
	// 		int x1; // $s3
	// 		int y1; // $s2
	// 		int x2; // $s5
	// 		int y2; // $s4
	// 		int x3; // $s1
	// 		int y3; // $s0
	/* end block 1 */
	// End offset: 0x80162B74
	// End Line: 541

	/* begin block 2 */
		// Start line: 1328
	/* end block 2 */
	// End Line: 1329

void DrawVertArch__Fii(int X,int Y)

{
	short sVar1;
	short sVar2;
	short sVar3;
	LINE_F2 *pLVar4;
	short sVar5;
	short sVar6;
	short sVar7;
	short sVar8;
	
	sVar3 = (short)X * 4;
	sVar1 = (sVar3 + (short)Y * -4) * 2 + (short)AMPlayerX;
	sVar2 = (short)Y * 4 + sVar3 + (short)AMPlayerY;
	sVar3 = (short)(AutoMapScale >> 2);
	sVar6 = sVar1 - (sVar3 + 8);
	sVar5 = sVar2 - (sVar3 + -4);
	sVar8 = sVar1 + sVar3 + -8;
	sVar7 = sVar2 + sVar3 + 4;
	pLVar4 = AMGetLine__FUcUcUc(':','8','-');
	pLVar4->x0 = sVar1 - sVar3;
	pLVar4->y0 = sVar2 - sVar3;
	pLVar4->x1 = sVar6;
	pLVar4->y1 = sVar5;
	pLVar4 = AMGetLine__FUcUcUc(':','8','-');
	pLVar4->x0 = sVar6;
	pLVar4->y0 = sVar5;
	pLVar4->x1 = sVar8;
	pLVar4->y1 = sVar7;
	pLVar4 = AMGetLine__FUcUcUc(':','8','-');
	pLVar4->x0 = sVar8;
	pLVar4->y0 = sVar7;
	pLVar4->x1 = sVar1 + sVar3;
	pLVar4->y1 = sVar2 + sVar3;
	pLVar4 = AMGetLine__FUcUcUc(':','8','-');
	pLVar4->x0 = sVar1 + sVar3;
	pLVar4->y0 = sVar2 + sVar3;
	pLVar4->x1 = sVar1 - sVar3;
	pLVar4->y1 = sVar2 - sVar3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawHorzArch__Fii(int X /*$a0*/, int Y /*$s0*/)
 // line 546, offset 0x80162ba4
	/* begin block 1 */
		// Start line: 547
		// Start offset: 0x80162BA4
		// Variables:
	// 		struct LINE_F2 *L2; // $v0
	// 		int Lx; // $s1
	// 		int Ly; // $s0
	// 		int Frac; // $v0
	// 		int x0; // $s6
	// 		int y0; // $s7
	// 		int x1; // $s3
	// 		int y1; // $s2
	// 		int x2; // $s5
	// 		int y2; // $s4
	// 		int x3; // $s1
	// 		int y3; // $s0
	/* end block 1 */
	// End offset: 0x80162CA8
	// End Line: 580

	/* begin block 2 */
		// Start line: 1470
	/* end block 2 */
	// End Line: 1471

void DrawHorzArch__Fii(int X,int Y)

{
	short sVar1;
	short sVar2;
	short sVar3;
	LINE_F2 *pLVar4;
	short sVar5;
	short sVar6;
	short sVar7;
	short sVar8;
	
	sVar3 = (short)X * 4;
	sVar1 = (sVar3 + (short)Y * -4) * 2 + (short)AMPlayerX;
	sVar2 = (short)Y * 4 + sVar3 + (short)AMPlayerY;
	sVar3 = (short)(AutoMapScale >> 2);
	sVar6 = sVar1 + sVar3 + 8;
	sVar5 = sVar2 - (sVar3 + -4);
	sVar8 = sVar1 - (sVar3 + -8);
	sVar7 = sVar2 + sVar3 + 4;
	pLVar4 = AMGetLine__FUcUcUc(':','8','-');
	pLVar4->x0 = sVar1 + sVar3;
	pLVar4->y0 = sVar2 - sVar3;
	pLVar4->x1 = sVar6;
	pLVar4->y1 = sVar5;
	pLVar4 = AMGetLine__FUcUcUc(':','8','-');
	pLVar4->x0 = sVar6;
	pLVar4->y0 = sVar5;
	pLVar4->x1 = sVar8;
	pLVar4->y1 = sVar7;
	pLVar4 = AMGetLine__FUcUcUc(':','8','-');
	pLVar4->x0 = sVar8;
	pLVar4->y0 = sVar7;
	pLVar4->x1 = sVar1 - sVar3;
	pLVar4->y1 = sVar2 + sVar3;
	pLVar4 = AMGetLine__FUcUcUc(':','8','-');
	pLVar4->x0 = sVar1 - sVar3;
	pLVar4->y0 = sVar2 + sVar3;
	pLVar4->x1 = sVar1 + sVar3;
	pLVar4->y1 = sVar2 - sVar3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutoMapStairs__Fii(int X /*$s1*/, int Y /*$v0*/)
 // line 628, offset 0x80162cd8
	/* begin block 1 */
		// Start line: 629
		// Start offset: 0x80162CD8
		// Variables:
	// 		struct LINE_F2 *L2; // $v1
	// 		int Lx; // $s1
	// 		int Ly; // $s3
	// 		int Frac; // $s2
	// 		int x1; // $s4
	// 		int y1; // $s5
	// 		int y2; // $s3
	/* end block 1 */
	// End offset: 0x80162E28
	// End Line: 659

	/* begin block 2 */
		// Start line: 1698
	/* end block 2 */
	// End Line: 1699

void DrawAutoMapStairs__Fii(int X,int Y)

{
	uint uVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	int iVar6;
	LINE_F2 *pLVar7;
	int iVar8;
	short sVar9;
	short sVar10;
	short sVar11;
	
	iVar6 = AutoMapScale;
	sVar5 = (short)AutoMapScale;
	sVar4 = (short)X * sVar5;
	sVar3 = (short)Y * sVar5;
	sVar9 = sVar3 + sVar4 + (short)AMPlayerY;
	sVar11 = sVar9 + sVar5;
	sVar2 = (sVar4 - sVar3) * 2 + (short)AMPlayerX;
	sVar10 = sVar2 + sVar5 * -2;
	sVar9 = sVar9 + sVar5 * 2;
	pLVar7 = AMGetLine__FUcUcUc('_','X','8');
	pLVar7->x0 = sVar10;
	pLVar7->y0 = sVar11;
	pLVar7->x1 = sVar2;
	pLVar7->y1 = sVar9;
	pLVar7 = AMGetLine__FUcUcUc('_','X','8');
	iVar8 = iVar6 >> 1;
	sVar3 = (short)iVar8;
	pLVar7->x0 = sVar10 + sVar3;
	sVar4 = (short)((int)(iVar8 + ((uint)iVar6 >> 0x1f)) >> 1);
	pLVar7->y0 = sVar11 - sVar4;
	pLVar7->x1 = sVar2 + sVar3;
	pLVar7->y1 = sVar9 - sVar4;
	pLVar7 = AMGetLine__FUcUcUc('_','X','8');
	pLVar7->x0 = sVar10 + sVar3 * 2;
	pLVar7->y0 = sVar11 - sVar3;
	pLVar7->x1 = sVar2 + sVar3 * 2;
	pLVar7->y1 = sVar9 - sVar3;
	pLVar7 = AMGetLine__FUcUcUc('_','X','8');
	uVar1 = iVar8 * 3;
	sVar3 = (short)((int)(uVar1 + (uVar1 >> 0x1f)) >> 1);
	pLVar7->x0 = sVar10 + (short)uVar1;
	pLVar7->y0 = sVar11 - sVar3;
	pLVar7->x1 = sVar2 + (short)uVar1;
	pLVar7->y1 = sVar9 - sVar3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutomap__Fv()
 // line 666, offset 0x80162e50
	/* begin block 1 */
		// Start line: 667
		// Start offset: 0x80162E50
		// Variables:
	// 		struct LINE_F2 *L2; // $a2
	// 		int Lx; // $a1
	// 		int Ly; // $a0
	// 		int LineY; // $v1
	// 		int MapX; // $s5
	// 		int MapY; // $s4
	// 		int LLSx; // stack offset -112
	// 		int LLSy; // stack offset -104
	// 		int LRSx; // stack offset -96
	// 		int LRSy; // stack offset -88
	// 		int LSx; // stack offset -80
	// 		int LSy; // stack offset -72
	// 		int RSx; // stack offset -64
	// 		int RSy; // stack offset -56
	// 		int LLen; // $s1
	// 		int RLen; // $s3
	// 		int LLLen; // $s6
	// 		int LRLen; // $s7
	// 		unsigned char AMLWallFlag; // $s2
	// 		unsigned char AMRWallFlag; // $s2
	// 		unsigned short AmTile; // stack offset -184
	// 		unsigned char AmTileType; // $s0
	// 		unsigned char *AmTileTypePtr; // stack offset -48
	// 		int P1x; // $a1
	// 		int P1y; // $a2
	// 		int P2x; // $a3
	// 		int P2y; // $t0
	// 		char levname[64]; // stack offset -176
	// 		int len; // $v0

		/* begin block 1.1 */
			// Start line: 697
			// Start offset: 0x80162EBC

			/* begin block 1.1.1 */
				// Start line: 716
				// Start offset: 0x80162F2C

				/* begin block 1.1.1.1 */
					// Start line: 716
					// Start offset: 0x80162F2C

					/* begin block 1.1.1.1.1 */
						// Start line: 725
						// Start offset: 0x80162F60
						// Variables:
					// 		int PAx; // $v1
					// 		int PAy; // $a0
					/* end block 1.1.1.1.1 */
					// End offset: 0x80162FB0
					// End Line: 733
				/* end block 1.1.1.1 */
				// End offset: 0x80162FB0
				// End Line: 733
			/* end block 1.1.1 */
			// End offset: 0x80162FB0
			// End Line: 733
		/* end block 1.1 */
		// End offset: 0x80162FB0
		// End Line: 733
	/* end block 1 */
	// End offset: 0x80163D68
	// End Line: 1166

	/* begin block 2 */
		// Start line: 1839
	/* end block 2 */
	// End Line: 1840

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawAutomap__Fv(void)

{
	byte bVar1;
	byte bVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	short sVar6;
	LINE_F2 *pLVar7;
	char *pcVar8;
	int iVar9;
	int iVar10;
	int Y;
	int iVar11;
	int iVar12;
	uint Y_00;
	uint X;
	ushort *puVar13;
	ushort *puVar14;
	int Y_01;
	ushort local_b8 [4];
	char acStack176 [64];
	uint local_70;
	int local_68;
	int local_60;
	uint local_58;
	uint local_50;
	uint local_48;
	uint local_40;
	uint local_38;
	byte *local_30;
	
	local_30 = (byte *)((int)local_b8 + 1);
	if ((PauseMode == '\0') && ((plr[0].plractive != '\0' || (plr[1].plractive != '\0')))) {
		AutoMapOt = GetOverlayOtBase__7CBlocks();
		iVar10 = (int)plr[0]._px + -0x10;
		Y = (int)plr[0]._py + -0x10;
		iVar11 = (int)plr[1]._px + -0x10;
		iVar12 = (int)plr[1]._py + -0x10;
		if (plr[1].plractive == '\0') {
			AMPlayerX = (iVar10 - Y) * 2;
			AMPlayerY = iVar10 + Y;
			AMPx = 0;
			AMPy = 0;
		}
		else {
			if (plr[0].plractive == '\0') {
				AMPlayerX = (iVar11 - iVar12) * 2;
				AMPlayerY = iVar11 + iVar12;
				INT_8011c398 = 0;
				INT_8011c3a0 = 0;
			}
			else {
				Y_01 = iVar10 + iVar11 >> 1;
				iVar9 = Y + iVar12 >> 1;
				AMPlayerX = (Y_01 - iVar9) * 2;
				AMPlayerY = Y_01 + iVar9;
				AMPx = (iVar10 - Y_01) * 2;
				AMPy = (Y - iVar9) * 2;
				INT_8011c398 = (iVar11 - Y_01) * 2;
				INT_8011c3a0 = (iVar12 - iVar9) * 2;
			}
		}
		local_38 = 0;
		local_40 = 0;
		local_48 = 0;
		local_50 = 0;
		local_58 = 0;
		local_60 = 0;
		local_68 = 0;
		local_70 = 0;
		AMPlayerX = (AutoMapXOfs + 0xa0) - (AMPlayerX * AutoMapScale >> 1);
		AMPlayerY = (AutoMapYOfs + 100) - (AMPlayerY * AutoMapScale >> 1);
		X = 0;
		if (leveltype == '\x03') {
			do {
				Y_00 = 0;
				Y = 0;
				iVar10 = 0;
				iVar12 = 0;
				iVar11 = 0;
				Y_01 = 1;
				do {
					sVar5 = (short)iVar10;
					sVar6 = (short)iVar11;
					if (((int)(uint)(&automapview)[Y_00 + ((int)X >> 3) * 0x28] >> (X & 7) & 1U) == 0) {
						if (iVar10 != 0) {
							pLVar7 = AMGetLine__FUcUcUc('_','X','8');
							sVar4 = ((short)local_50 - (short)local_48) * 8 + (short)AMPlayerX;
							sVar3 = ((short)local_48 + (short)local_50) * 4 + (short)AMPlayerY;
							iVar10 = 0;
							pLVar7->x0 = sVar4;
							pLVar7->y0 = sVar3;
							pLVar7->x1 = sVar4 + sVar5 * -8;
							pLVar7->y1 = sVar3 + sVar5 * 4;
						}
						if (iVar11 != 0) {
							pLVar7 = AMGetLine__FUcUcUc('_','X','8');
							sVar5 = ((short)local_70 - (short)local_68) * 8 + (short)AMPlayerX;
							sVar4 = ((short)local_68 + (short)local_70) * 4 + (short)AMPlayerY;
							iVar11 = 0;
							pLVar7->x0 = sVar5;
							pLVar7->y0 = sVar4;
							pLVar7->x1 = sVar5 + sVar6 * 8;
							pLVar7->y1 = sVar4 + sVar6 * 4;
						}
					}
					else {
						local_b8[0] = automaptype[(uint)dungeon[X * 0x30 + Y_00]];
						bVar1 = *local_30;
						bVar2 = AmLTab[(uint)local_b8[0] & 0xf];
						if ((bVar1 & 0x80) != 0) {
							DrawAutoMapStairs__Fii(X,Y_00);
						}
						if (((bVar1 & 0x15) == 0) && ((bVar2 & 2) != 0)) {
							if (iVar10 == 0) {
								local_50 = X;
								local_48 = Y_00;
							}
							iVar10 = iVar10 + 1;
						}
						else {
							if (iVar10 != 0) {
								pLVar7 = AMGetLine__FUcUcUc('_','X','8');
								sVar4 = ((short)local_50 - (short)local_48) * 8 + (short)AMPlayerX;
								sVar3 = ((short)local_48 + (short)local_50) * 4 + (short)AMPlayerY;
								iVar10 = 0;
								pLVar7->x0 = sVar4;
								pLVar7->y0 = sVar3;
								pLVar7->x1 = sVar4 + sVar5 * -8;
								pLVar7->y1 = sVar3 + sVar5 * 4;
							}
						}
						if ((bVar2 & 1) != 0) {
							DrawAutoMapSquare__Fii(X,Y_00);
						}
						if (((bVar1 & 0x15) == 0) && ((bVar2 & 4) != 0)) {
							if (iVar11 == 0) {
								local_70 = X;
								local_68 = Y_01;
							}
							iVar11 = iVar11 + 1;
						}
						else {
							if (iVar11 != 0) {
								pLVar7 = AMGetLine__FUcUcUc('_','X','8');
								sVar5 = ((short)local_70 - (short)local_68) * 8 + (short)AMPlayerX;
								sVar4 = ((short)local_68 + (short)local_70) * 4 + (short)AMPlayerY;
								iVar11 = 0;
								pLVar7->x0 = sVar5;
								pLVar7->y0 = sVar4;
								pLVar7->x1 = sVar5 + sVar6 * 8;
								pLVar7->y1 = sVar4 + sVar6 * 4;
							}
							if (bVar1 != 0) {
								if ((bVar1 & 1) == 0) {
									if ((bVar1 & 0x10) == 0) {
										if ((bVar1 & 4) != 0) {
											DrawHorzArch__Fii(X,Y_01);
										}
									}
									else {
										DrawAutoMapHorzGrate__Fii(X,Y_01);
									}
								}
								else {
									DrawAutoMapHorzDoor__Fii(X,Y_01);
								}
							}
						}
					}
					sVar5 = (short)Y;
					sVar6 = (short)iVar12;
					if (((int)(uint)(&automapview)[X + ((int)Y_00 >> 3) * 0x28] >> (Y_00 & 7) & 1U) == 0) {
						if (Y != 0) {
							pLVar7 = AMGetLine__FUcUcUc('_','X','8');
							sVar4 = ((short)local_40 - (short)local_38) * 8 + (short)AMPlayerX;
							sVar3 = ((short)local_38 + (short)local_40) * 4 + (short)AMPlayerY;
							Y = 0;
							pLVar7->x0 = sVar4;
							pLVar7->y0 = sVar3;
							pLVar7->x1 = sVar4 + sVar5 * 8;
							pLVar7->y1 = sVar3 + sVar5 * 4;
						}
						if (iVar12 != 0) {
							pLVar7 = AMGetLine__FUcUcUc('_','X','8');
							sVar5 = ((short)local_60 - (short)local_58) * 8 + (short)AMPlayerX;
							sVar4 = ((short)local_58 + (short)local_60) * 4 + (short)AMPlayerY;
							iVar12 = 0;
							pLVar7->x0 = sVar5;
							pLVar7->y0 = sVar4;
							pLVar7->x1 = sVar5 + sVar6 * -8;
							pLVar7->y1 = sVar4 + sVar6 * 4;
						}
					}
					else {
						local_b8[0] = automaptype[(uint)dungeon[Y_00 * 0x30 + X]];
						bVar1 = *local_30;
						bVar2 = AmRTab[(uint)local_b8[0] & 0xf];
						if (((bVar1 & 0x2a) == 0) && ((bVar2 & 8) != 0)) {
							if (Y == 0) {
								local_40 = Y_00;
								local_38 = X;
							}
							Y = Y + 1;
						}
						else {
							if (Y != 0) {
								pLVar7 = AMGetLine__FUcUcUc('_','X','8');
								sVar4 = ((short)local_40 - (short)local_38) * 8 + (short)AMPlayerX;
								sVar3 = ((short)local_38 + (short)local_40) * 4 + (short)AMPlayerY;
								Y = 0;
								pLVar7->x0 = sVar4;
								pLVar7->y0 = sVar3;
								pLVar7->x1 = sVar4 + sVar5 * 8;
								pLVar7->y1 = sVar3 + sVar5 * 4;
							}
						}
						if (((bVar1 & 0x2a) == 0) && ((bVar2 & 0x10) != 0)) {
							if (iVar12 == 0) {
								local_60 = Y_01;
								local_58 = X;
							}
							iVar12 = iVar12 + 1;
						}
						else {
							if (iVar12 != 0) {
								pLVar7 = AMGetLine__FUcUcUc('_','X','8');
								sVar5 = ((short)local_60 - (short)local_58) * 8 + (short)AMPlayerX;
								sVar4 = ((short)local_58 + (short)local_60) * 4 + (short)AMPlayerY;
								iVar12 = 0;
								pLVar7->x0 = sVar5;
								pLVar7->y0 = sVar4;
								pLVar7->x1 = sVar5 + sVar6 * -8;
								pLVar7->y1 = sVar4 + sVar6 * 4;
							}
							if (bVar1 != 0) {
								if ((bVar1 & 2) == 0) {
									if ((bVar1 & 0x20) == 0) {
										if ((bVar1 & 8) != 0) {
											DrawVertArch__Fii(Y_01,X);
										}
									}
									else {
										DrawAutoMapVertGrate__Fii(Y_01,X);
									}
								}
								else {
									DrawAutoMapVertDoor__Fii(Y_01,X);
								}
							}
						}
					}
					Y_00 = Y_00 + 1;
					Y_01 = Y_01 + 1;
				} while ((int)Y_00 < 0x28);
				if (iVar10 != 0) {
					pLVar7 = AMGetLine__FUcUcUc('_','X','8');
					sVar5 = ((short)local_50 - (short)local_48) * 8 + (short)AMPlayerX;
					sVar6 = ((short)local_48 + (short)local_50) * 4 + (short)AMPlayerY;
					pLVar7->x1 = sVar5 + (short)iVar10 * -8;
					pLVar7->x0 = sVar5;
					pLVar7->y0 = sVar6;
					pLVar7->y1 = sVar6 + (short)iVar10 * 4;
				}
				if (iVar11 != 0) {
					pLVar7 = AMGetLine__FUcUcUc('_','X','8');
					sVar5 = ((short)local_70 - (short)local_68) * 8 + (short)AMPlayerX;
					sVar6 = ((short)local_68 + (short)local_70) * 4 + (short)AMPlayerY;
					pLVar7->x1 = sVar5 + (short)iVar11 * 8;
					pLVar7->x0 = sVar5;
					pLVar7->y0 = sVar6;
					pLVar7->y1 = sVar6 + (short)iVar11 * 4;
				}
				if (Y != 0) {
					pLVar7 = AMGetLine__FUcUcUc('_','X','8');
					sVar5 = ((short)local_40 - (short)local_38) * 8 + (short)AMPlayerX;
					sVar6 = ((short)local_38 + (short)local_40) * 4 + (short)AMPlayerY;
					pLVar7->x1 = sVar5 + (short)Y * 8;
					pLVar7->x0 = sVar5;
					pLVar7->y0 = sVar6;
					pLVar7->y1 = sVar6 + (short)Y * 4;
				}
				if (iVar12 != 0) {
					pLVar7 = AMGetLine__FUcUcUc('_','X','8');
					sVar5 = ((short)local_60 - (short)local_58) * 8 + (short)AMPlayerX;
					sVar6 = ((short)local_58 + (short)local_60) * 4 + (short)AMPlayerY;
					pLVar7->x1 = sVar5 + (short)iVar12 * -8;
					pLVar7->x0 = sVar5;
					pLVar7->y0 = sVar6;
					pLVar7->y1 = sVar6 + (short)iVar12 * 4;
				}
				X = X + 1;
			} while ((int)X < 0x28);
		}
		else {
			puVar14 = dungeon;
			do {
				Y_00 = 0;
				Y = 0;
				iVar10 = 0;
				puVar13 = dungeon;
				do {
					sVar5 = (short)iVar10;
					if (((int)(uint)(&automapview)[Y_00 + ((int)X >> 3) * 0x28] >> (X & 7) & 1U) == 0) {
						if (iVar10 != 0) {
							pLVar7 = AMGetLine__FUcUcUc('_','X','8');
							sVar6 = ((short)local_50 - (short)local_48) * 8 + (short)AMPlayerX;
							sVar4 = ((short)local_48 + (short)local_50) * 4 + (short)AMPlayerY;
							iVar10 = 0;
							pLVar7->x0 = sVar6;
							pLVar7->y0 = sVar4;
							pLVar7->x1 = sVar6 + sVar5 * -8;
							pLVar7->y1 = sVar4 + sVar5 * 4;
						}
					}
					else {
						local_b8[0] = automaptype[(uint)puVar14[Y_00]];
						bVar1 = *local_30;
						bVar2 = AmLTab[(uint)local_b8[0] & 0xf];
						if ((bVar1 & 0x80) != 0) {
							DrawAutoMapStairs__Fii(X,Y_00);
						}
						if (((bVar1 & 0x15) == 0) && ((bVar2 & 2) != 0)) {
							if (iVar10 == 0) {
								local_50 = X;
								local_48 = Y_00;
							}
							iVar10 = iVar10 + 1;
						}
						else {
							if (iVar10 != 0) {
								pLVar7 = AMGetLine__FUcUcUc('_','X','8');
								sVar6 = ((short)local_50 - (short)local_48) * 8 + (short)AMPlayerX;
								sVar4 = ((short)local_48 + (short)local_50) * 4 + (short)AMPlayerY;
								iVar10 = 0;
								pLVar7->x0 = sVar6;
								pLVar7->y0 = sVar4;
								pLVar7->x1 = sVar6 + sVar5 * -8;
								pLVar7->y1 = sVar4 + sVar5 * 4;
							}
							if (bVar1 != 0) {
								if ((bVar1 & 1) == 0) {
									if ((bVar1 & 0x10) == 0) {
										if ((bVar1 & 4) != 0) {
											DrawVertArch__Fii(X,Y_00);
										}
									}
									else {
										DrawAutoMapVertGrate__Fii(X,Y_00);
									}
								}
								else {
									DrawAutoMapVertDoor__Fii(X,Y_00);
								}
							}
							if ((bVar2 & 1) != 0) {
								DrawAutoMapSquare__Fii(X,Y_00);
							}
						}
					}
					sVar5 = (short)Y;
					if (((int)(uint)(&automapview)[X + ((int)Y_00 >> 3) * 0x28] >> (Y_00 & 7) & 1U) == 0) {
						if (Y != 0) {
							pLVar7 = AMGetLine__FUcUcUc('_','X','8');
							sVar6 = ((short)local_40 - (short)local_38) * 8 + (short)AMPlayerX;
							sVar4 = ((short)local_38 + (short)local_40) * 4 + (short)AMPlayerY;
							Y = 0;
							pLVar7->x0 = sVar6;
							pLVar7->y0 = sVar4;
							pLVar7->x1 = sVar6 + sVar5 * 8;
							pLVar7->y1 = sVar4 + sVar5 * 4;
						}
					}
					else {
						local_b8[0] = automaptype[(uint)puVar13[X]];
						bVar1 = *local_30;
						if (((bVar1 & 0x2a) == 0) && ((AmRTab[(uint)local_b8[0] & 0xf] & 8) != 0)) {
							if (Y == 0) {
								local_40 = Y_00;
								local_38 = X;
							}
							Y = Y + 1;
						}
						else {
							if (Y != 0) {
								pLVar7 = AMGetLine__FUcUcUc('_','X','8');
								sVar6 = ((short)local_40 - (short)local_38) * 8 + (short)AMPlayerX;
								sVar4 = ((short)local_38 + (short)local_40) * 4 + (short)AMPlayerY;
								Y = 0;
								pLVar7->x0 = sVar6;
								pLVar7->y0 = sVar4;
								pLVar7->x1 = sVar6 + sVar5 * 8;
								pLVar7->y1 = sVar4 + sVar5 * 4;
							}
							if (bVar1 != 0) {
								if ((bVar1 & 2) == 0) {
									if ((bVar1 & 0x20) == 0) {
										if ((bVar1 & 8) != 0) {
											DrawHorzArch__Fii(Y_00,X);
										}
									}
									else {
										DrawAutoMapHorzGrate__Fii(Y_00,X);
									}
								}
								else {
									DrawAutoMapHorzDoor__Fii(Y_00,X);
								}
							}
						}
					}
					Y_00 = Y_00 + 1;
					puVar13 = puVar13 + 0x30;
				} while ((int)Y_00 < 0x28);
				if (iVar10 != 0) {
					pLVar7 = AMGetLine__FUcUcUc('_','X','8');
					sVar5 = ((short)local_50 - (short)local_48) * 8 + (short)AMPlayerX;
					sVar6 = ((short)local_48 + (short)local_50) * 4 + (short)AMPlayerY;
					pLVar7->x1 = sVar5 + (short)iVar10 * -8;
					pLVar7->x0 = sVar5;
					pLVar7->y0 = sVar6;
					pLVar7->y1 = sVar6 + (short)iVar10 * 4;
				}
				if (Y != 0) {
					pLVar7 = AMGetLine__FUcUcUc('_','X','8');
					sVar5 = ((short)local_40 - (short)local_38) * 8 + (short)AMPlayerX;
					sVar6 = ((short)local_38 + (short)local_40) * 4 + (short)AMPlayerY;
					pLVar7->x1 = sVar5 + (short)Y * 8;
					pLVar7->x0 = sVar5;
					pLVar7->y0 = sVar6;
					pLVar7->y1 = sVar6 + (short)Y * 4;
				}
				X = X + 1;
				puVar14 = puVar14 + 0x30;
			} while ((int)X < 0x28);
		}
		DrawAutomapPlr__Fv();
		if (setlevel == '\0') {
			pcVar8 = GetStr__Fi(STR_LEVEL_579);
			sprintf(acStack176,"%s %d",pcVar8,(uint)currlevel);
		}
		else {
			pcVar8 = GetStr__Fi(SetLevelName[(uint)setlvlnum]);
			sprintf(acStack176,&DAT_8011c378,pcVar8);
		}
		iVar10 = GetStrWidth__5CFontPc(&MediumFont,acStack176);
		if (gbActivePlayers < 2) {
			iVar10 = (0x100U - iVar10) + (0x100U - iVar10 >> 0x1f);
			Y = 0x20;
		}
		else {
			iVar10 = (0x100U - iVar10) + (0x100U - iVar10 >> 0x1f);
			Y = 0xc0;
		}
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,(iVar10 >> 1) + 0x20,Y,acStack176,JustLeft,(RECT *)0x0,(uint)GOLDR,
							 (uint)GOLDG,(uint)GOLDB);
	}
	return;
}





