#include "THISDUST.H"
#include "CREATURE.H"


// decompiled code
// original method signature: 
// void * /*$ra*/ TryCreaturePrint__Fiiiiiii(int nMonster /*$a0*/, int blockr /*$s7*/, int blockg /*$fp*/, int blockb /*stack -48*/, int OtPos /*stack 16*/, int ScrX /*stack 20*/, int ScrY /*stack 24*/)
 // line 87, offset 0x80093a28
	/* begin block 1 */
		// Start line: 88
		// Start offset: 0x80093A28
		// Variables:
	// 		struct POLY_FT4 *ShadFt4; // $s0
	// 		struct POLY_FT4 *Ft4; // $v0

		/* begin block 1.1 */
			// Start line: 88
			// Start offset: 0x80093A28

			/* begin block 1.1.1 */
				// Start line: 92
				// Start offset: 0x80093A70
				// Variables:
			// 		struct MonsterStruct *MyMonst; // $s2
			// 		struct TextDat *CMonstGraphics; // $s3
			// 		int Frame; // $v0
			// 		int Action; // $s1
			// 		int Dir; // $s0
			// 		int PhysFrame; // $s0
			// 		int ScrXOff; // $s5
			// 		int ScrYOff; // $s4
			/* end block 1.1.1 */
			// End offset: 0x80093C54
			// End Line: 135
		/* end block 1.1 */
		// End offset: 0x80093C54
		// End Line: 135
	/* end block 1 */
	// End offset: 0x80093C58
	// End Line: 137

	/* begin block 2 */
		// Start line: 174
	/* end block 2 */
	// End Line: 175

void * TryCreaturePrint__Fiiiiiii
								 (int nMonster,int blockr,int blockg,int blockb,int OtPos,int ScrX,int ScrY)

{
	char cVar1;
	char cVar2;
	char cVar3;
	TextDat *this;
	int Frm;
	void *XFlip;
	POLY_FT4 *Prim;
	undefined *puVar4;
	ulong *puVar5;
	uint uVar6;
	int Action;
	uchar local_30;
	
	uVar6 = nMonster - 1;
	if (uVar6 < 2) {
		this = GM_UseTexData__Fi(0xd0);
		if (monster[uVar6].MType == (CMonster *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/CREATURE.CPP",0x69);
		}
		cVar1 = monster[uVar6]._mxoff;
		cVar2 = monster[uVar6]._myoff;
		Action = (int)monster[uVar6].Action;
		if (Action == 5) {
			Action = 0;
		}
		Frm = GetNumOfActions__7TextDati(this,1);
		if (Action < Frm) {
			cVar3 = monster[uVar6]._mdir;
			Frm = GetFrNum__7TextDatiiii(this,1,Action,(int)cVar3,(int)monster[uVar6]._mAnimFrame + -1);
			XFlip = IsDirAliased__7TextDatiii(this,1,Action,(int)cVar3);
			Prim = PrintFt4__7TextDatiiiiii
											 (this,Frm,ScrX + ((int)cVar1 * 0x271) / 1000,
												ScrY + ((int)cVar2 * 0x271) / 1000,(int)XFlip,OtPos,0);
			Prim->r0 = (uchar)blockr;
			Prim->g0 = (uchar)blockg;
			local_30 = (uchar)blockb;
			Prim->b0 = local_30;
			Prim->code = Prim->code & 0xfe;
			Prim = PRIM_GetCopy__FP8POLY_FT4(Prim);
			ShadScaleSkew__7CBlocksP8POLY_FT4(Prim);
			puVar5 = ThisOt + OtPos;
			puVar4 = &DAT_00000001;
			Prim->tag = Prim->tag & 0xff000000 | *puVar5 & 0xffffff;
			*puVar5 = *puVar5 & 0xff000000 | (uint)Prim & 0xffffff;
		}
		else {
			StartPartJump__Fiiiiii(ScrX,ScrY,0,0x8000,(int)&DAT_00606060,OtPos);
			puVar4 = &DAT_00000001;
		}
	}
	else {
		puVar4 = (undefined *)0x0;
	}
	return puVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TryWater__FiiP8POLY_GT4i(int BlockBase /*$a0*/, int BlockNum /*$a1*/, struct POLY_GT4 *DestGt4 /*$t0*/, int MyOt /*$a3*/)
 // line 148, offset 0x80093c8c
	/* begin block 1 */
		// Start line: 149
		// Start offset: 0x80093C8C
	/* end block 1 */
	// End offset: 0x80093E5C
	// End Line: 183

	/* begin block 2 */
		// Start line: 319
	/* end block 2 */
	// End Line: 320

void TryWater__FiiP8POLY_GT4i(int BlockBase,int BlockNum,POLY_GT4 *DestGt4,int MyOt)

{
	ulong *puVar1;
	
	puVar1 = ThisOt;
	BlockNum = BlockNum + BlockBase * 0x10000;
	if (leveltype == '\x03') {
		if (BlockNum - 0x250023U < 0x1f) {
			water_clut = DestGt4->clut;
		}
	}
	else {
		if (leveltype < 4) {
			if (leveltype == '\0') {
				if (daylight == '\0') {
					if (BlockNum - 0x2500c0U < 0x19) goto LAB_80093d1c;
				}
				else {
					if (BlockNum - 0x2500c8U < 0x1c) {
LAB_80093d1c:
						DestGt4->tag = DestGt4->tag & 0xff000000 | ThisOt[1] & 0xffffff;
						water_clut = DestGt4->clut;
						puVar1[1] = puVar1[1] & 0xff000000 | (uint)DestGt4 & 0xffffff;
						return;
					}
				}
			}
		}
		else {
			if (leveltype == '\x04') {
				if (BlockNum - 0x25007fU < 4) {
					water_clut = DestGt4->clut;
				}
				if ((BlockNum - 0x250069U < 9) && (QuestStruct_ARRAY_800e33dc[1]._qactive == '\x02')) {
					DestGt4->r0 = -0x80;
					DestGt4->g0 = '\0';
					DestGt4->b0 = '\0';
					DestGt4->r1 = -0x80;
					DestGt4->g1 = '\0';
					DestGt4->b1 = '\0';
					DestGt4->r2 = -0x80;
					DestGt4->g2 = '\0';
					DestGt4->b2 = '\0';
					DestGt4->r3 = -0x80;
					DestGt4->g3 = '\0';
					DestGt4->b3 = '\0';
				}
			}
		}
	}
	puVar1 = ThisOt + MyOt;
	DestGt4->tag = DestGt4->tag & 0xff000000 | *puVar1 & 0xffffff;
	*puVar1 = *puVar1 & 0xff000000 | (uint)DestGt4 & 0xffffff;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ nightgfx__FibiP8POLY_GT4i(int BlockBase /*$a0*/, void * water /*$a1*/, int BlockNum /*$a1*/, struct POLY_GT4 *DestGt4 /*$a3*/, int MyOt /*stack 16*/)
 // line 188, offset 0x80093e64
	/* begin block 1 */
		// Start line: 189
		// Start offset: 0x80093E64
	/* end block 1 */
	// End offset: 0x80093EE0
	// End Line: 217

	/* begin block 2 */
		// Start line: 401
	/* end block 2 */
	// End Line: 402

void nightgfx__FibiP8POLY_GT4i(int BlockBase,void *water,int BlockNum,POLY_GT4 *DestGt4,int MyOt)

{
	ulong *puVar1;
	
	if ((uint)leveltype - 1 < 2) {
		puVar1 = ThisOt + MyOt;
		DestGt4->tag = DestGt4->tag & 0xff000000 | *puVar1 & 0xffffff;
		*puVar1 = *puVar1 & 0xff000000 | (uint)DestGt4 & 0xffffff;
	}
	else {
		TryWater__FiiP8POLY_GT4i(BlockBase,BlockNum,DestGt4,MyOt);
	}
	return;
}





