#include "THISDUST.H"
#include "LIGHTING.H"


// decompiled code
// original method signature: 
// int /*$ra*/ veclen2__Fii(int ix /*$v1*/, int iy /*$a1*/)
 // line 328, offset 0x8004bc68
	/* begin block 1 */
		// Start line: 329
		// Start offset: 0x8004BC68
		// Variables:
	// 		int t; // $a0
	/* end block 1 */
	// End offset: 0x8004BCC8
	// End Line: 344

	/* begin block 2 */
		// Start line: 656
	/* end block 2 */
	// End Line: 657

/* WARNING: Unknown calling convention yet parameter storage is locked */

int veclen2__Fii(int ix,int iy)

{
	uint uVar1;
	
	if (ix < 0) {
		ix = -ix;
	}
	if (iy < 0) {
		iy = -iy;
	}
	if (ix < iy) {
		uVar1 = ix ^ iy;
		iy = iy ^ uVar1;
		ix = uVar1 ^ iy;
	}
	iy = iy + (iy >> 1);
	return ((ix - (ix >> 5)) - (ix >> 7)) + (iy >> 2) + (iy >> 6);
}



// decompiled code
// original method signature: 
// void /*$ra*/ set_light_bands__Fv()
 // line 390, offset 0x8004bcd0
	/* begin block 1 */
		// Start line: 391
		// Start offset: 0x8004BCD0
		// Variables:
	// 		int v; // $v1
	// 		int y; // $a1
	// 		unsigned char *l; // $a0
	/* end block 1 */
	// End offset: 0x8004BD38
	// End Line: 413

	/* begin block 2 */
		// Start line: 781
	/* end block 2 */
	// End Line: 782

/* WARNING: Unknown calling convention yet parameter storage is locked */

void set_light_bands__Fv(void)

{
	int iVar1;
	uchar *puVar2;
	uchar uVar3;
	
	uVar3 = '\0';
	puVar2 = &mult_tab;
	iVar1 = 0x7e;
	disp_mask = 0x7f;
	max_bright = 0x80;
	do {
		*puVar2 = '\0';
		iVar1 = iVar1 + -1;
		puVar2 = puVar2 + 1;
	} while (-1 < iVar1);
	puVar2 = &mult_tab;
	iVar1 = 0x1f;
	do {
		*puVar2 = uVar3;
		uVar3 = uVar3 + '\x01';
		iVar1 = iVar1 + -1;
		puVar2 = puVar2 + 1;
	} while (-1 < iVar1);
	iVar1 = 0x1f;
	do {
		*puVar2 = uVar3;
		uVar3 = uVar3 + -1;
		iVar1 = iVar1 + -1;
		puVar2 = puVar2 + 1;
	} while (-1 < iVar1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetLightFX__FiisssUcUcUc(int x /*$a0*/, int y /*$a1*/, short s_r /*$a2*/, short s_g /*$a3*/, int s_b /*stack 16*/, int d_r /*stack 20*/, int d_g /*stack 24*/, int d_b /*stack 28*/)
 // line 416, offset 0x8004bd40
	/* begin block 1 */
		// Start line: 417
		// Start offset: 0x8004BD40
	/* end block 1 */
	// End offset: 0x8004BD9C
	// End Line: 424

	/* begin block 2 */
		// Start line: 837
	/* end block 2 */
	// End Line: 838

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetLightFX__FiisssUcUcUc(int x,int y,short s_r,short s_g,int s_b,int d_r,int d_g,int d_b)

{
	dispy_r = (int)s_r;
	dispy_g = (int)s_g;
	disp_tab_r = (d_r & 0xffU) << 8;
	disp_tab_g = (d_g & 0xffU) << 8;
	disp_tab_b = (d_b & 0xffU) << 8;
	dispy_b = (int)(short)s_b;
	AddLight__Fiii(x,y,(int)&DAT_00006070);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetWeirdFX__Fv()
 // line 427, offset 0x8004bdac
	/* begin block 1 */
		// Start line: 428
		// Start offset: 0x8004BDAC
	/* end block 1 */
	// End offset: 0x8004BE10
	// End Line: 439

	/* begin block 2 */
		// Start line: 879
	/* end block 2 */
	// End Line: 880

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetWeirdFX__Fv(void)

{
	if (weird_cheat == 0) {
		disp_tab_r = 0x4000;
		disp_tab_g = 0x2000;
		disp_tab_b = 0x1000;
		dispy_r = 0xa80;
		dispy_g = -0xa10;
		restore_b = 0;
		restore_g = 0;
		restore_r = 0;
		dispy_b = 0xaa0;
		ChangeLightColour__Fii((int)plr._plid,(int)&DAT_0000e070);
		weird_cheat = 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoLighting__Fiiii(int nXPos /*$s0*/, int nYPos /*$s3*/, int nRadius /*$a2*/, int Lnum /*$a3*/)
 // line 443, offset 0x8004be20
	/* begin block 1 */
		// Start line: 444
		// Start offset: 0x8004BE20
		// Variables:
	// 		int xoff; // $t1
	// 		int yoff; // $t2
	// 		int x; // $s4
	// 		int y; // $fp
	// 		int v; // $v1
	// 		int colour_mask; // $s6
	// 		int shift_mask; // $s1
	// 		int shake; // $t4
	// 		int light_x; // stack offset -88
	// 		int light_y; // stack offset -80
	// 		int block_x; // stack offset -72
	// 		int block_y; // $t1
	// 		int dist_y; // $s7
	// 		int max_x; // $t3
	// 		int mult; // $a1
	// 		int mult_st; // $a3
	// 		int radius_block; // $s5
	// 		int scr_x; // $a3
	// 		int scr_y; // $t0
	// 		int temp_x; // $a2
	// 		int temp_y; // $a1
	// 		int weirdy; // $s2
	// 		int cont; // $t3
	/* end block 1 */
	// End offset: 0x8004CAC0
	// End Line: 823

	/* begin block 2 */
		// Start line: 918
	/* end block 2 */
	// End Line: 919

/* WARNING: Removing unreachable block (ram,0x8004c0a8) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoLighting__Fiiii(int nXPos,int nYPos,int nRadius,int Lnum)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	byte bVar6;
	uchar uVar7;
	int iVar8;
	uint uVar9;
	int iVar10;
	uint uVar11;
	int iVar12;
	uint uVar13;
	int iVar14;
	int iVar15;
	uint uVar16;
	int iVar17;
	int local_58;
	
	uVar11 = 0;
	uVar13 = 0;
	uVar1 = nRadius >> 4;
	uVar2 = nRadius >> 7;
	uVar16 = nRadius >> 0xe & 1;
	if ((uVar16 != 0) || (weird != 1)) {
		if (uVar16 == 1) {
			weird = uVar16;
		}
		uVar9 = nRadius & 0xf;
		if (leveltype == '\x03') {
			if ((plr.plractive != '\0') && (Lnum == (int)plr._plid)) {
				uVar9 = 10;
			}
			if ((PlayerStruct_800dbf20.plractive != '\0') && (Lnum == (int)PlayerStruct_800dbf20._plid)) {
				uVar9 = 10;
			}
		}
		iVar10 = uVar9 + (int)light_level[(uint)leveltype];
		if (0xf < iVar10) {
			iVar10 = 0xf;
		}
		radius = (int)radius_tab[iVar10];
		bright = (int)bright_tab[iVar10];
		if (uVar16 != 0) {
			radius = 0x40;
			bright = 4;
			max_bright = 0xff;
			disp_tab_r = disp_tab_r + dispy_r;
			disp_tab_g = disp_tab_g + dispy_g;
			disp_tab_b = disp_tab_b + dispy_b;
			if (((nRadius >> 0xf & 1U) == 0) && (0xc800 < disp_tab_r)) {
				weird = 0;
				LightList[Lnum]._ldel = '\x01';
				max_bright = 0x80;
				return;
			}
		}
		if (-1 < Lnum) {
			uVar11 = (int)LightList[Lnum]._xoff + 8;
			uVar13 = (int)LightList[Lnum]._yoff + 8;
		}
		if (leveltype == '\0') {
			iVar15 = ((int)(nXPos + 2U + (nXPos + 2U >> 0x1f)) >> 1) + -2;
			iVar17 = ((int)(nYPos + 2U + (nYPos + 2U >> 0x1f)) >> 1) + -2;
			local_58 = (iVar15 * 0x10 | uVar11) + 4;
			iVar3 = (iVar17 * 0x10 | uVar13) + 4;
		}
		else {
			iVar15 = (int)((nXPos - 0x10U) + (nXPos - 0x10U >> 0x1f)) >> 1;
			iVar17 = (int)((nYPos - 0x10U) + (nYPos - 0x10U >> 0x1f)) >> 1;
			local_58 = (iVar15 << 4 | uVar11) - 8;
			iVar3 = (iVar17 << 4 | uVar13) - 8;
		}
		if (-1 < iVar10) {
			iVar14 = iVar15 - (radius >> 4);
			iVar12 = iVar17 - (radius >> 4);
			iVar10 = ((gr_scrxoff >> 0x10) / 0x28 + ((gr_scrxoff >> 0x10) >> 0x1f)) - (gr_scrxoff >> 0x1f)
			;
			iVar8 = ((gr_scryoff >> 0x10) / 0x28 + ((gr_scryoff >> 0x10) >> 0x1f)) - (gr_scryoff >> 0x1f);
			if (leveltype == '\0') {
				iVar15 = iVar15 + -6;
				iVar17 = iVar17 + -8;
			}
			if ((((iVar10 + -2 < iVar15 + 8) && (iVar15 < iVar10 + 6)) && (iVar8 + -8 < iVar17 + 8)) &&
				 (iVar17 < iVar8)) {
				iVar10 = radius >> 3;
				if (((iVar12 < 0) || (0x30 < iVar12 + iVar10)) || ((iVar14 < 0 || (0x30 < iVar14 + iVar10)))
					 ) {
					if ((uVar2 & 0x3f) == 0) {
						iVar17 = iVar12;
						if (-1 < iVar10) {
							do {
								if (((-1 < iVar17) && (iVar17 < 0x30)) && (iVar15 = 0, -1 < iVar10)) {
									iVar8 = iVar14;
									do {
										iVar4 = veclen2__Fii(local_58 + iVar8 * -0x10,iVar3 + iVar17 * -0x10);
										uVar2 = radius - iVar4;
										if ((int)uVar2 < 0) {
											uVar2 = 0;
										}
										if ((-1 < iVar8) && (iVar8 < 0x30)) {
											if ((uVar1 & 1) != 0) {
												uVar11 = uVar2;
												if (uVar16 != 0) {
													uVar11 = (uint)(&mult_tab)[uVar2 + (disp_tab_r >> 8) & disp_mask];
												}
												iVar4 = (uint)(&dung_map_r)[iVar17 + iVar8 * 0x38] +
																(uVar11 * bright & 0xff);
												bVar6 = (byte)iVar4;
												if (max_bright < iVar4) {
													bVar6 = (byte)max_bright;
												}
												(&dung_map_r)[iVar17 + iVar8 * 0x38] = bVar6;
											}
											if ((uVar1 & 2) != 0) {
												uVar11 = uVar2;
												if (uVar16 != 0) {
													uVar11 = (uint)(&mult_tab)[uVar2 + (disp_tab_g >> 8) & disp_mask];
												}
												iVar4 = (uint)(&dung_map_g)[iVar17 + iVar8 * 0x38] +
																(uVar11 * bright & 0xff);
												bVar6 = (byte)iVar4;
												if (max_bright < iVar4) {
													bVar6 = (byte)max_bright;
												}
												(&dung_map_g)[iVar17 + iVar8 * 0x38] = bVar6;
											}
											if ((uVar1 & 4) != 0) {
												if (uVar16 != 0) {
													uVar2 = (uint)(&mult_tab)[uVar2 + (disp_tab_b >> 8) & disp_mask];
												}
												iVar4 = (uint)(&dung_map_b)[iVar17 + iVar8 * 0x38] + (uVar2 * bright & 0xff)
												;
												bVar6 = (byte)iVar4;
												if (max_bright < iVar4) {
													bVar6 = (byte)max_bright;
												}
												(&dung_map_b)[iVar17 + iVar8 * 0x38] = bVar6;
											}
										}
										iVar15 = iVar15 + 1;
										iVar8 = iVar8 + 1;
									} while (iVar15 <= iVar10);
								}
								iVar17 = iVar17 + 1;
							} while (iVar17 <= iVar10 + iVar12);
						}
					}
					else {
						iVar17 = iVar12;
						if (-1 < iVar10) {
							do {
								if (((-1 < iVar17) && (iVar17 < 0x30)) && (iVar15 = 0, -1 < iVar10)) {
									iVar8 = iVar14;
									do {
										iVar4 = veclen2__Fii(local_58 + iVar8 * -0x10,iVar3 + iVar17 * -0x10);
										iVar4 = (radius - iVar4) * bright;
										if (iVar4 < 0) {
											iVar4 = 0;
										}
										if ((-1 < iVar8) && (iVar8 < 0x30)) {
											uVar11 = (uint)(&dung_map_r)[iVar17 + iVar8 * 0x38];
											iVar5 = iVar4 >> 1;
											if ((uVar1 & 1) != 0) {
												if ((uVar2 & 9) == 0) {
													uVar11 = uVar11 + iVar4;
												}
												else {
													if ((uVar2 & 1) != 0) {
														uVar11 = uVar11 + iVar5;
													}
													if ((uVar2 & 8) != 0) {
														uVar11 = uVar11 + iVar4 * 2;
													}
												}
												uVar7 = (uchar)uVar11;
												if (max_bright < (int)uVar11) {
													uVar7 = (uchar)max_bright;
												}
												(&dung_map_r)[iVar17 + iVar8 * 0x38] = uVar7;
											}
											uVar11 = (uint)(&dung_map_g)[iVar17 + iVar8 * 0x38];
											if ((uVar1 & 2) != 0) {
												if ((uVar2 & 0x12) == 0) {
													uVar11 = uVar11 + iVar4;
												}
												else {
													if ((uVar2 & 2) != 0) {
														uVar11 = uVar11 + iVar5;
													}
													if ((uVar2 & 0x10) != 0) {
														uVar11 = uVar11 + iVar4 * 2;
													}
												}
												uVar7 = (uchar)uVar11;
												if (max_bright < (int)uVar11) {
													uVar7 = (uchar)max_bright;
												}
												(&dung_map_g)[iVar17 + iVar8 * 0x38] = uVar7;
											}
											uVar11 = (uint)(&dung_map_b)[iVar17 + iVar8 * 0x38];
											if ((uVar1 & 4) != 0) {
												if ((uVar2 & 0x24) == 0) {
													uVar11 = uVar11 + iVar4;
												}
												else {
													if ((uVar2 & 4) != 0) {
														uVar11 = uVar11 + iVar5;
													}
													if ((uVar2 & 0x20) != 0) {
														uVar11 = uVar11 + iVar4 * 2;
													}
												}
												uVar7 = (uchar)uVar11;
												if (max_bright < (int)uVar11) {
													uVar7 = (uchar)max_bright;
												}
												(&dung_map_b)[iVar17 + iVar8 * 0x38] = uVar7;
											}
										}
										iVar15 = iVar15 + 1;
										iVar8 = iVar8 + 1;
									} while (iVar15 <= iVar10);
								}
								iVar17 = iVar17 + 1;
							} while (iVar17 <= iVar10 + iVar12);
						}
					}
				}
				else {
					if ((uVar2 & 0x3f) == 0) {
						iVar17 = 0;
						if (-1 < iVar10) {
							do {
								iVar15 = 0;
								if (-1 < iVar10) {
									iVar8 = iVar14;
									do {
										iVar4 = veclen2__Fii(local_58 + iVar8 * -0x10,iVar3 + iVar12 * -0x10);
										uVar2 = radius - iVar4;
										if ((int)uVar2 < 0) {
											uVar2 = 0;
										}
										if ((uVar1 & 1) != 0) {
											uVar11 = uVar2;
											if (uVar16 != 0) {
												uVar11 = (uint)(&mult_tab)[uVar2 + (disp_tab_r >> 8) & disp_mask];
											}
											iVar4 = (uint)(&dung_map_r)[iVar12 + iVar8 * 0x38] + (uVar11 * bright & 0xff);
											bVar6 = (byte)iVar4;
											if (max_bright < iVar4) {
												bVar6 = (byte)max_bright;
											}
											(&dung_map_r)[iVar12 + iVar8 * 0x38] = bVar6;
										}
										if ((uVar1 & 2) != 0) {
											uVar11 = uVar2;
											if (uVar16 != 0) {
												uVar11 = (uint)(&mult_tab)[uVar2 + (disp_tab_g >> 8) & disp_mask];
											}
											iVar4 = (uint)(&dung_map_g)[iVar12 + iVar8 * 0x38] + (uVar11 * bright & 0xff);
											bVar6 = (byte)iVar4;
											if (max_bright < iVar4) {
												bVar6 = (byte)max_bright;
											}
											(&dung_map_g)[iVar12 + iVar8 * 0x38] = bVar6;
										}
										if ((uVar1 & 4) != 0) {
											if (uVar16 != 0) {
												uVar2 = (uint)(&mult_tab)[uVar2 + (disp_tab_b >> 8) & disp_mask];
											}
											iVar4 = (uint)(&dung_map_b)[iVar12 + iVar8 * 0x38] + (uVar2 * bright & 0xff);
											bVar6 = (byte)iVar4;
											if (max_bright < iVar4) {
												bVar6 = (byte)max_bright;
											}
											(&dung_map_b)[iVar12 + iVar8 * 0x38] = bVar6;
										}
										iVar15 = iVar15 + 1;
										iVar8 = iVar8 + 1;
									} while (iVar15 <= iVar10);
								}
								iVar17 = iVar17 + 1;
								iVar12 = iVar12 + 1;
							} while (iVar17 <= iVar10);
						}
					}
					else {
						iVar17 = 0;
						if (-1 < iVar10) {
							do {
								iVar15 = 0;
								if (-1 < iVar10) {
									iVar8 = iVar14;
									do {
										iVar4 = veclen2__Fii(local_58 + iVar8 * -0x10,iVar3 + iVar12 * -0x10);
										iVar4 = (radius - iVar4) * bright;
										if (iVar4 < 0) {
											iVar4 = 0;
										}
										uVar11 = (uint)(&dung_map_r)[iVar12 + iVar8 * 0x38];
										iVar5 = iVar4 >> 1;
										if ((uVar1 & 1) != 0) {
											if ((uVar2 & 9) == 0) {
												uVar11 = uVar11 + iVar4;
											}
											else {
												if ((uVar2 & 1) != 0) {
													uVar11 = uVar11 + iVar5;
												}
												if ((uVar2 & 8) != 0) {
													uVar11 = uVar11 + iVar4 * 2;
												}
											}
											uVar7 = (uchar)uVar11;
											if (max_bright < (int)uVar11) {
												uVar7 = (uchar)max_bright;
											}
											(&dung_map_r)[iVar12 + iVar8 * 0x38] = uVar7;
										}
										uVar11 = (uint)(&dung_map_g)[iVar12 + iVar8 * 0x38];
										if ((uVar1 & 2) != 0) {
											if ((uVar2 & 0x12) == 0) {
												uVar11 = uVar11 + iVar4;
											}
											else {
												if ((uVar2 & 2) != 0) {
													uVar11 = uVar11 + iVar5;
												}
												if ((uVar2 & 0x10) != 0) {
													uVar11 = uVar11 + iVar4 * 2;
												}
											}
											uVar7 = (uchar)uVar11;
											if (max_bright < (int)uVar11) {
												uVar7 = (uchar)max_bright;
											}
											(&dung_map_g)[iVar12 + iVar8 * 0x38] = uVar7;
										}
										uVar11 = (uint)(&dung_map_b)[iVar12 + iVar8 * 0x38];
										if ((uVar1 & 4) != 0) {
											if ((uVar2 & 0x24) == 0) {
												uVar11 = uVar11 + iVar4;
											}
											else {
												if ((uVar2 & 4) != 0) {
													uVar11 = uVar11 + iVar5;
												}
												if ((uVar2 & 0x20) != 0) {
													uVar11 = uVar11 + iVar4 * 2;
												}
											}
											uVar7 = (uchar)uVar11;
											if (max_bright < (int)uVar11) {
												uVar7 = (uchar)max_bright;
											}
											(&dung_map_b)[iVar12 + iVar8 * 0x38] = uVar7;
										}
										iVar15 = iVar15 + 1;
										iVar8 = iVar8 + 1;
									} while (iVar15 <= iVar10);
								}
								iVar17 = iVar17 + 1;
								iVar12 = iVar12 + 1;
							} while (iVar17 <= iVar10);
						}
					}
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoUnLight__Fv()
 // line 833, offset 0x8004caf4
	/* begin block 1 */
		// Start line: 834
		// Start offset: 0x8004CAF4
		// Variables:
	// 		int x; // $t1
	// 		int y; // $v1
	// 		int max_x; // $s0
	// 		int max_y; // $t7
	// 		int nXPos; // $t5
	// 		int nYPos; // $t6
	// 		unsigned char *r; // $a3
	// 		unsigned char *g; // $a2
	// 		unsigned char *b; // $a1
	// 		int radius_block_x; // $t8
	// 		int radius_block_y; // $t9
	/* end block 1 */
	// End offset: 0x8004CD24
	// End Line: 886

	/* begin block 2 */
		// Start line: 1865
	/* end block 2 */
	// End Line: 1866

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoUnLight__Fv(void)

{
	int iVar1;
	int iVar2;
	uchar *puVar3;
	int iVar4;
	uchar *puVar5;
	uchar *puVar6;
	uchar *puVar7;
	uchar *puVar8;
	uchar *puVar9;
	int iVar10;
	int iVar11;
	
	iVar4 = ((gr_scrxoff >> 0x10) / 0x28 + ((gr_scrxoff >> 0x10) >> 0x1f)) - (gr_scrxoff >> 0x1f);
	iVar10 = iVar4 + -9;
	iVar1 = ((gr_scryoff >> 0x10) / 0x28 + ((gr_scryoff >> 0x10) >> 0x1f)) - (gr_scryoff >> 0x1f);
	iVar11 = iVar1 + -0xd;
	if (leveltype == '\0') {
		iVar10 = iVar4 + -1;
		iVar11 = iVar1 + -5;
	}
	if (((-1 < iVar11) && (iVar11 + 0xe < 0x31)) && (-1 < iVar10)) {
		iVar1 = iVar10 + 0xd;
		if (iVar1 < 0x31) {
			if (iVar1 < iVar10) {
				return;
			}
			iVar4 = iVar10 * 0x38;
			do {
				puVar7 = &dung_map_r + iVar4 + iVar11;
				puVar8 = &dung_map_g + iVar4 + iVar11;
				puVar9 = &dung_map_b + iVar4 + iVar11;
				iVar2 = iVar11;
				while (iVar2 <= iVar11 + 0xe) {
					iVar2 = iVar2 + 1;
					*puVar7 = (uchar)restore_r;
					puVar7 = puVar7 + 1;
					*puVar8 = (uchar)restore_g;
					puVar8 = puVar8 + 1;
					*puVar9 = (uchar)restore_b;
					puVar9 = puVar9 + 1;
				}
				iVar10 = iVar10 + 1;
				iVar4 = iVar4 + 0x38;
			} while (iVar10 <= iVar1);
			return;
		}
	}
	if (iVar10 <= iVar10 + 0xd) {
		iVar1 = iVar10 * 0x38;
		puVar9 = &dung_map_b + iVar1;
		puVar8 = &dung_map_g + iVar1;
		puVar7 = &dung_map_r + iVar1;
		iVar1 = iVar10;
		do {
			if (iVar11 <= iVar11 + 0xe) {
				puVar6 = puVar9 + iVar11;
				puVar5 = puVar8 + iVar11;
				puVar3 = puVar7 + iVar11;
				iVar4 = iVar11;
				do {
					if (((-1 < iVar1) && (iVar1 < 0x31)) && ((-1 < iVar4 && (iVar4 < 0x31)))) {
						*puVar3 = (uchar)restore_r;
						*puVar5 = (uchar)restore_g;
						*puVar6 = (uchar)restore_b;
					}
					puVar6 = puVar6 + 1;
					puVar5 = puVar5 + 1;
					iVar4 = iVar4 + 1;
					puVar3 = puVar3 + 1;
				} while (iVar4 <= iVar11 + 0xe);
			}
			puVar9 = puVar9 + 0x38;
			puVar8 = puVar8 + 0x38;
			iVar1 = iVar1 + 1;
			puVar7 = puVar7 + 0x38;
		} while (iVar1 <= iVar10 + 0xd);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoUnVision__Fiiii(int nXPos /*$a0*/, int nYPos /*$a1*/, int nRadius /*$a2*/, int num /*$a3*/)
 // line 892, offset 0x8004cd38
	/* begin block 1 */
		// Start line: 893
		// Start offset: 0x8004CD38
		// Variables:
	// 		int i; // $t1
	// 		int j; // $v1
	// 		int x1; // $v1
	// 		int y1; // $t4
	// 		int x2; // $a0
	// 		int y2; // $a1
	// 		int vis_flag; // $a3
	/* end block 1 */
	// End offset: 0x8004CE38
	// End Line: 933

	/* begin block 2 */
		// Start line: 1993
	/* end block 2 */
	// End Line: 1994

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoUnVision__Fiiii(int nXPos,int nYPos,int nRadius,int num)

{
	byte bVar1;
	byte bVar2;
	int iVar3;
	byte bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (num == 0) {
		bVar4 = 1;
	}
	else {
		bVar4 = 2;
		if (num != 1) {
			bVar4 = 3;
		}
	}
	nRadius = nRadius + 1;
	iVar7 = nYPos - nRadius;
	nYPos = nYPos + nRadius;
	iVar3 = nXPos - nRadius;
	nXPos = nXPos + nRadius;
	if (iVar7 < 0) {
		iVar7 = 0;
	}
	if (0x60 < nYPos) {
		nYPos = 0x60;
	}
	if (iVar3 < 0) {
		iVar3 = 0;
	}
	if (0x60 < nXPos) {
		nXPos = 0x60;
	}
	if (iVar3 < nXPos) {
		iVar6 = iVar3 * 0x380;
		do {
			if (iVar7 < nYPos) {
				iVar5 = iVar7 * 8 + iVar6;
				do {
					bVar1 = (&dung_map.dFlags)[iVar5];
					if (((bVar1 & 1) == 0) || (bVar2 = bVar1 & ~bVar4, (bVar1 & 2) == 0)) {
						bVar2 = (&dung_map.dFlags)[iVar5] & ~(bVar4 | 4);
					}
					(&dung_map.dFlags)[iVar5] = bVar2;
					iVar5 = iVar5 + 8;
				} while (iVar5 < nYPos * 8 + iVar6);
			}
			iVar3 = iVar3 + 1;
			iVar6 = iVar6 + 0x380;
		} while (iVar3 < nXPos);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoVision__FiiiUcUc(int nXPos /*stack -128*/, int nYPos /*stack -120*/, int nRadius /*stack -112*/, unsigned char doautomap /*stack -104*/, int visible /*stack 16*/)
 // line 939, offset 0x8004ce40
	/* begin block 1 */
		// Start line: 940
		// Start offset: 0x8004CE40
		// Variables:
	// 		int nCrawlX; // $s2
	// 		int nCrawlY; // $s3
	// 		int nLineLen; // stack offset -96
	// 		int nBlockerFlag; // $a2
	// 		int j; // stack offset -88
	// 		int k; // $fp
	// 		int v; // $v1
	// 		int x1adj; // $s5
	// 		int x2adj; // $s7
	// 		int y1adj; // $s4
	// 		int y2adj; // $s6
	// 		int vis_flag; // stack offset -80
	/* end block 1 */
	// End offset: 0x8004D234
	// End Line: 1047

	/* begin block 2 */
		// Start line: 2082
	/* end block 2 */
	// End Line: 2083

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoVision__FiiiUcUc(int nXPos,int nYPos,int nRadius,uchar doautomap,int visible)

{
	bool bVar1;
	byte bVar2;
	int iVar3;
	void *pvVar4;
	void *pvVar5;
	byte *pbVar6;
	uint x;
	uint y;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int local_58;
	uchar *local_38;
	
	x = 0;
	bVar2 = (char)visible + 1;
	y = 0;
	if ((uint)nXPos < 0x61) {
		iVar11 = 0;
		if (0x60 < (uint)nYPos) goto LAB_8004cf54;
		if (doautomap != '\0') {
			if (-1 < (&dung_map)[nXPos * 0x70 + nYPos].dFlags) {
				SetAutomapView__Fii(nXPos,nXPos);
			}
			(&dung_map)[nXPos * 0x70 + nYPos].dFlags = (&dung_map)[nXPos * 0x70 + nYPos].dFlags | 0x80;
		}
		(&dung_map)[nXPos * 0x70 + nYPos].dFlags = (&dung_map)[nXPos * 0x70 + nYPos].dFlags | bVar2 | 4;
	}
	iVar11 = 0;
LAB_8004cf54:
	do {
		local_58 = 0;
		local_38 = &vCrawlTable;
		do {
			pvVar5 = (void *)0x0;
			iVar3 = (nRadius - (uint)RadiusAdj[local_58]) * 2;
			pbVar6 = local_38;
			if (0 < iVar3) {
				do {
					iVar8 = 0;
					iVar10 = 0;
					iVar7 = 0;
					iVar9 = 0;
					if (iVar11 == 1) {
						x = nXPos - (uint)*pbVar6;
						y = nYPos - (uint)pbVar6[1];
						if (*pbVar6 != 0) {
							bVar1 = x < 0x61;
							if (pbVar6[1] == 0) goto LAB_8004d0a4;
							iVar7 = 1;
LAB_8004d09c:
							iVar10 = 1;
						}
LAB_8004d0a0:
						bVar1 = x < 0x61;
					}
					else {
						if (iVar11 < 2) {
							bVar1 = x < 0x61;
							if (iVar11 == 0) {
								x = nXPos + (uint)*pbVar6;
								y = nYPos + (uint)pbVar6[1];
								if (*pbVar6 == 0) goto LAB_8004d0a0;
								bVar1 = x < 0x61;
								if (pbVar6[1] != 0) {
									iVar8 = -1;
									iVar9 = -1;
								}
							}
						}
						else {
							if (iVar11 == 2) {
								x = nXPos + (uint)*pbVar6;
								y = nYPos - (uint)pbVar6[1];
								if (*pbVar6 == 0) goto LAB_8004d0a0;
								bVar1 = x < 0x61;
								if (pbVar6[1] != 0) {
									iVar8 = -1;
									iVar9 = 1;
								}
							}
							else {
								bVar1 = x < 0x61;
								if (iVar11 == 3) {
									x = nXPos - (uint)*pbVar6;
									y = nYPos + (uint)pbVar6[1];
									if (*pbVar6 == 0) goto LAB_8004d0a0;
									bVar1 = x < 0x61;
									if (pbVar6[1] != 0) {
										iVar7 = -1;
										goto LAB_8004d09c;
									}
								}
							}
						}
					}
LAB_8004d0a4:
					if ((bVar1) && (y < 0x61)) {
						pvVar5 = GetBLOCK__Fii(x,y);
						bVar1 = false;
						pvVar4 = GetBLOCK__Fii(x + iVar8,y + iVar7);
						if ((pvVar4 == (void *)0x0) ||
							 (pvVar4 = GetBLOCK__Fii(x + iVar10,y + iVar9), pvVar4 == (void *)0x0)) {
							bVar1 = true;
						}
						if (bVar1) {
							if (doautomap != '\0') {
								if (-1 < (&dung_map)[x * 0x70 + y].dFlags) {
									SetAutomapView__Fii(x,y);
									SetAutomapView__Fii(x + 1,y);
								}
								(&dung_map)[x * 0x70 + y].dFlags = (&dung_map)[x * 0x70 + y].dFlags | 0x80;
							}
							(&dung_map)[x * 0x70 + y].dFlags = (&dung_map)[x * 0x70 + y].dFlags | bVar2 | 4;
							if ((pvVar5 == (void *)0x0) && ((int)(&dung_map)[x * 0x70 + y].dTransVal != 0)) {
								(&TransList)[(int)(&dung_map)[x * 0x70 + y].dTransVal] = '\x01';
							}
						}
					}
				} while (((int)(pbVar6 + 2) < (int)(local_38 + iVar3)) &&
								(pbVar6 = pbVar6 + 2, pvVar5 == (void *)0x0));
			}
			local_38 = local_38 + 0x1e;
			local_58 = local_58 + 1;
		} while (local_58 < 0x17);
		iVar11 = iVar11 + 1;
		if (3 < iVar11) {
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreeLightTable__Fv()
 // line 1051, offset 0x8004d268
	/* begin block 1 */
		// Start line: 1052
		// Start offset: 0x8004D268
	/* end block 1 */
	// End offset: 0x8004D268
	// End Line: 1052

	/* begin block 2 */
		// Start line: 2323
	/* end block 2 */
	// End Line: 2324

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeLightTable__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitLightTable__Fv()
 // line 1058, offset 0x8004d270
	/* begin block 1 */
		// Start line: 1059
		// Start offset: 0x8004D270
	/* end block 1 */
	// End offset: 0x8004D270
	// End Line: 1059

	/* begin block 2 */
		// Start line: 2337
	/* end block 2 */
	// End Line: 2338

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitLightTable__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakeLightTable__Fv()
 // line 1064, offset 0x8004d278
	/* begin block 1 */
		// Start line: 1065
		// Start offset: 0x8004D278
	/* end block 1 */
	// End offset: 0x8004D278
	// End Line: 1065

	/* begin block 2 */
		// Start line: 2349
	/* end block 2 */
	// End Line: 2350

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MakeLightTable__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitLightMax__Fv()
 // line 1156, offset 0x8004d280
	/* begin block 1 */
		// Start line: 1157
		// Start offset: 0x8004D280
	/* end block 1 */
	// End offset: 0x8004D29C
	// End Line: 1160

	/* begin block 2 */
		// Start line: 2533
	/* end block 2 */
	// End Line: 2534

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitLightMax__Fv(void)

{
	lightmax = '\x03';
	if (light4flag == '\0') {
		lightmax = -0x80;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitLighting__Fv()
 // line 1166, offset 0x8004d2a4
	/* begin block 1 */
		// Start line: 1167
		// Start offset: 0x8004D2A4
		// Variables:
	// 		int i; // $v0
	/* end block 1 */
	// End offset: 0x8004D2D8
	// End Line: 1179

	/* begin block 2 */
		// Start line: 2552
	/* end block 2 */
	// End Line: 2553

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitLighting__Fv(void)

{
	int iVar1;
	uchar *puVar2;
	
	iVar1 = 0x4f;
	puVar2 = &UCHAR_00h_800d65cf;
	numlights = 0;
	do {
		*puVar2 = (uchar)iVar1;
		iVar1 = iVar1 + -1;
		puVar2 = puVar2 + -1;
	} while (-1 < iVar1);
	set_light_bands__Fv();
	weird = 0;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddLight__Fiii(int x /*$a0*/, int y /*$a1*/, int r /*$a2*/)
 // line 1184, offset 0x8004d2e8
	/* begin block 1 */
		// Start line: 1185
		// Start offset: 0x8004D2E8
		// Variables:
	// 		int lid; // $a3
	// 		struct LightListStruct2 *ll; // $v0
	/* end block 1 */
	// End offset: 0x8004D338
	// End Line: 1203

	/* begin block 2 */
		// Start line: 2600
	/* end block 2 */
	// End Line: 2601

/* WARNING: Unknown calling convention yet parameter storage is locked */

int AddLight__Fiii(int x,int y,int r)

{
	uint uVar1;
	
	uVar1 = 0xffffffff;
	if (numlights < 0x50) {
		uVar1 = (uint)(&lightactive)[numlights];
		numlights = numlights + 1;
		LightList[uVar1]._lx = (char)x;
		LightList[uVar1]._ly = (char)y;
		LightList[uVar1]._lradius = (ushort)r;
		LightList[uVar1]._xoff = '\0';
		LightList[uVar1]._yoff = '\0';
		LightList[uVar1]._ldel = '\0';
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddUnLight__Fi(int i /*$a0*/)
 // line 1207, offset 0x8004d340
	/* begin block 1 */
		// Start line: 1208
		// Start offset: 0x8004D340
	/* end block 1 */
	// End offset: 0x8004D35C
	// End Line: 1212

	/* begin block 2 */
		// Start line: 2642
	/* end block 2 */
	// End Line: 2643

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddUnLight__Fi(int i)

{
	if (i != -1) {
		LightList[i]._ldel = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChangeLightRadius__Fii(int i /*$a0*/, int r /*$a1*/)
 // line 1218, offset 0x8004d364
	/* begin block 1 */
		// Start line: 1219
		// Start offset: 0x8004D364
	/* end block 1 */
	// End offset: 0x8004D37C
	// End Line: 1228

	/* begin block 2 */
		// Start line: 2664
	/* end block 2 */
	// End Line: 2665

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ChangeLightRadius__Fii(int i,int r)

{
	if (i != -1) {
		LightList[i]._lradius = (ushort)r;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChangeLightXY__Fiii(int i /*$a0*/, int x /*$a1*/, int y /*$a2*/)
 // line 1234, offset 0x8004d384
	/* begin block 1 */
		// Start line: 1235
		// Start offset: 0x8004D384
		// Variables:
	// 		struct LightListStruct2 *ll; // $v1
	/* end block 1 */
	// End offset: 0x8004D3A8
	// End Line: 1245

	/* begin block 2 */
		// Start line: 2695
	/* end block 2 */
	// End Line: 2696

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ChangeLightXY__Fiii(int i,int x,int y)

{
	if (i != -1) {
		LightList[i]._lx = (char)x;
		LightList[i]._ly = (char)y;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ light_fix__Fi(int i /*$a0*/)
 // line 1249, offset 0x8004d3b0
	/* begin block 1 */
		// Start line: 1250
		// Start offset: 0x8004D3B0
	/* end block 1 */
	// End offset: 0x8004D3B0
	// End Line: 1250

	/* begin block 2 */
		// Start line: 2730
	/* end block 2 */
	// End Line: 2731

/* WARNING: Unknown calling convention yet parameter storage is locked */

void light_fix__Fi(int i)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChangeLightOff__Fiii(int i /*$a0*/, int x /*$a1*/, int y /*$a2*/)
 // line 1265, offset 0x8004d3b8
	/* begin block 1 */
		// Start line: 1266
		// Start offset: 0x8004D3B8
		// Variables:
	// 		struct LightListStruct2 *ll; // $v0
	/* end block 1 */
	// End offset: 0x8004D3D8
	// End Line: 1276

	/* begin block 2 */
		// Start line: 2758
	/* end block 2 */
	// End Line: 2759

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ChangeLightOff__Fiii(int i,int x,int y)

{
	if (i != -1) {
		LightList[i]._xoff = (char)x;
		LightList[i]._yoff = (char)y;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChangeLight__Fiiii(int i /*$a0*/, int x /*$a1*/, int y /*$a2*/, int r /*$a3*/)
 // line 1283, offset 0x8004d3e0
	/* begin block 1 */
		// Start line: 1284
		// Start offset: 0x8004D3E0
		// Variables:
	// 		struct LightListStruct2 *ll; // $v0
	/* end block 1 */
	// End offset: 0x8004D404
	// End Line: 1295

	/* begin block 2 */
		// Start line: 2794
	/* end block 2 */
	// End Line: 2795

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ChangeLight__Fiiii(int i,int x,int y,int r)

{
	if (i != -1) {
		LightList[i]._lx = (char)x;
		LightList[i]._ly = (char)y;
		LightList[i]._lradius = (ushort)r;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChangeLightColour__Fii(int i /*$a0*/, int c /*$a1*/)
 // line 1299, offset 0x8004d40c
	/* begin block 1 */
		// Start line: 1300
		// Start offset: 0x8004D40C
		// Variables:
	// 		struct LightListStruct2 *ll; // $a0
	/* end block 1 */
	// End offset: 0x8004D42C
	// End Line: 1302

	/* begin block 2 */
		// Start line: 2825
	/* end block 2 */
	// End Line: 2826

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ChangeLightColour__Fii(int i,int c)

{
	LightList[i]._lradius = LightList[i]._lradius & 0xf | (ushort)c;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessLightList__Fv()
 // line 1316, offset 0x8004d434
	/* begin block 1 */
		// Start line: 1317
		// Start offset: 0x8004D434
		// Variables:
	// 		int i; // $a3
	// 		int j; // $s0
	// 		unsigned char temp; // $a0
	// 		struct LightListStruct2 *ll; // $v1
	/* end block 1 */
	// End offset: 0x8004D534
	// End Line: 1381

	/* begin block 2 */
		// Start line: 2858
	/* end block 2 */
	// End Line: 2859

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessLightList__Fv(void)

{
	byte bVar1;
	byte *pbVar2;
	uchar *puVar3;
	uint Lnum;
	int iVar4;
	
	DoUnLight__Fv();
	iVar4 = 0;
	if (0 < numlights) {
		do {
			Lnum = (uint)(&lightactive)[iVar4];
			if (LightList[Lnum]._ldel == '\0') {
				DoLighting__Fiiii((int)LightList[Lnum]._lx,(int)LightList[Lnum]._ly,
													(uint)LightList[Lnum]._lradius,Lnum);
			}
			iVar4 = iVar4 + 1;
		} while (iVar4 < numlights);
	}
	iVar4 = 0;
	if (0 < numlights) {
		puVar3 = &lightactive;
		do {
			if (LightList[(uint)*puVar3]._ldel == '\0') {
				puVar3 = puVar3 + 1;
				iVar4 = iVar4 + 1;
			}
			else {
				bVar1 = (&LightList[0x4f]._yoff)[numlights];
				pbVar2 = (byte *)(&LightList[0x4f]._yoff + numlights);
				numlights = numlights + -1;
				*pbVar2 = *puVar3;
				*puVar3 = bVar1;
			}
		} while (iVar4 < numlights);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SavePreLighting__Fv()
 // line 1390, offset 0x8004d54c
	/* begin block 1 */
		// Start line: 1391
		// Start offset: 0x8004D54C
	/* end block 1 */
	// End offset: 0x8004D54C
	// End Line: 1391

	/* begin block 2 */
		// Start line: 3033
	/* end block 2 */
	// End Line: 3034

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SavePreLighting__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitVision__Fv()
 // line 1422, offset 0x8004d554
	/* begin block 1 */
		// Start line: 1423
		// Start offset: 0x8004D554
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x8004D59C
	// End Line: 1430

	/* begin block 2 */
		// Start line: 3070
	/* end block 2 */
	// End Line: 3071

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitVision__Fv(void)

{
	int iVar1;
	
	numvision = 0;
	dovision = '\0';
	visionid = 1;
	iVar1 = 0;
	if ('\0' < TransVal) {
		do {
			(&TransList)[iVar1] = '\0';
			iVar1 = iVar1 + 1;
		} while (iVar1 < (int)TransVal);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddVision__FiiiUc(int x /*$a0*/, int y /*$a1*/, int r /*$a2*/, unsigned char mine /*$a3*/)
 // line 1436, offset 0x8004d5a8
	/* begin block 1 */
		// Start line: 1437
		// Start offset: 0x8004D5A8
		// Variables:
	// 		int vid; // $t0

		/* begin block 1.1 */
			// Start line: 1437
			// Start offset: 0x8004D5A8

			/* begin block 1.1.1 */
				// Start line: 1440
				// Start offset: 0x8004D5BC
				// Variables:
			// 		struct LightListStruct *vl; // $v0
			/* end block 1.1.1 */
			// End offset: 0x8004D614
			// End Line: 1451
		/* end block 1.1 */
		// End offset: 0x8004D614
		// End Line: 1451
	/* end block 1 */
	// End offset: 0x8004D614
	// End Line: 1453

	/* begin block 2 */
		// Start line: 3105
	/* end block 2 */
	// End Line: 3106

/* WARNING: Unknown calling convention yet parameter storage is locked */

int AddVision__FiiiUc(int x,int y,int r,uchar mine)

{
	int iVar1;
	char cVar2;
	int iVar3;
	
	iVar1 = numvision;
	iVar3 = 0;
	if (numvision < 0x20) {
		VisionList[numvision]._lx = (char)x;
		VisionList[iVar1]._ly = (char)y;
		iVar3 = visionid;
		VisionList[iVar1]._lradius = (ushort)r;
		cVar2 = (char)visionid;
		visionid = visionid + 1;
		VisionList[iVar1]._lid = cVar2;
		VisionList[iVar1]._ldel = '\0';
		VisionList[iVar1]._lunflag = '\0';
		VisionList[iVar1]._lflags = mine;
		dovision = '\x01';
		numvision = numvision + 1;
	}
	return iVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChangeVisionRadius__Fii(int id /*$a0*/, int r /*$a1*/)
 // line 1475, offset 0x8004d61c
	/* begin block 1 */
		// Start line: 1476
		// Start offset: 0x8004D61C
		// Variables:
	// 		int i; // $t0
	/* end block 1 */
	// End offset: 0x8004D6C4
	// End Line: 1489

	/* begin block 2 */
		// Start line: 3182
	/* end block 2 */
	// End Line: 3183

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ChangeVisionRadius__Fii(int id,int r)

{
	int iVar1;
	ushort *puVar2;
	int iVar3;
	
	iVar3 = 0;
	if (0 < numvision) {
		puVar2 = &VisionList[0]._lradius;
		iVar1 = 0;
		do {
			if ((int)(&VisionList[0]._lid)[iVar1] == id) {
				(&VisionList[0]._lunflag)[iVar1] = '\x01';
				(&VisionList[0]._lunx)[iVar1] = (&VisionList[0]._lx)[iVar1];
				(&VisionList[0]._luny)[iVar1] = (&VisionList[0]._ly)[iVar1];
				(&VisionList[0]._lunr)[iVar1] = (char)*puVar2;
				*puVar2 = (ushort)r;
				dovision = '\x01';
			}
			puVar2 = puVar2 + 7;
			iVar3 = iVar3 + 1;
			iVar1 = iVar1 + 0xe;
		} while (iVar3 < numvision);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChangeVisionXY__Fiii(int id /*$t3*/, int x /*$a1*/, int y /*$a2*/)
 // line 1493, offset 0x8004d6d0
	/* begin block 1 */
		// Start line: 1494
		// Start offset: 0x8004D6D0
		// Variables:
	// 		int i; // $t1
	// 		struct LightListStruct *vl; // $t0
	/* end block 1 */
	// End offset: 0x8004D748
	// End Line: 1511

	/* begin block 2 */
		// Start line: 3220
	/* end block 2 */
	// End Line: 3221

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ChangeVisionXY__Fiii(int id,int x,int y)

{
	char *pcVar1;
	LightListStruct *pLVar2;
	int iVar3;
	
	pLVar2 = VisionList;
	iVar3 = 0;
	if (0 < numvision) {
		pcVar1 = &VisionList[0]._ly;
		do {
			if ((int)pcVar1[3] == id) {
				pcVar1[5] = '\x01';
				pcVar1[6] = pLVar2->_lx;
				pcVar1[7] = *pcVar1;
				pcVar1[8] = (char)*(undefined2 *)(pcVar1 + 1);
				pLVar2->_lx = (char)x;
				*pcVar1 = (char)y;
				dovision = '\x01';
			}
			pcVar1 = pcVar1 + 0xe;
			iVar3 = iVar3 + 1;
			pLVar2 = pLVar2 + 1;
		} while (iVar3 < numvision);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessVisionList__Fv()
 // line 1539, offset 0x8004d754
	/* begin block 1 */
		// Start line: 1540
		// Start offset: 0x8004D754
		// Variables:
	// 		int i; // $s1
	// 		unsigned char delflag; // $a0
	// 		struct LightListStruct *vl; // $s2
	/* end block 1 */
	// End offset: 0x8004D940
	// End Line: 1588

	/* begin block 2 */
		// Start line: 3320
	/* end block 2 */
	// End Line: 3321

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessVisionList__Fv(void)

{
	undefined2 uVar1;
	bool bVar2;
	int iVar3;
	undefined4 uVar4;
	undefined4 uVar5;
	uchar *puVar6;
	byte *pbVar7;
	int iVar8;
	LightListStruct *pLVar9;
	
	if (dovision != '\0') {
		pLVar9 = VisionList;
		iVar8 = 0;
		if (0 < numvision) {
			puVar6 = &VisionList[0]._lunflag;
			do {
				if (puVar6[-1] != '\0') {
					DoUnVision__Fiiii((int)pLVar9->_lx,(int)(char)puVar6[-5],(uint)*(ushort *)(puVar6 + -4),
														(uint)puVar6[6]);
				}
				if (*puVar6 != '\0') {
					DoUnVision__Fiiii((int)(char)puVar6[1],(int)(char)puVar6[2],(int)(char)puVar6[3],
														(uint)puVar6[6]);
					*puVar6 = '\0';
				}
				puVar6 = puVar6 + 0xe;
				iVar8 = iVar8 + 1;
				pLVar9 = pLVar9 + 1;
			} while (iVar8 < numvision);
		}
		iVar8 = 0;
		if ('\0' < TransVal) {
			do {
				(&TransList)[iVar8] = '\0';
				iVar8 = iVar8 + 1;
			} while (iVar8 < (int)TransVal);
		}
		pLVar9 = VisionList;
		iVar8 = 0;
		if (0 < numvision) {
			pbVar7 = &VisionList[0]._lflags;
			do {
				if (pbVar7[-7] == 0) {
					DoVision__FiiiUcUc((int)pLVar9->_lx,(int)(char)pbVar7[-0xb],
														 (uint)*(ushort *)(pbVar7 + -10),'\x01',(uint)*pbVar7);
				}
				pbVar7 = pbVar7 + 0xe;
				iVar8 = iVar8 + 1;
				pLVar9 = pLVar9 + 1;
			} while (iVar8 < numvision);
		}
		do {
			bVar2 = false;
			pLVar9 = VisionList;
			iVar8 = 0;
			if (0 < numvision) {
				do {
					iVar3 = numvision + -1;
					if (pLVar9->_ldel != '\0') {
						numvision = iVar3;
						if ((0 < iVar3) && (numvision = iVar3, iVar8 != iVar3)) {
							uVar4 = *(undefined4 *)&VisionList[iVar3]._lid;
							uVar5 = *(undefined4 *)&VisionList[iVar3]._luny;
							uVar1 = *(undefined2 *)&VisionList[iVar3]._lflags;
							numvision = iVar3;
							*(undefined4 *)pLVar9 = *(undefined4 *)(VisionList + iVar3);
							*(undefined4 *)&pLVar9->_lid = uVar4;
							*(undefined4 *)&pLVar9->_luny = uVar5;
							*(undefined2 *)&pLVar9->_lflags = uVar1;
						}
						bVar2 = true;
					}
					iVar8 = iVar8 + 1;
					pLVar9 = pLVar9 + 1;
				} while (iVar8 < numvision);
			}
		} while (bVar2);
	}
	dovision = '\0';
	return;
}





