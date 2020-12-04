#include "THISDUST.H"
#include "GRAHAM.H"


// decompiled code
// original method signature: 
// void /*$ra*/ switchnight__FP4TASK(struct TASK *T /*$a0*/)
 // line 160, offset 0x80093474
	/* begin block 1 */
		// Start line: 161
		// Start offset: 0x8009347C
	/* end block 1 */
	// End offset: 0x800934B0
	// End Line: 164

	/* begin block 2 */
		// Start line: 320
	/* end block 2 */
	// End Line: 321

void switchnight__FP4TASK(TASK *T)

{
	do {
		if (leveltype != '\0') {
			daylight = daylight ^ 1;
		}
		TSK_Sleep((int)&DAT_000057e4);
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ city_lights__FP4TASK(struct TASK *T /*$a0*/)
 // line 194, offset 0x800934c0
	/* begin block 1 */
		// Start line: 195
		// Start offset: 0x800934C0
	/* end block 1 */
	// End offset: 0x80093630
	// End Line: 224

	/* begin block 2 */
		// Start line: 388
	/* end block 2 */
	// End Line: 389

void city_lights__FP4TASK(TASK *T)

{
	ulong uVar1;
	void *pvVar2;
	uint uVar3;
	_125fake psfx;
	
	restore_r = 0xc;
	restore_g = 0xe;
	restore_b = 0x10;
	if (leveltype == '\0') {
		do {
			uVar1 = GU_GetRnd();
			lastrnd = (uchar)uVar1;
			if (((((uVar1 & 0xfc) == 0) && (visible_level == '\0')) && (DoDrawBg != (void *)0x0)) &&
				 (call_clock < 0)) {
				if (daylight == '\0') {
					uVar3 = uVar1 & 3;
					if (uVar3 == 1) {
						psfx = TSFX_CRICKET2;
					}
					else {
						if (uVar3 < 2) {
							if (uVar3 == 0) {
								psfx = TSFX_CRICKET1;
							}
							else {
								psfx = TSFX_OWLECHO;
							}
						}
						else {
							psfx = TSFX_OWLECHO;
							if (uVar3 == 2) {
								if (inn_in_sight != '\0') {
									PlaySFX__Fi(TSFX_TAVERN);
								}
								psfx = TSFX_OWLECHO;
							}
						}
					}
LAB_800935e0:
					PlaySFX__Fi(psfx);
				}
				else {
					if (cow_in_sight != '\0') {
						psfx = TSFX_COW2;
						if ((uVar1 & 1) != 0) {
							psfx = TSFX_COW1;
						}
						goto LAB_800935e0;
					}
				}
				call_clock = 0x20;
			}
			cow_in_sight = '\0';
			inn_in_sight = '\0';
			call_clock = call_clock + -1;
			TSK_Sleep(4);
			pvVar2 = GLUE_Finished__Fv();
		} while ((pvVar2 == (void *)0x0) && (leveltype == '\0'));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ color_cycle__FP4TASK(struct TASK *T /*$a0*/)
 // line 233, offset 0x80093640
	/* begin block 1 */
		// Start line: 234
		// Start offset: 0x80093640
		// Variables:
	// 		struct RECT ClutR; // stack offset -144
	// 		unsigned short cx; // $v0
	// 		unsigned short cy; // $v1
	// 		unsigned long VRAMPal[16]; // stack offset -136
	// 		unsigned long CLUTPal[16]; // stack offset -72

		/* begin block 1.1 */
			// Start line: 242
			// Start offset: 0x80093650

			/* begin block 1.1.1 */
				// Start line: 243
				// Start offset: 0x80093660

				/* begin block 1.1.1.1 */
					// Start line: 244
					// Start offset: 0x8009369C

					/* begin block 1.1.1.1.1 */
						// Start line: 245
						// Start offset: 0x8009369C
						// Variables:
					// 		int i; // $a2
					/* end block 1.1.1.1.1 */
					// End offset: 0x80093714
					// End Line: 251

					/* begin block 1.1.1.1.2 */
						// Start line: 252
						// Start offset: 0x80093714
						// Variables:
					// 		int i; // $a0
					// 		int i; // $a2
					/* end block 1.1.1.1.2 */
					// End offset: 0x8009373C
					// End Line: 253
				/* end block 1.1.1.1 */
				// End offset: 0x80093750
				// End Line: 259
			/* end block 1.1.1 */
			// End offset: 0x80093750
			// End Line: 259
		/* end block 1.1 */
		// End offset: 0x80093760
		// End Line: 262
	/* end block 1 */
	// End offset: 0x80093770
	// End Line: 262

	/* begin block 2 */
		// Start line: 479
	/* end block 2 */
	// End Line: 480

void color_cycle__FP4TASK(TASK *T)

{
	void *pvVar1;
	uint *puVar2;
	undefined2 *puVar3;
	int iVar4;
	short local_90;
	ushort local_8e;
	undefined2 local_8c;
	undefined2 local_8a;
	ushort local_88 [12];
	uint local_70;
	undefined4 local_6c;
	int local_48 [7];
	undefined4 local_2c;
	
	while( true ) {
		if (visible_level < '\0') {
			return;
		}
		if (((water_clut != 0) && (DoDrawBg != (void *)0x0)) && (PauseMode == '\0')) {
			local_8e = water_clut >> 6;
			local_90 = (short)(((uint)water_clut & 0x3f) << 4);
			local_8c = 0x10;
			local_8a = 1;
			DrawSync(0);
			StoreImage(&local_90,local_88);
			iVar4 = 1;
			puVar3 = &local_8c;
			local_48[0] = (uint)local_88[0] + (local_70 & 0xffff0000);
			do {
				iVar4 = iVar4 + 1;
				*(uint *)(puVar3 + 0x24) = *(int *)(puVar3 + 4) * 0x10000 + (uint)(ushort)puVar3[3];
				puVar3 = puVar3 + 2;
			} while (iVar4 < 7);
			iVar4 = 8;
			puVar2 = &local_70;
			local_2c = local_6c;
			do {
				iVar4 = iVar4 + 1;
				puVar2[0x12] = puVar2[2];
				puVar2 = puVar2 + 1;
			} while (iVar4 < 0x10);
			LoadImage(&local_90,local_48);
			water_clut = 0;
			water_count = 0;
		}
		pvVar1 = GLUE_Finished__Fv();
		if (pvVar1 != (void *)0x0) break;
		TSK_Sleep(4);
	}
	return;
}





