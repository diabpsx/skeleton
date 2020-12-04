#include "THISDUST.H"
#include "AUTOMAP.H"


// decompiled code
// original method signature: 
// void /*$ra*/ StartAutomap__Fv()
 // line 109, offset 0x8015de38
	/* begin block 1 */
		// Start line: 110
		// Start offset: 0x8015DE38
	/* end block 1 */
	// End offset: 0x8015DE48
	// End Line: 113

	/* begin block 2 */
		// Start line: 221
	/* end block 2 */
	// End Line: 222

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartAutomap__Fv(void)

{
	automapflag = '\x01';
	AutoMapXOfs = 0;
	AutoMapYOfs = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AutomapUp__Fv()
 // line 117, offset 0x8015de50
	/* begin block 1 */
		// Start line: 118
		// Start offset: 0x8015DE50
	/* end block 1 */
	// End offset: 0x8015DE60
	// End Line: 119

	/* begin block 2 */
		// Start line: 237
	/* end block 2 */
	// End Line: 238

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AutomapUp__Fv(void)

{
	AutoMapYOfs = AutoMapYOfs + -1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AutomapDown__Fv()
 // line 123, offset 0x8015de68
	/* begin block 1 */
		// Start line: 124
		// Start offset: 0x8015DE68
	/* end block 1 */
	// End offset: 0x8015DE78
	// End Line: 125

	/* begin block 2 */
		// Start line: 249
	/* end block 2 */
	// End Line: 250

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AutomapDown__Fv(void)

{
	AutoMapYOfs = AutoMapYOfs + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AutomapLeft__Fv()
 // line 129, offset 0x8015de80
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x8015DE80
	/* end block 1 */
	// End offset: 0x8015DE90
	// End Line: 131

	/* begin block 2 */
		// Start line: 261
	/* end block 2 */
	// End Line: 262

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AutomapLeft__Fv(void)

{
	AutoMapXOfs = AutoMapXOfs + -1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AutomapRight__Fv()
 // line 135, offset 0x8015de98
	/* begin block 1 */
		// Start line: 136
		// Start offset: 0x8015DE98
	/* end block 1 */
	// End offset: 0x8015DEA8
	// End Line: 137

	/* begin block 2 */
		// Start line: 273
	/* end block 2 */
	// End Line: 274

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AutomapRight__Fv(void)

{
	AutoMapXOfs = AutoMapXOfs + 1;
	return;
}



// decompiled code
// original method signature: 
// struct LINE_F2 * /*$ra*/ AMGetLine__FUcUcUc(unsigned char R /*$s0*/, unsigned char G /*$s1*/, unsigned char B /*$s2*/)
 // line 157, offset 0x8015deb0
	/* begin block 1 */
		// Start line: 158
		// Start offset: 0x8015DEB0
		// Variables:
	// 		struct LINE_F2 *L2; // stack offset -24
	/* end block 1 */
	// End offset: 0x8015DF40
	// End Line: 165

	/* begin block 2 */
		// Start line: 316
	/* end block 2 */
	// End Line: 317

LINE_F2 * AMGetLine__FUcUcUc(uchar R,uchar G,uchar B)

{
	ulong *puVar1;
	LINE_F2 *local_18 [2];
	
	PRIM_GetPrim__FPP7LINE_F2(local_18);
	SetLineF2((int)local_18[0]);
	local_18[0]->r0 = R;
	local_18[0]->g0 = G;
	local_18[0]->b0 = B;
	puVar1 = ThisOt;
	local_18[0]->tag = local_18[0]->tag & 0xff000000 | ThisOt[0xf0] & 0xffffff;
	puVar1[0xf0] = puVar1[0xf0] & 0xff000000 | (uint)local_18[0] & 0xffffff;
	return local_18[0];
}



// decompiled code
// original method signature: 
// void /*$ra*/ AmDrawLine__Fiiii(int x0 /*$s0*/, int y0 /*$s1*/, int x1 /*$s2*/, int y1 /*$s3*/)
 // line 169, offset 0x8015df5c
	/* begin block 1 */
		// Start line: 170
		// Start offset: 0x8015DF5C
		// Variables:
	// 		struct LINE_F2 *L2; // $v0
	/* end block 1 */
	// End offset: 0x8015DFA4
	// End Line: 177

	/* begin block 2 */
		// Start line: 343
	/* end block 2 */
	// End Line: 344

void AmDrawLine__Fiiii(int x0,int y0,int x1,int y1)

{
	LINE_F2 *pLVar1;
	
	pLVar1 = AMGetLine__FUcUcUc(AutoMapWallR,AutoMapWallG,AutoMapWallB);
	pLVar1->x0 = (short)x0;
	pLVar1->y0 = (short)y0;
	pLVar1->x1 = (short)x1;
	pLVar1->y1 = (short)y1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AmDrawPlayer__Fiiii(int x0 /*$s0*/, int y0 /*$s1*/, int x1 /*$s2*/, int y1 /*$s3*/)
 // line 183, offset 0x8015dfc4
	/* begin block 1 */
		// Start line: 184
		// Start offset: 0x8015DFC4
		// Variables:
	// 		struct LINE_F2 *L2; // $v0
	/* end block 1 */
	// End offset: 0x8015E00C
	// End Line: 191

	/* begin block 2 */
		// Start line: 375
	/* end block 2 */
	// End Line: 376

void AmDrawPlayer__Fiiii(int x0,int y0,int x1,int y1)

{
	LINE_F2 *pLVar1;
	
	pLVar1 = AMGetLine__FUcUcUc(AutoMapPlayerR,AutoMapPlayerG,AutoMapPlayerB);
	pLVar1->x0 = (short)x0;
	pLVar1->y0 = (short)y0;
	pLVar1->x1 = (short)x1;
	pLVar1->y1 = (short)y1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutomapPlr__Fv()
 // line 203, offset 0x8015e02c
	/* begin block 1 */
		// Start line: 204
		// Start offset: 0x8015E02C
		// Variables:
	// 		int Px; // $v0
	// 		int Py; // $a1
	// 		int x; // $s2
	// 		int y; // $s3
	// 		int automaps3; // $s6
	// 		int automaps4; // $s5
	// 		int automaps5; // $s4

		/* begin block 1.1 */
			// Start line: 204
			// Start offset: 0x8015E02C
			// Variables:
		// 		int pc; // $fp
		/* end block 1.1 */
		// End offset: 0x8015E37C
		// End Line: 281
	/* end block 1 */
	// End offset: 0x8015E37C
	// End Line: 281

	/* begin block 2 */
		// Start line: 419
	/* end block 2 */
	// End Line: 420

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawAutomapPlr__Fv(void)

{
	int iVar1;
	int y0;
	uint uVar2;
	int x0;
	int x1;
	int y1;
	int x1_00;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar1 = AutoMapScale;
	iVar6 = 0;
	iVar5 = 0;
	iVar4 = AutoMapScale >> 1;
	iVar3 = AutoMapScale >> 2;
	do {
		if ((&plr[0].plractive)[iVar5] != '\0') {
			x0 = (int)*(short *)((int)&plr[0]._py + iVar5);
			y0 = (int)*(short *)((int)&plr[0]._px + iVar5);
			uVar2 = y0 + x0;
			x0 = ((y0 - x0) - AMPlayerX / AutoMapScale) * AutoMapScale + AutoMapXOfs + 0xa0;
			y0 = (((int)(uVar2 + (uVar2 >> 0x1f)) >> 1) - AMPlayerY / AutoMapScale) * AutoMapScale +
					 AutoMapYOfs + 0x44;
			switch((&plr[0]._pdir)[iVar5]) {
			case '\0':
				y1 = y0 + iVar1;
				AmDrawPlayer__Fiiii(x0,y0,x0,y1);
				y0 = y0 + iVar4;
				AmDrawPlayer__Fiiii(x0,y1,x0 + iVar3,y0);
				x1_00 = x0 - iVar3;
				x1 = x0;
				break;
			case '\x01':
				x1 = x0 - iVar1;
				y1 = y0 + iVar4;
				AmDrawPlayer__Fiiii(x0,y0,x1,y1);
				x1_00 = x0 - iVar4;
				AmDrawPlayer__Fiiii(x1,y1,x1_00 - iVar3,y0);
				y0 = y1;
				break;
			case '\x02':
				x1 = x0 - iVar1;
				AmDrawPlayer__Fiiii(x0,y0,x1,y0);
				x1_00 = x0 - iVar4;
				AmDrawPlayer__Fiiii(x1,y0,x1_00,y0 - iVar3);
				y1 = y0;
				y0 = y0 + iVar3;
				break;
			case '\x03':
				x1 = x0 - iVar1;
				y1 = y0 - iVar4;
				AmDrawPlayer__Fiiii(x0,y0,x1,y1);
				AmDrawPlayer__Fiiii(x1,y1,x0 - iVar4,y1);
				x1_00 = (x0 - iVar4) - iVar3;
				break;
			case '\x04':
				y1 = y0 - iVar1;
				AmDrawPlayer__Fiiii(x0,y0,x0,y1);
				AmDrawPlayer__Fiiii(x0,y1,x0 - iVar3,y0 - iVar4);
				x1_00 = x0 + iVar3;
				x1 = x0;
				y0 = y0 - iVar4;
				break;
			case '\x05':
				x1 = x0 + iVar1;
				y1 = y0 - iVar4;
				AmDrawPlayer__Fiiii(x0,y0,x1,y1);
				AmDrawPlayer__Fiiii(x1,y1,x0 + iVar4,y1);
				x1_00 = x0 + iVar4 + iVar3;
				break;
			case '\x06':
				x1 = x0 + iVar1;
				AmDrawPlayer__Fiiii(x0,y0,x1,y0);
				x1_00 = x0 + iVar4;
				AmDrawPlayer__Fiiii(x1,y0,x1_00,y0 - iVar3);
				y1 = y0;
				y0 = y0 + iVar3;
				break;
			case '\a':
				x1 = x0 + iVar1;
				y1 = y0 + iVar4;
				AmDrawPlayer__Fiiii(x0,y0,x1,y1);
				x1_00 = x0 + iVar4;
				AmDrawPlayer__Fiiii(x1,y1,x1_00 + iVar3,y0);
				y0 = y1;
				break;
			default:
				goto switchD_8015e134_caseD_8;
			}
			AmDrawPlayer__Fiiii(x1,y1,x1_00,y0);
		}
switchD_8015e134_caseD_8:
		iVar6 = iVar6 + 1;
		iVar5 = iVar5 + 0x23a8;
		if (1 < iVar6) {
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutoMapVertWall__Fiii(int X /*$s0*/, int Y /*$s1*/, int Length /*$s2*/)
 // line 285, offset 0x8015e3b0
	/* begin block 1 */
		// Start line: 286
		// Start offset: 0x8015E3B0
		// Variables:
	// 		struct LINE_F2 *L2; // $v0
	// 		int Lx; // $s0
	// 		int Ly; // $a2
	/* end block 1 */
	// End offset: 0x8015E468
	// End Line: 302

	/* begin block 2 */
		// Start line: 634
	/* end block 2 */
	// End Line: 635

void DrawAutoMapVertWall__Fiii(int X,int Y,int Length)

{
	short sVar1;
	short sVar2;
	int iVar3;
	int iVar4;
	LINE_F2 *pLVar5;
	short sVar6;
	short sVar7;
	
	pLVar5 = AMGetLine__FUcUcUc(AutoMapWallR,AutoMapWallG,AutoMapWallB);
	iVar4 = AMPlayerX;
	iVar3 = AutoMapXOfs;
	sVar2 = (short)AutoMapScale;
	sVar1 = (short)X * sVar2;
	sVar7 = (short)Y * sVar2;
	sVar6 = sVar7 + sVar1 + (((short)AutoMapYOfs + 100) - (short)AMPlayerY);
	pLVar5->y0 = sVar6;
	sVar7 = (sVar1 - sVar7) * 2 + (((short)iVar3 + 0xa0) - (short)iVar4);
	pLVar5->x0 = sVar7;
	pLVar5->x1 = sVar7 - sVar2 * (short)(Length << 1);
	pLVar5->y1 = sVar6 + sVar2 * (short)Length;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutoMapHorzWall__Fiii(int X /*$s0*/, int Y /*$s1*/, int Length /*$s2*/)
 // line 308, offset 0x8015e484
	/* begin block 1 */
		// Start line: 309
		// Start offset: 0x8015E484
		// Variables:
	// 		struct LINE_F2 *L2; // $v0
	// 		int Lx; // $s0
	// 		int Ly; // $a2
	/* end block 1 */
	// End offset: 0x8015E53C
	// End Line: 325

	/* begin block 2 */
		// Start line: 698
	/* end block 2 */
	// End Line: 699

void DrawAutoMapHorzWall__Fiii(int X,int Y,int Length)

{
	short sVar1;
	short sVar2;
	int iVar3;
	int iVar4;
	LINE_F2 *pLVar5;
	short sVar6;
	short sVar7;
	
	pLVar5 = AMGetLine__FUcUcUc(AutoMapWallR,AutoMapWallG,AutoMapWallB);
	iVar4 = AMPlayerX;
	iVar3 = AutoMapXOfs;
	sVar2 = (short)AutoMapScale;
	sVar1 = (short)X * sVar2;
	sVar7 = (short)Y * sVar2;
	sVar6 = sVar7 + sVar1 + (((short)AutoMapYOfs + 100) - (short)AMPlayerY);
	pLVar5->y0 = sVar6;
	sVar7 = (sVar1 - sVar7) * 2 + (((short)iVar3 + 0xa0) - (short)iVar4);
	pLVar5->x0 = sVar7;
	pLVar5->x1 = sVar7 + sVar2 * (short)(Length << 1);
	pLVar5->y1 = sVar6 + sVar2 * (short)Length;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutoMapVertDoor__Fii(int X /*$s1*/, int Y /*$v0*/)
 // line 330, offset 0x8015e558
	/* begin block 1 */
		// Start line: 331
		// Start offset: 0x8015E558
		// Variables:
	// 		struct LINE_F2 *L2; // $t0
	// 		int Lx; // $s1
	// 		int Ly; // $s6
	// 		int Frac; // $s0
	// 		int y0; // $s6
	// 		int x1; // $s5
	// 		int y1; // $s3
	// 		int y2; // $s2
	// 		int x3; // $s4
	/* end block 1 */
	// End offset: 0x8015E700
	// End Line: 395

	/* begin block 2 */
		// Start line: 760
	/* end block 2 */
	// End Line: 761

void DrawAutoMapVertDoor__Fii(int X,int Y)

{
	short sVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	int iVar6;
	uchar R;
	uchar G;
	uchar B;
	LINE_F2 *pLVar7;
	int iVar8;
	short sVar9;
	short sVar10;
	short sVar11;
	short sVar12;
	
	iVar6 = AutoMapScale;
	sVar5 = (short)X * (short)AutoMapScale;
	sVar4 = (short)Y * (short)AutoMapScale;
	sVar1 = (sVar5 - sVar4) * 2 + (((short)AutoMapXOfs + 0xa0) - (short)AMPlayerX);
	sVar5 = sVar4 + sVar5 + (((short)AutoMapYOfs + 100) - (short)AMPlayerY);
	pLVar7 = AMGetLine__FUcUcUc(AutoMapWallR,AutoMapWallG,AutoMapWallB);
	B = AutoMapWallB;
	G = AutoMapWallG;
	R = AutoMapWallR;
	iVar8 = iVar6 >> 1;
	sVar4 = (short)iVar8;
	pLVar7->x1 = sVar1 - sVar4;
	sVar9 = (short)((int)(iVar8 + ((uint)iVar6 >> 0x1f)) >> 1);
	pLVar7->x0 = sVar1;
	pLVar7->y0 = sVar5;
	pLVar7->y1 = sVar5 + sVar9;
	pLVar7 = AMGetLine__FUcUcUc(R,G,B);
	B = AutoMapDoorB;
	G = AutoMapDoorG;
	R = AutoMapDoorR;
	sVar3 = (short)AutoMapScale;
	sVar2 = sVar1 + sVar3 * -2;
	sVar1 = sVar1 + sVar4 * -2;
	sVar11 = sVar5 + sVar3;
	sVar12 = sVar1 + sVar3 * -2 + sVar4 * 2;
	pLVar7->y1 = sVar11;
	sVar10 = sVar11 - sVar4;
	pLVar7->y0 = sVar11 - sVar9;
	sVar9 = sVar5 + sVar3 * 2 + sVar4 * -2;
	sVar11 = sVar1 + sVar3 * 2 + sVar4 * -2;
	pLVar7->x0 = sVar2 + sVar4;
	pLVar7->x1 = sVar2;
	pLVar7 = AMGetLine__FUcUcUc(R,G,B);
	B = AutoMapDoorB;
	G = AutoMapDoorG;
	R = AutoMapDoorR;
	pLVar7->x0 = sVar1;
	pLVar7->y0 = sVar5;
	pLVar7->x1 = sVar12;
	pLVar7->y1 = sVar10;
	pLVar7 = AMGetLine__FUcUcUc(R,G,B);
	B = AutoMapDoorB;
	G = AutoMapDoorG;
	R = AutoMapDoorR;
	pLVar7->x0 = sVar12;
	pLVar7->y0 = sVar10;
	pLVar7->x1 = sVar1;
	pLVar7->y1 = sVar9;
	pLVar7 = AMGetLine__FUcUcUc(R,G,B);
	B = AutoMapDoorB;
	G = AutoMapDoorG;
	R = AutoMapDoorR;
	pLVar7->x0 = sVar1;
	pLVar7->y0 = sVar9;
	pLVar7->x1 = sVar11;
	pLVar7->y1 = sVar10;
	pLVar7 = AMGetLine__FUcUcUc(R,G,B);
	pLVar7->x0 = sVar11;
	pLVar7->y0 = sVar10;
	pLVar7->x1 = sVar1;
	pLVar7->y1 = sVar5;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutoMapHorzDoor__Fii(int X /*$s0*/, int Y /*$v0*/)
 // line 401, offset 0x8015e72c
	/* begin block 1 */
		// Start line: 402
		// Start offset: 0x8015E72C
		// Variables:
	// 		struct LINE_F2 *L2; // $t1
	// 		int Lx; // $s0
	// 		int Ly; // $s5
	// 		int Frac; // $s2
	// 		int y0; // $s5
	// 		int x1; // $s1
	// 		int y1; // $s4
	// 		int y2; // $s6
	// 		int x3; // $s3
	/* end block 1 */
	// End offset: 0x8015E8D8
	// End Line: 467

	/* begin block 2 */
		// Start line: 1017
	/* end block 2 */
	// End Line: 1018

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
	uchar R;
	uchar G;
	uchar B;
	LINE_F2 *pLVar9;
	short sVar10;
	int iVar11;
	short sVar12;
	short sVar13;
	short sVar14;
	
	iVar8 = AutoMapScale;
	sVar7 = (short)X * (short)AutoMapScale;
	sVar6 = (short)Y * (short)AutoMapScale;
	sVar1 = (sVar7 - sVar6) * 2 + (((short)AutoMapXOfs + 0xa0) - (short)AMPlayerX);
	sVar7 = sVar6 + sVar7 + (((short)AutoMapYOfs + 100) - (short)AMPlayerY);
	pLVar9 = AMGetLine__FUcUcUc(AutoMapWallR,AutoMapWallG,AutoMapWallB);
	B = AutoMapWallB;
	G = AutoMapWallG;
	R = AutoMapWallR;
	iVar11 = iVar8 >> 1;
	sVar6 = (short)iVar11;
	pLVar9->x1 = sVar1 + sVar6;
	sVar10 = (short)((int)(iVar11 + ((uint)iVar8 >> 0x1f)) >> 1);
	pLVar9->x0 = sVar1;
	pLVar9->y0 = sVar7;
	pLVar9->y1 = sVar7 + sVar10;
	pLVar9 = AMGetLine__FUcUcUc(R,G,B);
	B = AutoMapDoorB;
	G = AutoMapDoorG;
	R = AutoMapDoorR;
	sVar5 = (short)AutoMapScale;
	sVar4 = sVar5 * 2;
	sVar2 = sVar1 + sVar6 * 2;
	sVar3 = sVar7 - sVar6;
	pLVar9->y0 = (sVar7 + sVar5) - sVar10;
	sVar10 = sVar2 + sVar5 * -2 + sVar6 * 2;
	sVar13 = sVar3 + sVar5;
	sVar14 = (sVar3 + sVar4) - sVar6;
	sVar12 = sVar2 + sVar4 + sVar6 * -2;
	pLVar9->x0 = (sVar1 + sVar4) - sVar6;
	pLVar9->x1 = sVar1 + sVar4;
	pLVar9->y1 = sVar7 + sVar5;
	pLVar9 = AMGetLine__FUcUcUc(R,G,B);
	B = AutoMapDoorB;
	G = AutoMapDoorG;
	R = AutoMapDoorR;
	pLVar9->x0 = sVar2;
	pLVar9->y0 = sVar3 + sVar6;
	pLVar9->x1 = sVar10;
	pLVar9->y1 = sVar13;
	pLVar9 = AMGetLine__FUcUcUc(R,G,B);
	B = AutoMapDoorB;
	G = AutoMapDoorG;
	R = AutoMapDoorR;
	pLVar9->x0 = sVar10;
	pLVar9->y0 = sVar13;
	pLVar9->x1 = sVar2;
	pLVar9->y1 = sVar14;
	pLVar9 = AMGetLine__FUcUcUc(R,G,B);
	B = AutoMapDoorB;
	G = AutoMapDoorG;
	R = AutoMapDoorR;
	pLVar9->x0 = sVar2;
	pLVar9->y0 = sVar14;
	pLVar9->x1 = sVar12;
	pLVar9->y1 = sVar13;
	pLVar9 = AMGetLine__FUcUcUc(R,G,B);
	pLVar9->x0 = sVar12;
	pLVar9->y0 = sVar13;
	pLVar9->x1 = sVar2;
	pLVar9->y1 = sVar3 + sVar6;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutoMapVertGrate__Fii(int X /*$s0*/, int Y /*$s1*/)
 // line 473, offset 0x8015e904
	/* begin block 1 */
		// Start line: 474
		// Start offset: 0x8015E904
		// Variables:
	// 		struct LINE_F2 *L2; // $v0
	// 		int Lx; // $s0
	// 		int Ly; // $a1
	/* end block 1 */
	// End offset: 0x8015E9A0
	// End Line: 490

	/* begin block 2 */
		// Start line: 1270
	/* end block 2 */
	// End Line: 1271

void DrawAutoMapVertGrate__Fii(int X,int Y)

{
	short sVar1;
	short sVar2;
	int iVar3;
	int iVar4;
	LINE_F2 *pLVar5;
	short sVar6;
	short sVar7;
	
	pLVar5 = AMGetLine__FUcUcUc(AutoMapArchR,AutoMapArchG,AutoMapArchB);
	iVar4 = AMPlayerX;
	iVar3 = AutoMapXOfs;
	sVar2 = (short)AutoMapScale;
	sVar1 = (short)X * sVar2;
	sVar7 = (short)Y * sVar2;
	sVar6 = sVar7 + sVar1 + (((short)AutoMapYOfs + 100) - (short)AMPlayerY);
	pLVar5->y0 = sVar6;
	pLVar5->y1 = sVar6 + sVar2;
	sVar7 = (sVar1 - sVar7) * 2 + (((short)iVar3 + 0xa0) - (short)iVar4);
	pLVar5->x0 = sVar7;
	pLVar5->x1 = sVar7 + sVar2 * -2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutoMapHorzGrate__Fii(int X /*$s0*/, int Y /*$s1*/)
 // line 496, offset 0x8015e9b8
	/* begin block 1 */
		// Start line: 497
		// Start offset: 0x8015E9B8
		// Variables:
	// 		struct LINE_F2 *L2; // $v0
	// 		int Lx; // $s0
	// 		int Ly; // $a1
	/* end block 1 */
	// End offset: 0x8015EA54
	// End Line: 513

	/* begin block 2 */
		// Start line: 1334
	/* end block 2 */
	// End Line: 1335

void DrawAutoMapHorzGrate__Fii(int X,int Y)

{
	short sVar1;
	short sVar2;
	int iVar3;
	int iVar4;
	LINE_F2 *pLVar5;
	short sVar6;
	short sVar7;
	
	pLVar5 = AMGetLine__FUcUcUc(AutoMapArchR,AutoMapArchG,AutoMapArchB);
	iVar4 = AMPlayerX;
	iVar3 = AutoMapXOfs;
	sVar2 = (short)AutoMapScale;
	sVar1 = (short)X * sVar2;
	sVar7 = (short)Y * sVar2;
	sVar6 = sVar7 + sVar1 + (((short)AutoMapYOfs + 100) - (short)AMPlayerY);
	pLVar5->y0 = sVar6;
	pLVar5->y1 = sVar6 + sVar2;
	sVar7 = (sVar1 - sVar7) * 2 + (((short)iVar3 + 0xa0) - (short)iVar4);
	pLVar5->x0 = sVar7;
	pLVar5->x1 = sVar7 + sVar2 * 2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutoMapSquare__Fii(int X /*$s0*/, int Y /*$v0*/)
 // line 518, offset 0x8015ea6c
	/* begin block 1 */
		// Start line: 519
		// Start offset: 0x8015EA6C
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
	// End offset: 0x8015EB8C
	// End Line: 568

	/* begin block 2 */
		// Start line: 1396
	/* end block 2 */
	// End Line: 1397

void DrawAutoMapSquare__Fii(int X,int Y)

{
	short sVar1;
	short sVar2;
	short sVar3;
	uchar R;
	uchar G;
	uchar B;
	LINE_F2 *pLVar4;
	short sVar5;
	short sVar6;
	short sVar7;
	short sVar8;
	
	sVar6 = (short)AutoMapScale;
	sVar5 = (short)X * sVar6;
	sVar3 = (short)Y * sVar6;
	sVar2 = (short)(AutoMapScale >> 1);
	sVar1 = (sVar5 - sVar3) * 2 + sVar2 * -2 + (((short)AutoMapXOfs + 0xa0) - (short)AMPlayerX);
	sVar8 = sVar1 + sVar6 * -2 + sVar2 * 2;
	sVar3 = ((sVar3 + sVar5) - sVar2) + (((short)AutoMapYOfs + 100) - (short)AMPlayerY);
	sVar7 = sVar3 + sVar6;
	sVar5 = (sVar3 + sVar6 * 2) - sVar2;
	sVar6 = sVar1 + sVar6 * 2 + sVar2 * -2;
	pLVar4 = AMGetLine__FUcUcUc(AutoMapColumnR,AutoMapColumnG,AutoMapColumnB);
	B = AutoMapColumnB;
	G = AutoMapColumnG;
	R = AutoMapColumnR;
	pLVar4->x0 = sVar1;
	pLVar4->y0 = sVar3 + sVar2;
	pLVar4->x1 = sVar8;
	pLVar4->y1 = sVar7;
	pLVar4 = AMGetLine__FUcUcUc(R,G,B);
	B = AutoMapColumnB;
	G = AutoMapColumnG;
	R = AutoMapColumnR;
	pLVar4->x0 = sVar8;
	pLVar4->y0 = sVar7;
	pLVar4->x1 = sVar1;
	pLVar4->y1 = sVar5;
	pLVar4 = AMGetLine__FUcUcUc(R,G,B);
	B = AutoMapColumnB;
	G = AutoMapColumnG;
	R = AutoMapColumnR;
	pLVar4->x0 = sVar1;
	pLVar4->y0 = sVar5;
	pLVar4->x1 = sVar6;
	pLVar4->y1 = sVar7;
	pLVar4 = AMGetLine__FUcUcUc(R,G,B);
	pLVar4->x0 = sVar6;
	pLVar4->y0 = sVar7;
	pLVar4->x1 = sVar1;
	pLVar4->y1 = sVar3 + sVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutoMapStairs__Fii(int X /*$s2*/, int Y /*$v1*/)
 // line 574, offset 0x8015ebb4
	/* begin block 1 */
		// Start line: 575
		// Start offset: 0x8015EBB4
		// Variables:
	// 		struct LINE_F2 *L2; // $v1
	// 		int Lx; // $s2
	// 		int Ly; // $s6
	// 		int Frac; // $s1
	// 		int x1; // $s4
	// 		int y1; // $s3
	// 		int y2; // $s5
	// 		int x3; // $s1
	/* end block 1 */
	// End offset: 0x8015ED88
	// End Line: 644

	/* begin block 2 */
		// Start line: 1563
	/* end block 2 */
	// End Line: 1564

void DrawAutoMapStairs__Fii(int X,int Y)

{
	uint uVar1;
	short sVar2;
	short sVar3;
	int iVar4;
	uchar R;
	uchar G;
	uchar B;
	LINE_F2 *pLVar5;
	short sVar6;
	int iVar7;
	short sVar8;
	short sVar9;
	short sVar10;
	
	iVar4 = AutoMapScale;
	sVar8 = (short)AutoMapScale;
	sVar3 = (short)X * sVar8;
	sVar6 = (short)Y * sVar8;
	sVar2 = sVar6 + sVar3 + (((short)AutoMapYOfs + 100) - (short)AMPlayerY);
	sVar10 = sVar2 + sVar8 * 2;
	sVar3 = (sVar3 - sVar6) * 2 + (((short)AutoMapXOfs + 0xa0) - (short)AMPlayerX);
	sVar9 = sVar3 + sVar8 * -2;
	sVar6 = sVar3 + sVar8 * 2;
	pLVar5 = AMGetLine__FUcUcUc(AutoMapWallR,AutoMapWallG,AutoMapWallB);
	B = AutoMapWallB;
	G = AutoMapWallG;
	R = AutoMapWallR;
	sVar8 = sVar2 + sVar8;
	pLVar5->x0 = sVar3;
	pLVar5->y0 = sVar2;
	pLVar5->x1 = sVar9;
	pLVar5->y1 = sVar8;
	pLVar5 = AMGetLine__FUcUcUc(R,G,B);
	B = AutoMapWallB;
	G = AutoMapWallG;
	R = AutoMapWallR;
	pLVar5->x0 = sVar9;
	pLVar5->y0 = sVar8;
	pLVar5->x1 = sVar3;
	pLVar5->y1 = sVar10;
	pLVar5 = AMGetLine__FUcUcUc(R,G,B);
	B = AutoMapWallB;
	G = AutoMapWallG;
	R = AutoMapWallR;
	pLVar5->x0 = sVar3;
	pLVar5->y0 = sVar10;
	pLVar5->x1 = sVar6;
	pLVar5->y1 = sVar8;
	pLVar5 = AMGetLine__FUcUcUc(R,G,B);
	B = AutoMapStairB;
	G = AutoMapStairG;
	R = AutoMapStairR;
	pLVar5->x0 = sVar6;
	pLVar5->y0 = sVar8;
	pLVar5->x1 = sVar3;
	pLVar5->y1 = sVar2;
	pLVar5 = AMGetLine__FUcUcUc(R,G,B);
	iVar7 = iVar4 >> 1;
	sVar2 = (short)iVar7;
	pLVar5->x0 = sVar9 + sVar2;
	sVar6 = (short)((int)(iVar7 + ((uint)iVar4 >> 0x1f)) >> 1);
	pLVar5->y0 = sVar8 - sVar6;
	B = AutoMapStairB;
	G = AutoMapStairG;
	R = AutoMapStairR;
	pLVar5->x1 = sVar3 + sVar2;
	pLVar5->y1 = sVar10 - sVar6;
	pLVar5 = AMGetLine__FUcUcUc(R,G,B);
	B = AutoMapStairB;
	G = AutoMapStairG;
	R = AutoMapStairR;
	pLVar5->x0 = sVar9 + sVar2 * 2;
	pLVar5->y0 = sVar8 - sVar2;
	pLVar5->x1 = sVar3 + sVar2 * 2;
	pLVar5->y1 = sVar10 - sVar2;
	pLVar5 = AMGetLine__FUcUcUc(R,G,B);
	uVar1 = iVar7 * 3;
	sVar2 = (short)((int)(uVar1 + (uVar1 >> 0x1f)) >> 1);
	pLVar5->x0 = sVar9 + (short)uVar1;
	pLVar5->y0 = sVar8 - sVar2;
	pLVar5->x1 = sVar3 + (short)uVar1;
	pLVar5->y1 = sVar10 - sVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAutomap__Fv()
 // line 650, offset 0x8015edb4
	/* begin block 1 */
		// Start line: 651
		// Start offset: 0x8015EDB4
		// Variables:
	// 		int MapX; // $s4
	// 		int MapY; // $s3
	// 		int Sx; // $s2
	// 		int Sy; // $s5
	// 		unsigned short Tile; // $s1
	// 		int Len; // $s0
	// 		char levno[4]; // stack offset -40
	// 		int len; // $v0

		/* begin block 1.1 */
			// Start line: 651
			// Start offset: 0x8015EDB4
			// Variables:
		// 		int pc; // $a3

			/* begin block 1.1.1 */
				// Start line: 663
				// Start offset: 0x8015EDE4

				/* begin block 1.1.1.1 */
					// Start line: 665
					// Start offset: 0x8015EDF0

					/* begin block 1.1.1.1.1 */
						// Start line: 666
						// Start offset: 0x8015EE08
						// Variables:
					// 		int Px; // $a0
					// 		int Py; // $a1
					/* end block 1.1.1.1.1 */
					// End offset: 0x8015EE54
					// End Line: 670
				/* end block 1.1.1.1 */
				// End offset: 0x8015EE54
				// End Line: 670
			/* end block 1.1.1 */
			// End offset: 0x8015EE54
			// End Line: 670
		/* end block 1.1 */
		// End offset: 0x8015EE60
		// End Line: 672
	/* end block 1 */
	// End offset: 0x8015F1A8
	// End Line: 769

	/* begin block 2 */
		// Start line: 1847
	/* end block 2 */
	// End Line: 1848

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawAutomap__Fv(void)

{
	ushort uVar1;
	uint uVar2;
	int Length;
	int X;
	int Y;
	int y;
	int x;
	char acStack40 [8];
	
	Y = 0;
	X = 0;
	AMPlayerX = 0;
	AMPlayerY = 0;
	while (x = 0, Y < 2) {
		if ((&plr[0].plractive)[X] != '\0') {
			x = (int)*(short *)((int)&plr[0]._px + X) + -0x10;
			Length = (int)*(short *)((int)&plr[0]._py + X) + -0x10;
			AMPlayerX = AMPlayerX + (x - Length);
			uVar2 = x + Length;
			AMPlayerY = AMPlayerY + ((int)(uVar2 + (uVar2 >> 0x1f)) >> 1);
		}
		X = X + 0x23a8;
		Y = Y + 1;
	}
	AMPlayerX = (AMPlayerX >> 1) * AutoMapScale;
	AMPlayerY = (AMPlayerY >> 1) * AutoMapScale;
	do {
		y = 0;
		Y = -1;
		X = -1;
		Length = 0;
		do {
			uVar1 = GetAutomapType__FiiUc(x,y,'\x01');
			if ((uVar1 == 0) || (AMLWallFlag == '\0')) {
				if (Length != 0) {
					DrawAutoMapVertWall__Fiii(X,Y,Length);
				}
				if ((uVar1 != 0) || (Length != 0)) {
					if (AMLDoorFlag == '\0') {
						if (AMLGrateFlag == '\0') {
							if ((AMLArchFlag != '\0') || (AMColumnFlag != '\0')) {
								DrawAutoMapSquare__Fii(x,y);
							}
						}
						else {
							DrawAutoMapVertGrate__Fii(x,y);
						}
					}
					else {
						DrawAutoMapVertDoor__Fii(x,y);
					}
				}
				X = -1;
				Length = 0;
			}
			else {
				Length = Length + 1;
				if (X == -1) {
					X = x;
					Y = y;
				}
			}
			y = y + 1;
		} while (y < 0x28);
		if (Length != 0) {
			DrawAutoMapVertWall__Fiii(X,Y,Length);
		}
		x = x + 1;
		X = 0;
	} while (x < 0x28);
	do {
		y = 0;
		x = -1;
		Y = -1;
		Length = 0;
		do {
			uVar1 = GetAutomapType__FiiUc(y,X,'\x01');
			if ((uVar1 == 0) || (AMRWallFlag == '\0')) {
				if (Length != 0) {
					DrawAutoMapHorzWall__Fiii(Y,x,Length);
				}
				if ((uVar1 != 0) || (Length != 0)) {
					if (AMRDoorFlag == '\0') {
						if (AMRGrateFlag == '\0') {
							if ((AMRArchFlag != '\0') || (AMColumnFlag != '\0')) {
								DrawAutoMapSquare__Fii(y,X);
							}
						}
						else {
							DrawAutoMapHorzGrate__Fii(y,X);
						}
					}
					else {
						DrawAutoMapHorzDoor__Fii(y,X);
					}
				}
				Y = -1;
				Length = 0;
			}
			else {
				Length = Length + 1;
				if (Y == -1) {
					Y = y;
					x = X;
				}
			}
			if (AMStairFlag != '\0') {
				DrawAutoMapStairs__Fii(y,X);
			}
			y = y + 1;
		} while (y < 0x28);
		if (Length != 0) {
			DrawAutoMapHorzWall__Fiii(Y,x,Length);
		}
		X = X + 1;
	} while (X < 0x28);
	DrawAutomapPlr__Fv();
	sprintf(acStack40,"LEVEL %d",(uint)currlevel);
	X = GetStrWidth__5CFontPc(&MediumFont,acStack40);
	if (FePlayerNo == 0) {
		X = (0x100U - X) + (0x100U - X >> 0x1f);
		Y = 0x20;
	}
	else {
		X = (0x100U - X) + (0x100U - X >> 0x1f);
		Y = 0xc0;
	}
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,(X >> 1) + 0x20,Y,acStack40,JustLeft,(RECT *)0x0,(uint)GOLDR,(uint)GOLDG,
						 (uint)GOLDB);
	return;
}





