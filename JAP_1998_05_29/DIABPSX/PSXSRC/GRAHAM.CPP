#include "THISDUST.H"
#include "GRAHAM.H"


// decompiled code
// original method signature: 
// void /*$ra*/ color_cycle__FP4TASK(struct TASK *T /*$a0*/)
 // line 233, offset 0x8009dcb0
	/* begin block 1 */
		// Start line: 234
		// Start offset: 0x8009DCB0
		// Variables:
	// 		struct RECT ClutR; // stack offset -128
	// 		int cx; // $v0
	// 		int cy; // $v0
	// 		unsigned short ORIGPal[16]; // stack offset -120
	// 		unsigned short VRAMPal[16]; // stack offset -88
	// 		unsigned short CLUTPal[16]; // stack offset -56
	// 		int paloffset; // $s1
	// 		int y; // $t1
	// 		void * ch; // $s0

		/* begin block 1.1 */
			// Start line: 251
			// Start offset: 0x8009DD00

			/* begin block 1.1.1 */
				// Start line: 258
				// Start offset: 0x8009DD50
				// Variables:
			// 		unsigned short col1; // $t0
			// 		unsigned char r; // $a1
			// 		unsigned char g; // $a0
			// 		unsigned char b; // $a2
			/* end block 1.1.1 */
			// End offset: 0x8009DDA8
			// End Line: 280
		/* end block 1.1 */
		// End offset: 0x8009DDD4
		// End Line: 281

		/* begin block 1.2 */
			// Start line: 285
			// Start offset: 0x8009DDE0

			/* begin block 1.2.1 */
				// Start line: 287
				// Start offset: 0x8009DDF4

				/* begin block 1.2.1.1 */
					// Start line: 288
					// Start offset: 0x8009DE2C

					/* begin block 1.2.1.1.1 */
						// Start line: 289
						// Start offset: 0x8009DE2C

						/* begin block 1.2.1.1.1.1 */
							// Start line: 290
							// Start offset: 0x8009DE70

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 291
								// Start offset: 0x8009DE70
								// Variables:
							// 		int i; // $t2

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 292
									// Start offset: 0x8009DE78
									// Variables:
								// 		unsigned short col1; // $t3
								// 		unsigned short col2; // $v1
								// 		unsigned char sb; // $t6
								// 		unsigned char sg; // $t5
								// 		unsigned char dr; // $t0
								// 		unsigned char dg; // $a3
								// 		unsigned char db; // $a1
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x8009DF88
								// End Line: 312
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x8009DFB4
							// End Line: 313
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8009DFB4
						// End Line: 313
					/* end block 1.2.1.1.1 */
					// End offset: 0x8009DFB4
					// End Line: 313

					/* begin block 1.2.1.1.2 */
						// Start line: 316
						// Start offset: 0x8009DFB4
						// Variables:
					// 		int i; // $a1
					/* end block 1.2.1.1.2 */
					// End offset: 0x8009E008
					// End Line: 319
				/* end block 1.2.1.1 */
				// End offset: 0x8009E040
				// End Line: 323
			/* end block 1.2.1 */
			// End offset: 0x8009E040
			// End Line: 323
		/* end block 1.2 */
		// End offset: 0x8009E040
		// End Line: 325
	/* end block 1 */
	// End offset: 0x8009E050
	// End Line: 325

	/* begin block 2 */
		// Start line: 466
	/* end block 2 */
	// End Line: 467

void color_cycle__FP4TASK(TASK *T)

{
	ushort uVar1;
	bool bVar2;
	uchar uVar3;
	uchar uVar4;
	ushort uVar5;
	void *pvVar6;
	undefined *puVar7;
	uint uVar8;
	int iVar9;
	ushort uVar10;
	uint uVar11;
	ushort *puVar12;
	ushort uVar13;
	undefined2 *puVar14;
	ushort uVar15;
	int iVar16;
	ushort uVar17;
	ushort uVar18;
	int iVar19;
	undefined2 local_80;
	ushort local_7e;
	undefined2 local_7c;
	undefined2 local_7a;
	ushort local_78 [12];
	undefined auStack96 [8];
	ushort local_58 [16];
	undefined2 local_38;
	ushort local_36 [15];
	
	iVar19 = 0;
	penta_clut = 0;
	water_clut = 0;
	do {
		pvVar6 = GLUE_Finished__Fv();
		if (pvVar6 != (void *)0x0) {
			return;
		}
		TSK_Sleep(1);
	} while (water_clut == 0);
	local_80 = (undefined2)(((uint)water_clut & 0x3f) << 4);
	local_7e = water_clut >> 6;
	local_7c = 0x10;
	local_7a = 1;
	DrawSync(0);
	StoreImage(&local_80,local_78);
	uVar4 = setlvlnum;
	uVar3 = setlevel;
	iVar16 = 0;
	puVar14 = &local_80;
	while (bVar2 = true, (int)puVar14 < (int)auStack96) {
		uVar1 = puVar14[4];
		uVar10 = uVar1 & 0x1f;
		uVar8 = (uint)(uVar1 >> 5) & 0x1f;
		uVar11 = (uint)(uVar1 >> 10) & 0x1f;
		if ((uVar3 != '\0') && (uVar4 == '\x04')) {
			uVar8 = iVar16 + 8;
			if (7 < iVar16) {
				uVar8 = 0x18 - iVar16;
			}
			uVar10 = (ushort)uVar8;
			uVar11 = 0;
			iVar16 = iVar16 + 1;
		}
		puVar14[0x14] =
				 uVar10 & 0xff | (ushort)((uVar8 & 0xff) << 5) | (ushort)(uVar11 << 10) | uVar1 & 0x8000;
		puVar14 = puVar14 + 1;
	}
	do {
		puVar7 = (undefined *)GLUE_Finished__Fv();
		if (puVar7 == &DAT_00000001) {
			return;
		}
		if (((water_clut != 0) && (DoDrawBg != (void *)0x0)) && (PauseMode == '\0')) {
			iVar16 = 0;
			if (((WaterDone == (void *)0x0) || (!bVar2)) || (setlevel == '\0')) {
LAB_8009dfbc:
				iVar16 = 0;
				puVar12 = local_36;
			}
			else {
				puVar12 = local_36;
				if (setlvlnum == '\x04') {
					bVar2 = false;
					iVar16 = 1;
					while (iVar16 < 0x10) {
						uVar1 = local_78[iVar16];
						uVar10 = local_58[iVar16];
						uVar18 = uVar1 & 0x1f;
						uVar17 = uVar1 >> 5 & 0x1f;
						uVar15 = uVar10 & 0x1f;
						uVar13 = uVar10 >> 5 & 0x1f;
						uVar10 = uVar10 >> 10 & 0x1f;
						uVar5 = uVar1 >> 10 & 0x1f;
						if (uVar15 < uVar5) {
							uVar15 = uVar15 + 1;
							bVar2 = true;
						}
						if (uVar5 < uVar15) {
							uVar15 = uVar15 - 1;
							bVar2 = true;
						}
						if (uVar13 < uVar17) {
							uVar13 = uVar13 + 1;
							bVar2 = true;
						}
						if (uVar17 < uVar13) {
							uVar13 = uVar13 - 1;
							bVar2 = true;
						}
						if (uVar10 < uVar18) {
							uVar10 = uVar10 + 1;
							bVar2 = true;
						}
						uVar5 = uVar10;
						if (uVar18 < uVar10) {
							uVar10 = uVar10 - 1;
							bVar2 = true;
							uVar5 = uVar10 & 0xff;
						}
						if (uVar5 < uVar18) {
							uVar10 = uVar10 + 1;
							bVar2 = true;
						}
						if (uVar18 < (uVar10 & 0xff)) {
							uVar10 = uVar10 - 1;
							bVar2 = true;
						}
						local_58[iVar16] =
								 (uVar15 & 0xff) + (uVar13 & 0xff) * 0x20 + uVar10 * 0x400 + (uVar1 & 0x8000);
						iVar16 = iVar16 + 1;
					}
					goto LAB_8009dfbc;
				}
			}
			do {
				iVar9 = iVar19 + iVar16;
				iVar16 = iVar16 + 1;
				*puVar12 = local_58[iVar9 % 0xf + 1];
				puVar12 = puVar12 + 1;
			} while (iVar16 < 0xf);
			local_38 = 0;
			LoadImage(&local_80,&local_38);
			iVar19 = (iVar19 + 1) % 0xf;
		}
		TSK_Sleep(4);
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ penta_cycle_task__FP4TASK(struct TASK *T /*$a0*/)
 // line 331, offset 0x8009e070
	/* begin block 1 */
		// Start line: 332
		// Start offset: 0x8009E070
		// Variables:
	// 		struct RECT ClutR; // stack offset -56
	// 		int cx; // $v0
	// 		int cy; // $v1
	// 		int RVal; // $s0

		/* begin block 1.1 */
			// Start line: 365
			// Start offset: 0x8009E134

			/* begin block 1.1.1 */
				// Start line: 367
				// Start offset: 0x8009E148

				/* begin block 1.1.1.1 */
					// Start line: 368
					// Start offset: 0x8009E180
					// Variables:
				// 		unsigned short Pal[16]; // stack offset -48
				// 		int Col; // $v1

					/* begin block 1.1.1.1.1 */
						// Start line: 378
						// Start offset: 0x8009E18C
						// Variables:
					// 		int f; // $a0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009E1B0
					// End Line: 379
				/* end block 1.1.1.1 */
				// End offset: 0x8009E1C4
				// End Line: 384
			/* end block 1.1.1 */
			// End offset: 0x8009E1C4
			// End Line: 384
		/* end block 1.1 */
		// End offset: 0x8009E1C4
		// End Line: 387
	/* end block 1 */
	// End offset: 0x8009E1D4
	// End Line: 387

	/* begin block 2 */
		// Start line: 674
	/* end block 2 */
	// End Line: 675

void penta_cycle_task__FP4TASK(TASK *T)

{
	void *pvVar1;
	undefined *puVar2;
	ushort uVar3;
	ushort *puVar4;
	int iVar5;
	uint uVar6;
	undefined2 local_38;
	ushort local_36;
	undefined2 local_34;
	undefined2 local_32;
	undefined2 local_30 [16];
	
	penta_clut = 0;
	penta_cycle = (void *)0x0;
	do {
		pvVar1 = GLUE_Finished__Fv();
		if (pvVar1 != (void *)0x0) {
			return;
		}
		TSK_Sleep(1);
	} while (penta_clut == 0);
	while ((gbMaxPlayers == '\x01' && (quests[5]._qactive != '\x02'))) {
		pvVar1 = GLUE_Finished__Fv();
		if (pvVar1 != (void *)0x0) {
			return;
		}
		TSK_Sleep(1);
	}
	uVar6 = 0;
	local_34 = 0x10;
	local_32 = 1;
	local_36 = penta_clut >> 6;
	local_38 = (undefined2)(((uint)penta_clut & 0x3f) << 4);
	while( true ) {
		uVar3 = (ushort)uVar6;
		puVar2 = (undefined *)GLUE_Finished__Fv();
		if (puVar2 == &DAT_00000001) break;
		if (((penta_clut != 0) && (DoDrawBg != (void *)0x0)) && (PauseMode == '\0')) {
			if ((uVar6 & 0x20) != 0) {
				uVar3 = uVar3 ^ 0x1f;
			}
			iVar5 = 1;
			puVar4 = &local_36;
			do {
				puVar4[4] = uVar3 & 0x1f | 0x8000;
				iVar5 = iVar5 + 1;
				puVar4 = puVar4 + 1;
			} while (iVar5 < 0x10);
			local_30[0] = 0;
			LoadImage(&local_38,local_30);
			uVar6 = uVar6 + 1;
		}
		TSK_Sleep(1);
	}
	return;
}





