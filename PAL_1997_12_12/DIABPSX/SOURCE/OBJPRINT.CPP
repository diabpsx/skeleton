#include "THISDUST.H"
#include "OBJPRINT.H"


// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(struct ObjectStruct *OStr /*$t0*/, int ScrX /*$s3*/, int ScrY /*$s4*/, struct TextDat *ObjDat /*$s2*/, int OtPos /*stack 16*/, int XOffSet /*stack 20*/, int YOffSet /*stack 24*/)
 // line 287, offset 0x80075e68
	/* begin block 1 */
		// Start line: 288
		// Start offset: 0x80075E68
		// Variables:
	// 		int AnimFrame; // $s0
	// 		struct POLY_FT4 *Ft4; // $s1
	// 		int LoadIndex; // $v0
	// 		int Creature; // $s1

		/* begin block 1.1 */
			// Start line: 288
			// Start offset: 0x80075E68

			/* begin block 1.1.1 */
				// Start line: 299
				// Start offset: 0x80075EFC
				// Variables:
			// 		int PhysFrame; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 300
					// Start offset: 0x80075EFC

					/* begin block 1.1.1.1.1 */
						// Start line: 305
						// Start offset: 0x80075F64
						// Variables:
					// 		struct POLY_FT4 *ShadFt4; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x80075F64
					// End Line: 307
				/* end block 1.1.1.1 */
				// End offset: 0x80075F64
				// End Line: 307
			/* end block 1.1.1 */
			// End offset: 0x80075F64
			// End Line: 307
		/* end block 1.1 */
		// End offset: 0x80075FC8
		// End Line: 313
	/* end block 1 */
	// End offset: 0x80075FCC
	// End Line: 315

	/* begin block 2 */
		// Start line: 574
	/* end block 2 */
	// End Line: 575

POLY_FT4 *
DefaultObjPrint__FP12ObjectStructiiP7TextDatiii
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos,int XOffSet,int YOffSet)

{
	short sVar1;
	int Frm;
	POLY_FT4 *Prim;
	FRAME_HDR *pFVar2;
	POLY_FT4 *Ft4;
	ulong *puVar3;
	int Frame;
	
	sVar1 = ObjMasterLoadList[(int)(&AllObjects)[(int)OStr->_otype].ofindex].Creature;
	Frame = (int)OStr->_oAnimFrame + -1;
	Frm = GetNumOfFrames__7TextDatii(ObjDat,(int)sVar1,0);
	if (Frame < Frm) {
		Frm = GetFrNum__7TextDatiiii(ObjDat,(int)sVar1,0,0,Frame);
		Prim = PrintFt4__7TextDatiiiiii(ObjDat,Frm,ScrX + XOffSet,ScrY + YOffSet,0,OtPos,0);
		Prim->code = Prim->code & 0xfe;
		pFVar2 = GetFr__7TextDati(ObjDat,Frm);
		if ((pFVar2->Y & 0x8000U) != 0) {
			Ft4 = PRIM_GetCopy__FP8POLY_FT4(Prim);
			ShadScaleSkew__7CBlocksP8POLY_FT4(Ft4);
			puVar3 = ThisOt + OtPos;
			Ft4->tag = Ft4->tag & 0xff000000 | *puVar3 & 0xffffff;
			*puVar3 = *puVar3 & 0xff000000 | (uint)Ft4 & 0xffffff;
		}
	}
	else {
		Prim = (POLY_FT4 *)0x0;
	}
	return Prim;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ LightObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$s0*/, int ScrX /*$s1*/, int ScrY /*$s2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 319, offset 0x80075ffc
	/* begin block 1 */
		// Start line: 320
		// Start offset: 0x80075FFC
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $s3

		/* begin block 1.1 */
			// Start line: 320
			// Start offset: 0x80075FFC

			/* begin block 1.1.1 */
				// Start line: 326
				// Start offset: 0x80076044

				/* begin block 1.1.1.1 */
					// Start line: 327
					// Start offset: 0x80076044

					/* begin block 1.1.1.1.1 */
						// Start line: 328
						// Start offset: 0x80076054
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007608C
					// End Line: 335
				/* end block 1.1.1.1 */
				// End offset: 0x8007608C
				// End Line: 335
			/* end block 1.1.1 */
			// End offset: 0x8007608C
			// End Line: 335
		/* end block 1.1 */
		// End offset: 0x8007608C
		// End Line: 335
	/* end block 1 */
	// End offset: 0x80076090
	// End Line: 339

	/* begin block 2 */
		// Start line: 668
	/* end block 2 */
	// End Line: 669

POLY_FT4 *
LightObjPrint__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	if ((pPVar1 != (POLY_FT4 *)0x0) && (OStr->_olid != -1)) {
		DrawSpinner__FiiUcUcUciiibiT8
							(ScrX + 1,ScrY + -0x1a,'\0','\0',0,0x10,0x40,0,(void *)0x0,OtPos,&DAT_00000001);
	}
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ DoorObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$s4*/, int ScrX /*$fp*/, int ScrY /*stack -48*/, struct TextDat *ObjDat /*$s5*/, int OtPos /*stack 16*/)
 // line 354, offset 0x800760b4
	/* begin block 1 */
		// Start line: 355
		// Start offset: 0x800760B4
		// Variables:
	// 		int AnimFrame; // $s6
	// 		int XOffSet; // $s2
	// 		int YOffSet; // $s1
	// 		struct POLY_FT4 *Ft4; // $s0
	// 		struct FRAME_HDR *PalFr; // $s3
	// 		struct TextDat *ThisDat; // $s0
	// 		int LoadIndex; // $v1
	// 		int Creature; // $s7

		/* begin block 1.1 */
			// Start line: 355
			// Start offset: 0x800760B4

			/* begin block 1.1.1 */
				// Start line: 371
				// Start offset: 0x8007615C
			/* end block 1.1.1 */
			// End offset: 0x800762F0
			// End Line: 422
		/* end block 1.1 */
		// End offset: 0x80076310
		// End Line: 429
	/* end block 1 */
	// End offset: 0x80076314
	// End Line: 431

	/* begin block 2 */
		// Start line: 738
	/* end block 2 */
	// End Line: 739

POLY_FT4 *
DoorObjPrint__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	char cVar1;
	short sVar2;
	CBlocks *this;
	TextDat *this_00;
	int Frm;
	POLY_FT4 *FT4;
	short sVar3;
	int iVar4;
	int iVar5;
	FRAME_HDR *Fr;
	int Frame;
	
	iVar5 = 0;
	iVar4 = 0;
	this = BL_GetCurrentBlocks__Fv();
	this_00 = GetBlockTexDat__7CBlocks(this);
	Fr = (FRAME_HDR *)0x0;
	sVar2 = ObjMasterLoadList[(int)(&AllObjects)[(int)OStr->_otype].ofindex].Creature;
	Frame = (int)OStr->_oAnimFrame + -1;
	Frm = GetNumOfFrames__7TextDatii(ObjDat,(int)sVar2,0);
	if (Frm < Frame) {
		return (POLY_FT4 *)0x0;
	}
	cVar1 = OStr->_otype;
	if (cVar1 < ',') {
		if (cVar1 < '*') {
			if ((cVar1 < '\x03') && ('\0' < cVar1)) {
				iVar5 = -5;
				iVar4 = -4;
			}
		}
		else {
			Fr = GetFr__7TextDati(this_00,(int)&DAT_001b0000);
			iVar5 = -4;
			iVar4 = -3;
		}
	}
	else {
		if (cVar1 == 'J') {
			Fr = GetFr__7TextDati(this_00,(int)&DAT_001b0009);
			iVar5 = -4;
			iVar4 = -5;
		}
		else {
			if (cVar1 == 'K') {
				Fr = GetFr__7TextDati(this_00,(int)&DAT_001b0009);
				iVar5 = -3;
				iVar4 = -6;
			}
		}
	}
	Frm = GetFrNum__7TextDatiiii(ObjDat,(int)sVar2,0,0,Frame);
	FT4 = PrintFt4__7TextDatiiiiii(ObjDat,Frm,ScrX + iVar5,ScrY + iVar4,0,OtPos,0);
	if (Fr != (FRAME_HDR *)0x0) {
		SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(ObjDat,Fr,FT4);
	}
	FT4->code = FT4->code & 0xfe;
	if (OStr->_oVar4 == 0) {
		return FT4;
	}
	cVar1 = OStr->_otype;
	if (cVar1 != '\x02') {
		if (cVar1 < '\x03') {
			if (cVar1 != '\x01') {
				return FT4;
			}
			sVar2 = FT4->y0 + -0x14;
			sVar3 = FT4->y2 + -0x14;
			goto LAB_800762e4;
		}
		if (cVar1 != 'J') {
			if (cVar1 != 'K') {
				return FT4;
			}
			FT4->y1 = FT4->y1 + 0x14;
			FT4->y3 = FT4->y3 + 0x14;
			return FT4;
		}
	}
	sVar2 = FT4->y0 + 0x14;
	sVar3 = FT4->y2 + 0x14;
LAB_800762e4:
	FT4->y0 = sVar2;
	FT4->y2 = sVar3;
	return FT4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawLightSpark__Fiii(int xo /*$s1*/, int yo /*$s2*/, int ot /*$s3*/)
 // line 441, offset 0x80076348
	/* begin block 1 */
		// Start line: 442
		// Start offset: 0x80076348
	/* end block 1 */
	// End offset: 0x80076400
	// End Line: 449

	/* begin block 2 */
		// Start line: 939
	/* end block 2 */
	// End Line: 940

void DrawLightSpark__Fiii(int xo,int yo,int ot)

{
	ulong uVar1;
	int local_2c;
	int local_34;
	
	if (PauseMode == '\0') {
		uVar1 = TICK_Get();
		local_34 = (uVar1 & 1) * -0x10 + 0x30;
		uVar1 = TICK_Get();
		local_2c = (uVar1 & 1) << 3;
	}
	else {
		local_34 = 0x30;
		local_2c = 0;
	}
	DrawSpinner__FiiUcUcUciiibiT8
						(xo,yo,-1,-0x80,0,local_34,0x28,local_2c,(void *)0x0,ot,&DAT_00000001);
	return;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$s1*/, int ScrY /*$s2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 459, offset 0x80076420
	/* begin block 1 */
		// Start line: 460
		// Start offset: 0x80076420
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $v0
	/* end block 1 */
	// End offset: 0x8007648C
	// End Line: 468

	/* begin block 2 */
		// Start line: 975
	/* end block 2 */
	// End Line: 976

POLY_FT4 *
PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii
										 (OStr,ScrX + -7,ScrY + -6,ObjDat,OtPos,0,0);
	pPVar1->r0 = -0x80;
	pPVar1->g0 = -0x80;
	pPVar1->b0 = -0x80;
	pPVar1->code = pPVar1->code & 0xfe | 2;
	DrawLightSpark__Fiii(ScrX + -5,ScrY + -0x28,OtPos);
	return (POLY_FT4 *)0x0;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 477, offset 0x800764a8
	/* begin block 1 */
		// Start line: 478
		// Start offset: 0x800764A8
	/* end block 1 */
	// End offset: 0x800764C4
	// End Line: 479

	/* begin block 2 */
		// Start line: 1020
	/* end block 2 */
	// End Line: 1021

POLY_FT4 *
PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 488, offset 0x800764d4
	/* begin block 1 */
		// Start line: 489
		// Start offset: 0x800764D4
	/* end block 1 */
	// End offset: 0x800764F0
	// End Line: 490

	/* begin block 2 */
		// Start line: 1042
	/* end block 2 */
	// End Line: 1043

POLY_FT4 *
PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 499, offset 0x80076500
	/* begin block 1 */
		// Start line: 500
		// Start offset: 0x80076500
	/* end block 1 */
	// End offset: 0x8007651C
	// End Line: 501

	/* begin block 2 */
		// Start line: 1064
	/* end block 2 */
	// End Line: 1065

POLY_FT4 *
PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 510, offset 0x8007652c
	/* begin block 1 */
		// Start line: 511
		// Start offset: 0x8007652C
	/* end block 1 */
	// End offset: 0x80076548
	// End Line: 512

	/* begin block 2 */
		// Start line: 1086
	/* end block 2 */
	// End Line: 1087

POLY_FT4 *
PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 521, offset 0x80076558
	/* begin block 1 */
		// Start line: 522
		// Start offset: 0x80076558
	/* end block 1 */
	// End offset: 0x80076574
	// End Line: 523

	/* begin block 2 */
		// Start line: 1108
	/* end block 2 */
	// End Line: 1109

POLY_FT4 *
PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 532, offset 0x80076584
	/* begin block 1 */
		// Start line: 533
		// Start offset: 0x80076584
	/* end block 1 */
	// End offset: 0x80076598
	// End Line: 534

	/* begin block 2 */
		// Start line: 1130
	/* end block 2 */
	// End Line: 1131

POLY_FT4 *
PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = LightObjPrint__FP12ObjectStructiiP7TextDati(OStr,ScrX,ScrY,ObjDat,OtPos);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 543, offset 0x800765a8
	/* begin block 1 */
		// Start line: 544
		// Start offset: 0x800765A8
	/* end block 1 */
	// End offset: 0x800765BC
	// End Line: 545

	/* begin block 2 */
		// Start line: 1152
	/* end block 2 */
	// End Line: 1153

POLY_FT4 *
PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = LightObjPrint__FP12ObjectStructiiP7TextDati(OStr,ScrX,ScrY,ObjDat,OtPos);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 554, offset 0x800765cc
	/* begin block 1 */
		// Start line: 555
		// Start offset: 0x800765CC
	/* end block 1 */
	// End offset: 0x800765E8
	// End Line: 556

	/* begin block 2 */
		// Start line: 1174
	/* end block 2 */
	// End Line: 1175

POLY_FT4 *
PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 565, offset 0x800765f8
	/* begin block 1 */
		// Start line: 566
		// Start offset: 0x800765F8
	/* end block 1 */
	// End offset: 0x80076614
	// End Line: 567

	/* begin block 2 */
		// Start line: 1196
	/* end block 2 */
	// End Line: 1197

POLY_FT4 *
PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 576, offset 0x80076624
	/* begin block 1 */
		// Start line: 577
		// Start offset: 0x80076624
	/* end block 1 */
	// End offset: 0x80076640
	// End Line: 578

	/* begin block 2 */
		// Start line: 1218
	/* end block 2 */
	// End Line: 1219

POLY_FT4 *
PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 587, offset 0x80076650
	/* begin block 1 */
		// Start line: 588
		// Start offset: 0x80076650
	/* end block 1 */
	// End offset: 0x8007666C
	// End Line: 589

	/* begin block 2 */
		// Start line: 1240
	/* end block 2 */
	// End Line: 1241

POLY_FT4 *
PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 598, offset 0x8007667c
	/* begin block 1 */
		// Start line: 599
		// Start offset: 0x8007667C
	/* end block 1 */
	// End offset: 0x80076698
	// End Line: 600

	/* begin block 2 */
		// Start line: 1262
	/* end block 2 */
	// End Line: 1263

POLY_FT4 *
PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 609, offset 0x800766a8
	/* begin block 1 */
		// Start line: 610
		// Start offset: 0x800766A8
	/* end block 1 */
	// End offset: 0x800766C4
	// End Line: 611

	/* begin block 2 */
		// Start line: 1284
	/* end block 2 */
	// End Line: 1285

POLY_FT4 *
PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 620, offset 0x800766d4
	/* begin block 1 */
		// Start line: 621
		// Start offset: 0x800766D4
	/* end block 1 */
	// End offset: 0x800766F0
	// End Line: 622

	/* begin block 2 */
		// Start line: 1306
	/* end block 2 */
	// End Line: 1307

POLY_FT4 *
PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 631, offset 0x80076700
	/* begin block 1 */
		// Start line: 632
		// Start offset: 0x80076700
	/* end block 1 */
	// End offset: 0x8007671C
	// End Line: 633

	/* begin block 2 */
		// Start line: 1328
	/* end block 2 */
	// End Line: 1329

POLY_FT4 *
PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 642, offset 0x8007672c
	/* begin block 1 */
		// Start line: 643
		// Start offset: 0x8007672C
	/* end block 1 */
	// End offset: 0x80076748
	// End Line: 644

	/* begin block 2 */
		// Start line: 1350
	/* end block 2 */
	// End Line: 1351

POLY_FT4 *
PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 653, offset 0x80076758
	/* begin block 1 */
		// Start line: 654
		// Start offset: 0x80076758
	/* end block 1 */
	// End offset: 0x80076774
	// End Line: 655

	/* begin block 2 */
		// Start line: 1372
	/* end block 2 */
	// End Line: 1373

POLY_FT4 *
PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 664, offset 0x80076784
	/* begin block 1 */
		// Start line: 665
		// Start offset: 0x80076784
	/* end block 1 */
	// End offset: 0x800767A0
	// End Line: 666

	/* begin block 2 */
		// Start line: 1394
	/* end block 2 */
	// End Line: 1395

POLY_FT4 *
PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 675, offset 0x800767b0
	/* begin block 1 */
		// Start line: 676
		// Start offset: 0x800767B0
	/* end block 1 */
	// End offset: 0x800767CC
	// End Line: 677

	/* begin block 2 */
		// Start line: 1416
	/* end block 2 */
	// End Line: 1417

POLY_FT4 *
PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 686, offset 0x800767dc
	/* begin block 1 */
		// Start line: 687
		// Start offset: 0x800767DC
	/* end block 1 */
	// End offset: 0x800767F8
	// End Line: 688

	/* begin block 2 */
		// Start line: 1438
	/* end block 2 */
	// End Line: 1439

POLY_FT4 *
PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 697, offset 0x80076808
	/* begin block 1 */
		// Start line: 698
		// Start offset: 0x80076808
	/* end block 1 */
	// End offset: 0x80076824
	// End Line: 699

	/* begin block 2 */
		// Start line: 1460
	/* end block 2 */
	// End Line: 1461

POLY_FT4 *
PrintOBJ_STAND__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 708, offset 0x80076834
	/* begin block 1 */
		// Start line: 709
		// Start offset: 0x80076834
	/* end block 1 */
	// End offset: 0x80076850
	// End Line: 710

	/* begin block 2 */
		// Start line: 1482
	/* end block 2 */
	// End Line: 1483

POLY_FT4 *
PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 719, offset 0x80076860
	/* begin block 1 */
		// Start line: 720
		// Start offset: 0x80076860
	/* end block 1 */
	// End offset: 0x8007687C
	// End Line: 721

	/* begin block 2 */
		// Start line: 1504
	/* end block 2 */
	// End Line: 1505

POLY_FT4 *
PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 730, offset 0x8007688c
	/* begin block 1 */
		// Start line: 731
		// Start offset: 0x8007688C
	/* end block 1 */
	// End offset: 0x800768A8
	// End Line: 732

	/* begin block 2 */
		// Start line: 1526
	/* end block 2 */
	// End Line: 1527

POLY_FT4 *
PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 741, offset 0x800768b8
	/* begin block 1 */
		// Start line: 742
		// Start offset: 0x800768B8
	/* end block 1 */
	// End offset: 0x800768D4
	// End Line: 743

	/* begin block 2 */
		// Start line: 1548
	/* end block 2 */
	// End Line: 1549

POLY_FT4 *
PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 752, offset 0x800768e4
	/* begin block 1 */
		// Start line: 753
		// Start offset: 0x800768E4
	/* end block 1 */
	// End offset: 0x80076900
	// End Line: 754

	/* begin block 2 */
		// Start line: 1570
	/* end block 2 */
	// End Line: 1571

POLY_FT4 *
PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 763, offset 0x80076910
	/* begin block 1 */
		// Start line: 764
		// Start offset: 0x80076910
	/* end block 1 */
	// End offset: 0x8007692C
	// End Line: 765

	/* begin block 2 */
		// Start line: 1592
	/* end block 2 */
	// End Line: 1593

POLY_FT4 *
PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 774, offset 0x8007693c
	/* begin block 1 */
		// Start line: 775
		// Start offset: 0x8007693C
	/* end block 1 */
	// End offset: 0x80076958
	// End Line: 776

	/* begin block 2 */
		// Start line: 1614
	/* end block 2 */
	// End Line: 1615

POLY_FT4 *
PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 785, offset 0x80076968
	/* begin block 1 */
		// Start line: 786
		// Start offset: 0x80076968
	/* end block 1 */
	// End offset: 0x80076984
	// End Line: 787

	/* begin block 2 */
		// Start line: 1636
	/* end block 2 */
	// End Line: 1637

POLY_FT4 *
PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 796, offset 0x80076994
	/* begin block 1 */
		// Start line: 797
		// Start offset: 0x80076994
	/* end block 1 */
	// End offset: 0x800769B0
	// End Line: 798

	/* begin block 2 */
		// Start line: 1658
	/* end block 2 */
	// End Line: 1659

POLY_FT4 *
PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 807, offset 0x800769c0
	/* begin block 1 */
		// Start line: 808
		// Start offset: 0x800769C0
	/* end block 1 */
	// End offset: 0x800769DC
	// End Line: 809

	/* begin block 2 */
		// Start line: 1680
	/* end block 2 */
	// End Line: 1681

POLY_FT4 *
PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 818, offset 0x800769ec
	/* begin block 1 */
		// Start line: 819
		// Start offset: 0x800769EC
	/* end block 1 */
	// End offset: 0x80076A08
	// End Line: 820

	/* begin block 2 */
		// Start line: 1702
	/* end block 2 */
	// End Line: 1703

POLY_FT4 *
PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 829, offset 0x80076a18
	/* begin block 1 */
		// Start line: 830
		// Start offset: 0x80076A18
	/* end block 1 */
	// End offset: 0x80076A34
	// End Line: 831

	/* begin block 2 */
		// Start line: 1724
	/* end block 2 */
	// End Line: 1725

POLY_FT4 *
PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 840, offset 0x80076a44
	/* begin block 1 */
		// Start line: 841
		// Start offset: 0x80076A44
	/* end block 1 */
	// End offset: 0x80076A60
	// End Line: 842

	/* begin block 2 */
		// Start line: 1746
	/* end block 2 */
	// End Line: 1747

POLY_FT4 *
PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 851, offset 0x80076a70
	/* begin block 1 */
		// Start line: 852
		// Start offset: 0x80076A70
	/* end block 1 */
	// End offset: 0x80076A8C
	// End Line: 853

	/* begin block 2 */
		// Start line: 1768
	/* end block 2 */
	// End Line: 1769

POLY_FT4 *
PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 862, offset 0x80076a9c
	/* begin block 1 */
		// Start line: 863
		// Start offset: 0x80076A9C
	/* end block 1 */
	// End offset: 0x80076AB8
	// End Line: 864

	/* begin block 2 */
		// Start line: 1790
	/* end block 2 */
	// End Line: 1791

POLY_FT4 *
PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 873, offset 0x80076ac8
	/* begin block 1 */
		// Start line: 874
		// Start offset: 0x80076AC8
	/* end block 1 */
	// End offset: 0x80076AE4
	// End Line: 875

	/* begin block 2 */
		// Start line: 1812
	/* end block 2 */
	// End Line: 1813

POLY_FT4 *
PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 884, offset 0x80076af4
	/* begin block 1 */
		// Start line: 885
		// Start offset: 0x80076AF4
	/* end block 1 */
	// End offset: 0x80076B10
	// End Line: 886

	/* begin block 2 */
		// Start line: 1834
	/* end block 2 */
	// End Line: 1835

POLY_FT4 *
PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 895, offset 0x80076b20
	/* begin block 1 */
		// Start line: 896
		// Start offset: 0x80076B20
	/* end block 1 */
	// End offset: 0x80076B3C
	// End Line: 897

	/* begin block 2 */
		// Start line: 1856
	/* end block 2 */
	// End Line: 1857

POLY_FT4 *
PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintTorchStick__Fiiii(int x /*$s2*/, int y /*$s3*/, int f /*$s1*/, int OtPos /*$s4*/)
 // line 906, offset 0x80076b4c
	/* begin block 1 */
		// Start line: 907
		// Start offset: 0x80076B4C
		// Variables:
	// 		struct TextDat *ThisDat; // $s0
	/* end block 1 */
	// End offset: 0x80076BBC
	// End Line: 911

	/* begin block 2 */
		// Start line: 1878
	/* end block 2 */
	// End Line: 1879

void PrintTorchStick__Fiiii(int x,int y,int f,int OtPos)

{
	CBlocks *this;
	int Frm;
	
	this = BL_GetCurrentBlocks__Fv();
	if (this != (CBlocks *)0x0) {
		Frm = GetFrNum__7TextDatiiii((TextDat *)this,4,0,0,f);
		PrintFt4__7TextDatiiiiii((TextDat *)this,Frm,x,y,0,OtPos,0);
	}
	return;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$s2*/, int ScrY /*$s3*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 915, offset 0x80076be0
	/* begin block 1 */
		// Start line: 916
		// Start offset: 0x80076BE0
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $s0
	/* end block 1 */
	// End offset: 0x80076C50
	// End Line: 922

	/* begin block 2 */
		// Start line: 1896
	/* end block 2 */
	// End Line: 1897

POLY_FT4 *
PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	pPVar1->code = pPVar1->code & 0xfe | 2;
	PrintTorchStick__Fiiii(ScrX,ScrY,3,OtPos);
	DrawLightSpark__Fiii(ScrX + -5,ScrY + -0x25,OtPos);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$s2*/, int ScrY /*$s3*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 931, offset 0x80076c70
	/* begin block 1 */
		// Start line: 932
		// Start offset: 0x80076C70
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $s0
	/* end block 1 */
	// End offset: 0x80076CE0
	// End Line: 938

	/* begin block 2 */
		// Start line: 1933
	/* end block 2 */
	// End Line: 1934

POLY_FT4 *
PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	pPVar1->code = pPVar1->code & 0xfe | 2;
	PrintTorchStick__Fiiii(ScrX,ScrY,2,OtPos);
	DrawLightSpark__Fiii(ScrX,ScrY + -0x25,OtPos);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$s2*/, int ScrY /*$s3*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 947, offset 0x80076d00
	/* begin block 1 */
		// Start line: 948
		// Start offset: 0x80076D00
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $s0
	/* end block 1 */
	// End offset: 0x80076D70
	// End Line: 954

	/* begin block 2 */
		// Start line: 1970
	/* end block 2 */
	// End Line: 1971

POLY_FT4 *
PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	pPVar1->code = pPVar1->code & 0xfe | 2;
	PrintTorchStick__Fiiii(ScrX,ScrY,0,OtPos);
	DrawLightSpark__Fiii(ScrX + 8,ScrY + -0x1e,OtPos);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$s2*/, int ScrY /*$s3*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 963, offset 0x80076d90
	/* begin block 1 */
		// Start line: 964
		// Start offset: 0x80076D90
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $s0
	/* end block 1 */
	// End offset: 0x80076E00
	// End Line: 970

	/* begin block 2 */
		// Start line: 2007
	/* end block 2 */
	// End Line: 2008

POLY_FT4 *
PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	pPVar1->code = pPVar1->code & 0xfe | 2;
	PrintTorchStick__Fiiii(ScrX,ScrY,1,OtPos);
	DrawLightSpark__Fiii(ScrX + -5,ScrY + -0x20,OtPos);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 979, offset 0x80076e20
	/* begin block 1 */
		// Start line: 980
		// Start offset: 0x80076E20
	/* end block 1 */
	// End offset: 0x80076E3C
	// End Line: 981

	/* begin block 2 */
		// Start line: 2044
	/* end block 2 */
	// End Line: 2045

POLY_FT4 *
PrintOBJ_SARC__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 990, offset 0x80076e4c
	/* begin block 1 */
		// Start line: 991
		// Start offset: 0x80076E4C
	/* end block 1 */
	// End offset: 0x80076E68
	// End Line: 992

	/* begin block 2 */
		// Start line: 2066
	/* end block 2 */
	// End Line: 2067

POLY_FT4 *
PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1001, offset 0x80076e78
	/* begin block 1 */
		// Start line: 1002
		// Start offset: 0x80076E78
	/* end block 1 */
	// End offset: 0x80076E94
	// End Line: 1003

	/* begin block 2 */
		// Start line: 2088
	/* end block 2 */
	// End Line: 2089

POLY_FT4 *
PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1012, offset 0x80076ea4
	/* begin block 1 */
		// Start line: 1013
		// Start offset: 0x80076EA4
	/* end block 1 */
	// End offset: 0x80076EC0
	// End Line: 1014

	/* begin block 2 */
		// Start line: 2110
	/* end block 2 */
	// End Line: 2111

POLY_FT4 *
PrintOBJ_WATER__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1023, offset 0x80076ed0
	/* begin block 1 */
		// Start line: 1024
		// Start offset: 0x80076ED0
	/* end block 1 */
	// End offset: 0x80076EEC
	// End Line: 1025

	/* begin block 2 */
		// Start line: 2132
	/* end block 2 */
	// End Line: 2133

POLY_FT4 *
PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1034, offset 0x80076efc
	/* begin block 1 */
		// Start line: 1035
		// Start offset: 0x80076EFC
	/* end block 1 */
	// End offset: 0x80076F18
	// End Line: 1036

	/* begin block 2 */
		// Start line: 2154
	/* end block 2 */
	// End Line: 2155

POLY_FT4 *
PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1045, offset 0x80076f28
	/* begin block 1 */
		// Start line: 1046
		// Start offset: 0x80076F28
	/* end block 1 */
	// End offset: 0x80076F44
	// End Line: 1047

	/* begin block 2 */
		// Start line: 2176
	/* end block 2 */
	// End Line: 2177

POLY_FT4 *
PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1056, offset 0x80076f54
	/* begin block 1 */
		// Start line: 1057
		// Start offset: 0x80076F54
	/* end block 1 */
	// End offset: 0x80076F70
	// End Line: 1058

	/* begin block 2 */
		// Start line: 2198
	/* end block 2 */
	// End Line: 2199

POLY_FT4 *
PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1067, offset 0x80076f80
	/* begin block 1 */
		// Start line: 1068
		// Start offset: 0x80076F80
	/* end block 1 */
	// End offset: 0x80076F9C
	// End Line: 1069

	/* begin block 2 */
		// Start line: 2220
	/* end block 2 */
	// End Line: 2221

POLY_FT4 *
PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1078, offset 0x80076fac
	/* begin block 1 */
		// Start line: 1079
		// Start offset: 0x80076FAC
	/* end block 1 */
	// End offset: 0x80076FC8
	// End Line: 1080

	/* begin block 2 */
		// Start line: 2242
	/* end block 2 */
	// End Line: 2243

POLY_FT4 *
PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BARRELEX__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$s0*/, int ScrX /*$s1*/, int ScrY /*$s3*/, struct TextDat *ObjDat /*$s2*/, int OtPos /*stack 16*/)
 // line 1089, offset 0x80076fd8
	/* begin block 1 */
		// Start line: 1090
		// Start offset: 0x80076FD8
		// Variables:
	// 		int AnimFrame; // $s0
	// 		struct POLY_FT4 *Ft4; // $s1

		/* begin block 1.1 */
			// Start line: 1096
			// Start offset: 0x80077018

			/* begin block 1.1.1 */
				// Start line: 1100
				// Start offset: 0x8007703C
				// Variables:
			// 		int PhysFrame; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 1101
					// Start offset: 0x8007703C

					/* begin block 1.1.1.1.1 */
						// Start line: 1106
						// Start offset: 0x800770A4
						// Variables:
					// 		struct POLY_FT4 *ShadFt4; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800770A4
					// End Line: 1108
				/* end block 1.1.1.1 */
				// End offset: 0x800770A4
				// End Line: 1108
			/* end block 1.1.1 */
			// End offset: 0x800770A4
			// End Line: 1108
		/* end block 1.1 */
		// End offset: 0x80077108
		// End Line: 1114
	/* end block 1 */
	// End offset: 0x8007710C
	// End Line: 1116

	/* begin block 2 */
		// Start line: 2264
	/* end block 2 */
	// End Line: 2265

POLY_FT4 *
PrintOBJ_BARRELEX__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	int Frm;
	POLY_FT4 *Prim;
	FRAME_HDR *pFVar1;
	POLY_FT4 *Ft4;
	ulong *puVar2;
	int Frame;
	
	if (OStr->_oAnimFlag != '\0') {
		DrawObjExpl__FP12ObjectStructiii(OStr,ScrX,ScrY,OtPos);
	}
	Frame = (int)OStr->_oAnimFrame + -2;
	Frm = GetNumOfFrames__7TextDatii(ObjDat,8,0);
	if (Frm < Frame) {
		Prim = (POLY_FT4 *)0x0;
	}
	else {
		Frm = GetFrNum__7TextDatiiii(ObjDat,8,0,0,Frame);
		Prim = PrintFt4__7TextDatiiiiii(ObjDat,Frm,ScrX,ScrY,0,OtPos,0);
		Prim->code = Prim->code & 0xfe;
		pFVar1 = GetFr__7TextDati(ObjDat,Frm);
		if ((pFVar1->Y & 0x8000U) != 0) {
			Ft4 = PRIM_GetCopy__FP8POLY_FT4(Prim);
			ShadScaleSkew__7CBlocksP8POLY_FT4(Ft4);
			puVar2 = ThisOt + OtPos;
			Ft4->tag = Ft4->tag & 0xff000000 | *puVar2 & 0xffffff;
			*puVar2 = *puVar2 & 0xff000000 | (uint)Ft4 & 0xffffff;
		}
	}
	return Prim;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$s0*/, int ScrX /*$s1*/, int ScrY /*$s2*/, struct TextDat *ObjDat /*$s3*/, int OtPos /*stack 16*/)
 // line 1125, offset 0x80077130
	/* begin block 1 */
		// Start line: 1126
		// Start offset: 0x80077130
		// Variables:
	// 		int AnimFrame; // $v1
	/* end block 1 */
	// End offset: 0x800771D8
	// End Line: 1133

	/* begin block 2 */
		// Start line: 2348
	/* end block 2 */
	// End Line: 2349

POLY_FT4 *
PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	int iVar2;
	
	iVar2 = (int)OStr->_oAnimFrame + -1;
	if (OStr->_oAnimFlag != '\0') {
		DrawSpinner__FiiUcUcUciiibiT8
							(ScrX + -0xc,ScrY + -0x1c,'\0','P',0xf0,iVar2 * 8,0x40,iVar2 * 4,(void *)0x0,OtPos,
							 &DAT_00000001);
	}
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$s0*/, int ScrX /*$s1*/, int ScrY /*$s2*/, struct TextDat *ObjDat /*$s3*/, int OtPos /*stack 16*/)
 // line 1142, offset 0x800771fc
	/* begin block 1 */
		// Start line: 1143
		// Start offset: 0x800771FC
		// Variables:
	// 		int AnimFrame; // $v1
	/* end block 1 */
	// End offset: 0x800772A4
	// End Line: 1150

	/* begin block 2 */
		// Start line: 2386
	/* end block 2 */
	// End Line: 2387

POLY_FT4 *
PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	int iVar2;
	
	iVar2 = (int)OStr->_oAnimFrame + -1;
	if (OStr->_oAnimFlag != '\0') {
		DrawSpinner__FiiUcUcUciiibiT8
							(ScrX + 8,ScrY + -0x1d,'\0','P',0xf0,iVar2 * 8,0x40,iVar2 * 4,(void *)0x0,OtPos,
							 &DAT_00000001);
	}
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1159, offset 0x800772c8
	/* begin block 1 */
		// Start line: 1160
		// Start offset: 0x800772C8
	/* end block 1 */
	// End offset: 0x800772E4
	// End Line: 1161

	/* begin block 2 */
		// Start line: 2424
	/* end block 2 */
	// End Line: 2425

POLY_FT4 *
PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1170, offset 0x800772f4
	/* begin block 1 */
		// Start line: 1171
		// Start offset: 0x800772F4
	/* end block 1 */
	// End offset: 0x80077310
	// End Line: 1172

	/* begin block 2 */
		// Start line: 2446
	/* end block 2 */
	// End Line: 2447

POLY_FT4 *
PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1181, offset 0x80077320
	/* begin block 1 */
		// Start line: 1182
		// Start offset: 0x80077320
	/* end block 1 */
	// End offset: 0x8007733C
	// End Line: 1183

	/* begin block 2 */
		// Start line: 2468
	/* end block 2 */
	// End Line: 2469

POLY_FT4 *
PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1192, offset 0x8007734c
	/* begin block 1 */
		// Start line: 1193
		// Start offset: 0x8007734C
	/* end block 1 */
	// End offset: 0x80077368
	// End Line: 1194

	/* begin block 2 */
		// Start line: 2490
	/* end block 2 */
	// End Line: 2491

POLY_FT4 *
PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1203, offset 0x80077378
	/* begin block 1 */
		// Start line: 1204
		// Start offset: 0x80077378
	/* end block 1 */
	// End offset: 0x8007738C
	// End Line: 1205

	/* begin block 2 */
		// Start line: 2512
	/* end block 2 */
	// End Line: 2513

POLY_FT4 *
PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = LightObjPrint__FP12ObjectStructiiP7TextDati(OStr,ScrX,ScrY,ObjDat,OtPos);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1214, offset 0x8007739c
	/* begin block 1 */
		// Start line: 1215
		// Start offset: 0x8007739C
	/* end block 1 */
	// End offset: 0x800773B8
	// End Line: 1216

	/* begin block 2 */
		// Start line: 2534
	/* end block 2 */
	// End Line: 2535

POLY_FT4 *
PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1225, offset 0x800773c8
	/* begin block 1 */
		// Start line: 1226
		// Start offset: 0x800773C8
	/* end block 1 */
	// End offset: 0x800773E4
	// End Line: 1227

	/* begin block 2 */
		// Start line: 2556
	/* end block 2 */
	// End Line: 2557

POLY_FT4 *
PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1236, offset 0x800773f4
	/* begin block 1 */
		// Start line: 1237
		// Start offset: 0x800773F4
	/* end block 1 */
	// End offset: 0x80077410
	// End Line: 1238

	/* begin block 2 */
		// Start line: 2578
	/* end block 2 */
	// End Line: 2579

POLY_FT4 *
PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1247, offset 0x80077420
	/* begin block 1 */
		// Start line: 1248
		// Start offset: 0x80077420
	/* end block 1 */
	// End offset: 0x8007743C
	// End Line: 1249

	/* begin block 2 */
		// Start line: 2600
	/* end block 2 */
	// End Line: 2601

POLY_FT4 *
PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1258, offset 0x8007744c
	/* begin block 1 */
		// Start line: 1259
		// Start offset: 0x8007744C
	/* end block 1 */
	// End offset: 0x80077468
	// End Line: 1260

	/* begin block 2 */
		// Start line: 2622
	/* end block 2 */
	// End Line: 2623

POLY_FT4 *
PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1269, offset 0x80077478
	/* begin block 1 */
		// Start line: 1270
		// Start offset: 0x80077478
	/* end block 1 */
	// End offset: 0x80077494
	// End Line: 1271

	/* begin block 2 */
		// Start line: 2644
	/* end block 2 */
	// End Line: 2645

POLY_FT4 *
PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1280, offset 0x800774a4
	/* begin block 1 */
		// Start line: 1281
		// Start offset: 0x800774A4
	/* end block 1 */
	// End offset: 0x800774C0
	// End Line: 1282

	/* begin block 2 */
		// Start line: 2666
	/* end block 2 */
	// End Line: 2667

POLY_FT4 *
PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1291, offset 0x800774d0
	/* begin block 1 */
		// Start line: 1292
		// Start offset: 0x800774D0
	/* end block 1 */
	// End offset: 0x800774EC
	// End Line: 1293

	/* begin block 2 */
		// Start line: 2688
	/* end block 2 */
	// End Line: 2689

POLY_FT4 *
PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1302, offset 0x800774fc
	/* begin block 1 */
		// Start line: 1303
		// Start offset: 0x800774FC
	/* end block 1 */
	// End offset: 0x80077518
	// End Line: 1304

	/* begin block 2 */
		// Start line: 2710
	/* end block 2 */
	// End Line: 2711

POLY_FT4 *
PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1313, offset 0x80077528
	/* begin block 1 */
		// Start line: 1314
		// Start offset: 0x80077528
	/* end block 1 */
	// End offset: 0x80077544
	// End Line: 1315

	/* begin block 2 */
		// Start line: 2732
	/* end block 2 */
	// End Line: 2733

POLY_FT4 *
PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1324, offset 0x80077554
	/* begin block 1 */
		// Start line: 1325
		// Start offset: 0x80077554
	/* end block 1 */
	// End offset: 0x80077570
	// End Line: 1326

	/* begin block 2 */
		// Start line: 2754
	/* end block 2 */
	// End Line: 2755

POLY_FT4 *
PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1335, offset 0x80077580
	/* begin block 1 */
		// Start line: 1336
		// Start offset: 0x80077580
	/* end block 1 */
	// End offset: 0x8007759C
	// End Line: 1337

	/* begin block 2 */
		// Start line: 2776
	/* end block 2 */
	// End Line: 2777

POLY_FT4 *
PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1346, offset 0x800775ac
	/* begin block 1 */
		// Start line: 1347
		// Start offset: 0x800775AC
	/* end block 1 */
	// End offset: 0x800775C8
	// End Line: 1348

	/* begin block 2 */
		// Start line: 2798
	/* end block 2 */
	// End Line: 2799

POLY_FT4 *
PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1357, offset 0x800775d8
	/* begin block 1 */
		// Start line: 1358
		// Start offset: 0x800775D8
	/* end block 1 */
	// End offset: 0x800775F4
	// End Line: 1359

	/* begin block 2 */
		// Start line: 2820
	/* end block 2 */
	// End Line: 2821

POLY_FT4 *
PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1368, offset 0x80077604
	/* begin block 1 */
		// Start line: 1369
		// Start offset: 0x80077604
	/* end block 1 */
	// End offset: 0x80077620
	// End Line: 1370

	/* begin block 2 */
		// Start line: 2842
	/* end block 2 */
	// End Line: 2843

POLY_FT4 *
PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1379, offset 0x80077630
	/* begin block 1 */
		// Start line: 1380
		// Start offset: 0x80077630
	/* end block 1 */
	// End offset: 0x8007764C
	// End Line: 1381

	/* begin block 2 */
		// Start line: 2864
	/* end block 2 */
	// End Line: 2865

POLY_FT4 *
PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_MCIRCLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$t0*/, int ScrX /*$s0*/, int ScrY /*$s1*/, struct TextDat *ObjDat /*$s2*/, int OtPos /*stack 16*/)
 // line 1390, offset 0x8007765c
	/* begin block 1 */
		// Start line: 1391
		// Start offset: 0x8007765C
		// Variables:
	// 		int AnimFrame; // $s3
	// 		struct POLY_FT4 *Ft4; // $s1
	// 		int LoadIndex; // $v0
	// 		int Creature; // $a1

		/* begin block 1.1 */
			// Start line: 1391
			// Start offset: 0x8007765C
			// Variables:
		// 		int PhysFrame; // $s4

			/* begin block 1.1.1 */
				// Start line: 1409
				// Start offset: 0x80077734

				/* begin block 1.1.1.1 */
					// Start line: 1410
					// Start offset: 0x80077754
					// Variables:
				// 		struct POLY_FT4 *ShadFt4; // $s0
				/* end block 1.1.1.1 */
				// End offset: 0x800777B0
				// End Line: 1414
			/* end block 1.1.1 */
			// End offset: 0x800777B0
			// End Line: 1414
		/* end block 1.1 */
		// End offset: 0x800777B0
		// End Line: 1414
	/* end block 1 */
	// End offset: 0x800777C8
	// End Line: 1423

	/* begin block 2 */
		// Start line: 2886
	/* end block 2 */
	// End Line: 2887

POLY_FT4 *
PrintOBJ_MCIRCLE1__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	char cVar1;
	int Frm;
	POLY_FT4 *Prim;
	FRAME_HDR *pFVar2;
	POLY_FT4 *Ft4;
	ulong *puVar3;
	
	cVar1 = OStr->_oAnimFrame;
	Frm = GetFrNum__7TextDatiiii
									(ObjDat,(int)ObjMasterLoadList[(int)(&AllObjects)[(int)OStr->_otype].ofindex].
															 Creature,0,0,0);
	Prim = PrintFt4__7TextDatiiiiii(ObjDat,Frm,ScrX,ScrY,0,OtPos,0);
	Prim->code = Prim->code & 0xfe;
	if ((cVar1 == '\x02') || (cVar1 == '\x04')) {
		Prim->r0 = -0x80;
		Prim->g0 = '\0';
		Prim->b0 = '\0';
	}
	pFVar2 = GetFr__7TextDati(ObjDat,Frm);
	if ((pFVar2->Y & 0x8000U) != 0) {
		Ft4 = PRIM_GetCopy__FP8POLY_FT4(Prim);
		ShadScaleSkew__7CBlocksP8POLY_FT4(Ft4);
		puVar3 = ThisOt + OtPos;
		Ft4->tag = Ft4->tag & 0xff000000 | *puVar3 & 0xffffff;
		*puVar3 = *puVar3 & 0xff000000 | (uint)Ft4 & 0xffffff;
	}
	if ((cVar1 == '\x02') || (cVar1 == '\x04')) {
		Prim = (POLY_FT4 *)0x0;
	}
	return Prim;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_STORYBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$t0*/, int ScrX /*$s3*/, int ScrY /*$s4*/, struct TextDat *ObjDat /*$s2*/, int OtPos /*stack 16*/)
 // line 1446, offset 0x800777f0
	/* begin block 1 */
		// Start line: 1447
		// Start offset: 0x800777F0
		// Variables:
	// 		int AnimFrame; // $s0
	// 		struct POLY_FT4 *Ft4; // $s1
	// 		int LoadIndex; // $v0
	// 		int Creature; // $s1
	// 		int PhysFrame; // $s0

		/* begin block 1.1 */
			// Start line: 1459
			// Start offset: 0x80077884

			/* begin block 1.1.1 */
				// Start line: 1464
				// Start offset: 0x800778F0
				// Variables:
			// 		struct POLY_FT4 *ShadFt4; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8007794C
			// End Line: 1468
		/* end block 1.1 */
		// End offset: 0x8007794C
		// End Line: 1468
	/* end block 1 */
	// End offset: 0x80077950
	// End Line: 1471

	/* begin block 2 */
		// Start line: 3024
	/* end block 2 */
	// End Line: 3025

POLY_FT4 *
PrintOBJ_STORYBOOK__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	int Frm;
	POLY_FT4 *Prim;
	FRAME_HDR *pFVar1;
	POLY_FT4 *Ft4;
	ulong *puVar2;
	int Frame;
	int Creature;
	
	Creature = (int)ObjMasterLoadList[(int)(&AllObjects)[(int)OStr->_otype].ofindex].Creature;
	Frame = (int)OStr->_oAnimFrame + -1;
	Frm = GetNumOfFrames__7TextDatii(ObjDat,Creature,0);
	if (Frm < Frame) {
		Frm = GetNumOfFrames__7TextDatii(ObjDat,Creature,0);
		Frame = Frame - Frm;
	}
	Frm = GetFrNum__7TextDatiiii(ObjDat,Creature,0,0,Frame);
	Prim = PrintFt4__7TextDatiiiiii(ObjDat,Frm,ScrX,ScrY,0,OtPos,0);
	Prim->code = Prim->code & 0xfe;
	pFVar1 = GetFr__7TextDati(ObjDat,Frm);
	if ((pFVar1->Y & 0x8000U) != 0) {
		Ft4 = PRIM_GetCopy__FP8POLY_FT4(Prim);
		ShadScaleSkew__7CBlocksP8POLY_FT4(Ft4);
		puVar2 = ThisOt + OtPos;
		Ft4->tag = Ft4->tag & 0xff000000 | *puVar2 & 0xffffff;
		*puVar2 = *puVar2 & 0xff000000 | (uint)Ft4 & 0xffffff;
	}
	return Prim;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1480, offset 0x80077978
	/* begin block 1 */
		// Start line: 1481
		// Start offset: 0x80077978
	/* end block 1 */
	// End offset: 0x8007798C
	// End Line: 1482

	/* begin block 2 */
		// Start line: 3119
	/* end block 2 */
	// End Line: 3120

POLY_FT4 *
PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = LightObjPrint__FP12ObjectStructiiP7TextDati(OStr,ScrX,ScrY,ObjDat,OtPos);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1491, offset 0x8007799c
	/* begin block 1 */
		// Start line: 1492
		// Start offset: 0x8007799C
	/* end block 1 */
	// End offset: 0x800779B8
	// End Line: 1493

	/* begin block 2 */
		// Start line: 3141
	/* end block 2 */
	// End Line: 3142

POLY_FT4 *
PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1502, offset 0x800779c8
	/* begin block 1 */
		// Start line: 1503
		// Start offset: 0x800779C8
	/* end block 1 */
	// End offset: 0x800779E4
	// End Line: 1504

	/* begin block 2 */
		// Start line: 3163
	/* end block 2 */
	// End Line: 3164

POLY_FT4 *
PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1513, offset 0x800779f4
	/* begin block 1 */
		// Start line: 1514
		// Start offset: 0x800779F4
	/* end block 1 */
	// End offset: 0x80077A10
	// End Line: 1515

	/* begin block 2 */
		// Start line: 3185
	/* end block 2 */
	// End Line: 3186

POLY_FT4 *
PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1524, offset 0x80077a20
	/* begin block 1 */
		// Start line: 1525
		// Start offset: 0x80077A20
	/* end block 1 */
	// End offset: 0x80077A3C
	// End Line: 1526

	/* begin block 2 */
		// Start line: 3207
	/* end block 2 */
	// End Line: 3208

POLY_FT4 *
PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1535, offset 0x80077a4c
	/* begin block 1 */
		// Start line: 1536
		// Start offset: 0x80077A4C
	/* end block 1 */
	// End offset: 0x80077A68
	// End Line: 1537

	/* begin block 2 */
		// Start line: 3229
	/* end block 2 */
	// End Line: 3230

POLY_FT4 *
PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1546, offset 0x80077a78
	/* begin block 1 */
		// Start line: 1547
		// Start offset: 0x80077A78
	/* end block 1 */
	// End offset: 0x80077A94
	// End Line: 1548

	/* begin block 2 */
		// Start line: 3251
	/* end block 2 */
	// End Line: 3252

POLY_FT4 *
PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1557, offset 0x80077aa4
	/* begin block 1 */
		// Start line: 1558
		// Start offset: 0x80077AA4
	/* end block 1 */
	// End offset: 0x80077AC0
	// End Line: 1559

	/* begin block 2 */
		// Start line: 3273
	/* end block 2 */
	// End Line: 3274

POLY_FT4 *
PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1568, offset 0x80077ad0
	/* begin block 1 */
		// Start line: 1569
		// Start offset: 0x80077AD0
	/* end block 1 */
	// End offset: 0x80077AEC
	// End Line: 1570

	/* begin block 2 */
		// Start line: 3295
	/* end block 2 */
	// End Line: 3296

POLY_FT4 *
PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1579, offset 0x80077afc
	/* begin block 1 */
		// Start line: 1580
		// Start offset: 0x80077AFC
	/* end block 1 */
	// End offset: 0x80077B18
	// End Line: 1581

	/* begin block 2 */
		// Start line: 3317
	/* end block 2 */
	// End Line: 3318

POLY_FT4 *
PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 1590, offset 0x80077b28
	/* begin block 1 */
		// Start line: 1591
		// Start offset: 0x80077B28
	/* end block 1 */
	// End offset: 0x80077B44
	// End Line: 1592

	/* begin block 2 */
		// Start line: 3339
	/* end block 2 */
	// End Line: 3340

POLY_FT4 *
PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}





