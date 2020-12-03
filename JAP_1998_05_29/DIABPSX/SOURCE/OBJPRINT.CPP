#include "THISDUST.H"
#include "OBJPRINT.H"


// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(struct ObjectStruct *OStr /*$t0*/, int ScrX /*$s3*/, int ScrY /*$s4*/, struct TextDat *ObjDat /*$s2*/, int OtPos /*stack 16*/, int XOffSet /*stack 20*/, int YOffSet /*stack 24*/)
 // line 277, offset 0x8007d9e8
	/* begin block 1 */
		// Start line: 278
		// Start offset: 0x8007D9E8
		// Variables:
	// 		int AnimFrame; // $s0
	// 		struct POLY_FT4 *Ft4; // $s1
	// 		int LoadIndex; // $v0
	// 		int Creature; // $s1

		/* begin block 1.1 */
			// Start line: 278
			// Start offset: 0x8007D9E8

			/* begin block 1.1.1 */
				// Start line: 289
				// Start offset: 0x8007DA7C
				// Variables:
			// 		int PhysFrame; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 290
					// Start offset: 0x8007DA7C

					/* begin block 1.1.1.1.1 */
						// Start line: 295
						// Start offset: 0x8007DAE4
						// Variables:
					// 		struct POLY_FT4 *ShadFt4; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007DAE4
					// End Line: 297
				/* end block 1.1.1.1 */
				// End offset: 0x8007DAE4
				// End Line: 297
			/* end block 1.1.1 */
			// End offset: 0x8007DAE4
			// End Line: 297
		/* end block 1.1 */
		// End offset: 0x8007DB48
		// End Line: 303
	/* end block 1 */
	// End offset: 0x8007DB4C
	// End Line: 305

	/* begin block 2 */
		// Start line: 554
	/* end block 2 */
	// End Line: 555

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
		if ((pFVar2->X & 0x1000000U) != 0) {
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
 // line 312, offset 0x8007db7c
	/* begin block 1 */
		// Start line: 313
		// Start offset: 0x8007DB7C
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $s3

		/* begin block 1.1 */
			// Start line: 313
			// Start offset: 0x8007DB7C

			/* begin block 1.1.1 */
				// Start line: 319
				// Start offset: 0x8007DBC4

				/* begin block 1.1.1.1 */
					// Start line: 320
					// Start offset: 0x8007DBC4

					/* begin block 1.1.1.1.1 */
						// Start line: 321
						// Start offset: 0x8007DBD4
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007DC18
					// End Line: 328
				/* end block 1.1.1.1 */
				// End offset: 0x8007DC18
				// End Line: 328
			/* end block 1.1.1 */
			// End offset: 0x8007DC18
			// End Line: 328
		/* end block 1.1 */
		// End offset: 0x8007DC18
		// End Line: 328
	/* end block 1 */
	// End offset: 0x8007DC1C
	// End Line: 332

	/* begin block 2 */
		// Start line: 654
	/* end block 2 */
	// End Line: 655

POLY_FT4 *
LightObjPrint__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	if ((pPVar1 != (POLY_FT4 *)0x0) && (OStr->_olid != -1)) {
		DrawSpinner__FiiUcUcUciiibiT8T8Uc(ScrX + 1,ScrY + -0x1a,'\0','\0',0,0x10,0x40,0,0,OtPos,1,0,8);
	}
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$t0*/, int ScrX /*$s2*/, int ScrY /*$s3*/, struct TextDat *ObjDat /*$s1*/, int OtPos /*stack 16*/)
 // line 335, offset 0x8007dc40
	/* begin block 1 */
		// Start line: 336
		// Start offset: 0x8007DC40
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $v0
	// 		int AnimFrame; // $v0
	// 		int LoadIndex; // $v1
	// 		int Creature; // $a1
	/* end block 1 */
	// End offset: 0x8007DCE8
	// End Line: 351

	/* begin block 2 */
		// Start line: 700
	/* end block 2 */
	// End Line: 701

POLY_FT4 *
PrintOBJ_SARC__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	int Frm;
	POLY_FT4 *pPVar1;
	
	Frm = GetFrNum__7TextDatiiii
									(ObjDat,(int)ObjMasterLoadList[(int)(&AllObjects)[(int)OStr->_otype].ofindex].
															 Creature,0,0,(int)OStr->_oAnimFrame + -1);
	pPVar1 = PrintFt4__7TextDatiiiiii(ObjDat,Frm,ScrX,ScrY,0,OtPos + -3,0);
	pPVar1->code = pPVar1->code & 0xfe;
	return pPVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ResetFlames__Fv()
 // line 384, offset 0x8007dd08
	/* begin block 1 */
		// Start line: 385
		// Start offset: 0x8007DD08

		/* begin block 1.1 */
			// Start line: 385
			// Start offset: 0x8007DD08

			/* begin block 1.1.1 */
				// Start line: 387
				// Start offset: 0x8007DD24

				/* begin block 1.1.1.1 */
					// Start line: 388
					// Start offset: 0x8007DD24
					// Variables:
				// 		int i; // $s1
				/* end block 1.1.1.1 */
				// End offset: 0x8007DDA8
				// End Line: 393
			/* end block 1.1.1 */
			// End offset: 0x8007DDAC
			// End Line: 394
		/* end block 1.1 */
		// End offset: 0x8007DDAC
		// End Line: 394
	/* end block 1 */
	// End offset: 0x8007DDB4
	// End Line: 396

	/* begin block 2 */
		// Start line: 823
	/* end block 2 */
	// End Line: 824

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ResetFlames__Fv(void)

{
	ulong uVar1;
	int iVar2;
	int iVar3;
	
	if (FireInit != (void *)0x0) {
		iVar3 = 0;
		iVar2 = 0;
		do {
			iVar3 = iVar3 + 1;
			uVar1 = GU_GetRnd();
			*(short *)((int)&Cinders[0].x + iVar2) =
					 ((short)uVar1 -
					 (((ushort)((ulonglong)uVar1 * 0xcccccccd >> 0x20) & 0xfffc) + (short)(uVar1 / 5))) + 2;
			uVar1 = GU_GetRnd();
			*(undefined2 *)((int)&Cinders[0].y + iVar2) = (short)((uVar1 & 0xf) << 8);
			uVar1 = GU_GetRnd();
			*(short *)((int)&Cinders[0].yinc + iVar2) = ((ushort)uVar1 & 0x7f) + 0x20;
			iVar2 = iVar2 + 6;
		} while (iVar3 < 0x10);
		FireInit = (void *)0x0;
	}
	FirstFire = &DAT_00000001;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintOBJ_FIRE__Fiii(int ScrX /*stack -72*/, int ScrY /*stack -64*/, int OtPos /*stack -56*/)
 // line 400, offset 0x8007ddd0
	/* begin block 1 */
		// Start line: 401
		// Start offset: 0x8007DDD0
		// Variables:
	// 		struct POLY_FT4 *Ft4a; // $v0
	// 		struct TextDat *ThisDat; // stack offset -48
	// 		int diff; // $fp
	// 		struct CINDER *C; // $s6

		/* begin block 1.1 */
			// Start line: 401
			// Start offset: 0x8007DDD0
			// Variables:
		// 		int i; // $s7

			/* begin block 1.1.1 */
				// Start line: 414
				// Start offset: 0x8007DE38
				// Variables:
			// 		unsigned short fx; // $s5
			// 		unsigned short fy; // $s3
			// 		unsigned short fyi; // $s2
			/* end block 1.1.1 */
			// End offset: 0x8007DF34
			// End Line: 439
		/* end block 1.1 */
		// End offset: 0x8007DF50
		// End Line: 444
	/* end block 1 */
	// End offset: 0x8007DF54
	// End Line: 448

	/* begin block 2 */
		// Start line: 855
	/* end block 2 */
	// End Line: 856

void PrintOBJ_FIRE__Fiii(int ScrX,int ScrY,int OtPos)

{
	bool bVar1;
	char cVar2;
	char cVar3;
	TextDat *this;
	ulong uVar4;
	POLY_FT4 *pPVar5;
	ushort uVar6;
	ushort uVar7;
	ushort *puVar8;
	ushort uVar9;
	CINDER *pCVar10;
	int iVar11;
	int iVar12;
	
	this = GM_UseTexData__Fi(0);
	uVar4 = VID_GetTick__Fv();
	pCVar10 = Cinders;
	iVar11 = 0;
	puVar8 = &Cinders[0].yinc;
	iVar12 = uVar4 - lasttick;
	lasttick = VID_GetTick__Fv();
	while (iVar11 < 0x10) {
		uVar9 = pCVar10->x;
		uVar7 = puVar8[-1];
		uVar6 = *puVar8;
		pPVar5 = PrintFt4__7TextDatiiiiii
											 (this,0xd9,(uint)uVar9 + ScrX,ScrY - (uint)(uVar7 >> 8),0,OtPos + 1,0);
		cVar3 = (char)(uVar7 >> 8);
		cVar2 = '\x10' - cVar3;
		pPVar5->r0 = cVar2 * '\b';
		pPVar5->g0 = cVar2 * '\x05';
		pPVar5->b0 = '\x10' - cVar3;
		pPVar5->code = pPVar5->code & 0xfe | 2;
		bVar1 = PauseMode == '\0';
		pPVar5->tpage = pPVar5->tpage | 0x20;
		if ((bVar1) && (FirstFire != (void *)0x0)) {
			_uVar7 = (uint)uVar7 + (uint)uVar6 * iVar12;
			uVar7 = (ushort)_uVar7;
			uVar6 = uVar6 + 0x10;
			if (0x10 < (_uVar7 & 0xffff) >> 8) {
				uVar7 = 0;
				uVar4 = GU_GetRnd();
				uVar9 = ((short)uVar4 -
								(((ushort)((ulonglong)uVar4 * 0xcccccccd >> 0x20) & 0xfffc) + (short)(uVar4 / 5))) +
								2;
				uVar4 = GU_GetRnd();
				uVar6 = ((ushort)uVar4 & 0x7f) + 0x20;
			}
		}
		pCVar10->x = uVar9;
		puVar8[-1] = uVar7;
		*puVar8 = uVar6;
		puVar8 = puVar8 + 3;
		pCVar10 = pCVar10 + 1;
		iVar11 = iVar11 + 1;
	}
	FirstFire = (void *)0x0;
	return;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ DoorObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$s1*/, int ScrX /*$s3*/, int ScrY /*$s4*/, struct TextDat *ObjDat /*$s2*/, int OtPos /*stack 16*/)
 // line 496, offset 0x8007df88
	/* begin block 1 */
		// Start line: 497
		// Start offset: 0x8007DF88
		// Variables:
	// 		int AnimFrame; // $t1
	// 		struct POLY_FT4 *Ft4; // $s0
	// 		struct TextDat *ThisDat; // $s5
	// 		struct DoorOff *DrOff; // $s0
	// 		int LoadIndex; // $v0
	// 		int Creature; // $a1
	// 		int OpenClosed; // $a2
	// 		int Dir; // $t0
	// 		int Type; // $s0
	/* end block 1 */
	// End offset: 0x8007E198
	// End Line: 595

	/* begin block 2 */
		// Start line: 1072
	/* end block 2 */
	// End Line: 1073

POLY_FT4 *
DoorObjPrint__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	char cVar1;
	short sVar2;
	TextDat *Fin;
	POLY_FT4 *pPVar3;
	short sVar4;
	int Frm;
	uint uVar5;
	int iVar6;
	DoorOff *pDVar7;
	
	Fin = GM_UseTexData__Fi(0);
	uVar5 = 0;
	Frm = (int)OStr->_otype;
	iVar6 = 0;
	if (Frm == 0x2a) {
LAB_8007e07c:
		iVar6 = 1;
	}
	else {
		if (Frm < 0x2b) {
			if ((Frm != 1) && (Frm == 2)) {
				uVar5 = 1;
			}
		}
		else {
			if (Frm == 0x4a) {
LAB_8007e088:
				iVar6 = 2;
			}
			else {
				if (Frm < 0x4b) {
					if (Frm == 0x2b) {
						uVar5 = 1;
						goto LAB_8007e07c;
					}
				}
				else {
					if (Frm == 0x4b) {
						uVar5 = 1;
						goto LAB_8007e088;
					}
				}
			}
		}
	}
	if (OStr->_oVar4 == 0) {
		uVar5 = uVar5 | 2;
	}
	pDVar7 = DoorOffsets + uVar5 + iVar6 * 4;
	Frm = GetFrNum__7TextDatiiii
									(ObjDat,(int)ObjMasterLoadList[(int)(&AllObjects)[Frm].ofindex].Creature,0,0,
									 (int)OStr->_oAnimFrame + -1);
	pPVar3 = PrintFt4__7TextDatiiiiii
										 (ObjDat,Frm,ScrX + (int)pDVar7->x,ScrY + (int)pDVar7->y,0,
											OtPos + (int)pDVar7->ot,0);
	if (OStr->_oVar4 == 0) goto LAB_8007e18c;
	cVar1 = OStr->_otype;
	if (cVar1 == '\x02') {
LAB_8007e158:
		sVar2 = pPVar3->y0 + 0x14;
		sVar4 = pPVar3->y2 + 0x14;
	}
	else {
		if ('\x02' < cVar1) {
			if (cVar1 != 'J') {
				if (cVar1 == 'K') {
					pPVar3->y1 = pPVar3->y1 + 0x14;
					pPVar3->y3 = pPVar3->y3 + 0x14;
				}
				goto LAB_8007e18c;
			}
			goto LAB_8007e158;
		}
		if (cVar1 != '\x01') goto LAB_8007e18c;
		sVar2 = pPVar3->y0 + -0x14;
		sVar4 = pPVar3->y2 + -0x14;
	}
	pPVar3->y0 = sVar2;
	pPVar3->y2 = sVar4;
LAB_8007e18c:
	GM_FinishedUsing__FP7TextDat(Fin);
	return pPVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawLightSpark__Fiii(int xo /*$s1*/, int yo /*$s2*/, int ot /*$s3*/)
 // line 605, offset 0x8007e1c4
	/* begin block 1 */
		// Start line: 606
		// Start offset: 0x8007E1C4
	/* end block 1 */
	// End offset: 0x8007E284
	// End Line: 610

	/* begin block 2 */
		// Start line: 1329
	/* end block 2 */
	// End Line: 1330

void DrawLightSpark__Fiii(int xo,int yo,int ot)

{
	ulong uVar1;
	int local_34;
	int local_3c;
	
	if (PauseMode == '\0') {
		uVar1 = TICK_Get();
		local_3c = (uVar1 & 1) * -0x10 + 0x30;
		uVar1 = TICK_Get();
		local_34 = (uVar1 & 1) << 3;
	}
	else {
		local_3c = 0x30;
		local_34 = 0;
	}
	DrawSpinner__FiiUcUcUciiibiT8T8Uc(xo,yo,-1,-0x80,0,local_3c,0x28,local_34,0,ot,0,0,8);
	return;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$s0*/, int ScrY /*$s2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 624, offset 0x8007e2a4
	/* begin block 1 */
		// Start line: 625
		// Start offset: 0x8007E2A4
	/* end block 1 */
	// End offset: 0x8007E2E8
	// End Line: 635

	/* begin block 2 */
		// Start line: 1367
	/* end block 2 */
	// End Line: 1368

POLY_FT4 *
PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	PrintOBJ_FIRE__Fiii(ScrX + -2,ScrY + -0x29,OtPos + 10);
	DrawLightSpark__Fiii(ScrX + -1,ScrY + -0x28,OtPos + 0xc);
	return (POLY_FT4 *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintTorchStick__Fiiii(int x /*$s2*/, int y /*$s3*/, int f /*$s1*/, int OtPos /*$s4*/)
 // line 646, offset 0x8007e304
	/* begin block 1 */
		// Start line: 647
		// Start offset: 0x8007E304
		// Variables:
	// 		struct TextDat *ThisDat; // $s0
	/* end block 1 */
	// End offset: 0x8007E374
	// End Line: 651

	/* begin block 2 */
		// Start line: 1427
	/* end block 2 */
	// End Line: 1428

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
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$s1*/, int ScrY /*$s2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 661, offset 0x8007e398
	/* begin block 1 */
		// Start line: 662
		// Start offset: 0x8007E398
	/* end block 1 */
	// End offset: 0x8007E400
	// End Line: 671

	/* begin block 2 */
		// Start line: 1457
	/* end block 2 */
	// End Line: 1458

POLY_FT4 *
PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	int in_zero;
	
	*(byte *)(in_zero + 7) = *(byte *)(in_zero + 7) & 0xfe | 2;
	PrintTorchStick__Fiiii(ScrX,ScrY,3,OtPos);
	PrintOBJ_FIRE__Fiii(ScrX + -6,ScrY + -0x22,OtPos);
	DrawLightSpark__Fiii(ScrX + -5,ScrY + -0x25,OtPos);
	return (POLY_FT4 *)0x0;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$s1*/, int ScrY /*$s2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 680, offset 0x8007e41c
	/* begin block 1 */
		// Start line: 681
		// Start offset: 0x8007E41C
	/* end block 1 */
	// End offset: 0x8007E484
	// End Line: 690

	/* begin block 2 */
		// Start line: 1505
	/* end block 2 */
	// End Line: 1506

POLY_FT4 *
PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	int in_zero;
	
	*(byte *)(in_zero + 7) = *(byte *)(in_zero + 7) & 0xfe | 2;
	PrintTorchStick__Fiiii(ScrX,ScrY,2,OtPos);
	PrintOBJ_FIRE__Fiii(ScrX + -1,ScrY + -0x24,OtPos);
	DrawLightSpark__Fiii(ScrX,ScrY + -0x25,OtPos);
	return (POLY_FT4 *)0x0;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$s1*/, int ScrY /*$s2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 699, offset 0x8007e4a0
	/* begin block 1 */
		// Start line: 700
		// Start offset: 0x8007E4A0
	/* end block 1 */
	// End offset: 0x8007E510
	// End Line: 712

	/* begin block 2 */
		// Start line: 1553
	/* end block 2 */
	// End Line: 1554

POLY_FT4 *
PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	int in_zero;
	
	OtPos = OtPos + 7;
	*(byte *)(in_zero + 7) = *(byte *)(in_zero + 7) & 0xfe | 2;
	PrintTorchStick__Fiiii(ScrX,ScrY,0,OtPos);
	PrintOBJ_FIRE__Fiii(ScrX + 8,ScrY + -0x22,OtPos);
	DrawLightSpark__Fiii(ScrX + 8,ScrY + -0x1e,OtPos);
	return (POLY_FT4 *)0x0;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$s1*/, int ScrY /*$s2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 721, offset 0x8007e52c
	/* begin block 1 */
		// Start line: 722
		// Start offset: 0x8007E52C
	/* end block 1 */
	// End offset: 0x8007E59C
	// End Line: 734

	/* begin block 2 */
		// Start line: 1614
	/* end block 2 */
	// End Line: 1615

POLY_FT4 *
PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	int in_zero;
	
	OtPos = OtPos + 7;
	*(byte *)(in_zero + 7) = *(byte *)(in_zero + 7) & 0xfe | 2;
	PrintTorchStick__Fiiii(ScrX,ScrY,1,OtPos);
	PrintOBJ_FIRE__Fiii(ScrX + -5,ScrY + -0x22,OtPos);
	DrawLightSpark__Fiii(ScrX + -5,ScrY + -0x20,OtPos);
	return (POLY_FT4 *)0x0;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BARRELEX__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$s0*/, int ScrX /*$s1*/, int ScrY /*$s3*/, struct TextDat *ObjDat /*$s2*/, int OtPos /*stack 16*/)
 // line 744, offset 0x8007e5b8
	/* begin block 1 */
		// Start line: 745
		// Start offset: 0x8007E5B8
		// Variables:
	// 		int AnimFrame; // $s0
	// 		struct POLY_FT4 *Ft4; // $s1

		/* begin block 1.1 */
			// Start line: 751
			// Start offset: 0x8007E5F8

			/* begin block 1.1.1 */
				// Start line: 755
				// Start offset: 0x8007E61C
				// Variables:
			// 		int PhysFrame; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 756
					// Start offset: 0x8007E61C

					/* begin block 1.1.1.1.1 */
						// Start line: 761
						// Start offset: 0x8007E684
						// Variables:
					// 		struct POLY_FT4 *ShadFt4; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007E684
					// End Line: 763
				/* end block 1.1.1.1 */
				// End offset: 0x8007E684
				// End Line: 763
			/* end block 1.1.1 */
			// End offset: 0x8007E684
			// End Line: 763
		/* end block 1.1 */
		// End offset: 0x8007E6E8
		// End Line: 769
	/* end block 1 */
	// End offset: 0x8007E6EC
	// End Line: 771

	/* begin block 2 */
		// Start line: 1677
	/* end block 2 */
	// End Line: 1678

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
	Frm = GetNumOfFrames__7TextDatii(ObjDat,9,0);
	if (Frm < Frame) {
		Prim = (POLY_FT4 *)0x0;
	}
	else {
		Frm = GetFrNum__7TextDatiiii(ObjDat,9,0,0,Frame);
		Prim = PrintFt4__7TextDatiiiiii(ObjDat,Frm,ScrX,ScrY,0,OtPos,0);
		Prim->code = Prim->code & 0xfe;
		pFVar1 = GetFr__7TextDati(ObjDat,Frm);
		if ((pFVar1->X & 0x1000000U) != 0) {
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
 // line 780, offset 0x8007e710
	/* begin block 1 */
		// Start line: 781
		// Start offset: 0x8007E710
		// Variables:
	// 		int AnimFrame; // $v1
	/* end block 1 */
	// End offset: 0x8007E7C4
	// End Line: 788

	/* begin block 2 */
		// Start line: 1761
	/* end block 2 */
	// End Line: 1762

POLY_FT4 *
PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	int iVar2;
	
	iVar2 = (int)OStr->_oAnimFrame + -1;
	if (OStr->_oAnimFlag != '\0') {
		DrawSpinner__FiiUcUcUciiibiT8T8Uc
							(ScrX + -0xc,ScrY + -0x1c,'\0','P',0xf0,iVar2 * 8,0x40,iVar2 * 4,0,OtPos,1,0,8);
	}
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$s0*/, int ScrX /*$s1*/, int ScrY /*$s2*/, struct TextDat *ObjDat /*$s3*/, int OtPos /*stack 16*/)
 // line 797, offset 0x8007e7e8
	/* begin block 1 */
		// Start line: 798
		// Start offset: 0x8007E7E8
		// Variables:
	// 		int AnimFrame; // $v1
	/* end block 1 */
	// End offset: 0x8007E89C
	// End Line: 805

	/* begin block 2 */
		// Start line: 1799
	/* end block 2 */
	// End Line: 1800

POLY_FT4 *
PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	int iVar2;
	
	iVar2 = (int)OStr->_oAnimFrame + -1;
	if (OStr->_oAnimFlag != '\0') {
		DrawSpinner__FiiUcUcUciiibiT8T8Uc
							(ScrX + 8,ScrY + -0x1d,'\0','P',0xf0,iVar2 * 8,0x40,iVar2 * 4,0,OtPos,1,0,8);
	}
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 815, offset 0x8007e8c0
	/* begin block 1 */
		// Start line: 816
		// Start offset: 0x8007E8C0
	/* end block 1 */
	// End offset: 0x8007E8D4
	// End Line: 817

	/* begin block 2 */
		// Start line: 1839
	/* end block 2 */
	// End Line: 1840

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
// struct POLY_FT4 * /*$ra*/ PrintOBJ_MCIRCLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$s1*/, int ScrY /*$s5*/, struct TextDat *ObjDat /*$s0*/, int OtPos /*stack 16*/)
 // line 827, offset 0x8007e8e4
	/* begin block 1 */
		// Start line: 828
		// Start offset: 0x8007E8E4
		// Variables:
	// 		int AnimFrame; // $s3
	// 		struct POLY_FT4 *Ft4; // $s1
	// 		int ot; // $s2
	// 		int LoadIndex; // $v0
	// 		int Creature; // $a1
	// 		int PhysFrame; // $s4

		/* begin block 1.1 */
			// Start line: 846
			// Start offset: 0x8007E9C4

			/* begin block 1.1.1 */
				// Start line: 847
				// Start offset: 0x8007E9E4
				// Variables:
			// 		struct POLY_FT4 *ShadFt4; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8007EA40
			// End Line: 851
		/* end block 1.1 */
		// End offset: 0x8007EA40
		// End Line: 851
	/* end block 1 */
	// End offset: 0x8007EA58
	// End Line: 857

	/* begin block 2 */
		// Start line: 1863
	/* end block 2 */
	// End Line: 1864

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
	OtPos = OtPos + -0x20;
	if (OtPos < 0) {
		OtPos = 0;
	}
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
	if ((pFVar2->X & 0x1000000U) != 0) {
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
 // line 866, offset 0x8007ea80
	/* begin block 1 */
		// Start line: 867
		// Start offset: 0x8007EA80
		// Variables:
	// 		int AnimFrame; // $s0
	// 		struct POLY_FT4 *Ft4; // $s1
	// 		int LoadIndex; // $v0
	// 		int Creature; // $s1
	// 		int PhysFrame; // $s0

		/* begin block 1.1 */
			// Start line: 879
			// Start offset: 0x8007EB14

			/* begin block 1.1.1 */
				// Start line: 884
				// Start offset: 0x8007EB80
				// Variables:
			// 		struct POLY_FT4 *ShadFt4; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8007EBDC
			// End Line: 888
		/* end block 1.1 */
		// End offset: 0x8007EBDC
		// End Line: 888
	/* end block 1 */
	// End offset: 0x8007EBE0
	// End Line: 891

	/* begin block 2 */
		// Start line: 1947
	/* end block 2 */
	// End Line: 1948

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
	if ((pFVar1->X & 0x1000000U) != 0) {
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
 // line 900, offset 0x8007ec08
	/* begin block 1 */
		// Start line: 901
		// Start offset: 0x8007EC08
	/* end block 1 */
	// End offset: 0x8007EC1C
	// End Line: 902

	/* begin block 2 */
		// Start line: 2042
	/* end block 2 */
	// End Line: 2043

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
// struct POLY_FT4 * /*$ra*/ PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 912, offset 0x8007ec2c
	/* begin block 1 */
		// Start line: 913
		// Start offset: 0x8007EC2C
	/* end block 1 */
	// End offset: 0x8007EC40
	// End Line: 914

	/* begin block 2 */
		// Start line: 2066
	/* end block 2 */
	// End Line: 2067

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
 // line 923, offset 0x8007ec50
	/* begin block 1 */
		// Start line: 924
		// Start offset: 0x8007EC50
	/* end block 1 */
	// End offset: 0x8007EC64
	// End Line: 925

	/* begin block 2 */
		// Start line: 2088
	/* end block 2 */
	// End Line: 2089

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
// struct POLY_FT4 * /*$ra*/ PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 936, offset 0x8007ec74
	/* begin block 1 */
		// Start line: 937
		// Start offset: 0x8007EC74
		// Variables:
	// 		int ot; // $v0
	/* end block 1 */
	// End offset: 0x8007ECA0
	// End Line: 940

	/* begin block 2 */
		// Start line: 2114
	/* end block 2 */
	// End Line: 2115

POLY_FT4 *
PrintOBJ_STAND__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	OtPos = OtPos + -1;
	if (OtPos < 0) {
		OtPos = 0;
	}
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr /*$a0*/, int ScrX /*$s1*/, int ScrY /*$s2*/, struct TextDat *ObjDat /*$a3*/, int OtPos /*stack 16*/)
 // line 951, offset 0x8007ecb0
	/* begin block 1 */
		// Start line: 952
		// Start offset: 0x8007ECB0
		// Variables:
	// 		struct POLY_FT4 *FT4; // $s0
	/* end block 1 */
	// End offset: 0x8007ECF8
	// End Line: 955

	/* begin block 2 */
		// Start line: 2144
	/* end block 2 */
	// End Line: 2145

POLY_FT4 *
PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati
					(ObjectStruct *OStr,int ScrX,int ScrY,TextDat *ObjDat,int OtPos)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(OStr,ScrX,ScrY,ObjDat,OtPos,0,0);
	PrintOBJ_FIRE__Fiii(ScrX,ScrY,OtPos);
	return pPVar1;
}





