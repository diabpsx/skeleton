#include "THISDUST.H"
#include "LIGHTING.H"


// decompiled code
// original method signature: 
// int /*$ra*/ veclen2__Fii(int ix /*$v1*/, int iy /*$a1*/)
 // line 319, offset 0x80045454
	/* begin block 1 */
		// Start line: 320
		// Start offset: 0x80045454
		// Variables:
	// 		int t; // $a0
	/* end block 1 */
	// End offset: 0x800454B4
	// End Line: 335

	/* begin block 2 */
		// Start line: 638
	/* end block 2 */
	// End Line: 639

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
 // line 380, offset 0x800454bc
	/* begin block 1 */
		// Start line: 381
		// Start offset: 0x800454BC
		// Variables:
	// 		int v; // $v0
	// 		int y; // $a1
	// 		int c; // $a0
	/* end block 1 */
	// End offset: 0x80045528
	// End Line: 400

	/* begin block 2 */
		// Start line: 761
	/* end block 2 */
	// End Line: 762

/* WARNING: Unknown calling convention yet parameter storage is locked */

void set_light_bands__Fv(void)

{
	int iVar1;
	uchar *puVar2;
	int iVar3;
	uchar uVar4;
	
	uVar4 = '\0';
	iVar3 = 0;
	disp_mask = 0x7f;
	iVar1 = 0x7e;
	puVar2 = mult_tab + 0x7e;
	do {
		*puVar2 = '\0';
		iVar1 = iVar1 + -1;
		puVar2 = puVar2 + -1;
	} while (-1 < iVar1);
	iVar1 = 0x1f;
	do {
		mult_tab[iVar3] = uVar4;
		iVar3 = iVar3 + 1;
		iVar1 = iVar1 + -1;
		uVar4 = uVar4 + '\x01';
	} while (-1 < iVar1);
	iVar1 = 0x1f;
	do {
		mult_tab[iVar3] = uVar4;
		iVar3 = iVar3 + 1;
		iVar1 = iVar1 + -1;
		uVar4 = uVar4 + -1;
	} while (-1 < iVar1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetLightFX__FiisssUcUcUc(int x /*$a0*/, int y /*$a1*/, short s_r /*$a2*/, short s_g /*$a3*/, int s_b /*stack 16*/, int d_r /*stack 20*/, int d_g /*stack 24*/, int d_b /*stack 28*/)
 // line 404, offset 0x80045530
	/* begin block 1 */
		// Start line: 405
		// Start offset: 0x80045530
	/* end block 1 */
	// End offset: 0x8004558C
	// End Line: 412

	/* begin block 2 */
		// Start line: 808
	/* end block 2 */
	// End Line: 809

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
// void /*$ra*/ DoLighting__Fiiii(int nXPos /*$s0*/, int nYPos /*$s2*/, int nRadius /*$a2*/, int Lnum /*$a3*/)
 // line 415, offset 0x8004559c
	/* begin block 1 */
		// Start line: 416
		// Start offset: 0x8004559C
		// Variables:
	// 		int xoff; // $t1
	// 		int yoff; // $t2
	// 		int x; // $s4
	// 		int y; // $fp
	// 		int v; // $a0
	// 		int colour_mask; // $s6
	// 		int shift_mask; // $s1
	// 		int shake; // $t4
	// 		int light_x; // stack offset -88
	// 		int light_y; // stack offset -80
	// 		int block_x; // stack offset -72
	// 		int block_y; // $t1
	// 		int dist_y; // $s7
	// 		int max_x; // $t3
	// 		int mult; // $a2
	// 		int mult_st; // $a3
	// 		int radius_block; // $s5
	// 		int scr_x; // $a3
	// 		int scr_y; // $t0
	// 		int temp_x; // $a2
	// 		int temp_y; // $a1
	// 		int weirdy; // $s3
	// 		int cont; // $t3
	/* end block 1 */
	// End offset: 0x80046218
	// End Line: 762

	/* begin block 2 */
		// Start line: 849
	/* end block 2 */
	// End Line: 850

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
	int iVar13;
	int iVar14;
	uint uVar15;
	int local_58;
	int local_50;
	
	uVar9 = 0;
	uVar11 = 0;
	uVar1 = nRadius >> 4;
	uVar2 = nRadius >> 7;
	uVar15 = nRadius >> 0xe & 1;
	if ((uVar15 != 0) || (weird != 1)) {
		if (uVar15 == 1) {
			weird = uVar15;
		}
		radius = (int)radius_tab[nRadius & 0xfU];
		bright = (int)bright_tab[nRadius & 0xfU];
		if (uVar15 != 0) {
			radius = 0x40;
			bright = 7;
			disp_tab_r = disp_tab_r + dispy_r;
			disp_tab_g = disp_tab_g + dispy_g;
			disp_tab_b = disp_tab_b + dispy_b;
			if (((nRadius >> 0xf & 1U) == 0) && (0xc800 < disp_tab_r)) {
				weird = 0;
				LightList[Lnum]._ldel = '\x01';
				return;
			}
		}
		if (-1 < Lnum) {
			uVar9 = (int)LightList[Lnum]._xoff + 8;
			uVar11 = (int)LightList[Lnum]._yoff + 8;
		}
		if (leveltype == '\0') {
			iVar13 = ((int)(nXPos + 2U + (nXPos + 2U >> 0x1f)) >> 1) + -2;
			iVar14 = ((int)(nYPos + 2U + (nYPos + 2U >> 0x1f)) >> 1) + -2;
			local_58 = (iVar13 * 0x10 | uVar9) + 4;
			local_50 = (iVar14 * 0x10 | uVar11) + 4;
		}
		else {
			iVar13 = (int)((nXPos - 0x10U) + (nXPos - 0x10U >> 0x1f)) >> 1;
			iVar14 = (int)((nYPos - 0x10U) + (nYPos - 0x10U >> 0x1f)) >> 1;
			local_58 = (iVar13 << 4 | uVar9) - 8;
			local_50 = (iVar14 << 4 | uVar11) - 8;
		}
		if ((nRadius >> 0xd & 1U) == 0) {
			uVar9 = rand();
			local_58 = local_58 + -1 + uVar9 + ((int)(uVar9 + (uVar9 >> 0x1f)) >> 1) * -2;
			uVar9 = rand();
			local_50 = local_50 + -1 + uVar9 + ((int)(uVar9 + (uVar9 >> 0x1f)) >> 1) * -2;
		}
		iVar12 = iVar13 - (radius >> 4);
		iVar10 = iVar14 - (radius >> 4);
		iVar5 = ((gr_scrxoff >> 0x10) / 0x28 + ((gr_scrxoff >> 0x10) >> 0x1f)) - (gr_scrxoff >> 0x1f);
		iVar8 = ((gr_scryoff >> 0x10) / 0x28 + ((gr_scryoff >> 0x10) >> 0x1f)) - (gr_scryoff >> 0x1f);
		if (leveltype == '\0') {
			iVar13 = iVar13 + -6;
			iVar14 = iVar14 + -8;
		}
		if ((((iVar5 + -2 < iVar13 + 8) && (iVar13 < iVar5 + 6)) && (iVar8 + -8 < iVar14 + 8)) &&
			 (iVar14 < iVar8)) {
			iVar14 = radius >> 3;
			if (((iVar10 < 0) || (0x2e < iVar10 + iVar14)) || ((iVar12 < 0 || (0x2e < iVar12 + iVar14))))
			{
				if ((uVar2 & 0x3f) == 0) {
					iVar13 = iVar10;
					if (-1 < iVar14) {
						do {
							if (((-1 < iVar13) && (iVar13 < 0x2e)) && (iVar8 = 0, iVar5 = iVar12, -1 < iVar14)) {
								do {
									iVar3 = veclen2__Fii(local_58 + iVar5 * -0x10,local_50 + iVar13 * -0x10);
									uVar2 = radius - iVar3;
									if ((int)uVar2 < 0) {
										uVar2 = 0;
									}
									if ((-1 < iVar5) && (iVar5 < 0x2e)) {
										if ((uVar1 & 1) != 0) {
											uVar9 = uVar2;
											if (uVar15 != 0) {
												uVar9 = (uint)mult_tab[uVar2 + (disp_tab_r >> 8) & disp_mask];
											}
											uVar9 = (uint)dung_map_r[iVar13 + iVar5 * 0x36] + (uVar9 * bright & 0xff);
											bVar6 = (byte)uVar9;
											if (0xff < uVar9) {
												bVar6 = 0xff;
											}
											dung_map_r[iVar13 + iVar5 * 0x36] = bVar6;
										}
										if ((uVar1 & 2) != 0) {
											uVar9 = uVar2;
											if (uVar15 != 0) {
												uVar9 = (uint)mult_tab[uVar2 + (disp_tab_g >> 8) & disp_mask];
											}
											uVar9 = (uint)dung_map_g[iVar13 + iVar5 * 0x36] + (uVar9 * bright & 0xff);
											bVar6 = (byte)uVar9;
											if (0xff < uVar9) {
												bVar6 = 0xff;
											}
											dung_map_g[iVar13 + iVar5 * 0x36] = bVar6;
										}
										if ((uVar1 & 4) != 0) {
											if (uVar15 != 0) {
												uVar2 = (uint)mult_tab[uVar2 + (disp_tab_b >> 8) & disp_mask];
											}
											uVar2 = (uint)dung_map_b[iVar13 + iVar5 * 0x36] + (uVar2 * bright & 0xff);
											bVar6 = (byte)uVar2;
											if (0xff < uVar2) {
												bVar6 = 0xff;
											}
											dung_map_b[iVar13 + iVar5 * 0x36] = bVar6;
										}
									}
									iVar8 = iVar8 + 1;
									iVar5 = iVar5 + 1;
								} while (iVar8 <= iVar14);
							}
							iVar13 = iVar13 + 1;
						} while (iVar13 <= iVar14 + iVar10);
					}
				}
				else {
					iVar13 = iVar10;
					if (-1 < iVar14) {
						do {
							if (((-1 < iVar13) && (iVar13 < 0x2e)) && (iVar5 = 0, -1 < iVar14)) {
								iVar8 = iVar12;
								do {
									iVar3 = veclen2__Fii(local_58 + iVar8 * -0x10,local_50 + iVar13 * -0x10);
									iVar3 = (radius - iVar3) * bright;
									if (iVar3 < 0) {
										iVar3 = 0;
									}
									if ((-1 < iVar8) && (iVar8 < 0x2e)) {
										uVar9 = (uint)dung_map_r[iVar13 + iVar8 * 0x36];
										iVar4 = iVar3 >> 1;
										if ((uVar1 & 1) != 0) {
											if ((uVar2 & 9) == 0) {
												uVar9 = uVar9 + iVar3;
											}
											else {
												if ((uVar2 & 1) != 0) {
													uVar9 = uVar9 + iVar4;
												}
												if ((uVar2 & 8) != 0) {
													uVar9 = uVar9 + iVar3 * 2;
												}
											}
											uVar7 = (uchar)uVar9;
											if (0xff < (int)uVar9) {
												uVar7 = -1;
											}
											dung_map_r[iVar13 + iVar8 * 0x36] = uVar7;
										}
										uVar9 = (uint)dung_map_g[iVar13 + iVar8 * 0x36];
										if ((uVar1 & 2) != 0) {
											if ((uVar2 & 0x12) == 0) {
												uVar9 = uVar9 + iVar3;
											}
											else {
												if ((uVar2 & 2) != 0) {
													uVar9 = uVar9 + iVar4;
												}
												if ((uVar2 & 0x10) != 0) {
													uVar9 = uVar9 + iVar3 * 2;
												}
											}
											uVar7 = (uchar)uVar9;
											if (0xff < (int)uVar9) {
												uVar7 = -1;
											}
											dung_map_g[iVar13 + iVar8 * 0x36] = uVar7;
										}
										uVar9 = (uint)dung_map_b[iVar13 + iVar8 * 0x36];
										if ((uVar1 & 4) != 0) {
											if ((uVar2 & 0x24) == 0) {
												uVar9 = uVar9 + iVar3;
											}
											else {
												if ((uVar2 & 4) != 0) {
													uVar9 = uVar9 + iVar4;
												}
												if ((uVar2 & 0x20) != 0) {
													uVar9 = uVar9 + iVar3 * 2;
												}
											}
											uVar7 = (uchar)uVar9;
											if (0xff < (int)uVar9) {
												uVar7 = -1;
											}
											dung_map_b[iVar13 + iVar8 * 0x36] = uVar7;
										}
									}
									iVar5 = iVar5 + 1;
									iVar8 = iVar8 + 1;
								} while (iVar5 <= iVar14);
							}
							iVar13 = iVar13 + 1;
						} while (iVar13 <= iVar14 + iVar10);
					}
				}
			}
			else {
				if ((uVar2 & 0x3f) == 0) {
					iVar13 = 0;
					if (-1 < iVar14) {
						do {
							iVar5 = 0;
							if (-1 < iVar14) {
								iVar8 = iVar12;
								do {
									iVar3 = veclen2__Fii(local_58 + iVar8 * -0x10,local_50 + iVar10 * -0x10);
									uVar2 = radius - iVar3;
									if ((int)uVar2 < 0) {
										uVar2 = 0;
									}
									if ((uVar1 & 1) != 0) {
										uVar9 = uVar2;
										if (uVar15 != 0) {
											uVar9 = (uint)mult_tab[uVar2 + (disp_tab_r >> 8) & disp_mask];
										}
										uVar9 = (uint)dung_map_r[iVar10 + iVar8 * 0x36] + (uVar9 * bright & 0xff);
										bVar6 = (byte)uVar9;
										if (0xff < uVar9) {
											bVar6 = 0xff;
										}
										dung_map_r[iVar10 + iVar8 * 0x36] = bVar6;
									}
									if ((uVar1 & 2) != 0) {
										uVar9 = uVar2;
										if (uVar15 != 0) {
											uVar9 = (uint)mult_tab[uVar2 + (disp_tab_g >> 8) & disp_mask];
										}
										uVar9 = (uint)dung_map_g[iVar10 + iVar8 * 0x36] + (uVar9 * bright & 0xff);
										bVar6 = (byte)uVar9;
										if (0xff < uVar9) {
											bVar6 = 0xff;
										}
										dung_map_g[iVar10 + iVar8 * 0x36] = bVar6;
									}
									if ((uVar1 & 4) != 0) {
										if (uVar15 != 0) {
											uVar2 = (uint)mult_tab[uVar2 + (disp_tab_b >> 8) & disp_mask];
										}
										uVar2 = (uint)dung_map_b[iVar10 + iVar8 * 0x36] + (uVar2 * bright & 0xff);
										bVar6 = (byte)uVar2;
										if (0xff < uVar2) {
											bVar6 = 0xff;
										}
										dung_map_b[iVar10 + iVar8 * 0x36] = bVar6;
									}
									iVar5 = iVar5 + 1;
									iVar8 = iVar8 + 1;
								} while (iVar5 <= iVar14);
							}
							iVar13 = iVar13 + 1;
							iVar10 = iVar10 + 1;
						} while (iVar13 <= iVar14);
					}
				}
				else {
					iVar13 = 0;
					if (-1 < iVar14) {
						do {
							iVar5 = 0;
							if (-1 < iVar14) {
								iVar8 = iVar12;
								do {
									iVar3 = veclen2__Fii(local_58 + iVar8 * -0x10,local_50 + iVar10 * -0x10);
									iVar3 = (radius - iVar3) * bright;
									if (iVar3 < 0) {
										iVar3 = 0;
									}
									uVar9 = (uint)dung_map_r[iVar10 + iVar8 * 0x36];
									iVar4 = iVar3 >> 1;
									if ((uVar1 & 1) != 0) {
										if ((uVar2 & 9) == 0) {
											uVar9 = uVar9 + iVar3;
										}
										else {
											if ((uVar2 & 1) != 0) {
												uVar9 = uVar9 + iVar4;
											}
											if ((uVar2 & 8) != 0) {
												uVar9 = uVar9 + iVar3 * 2;
											}
										}
										uVar7 = (uchar)uVar9;
										if (0xff < (int)uVar9) {
											uVar7 = -1;
										}
										dung_map_r[iVar10 + iVar8 * 0x36] = uVar7;
									}
									uVar9 = (uint)dung_map_g[iVar10 + iVar8 * 0x36];
									if ((uVar1 & 2) != 0) {
										if ((uVar2 & 0x12) == 0) {
											uVar9 = uVar9 + iVar3;
										}
										else {
											if ((uVar2 & 2) != 0) {
												uVar9 = uVar9 + iVar4;
											}
											if ((uVar2 & 0x10) != 0) {
												uVar9 = uVar9 + iVar3 * 2;
											}
										}
										uVar7 = (uchar)uVar9;
										if (0xff < (int)uVar9) {
											uVar7 = -1;
										}
										dung_map_g[iVar10 + iVar8 * 0x36] = uVar7;
									}
									uVar9 = (uint)dung_map_b[iVar10 + iVar8 * 0x36];
									if ((uVar1 & 4) != 0) {
										if ((uVar2 & 0x24) == 0) {
											uVar9 = uVar9 + iVar3;
										}
										else {
											if ((uVar2 & 4) != 0) {
												uVar9 = uVar9 + iVar4;
											}
											if ((uVar2 & 0x20) != 0) {
												uVar9 = uVar9 + iVar3 * 2;
											}
										}
										uVar7 = (uchar)uVar9;
										if (0xff < (int)uVar9) {
											uVar7 = -1;
										}
										dung_map_b[iVar10 + iVar8 * 0x36] = uVar7;
									}
									iVar5 = iVar5 + 1;
									iVar8 = iVar8 + 1;
								} while (iVar5 <= iVar14);
							}
							iVar13 = iVar13 + 1;
							iVar10 = iVar10 + 1;
						} while (iVar13 <= iVar14);
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
 // line 771, offset 0x8004624c
	/* begin block 1 */
		// Start line: 772
		// Start offset: 0x8004624C
		// Variables:
	// 		int x; // $a2
	// 		int y; // $a3
	// 		int max_x; // $t3
	// 		int max_y; // $s0
	// 		int radius_block; // $t6
	// 		int nXPos; // $t5
	// 		int nYPos; // $t4
	/* end block 1 */
	// End offset: 0x8004647C
	// End Line: 820

	/* begin block 2 */
		// Start line: 1651
	/* end block 2 */
	// End Line: 1652

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoUnLight__Fv(void)

{
	int iVar1;
	uchar *puVar2;
	uchar *puVar3;
	int iVar4;
	uchar *puVar5;
	uchar *puVar6;
	uchar *puVar7;
	int iVar8;
	int iVar9;
	
	radius = 0x60;
	iVar4 = ((gr_scrxoff >> 0x10) / 0x28 + ((gr_scrxoff >> 0x10) >> 0x1f)) - (gr_scrxoff >> 0x1f);
	iVar9 = iVar4 + -8;
	iVar1 = ((gr_scryoff >> 0x10) / 0x28 + ((gr_scryoff >> 0x10) >> 0x1f)) - (gr_scryoff >> 0x1f);
	iVar8 = iVar1 + -0xd;
	if (leveltype == '\0') {
		iVar9 = iVar4 + -2;
		iVar8 = iVar1 + -6;
	}
	if ((((iVar8 < 0) || (0x2e < iVar8 + 0xc)) || (iVar9 < 0)) || (0x2e < iVar9 + 0xc)) {
		iVar1 = iVar8;
		if (iVar8 <= iVar8 + 0xc) {
			do {
				if (iVar9 <= iVar9 + 0xc) {
					iVar4 = iVar9 * 0x36;
					puVar7 = dung_map_b + iVar4;
					puVar5 = dung_map_g + iVar4;
					puVar2 = dung_map_r + iVar4;
					iVar4 = iVar9;
					do {
						if (((-1 < iVar4) && (iVar4 < 0x2f)) && ((-1 < iVar1 && (iVar1 < 0x2f)))) {
							puVar2[iVar1] = (uchar)restore_r;
							puVar5[iVar1] = (uchar)restore_g;
							puVar7[iVar1] = (uchar)restore_b;
						}
						puVar7 = puVar7 + 0x36;
						puVar5 = puVar5 + 0x36;
						iVar4 = iVar4 + 1;
						puVar2 = puVar2 + 0x36;
					} while (iVar4 <= iVar9 + 0xc);
				}
				iVar1 = iVar1 + 1;
			} while (iVar1 <= iVar8 + 0xc);
		}
	}
	else {
		iVar1 = iVar8;
		if (iVar8 <= iVar8 + 0xc) {
			do {
				if (iVar9 <= iVar9 + 0xc) {
					iVar4 = iVar9 * 0x36;
					puVar7 = dung_map_b + iVar4;
					puVar5 = dung_map_g + iVar4;
					puVar2 = dung_map_r + iVar4;
					iVar4 = iVar9;
					do {
						puVar6 = puVar7 + iVar1;
						puVar7 = puVar7 + 0x36;
						puVar3 = puVar5 + iVar1;
						puVar5 = puVar5 + 0x36;
						puVar2[iVar1] = (uchar)restore_r;
						*puVar3 = (uchar)restore_g;
						iVar4 = iVar4 + 1;
						*puVar6 = (uchar)restore_b;
						puVar2 = puVar2 + 0x36;
					} while (iVar4 <= iVar9 + 0xc);
				}
				iVar1 = iVar1 + 1;
			} while (iVar1 <= iVar8 + 0xc);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoUnVision__Fiii(int nXPos /*$a0*/, int nYPos /*$a1*/, int nRadius /*$a2*/)
 // line 826, offset 0x80046490
	/* begin block 1 */
		// Start line: 827
		// Start offset: 0x80046490
		// Variables:
	// 		int i; // $a0
	// 		int j; // $a2
	// 		int x1; // $v1
	// 		int y1; // $t1
	// 		int x2; // $t0
	// 		int y2; // $a1
	/* end block 1 */
	// End offset: 0x8004654C
	// End Line: 842

	/* begin block 2 */
		// Start line: 1773
	/* end block 2 */
	// End Line: 1774

void DoUnVision__Fiii(int nXPos,int nYPos,int nRadius)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	nRadius = nRadius + 1;
	iVar5 = nYPos - nRadius;
	nYPos = nYPos + nRadius;
	iVar1 = nXPos - nRadius;
	nXPos = nXPos + nRadius;
	if (iVar5 < 0) {
		iVar5 = 0;
	}
	if (0x70 < nYPos) {
		nYPos = 0x70;
	}
	if (iVar1 < 0) {
		iVar1 = 0;
	}
	if (0x70 < nXPos) {
		nXPos = 0x70;
	}
	if (iVar1 < nXPos) {
		iVar4 = iVar1 * 0x510;
		do {
			if (iVar5 < nYPos) {
				iVar2 = iVar5 * 0xc + iVar4;
				iVar3 = iVar5;
				do {
					iVar3 = iVar3 + 1;
					(&dung_map[0].dFlags)[iVar2] = (&dung_map[0].dFlags)[iVar2] & 0xbd;
					iVar2 = iVar2 + 0xc;
				} while (iVar3 < nYPos);
			}
			iVar1 = iVar1 + 1;
			iVar4 = iVar4 + 0x510;
		} while (iVar1 < nXPos);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoVision__FiiiUcUc(int nXPos /*$s6*/, int nYPos /*$s7*/, int nRadius /*stack -88*/, unsigned char doautomap /*stack -80*/, int visible /*stack 16*/)
 // line 848, offset 0x80046554
	/* begin block 1 */
		// Start line: 849
		// Start offset: 0x80046554
		// Variables:
	// 		int nCrawlX; // $s0
	// 		int nCrawlY; // $s3
	// 		int nLineLen; // $t1
	// 		int nBlockerFlag; // $s5
	// 		int j; // $t0
	// 		int k; // $s4
	// 		int v; // $v0
	// 		int x1adj; // $a1
	// 		int x2adj; // $a3
	// 		int y1adj; // $a0
	// 		int y2adj; // $a2
	/* end block 1 */
	// End offset: 0x80046A30
	// End Line: 953

	/* begin block 2 */
		// Start line: 1813
	/* end block 2 */
	// End Line: 1814

void DoVision__FiiiUcUc(int nXPos,int nYPos,int nRadius,uchar doautomap,int visible)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	uint x;
	byte *pbVar8;
	uint y;
	int iVar9;
	uchar uVar10;
	uchar *puVar11;
	
	x = 0;
	y = 0;
	if (((uint)nXPos < 0x71) && ((uint)nYPos < 0x71)) {
		if (doautomap != '\0') {
			if (-1 < dung_map[nXPos * 0x6c + nYPos].dFlags) {
				SetAutomapView__Fii(nXPos,nXPos);
			}
			dung_map[nXPos * 0x6c + nYPos].dFlags = dung_map[nXPos * 0x6c + nYPos].dFlags | 0x80;
		}
		if ((char)visible != '\0') {
			dung_map[nXPos * 0x6c + nYPos].dFlags = dung_map[nXPos * 0x6c + nYPos].dFlags | 0x40;
		}
		dung_map[nXPos * 0x6c + nYPos].dFlags = dung_map[nXPos * 0x6c + nYPos].dFlags | 2;
	}
	iVar9 = 0;
	do {
		iVar6 = 0;
		puVar11 = &vCrawlTable;
		do {
			iVar7 = (nRadius - (uint)(&RadiusAdj)[iVar6]) * 2;
			uVar10 = '\0';
			pbVar8 = puVar11;
			if (0 < iVar7) {
				do {
					iVar3 = 0;
					iVar5 = 0;
					iVar2 = 0;
					iVar4 = 0;
					if (iVar9 == 1) {
						x = nXPos - (uint)*pbVar8;
						y = nYPos - (uint)pbVar8[1];
						if (*pbVar8 != 0) {
							bVar1 = x < 0x71;
							if (pbVar8[1] == 0) goto LAB_800467e0;
							iVar2 = 1;
LAB_800467d8:
							iVar5 = 1;
						}
LAB_800467dc:
						bVar1 = x < 0x71;
					}
					else {
						if (iVar9 < 2) {
							bVar1 = x < 0x71;
							if (iVar9 == 0) {
								x = nXPos + (uint)*pbVar8;
								y = nYPos + (uint)pbVar8[1];
								if (*pbVar8 == 0) goto LAB_800467dc;
								bVar1 = x < 0x71;
								if (pbVar8[1] != 0) {
									iVar3 = -1;
									iVar4 = -1;
								}
							}
						}
						else {
							if (iVar9 == 2) {
								x = nXPos + (uint)*pbVar8;
								y = nYPos - (uint)pbVar8[1];
								if (*pbVar8 == 0) goto LAB_800467dc;
								bVar1 = x < 0x71;
								if (pbVar8[1] != 0) {
									iVar3 = -1;
									iVar4 = 1;
								}
							}
							else {
								bVar1 = x < 0x71;
								if (iVar9 == 3) {
									x = nXPos - (uint)*pbVar8;
									y = nYPos + (uint)pbVar8[1];
									if (*pbVar8 == 0) goto LAB_800467dc;
									bVar1 = x < 0x71;
									if (pbVar8[1] != 0) {
										iVar2 = -1;
										goto LAB_800467d8;
									}
								}
							}
						}
					}
LAB_800467e0:
					if ((bVar1) && (y < 0x71)) {
						uVar10 = nBlockTable[(int)dung_map[x * 0x6c + y].dPiece];
						if ((nBlockTable[(int)dung_map[(x + iVar3) * 0x6c + y + iVar2].dPiece] == '\0') ||
							 (nBlockTable[(int)dung_map[(x + iVar5) * 0x6c + y + iVar4].dPiece] == '\0')) {
							if (doautomap != '\0') {
								if (-1 < dung_map[x * 0x6c + y].dFlags) {
									SetAutomapView__Fii(x,y);
									SetAutomapView__Fii(x + 1,y);
								}
								dung_map[x * 0x6c + y].dFlags = dung_map[x * 0x6c + y].dFlags | 0x80;
							}
							if ((char)visible != '\0') {
								dung_map[x * 0x6c + y].dFlags = dung_map[x * 0x6c + y].dFlags | 0x40;
							}
							dung_map[x * 0x6c + y].dFlags = dung_map[x * 0x6c + y].dFlags | 2;
							if ((uVar10 == '\0') && ((int)dung_map[x * 0x6c + y].dTransVal != 0)) {
								(&TransList)[(int)dung_map[x * 0x6c + y].dTransVal] = (void *)0x1;
							}
						}
					}
				} while (((int)(pbVar8 + 2) < (int)(puVar11 + iVar7)) &&
								(pbVar8 = pbVar8 + 2, uVar10 == '\0'));
			}
			iVar6 = iVar6 + 1;
			puVar11 = puVar11 + 0x1e;
		} while (iVar6 < 0x17);
		iVar9 = iVar9 + 1;
		if (3 < iVar9) {
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreeLightTable__Fv()
 // line 957, offset 0x80046a64
	/* begin block 1 */
		// Start line: 958
		// Start offset: 0x80046A64
	/* end block 1 */
	// End offset: 0x80046A64
	// End Line: 958

	/* begin block 2 */
		// Start line: 2053
	/* end block 2 */
	// End Line: 2054

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeLightTable__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitLightTable__Fv()
 // line 964, offset 0x80046a6c
	/* begin block 1 */
		// Start line: 965
		// Start offset: 0x80046A6C
	/* end block 1 */
	// End offset: 0x80046A6C
	// End Line: 965

	/* begin block 2 */
		// Start line: 2067
	/* end block 2 */
	// End Line: 2068

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitLightTable__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakeLightTable__Fv()
 // line 970, offset 0x80046a74
	/* begin block 1 */
		// Start line: 971
		// Start offset: 0x80046A74
	/* end block 1 */
	// End offset: 0x80046A74
	// End Line: 971

	/* begin block 2 */
		// Start line: 2079
	/* end block 2 */
	// End Line: 2080

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MakeLightTable__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitLightMax__Fv()
 // line 1062, offset 0x80046a7c
	/* begin block 1 */
		// Start line: 1063
		// Start offset: 0x80046A7C
	/* end block 1 */
	// End offset: 0x80046A98
	// End Line: 1066

	/* begin block 2 */
		// Start line: 2263
	/* end block 2 */
	// End Line: 2264

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
 // line 1072, offset 0x80046aa0
	/* begin block 1 */
		// Start line: 1073
		// Start offset: 0x80046AA0
		// Variables:
	// 		int i; // $v0
	/* end block 1 */
	// End offset: 0x80046AD4
	// End Line: 1084

	/* begin block 2 */
		// Start line: 2282
	/* end block 2 */
	// End Line: 2283

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitLighting__Fv(void)

{
	int iVar1;
	uchar *puVar2;
	
	iVar1 = 0x27;
	puVar2 = &UCHAR_00h_800c708b;
	numlights = 0;
	lightflag = 0;
	do {
		*puVar2 = (uchar)iVar1;
		iVar1 = iVar1 + -1;
		puVar2 = puVar2 + -1;
	} while (-1 < iVar1);
	set_light_bands__Fv();
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddLight__Fiii(int x /*$a0*/, int y /*$a1*/, int r /*$a2*/)
 // line 1089, offset 0x80046ae4
	/* begin block 1 */
		// Start line: 1090
		// Start offset: 0x80046AE4
		// Variables:
	// 		int lid; // $a3
	/* end block 1 */
	// End offset: 0x80046B70
	// End Line: 1106

	/* begin block 2 */
		// Start line: 2325
	/* end block 2 */
	// End Line: 2326

int AddLight__Fiii(int x,int y,int r)

{
	uint uVar1;
	
	uVar1 = 0xffffffff;
	if ((lightflag == 0) && (uVar1 = 0xffffffff, numlights < 0x28)) {
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
 // line 1110, offset 0x80046b78
	/* begin block 1 */
		// Start line: 1111
		// Start offset: 0x80046B78
	/* end block 1 */
	// End offset: 0x80046BA0
	// End Line: 1115

	/* begin block 2 */
		// Start line: 2365
	/* end block 2 */
	// End Line: 2366

void AddUnLight__Fi(int i)

{
	if ((lightflag == 0) && (i != -1)) {
		LightList[i]._ldel = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChangeLightRadius__Fii(int i /*$a0*/, int r /*$a1*/)
 // line 1121, offset 0x80046ba8
	/* begin block 1 */
		// Start line: 1122
		// Start offset: 0x80046BA8
	/* end block 1 */
	// End offset: 0x80046BCC
	// End Line: 1130

	/* begin block 2 */
		// Start line: 2387
	/* end block 2 */
	// End Line: 2388

void ChangeLightRadius__Fii(int i,int r)

{
	if ((lightflag == 0) && (i != -1)) {
		LightList[i]._lradius = (ushort)r;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChangeLightXY__Fiii(int i /*$a0*/, int x /*$a1*/, int y /*$a2*/)
 // line 1136, offset 0x80046bd4
	/* begin block 1 */
		// Start line: 1137
		// Start offset: 0x80046BD4
	/* end block 1 */
	// End offset: 0x80046C04
	// End Line: 1146

	/* begin block 2 */
		// Start line: 2417
	/* end block 2 */
	// End Line: 2418

void ChangeLightXY__Fiii(int i,int x,int y)

{
	if ((lightflag == 0) && (i != -1)) {
		LightList[i]._lx = (char)x;
		LightList[i]._ly = (char)y;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ light_fix__Fi(int i /*$a0*/)
 // line 1150, offset 0x80046c0c
	/* begin block 1 */
		// Start line: 1151
		// Start offset: 0x80046C0C
	/* end block 1 */
	// End offset: 0x80046C0C
	// End Line: 1151

	/* begin block 2 */
		// Start line: 2450
	/* end block 2 */
	// End Line: 2451

void light_fix__Fi(int i)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChangeLightOff__Fiii(int i /*$a0*/, int x /*$a1*/, int y /*$a2*/)
 // line 1166, offset 0x80046c14
	/* begin block 1 */
		// Start line: 1167
		// Start offset: 0x80046C14
	/* end block 1 */
	// End offset: 0x80046C44
	// End Line: 1176

	/* begin block 2 */
		// Start line: 2477
	/* end block 2 */
	// End Line: 2478

void ChangeLightOff__Fiii(int i,int x,int y)

{
	if ((lightflag == 0) && (i != -1)) {
		LightList[i]._xoff = (char)x;
		LightList[i]._yoff = (char)y;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChangeLight__Fiiii(int i /*$a0*/, int x /*$a1*/, int y /*$a2*/, int r /*$a3*/)
 // line 1183, offset 0x80046c4c
	/* begin block 1 */
		// Start line: 1184
		// Start offset: 0x80046C4C
	/* end block 1 */
	// End offset: 0x80046C88
	// End Line: 1194

	/* begin block 2 */
		// Start line: 2511
	/* end block 2 */
	// End Line: 2512

void ChangeLight__Fiiii(int i,int x,int y,int r)

{
	if ((lightflag == 0) && (i != -1)) {
		LightList[i]._lx = (char)x;
		LightList[i]._ly = (char)y;
		LightList[i]._lradius = (ushort)r;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChangeLightColour__Fii(int i /*$a0*/, int c /*$a1*/)
 // line 1198, offset 0x80046c90
	/* begin block 1 */
		// Start line: 1199
		// Start offset: 0x80046C90
	/* end block 1 */
	// End offset: 0x80046CB8
	// End Line: 1200

	/* begin block 2 */
		// Start line: 2541
	/* end block 2 */
	// End Line: 2542

void ChangeLightColour__Fii(int i,int c)

{
	LightList[i]._lradius = LightList[i]._lradius & 0xf | (ushort)c;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessLightList__Fv()
 // line 1205, offset 0x80046cc0
	/* begin block 1 */
		// Start line: 1206
		// Start offset: 0x80046CC0
		// Variables:
	// 		int i; // $a3
	// 		int j; // $s0
	// 		unsigned char temp; // $a0
	/* end block 1 */
	// End offset: 0x80046DD8
	// End Line: 1264

	/* begin block 2 */
		// Start line: 2558
	/* end block 2 */
	// End Line: 2559

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessLightList__Fv(void)

{
	byte bVar1;
	byte *pbVar2;
	uchar *puVar3;
	uint Lnum;
	int iVar4;
	
	if (lightflag == 0) {
		iVar4 = 0;
		DoUnLight__Fv();
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
					bVar1 = (&LightList[0x27]._yoff)[numlights];
					pbVar2 = (byte *)(&LightList[0x27]._yoff + numlights);
					numlights = numlights + -1;
					*pbVar2 = *puVar3;
					*puVar3 = bVar1;
				}
			} while (iVar4 < numlights);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SavePreLighting__Fv()
 // line 1271, offset 0x80046dec
	/* begin block 1 */
		// Start line: 1272
		// Start offset: 0x80046DEC
	/* end block 1 */
	// End offset: 0x80046DEC
	// End Line: 1272

	/* begin block 2 */
		// Start line: 2717
	/* end block 2 */
	// End Line: 2718

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SavePreLighting__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitVision__Fv()
 // line 1303, offset 0x80046df4
	/* begin block 1 */
		// Start line: 1304
		// Start offset: 0x80046DF4
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x80046E38
	// End Line: 1311

	/* begin block 2 */
		// Start line: 2754
	/* end block 2 */
	// End Line: 2755

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitVision__Fv(void)

{
	int iVar1;
	void **ppvVar2;
	int iVar3;
	
	iVar1 = (int)TransVal;
	numvision = 0;
	dovision = '\0';
	visionid = 1;
	iVar3 = 0;
	if (0 < iVar1) {
		ppvVar2 = &TransList;
		do {
			*ppvVar2 = (void *)0x0;
			iVar3 = iVar3 + 1;
			ppvVar2 = ppvVar2 + 1;
		} while (iVar3 < iVar1);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddVision__FiiiUc(int x /*$a0*/, int y /*$a1*/, int r /*$a2*/, unsigned char mine /*$a3*/)
 // line 1317, offset 0x80046e44
	/* begin block 1 */
		// Start line: 1318
		// Start offset: 0x80046E44
		// Variables:
	// 		int vid; // $t0
	/* end block 1 */
	// End offset: 0x80046F40
	// End Line: 1334

	/* begin block 2 */
		// Start line: 2790
	/* end block 2 */
	// End Line: 2791

int AddVision__FiiiUc(int x,int y,int r,uchar mine)

{
	int iVar1;
	int iVar2;
	char cVar3;
	int iVar4;
	
	iVar4 = 0;
	if (numvision < 0x20) {
		VisionList[numvision]._lx = (char)x;
		VisionList[numvision]._ly = (char)y;
		iVar4 = visionid;
		iVar1 = numvision;
		cVar3 = (char)visionid;
		visionid = visionid + 1;
		VisionList[numvision]._lid = cVar3;
		iVar2 = numvision;
		VisionList[iVar1]._lradius = (ushort)r;
		VisionList[iVar2]._ldel = '\0';
		VisionList[numvision]._lunflag = '\0';
		*(bool *)(numvision * 0xe + -0x7ff38f68) = mine != '\0';
		dovision = '\x01';
		numvision = numvision + 1;
	}
	return iVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChangeVisionRadius__Fii(int id /*$a0*/, int r /*$a1*/)
 // line 1356, offset 0x80046f48
	/* begin block 1 */
		// Start line: 1357
		// Start offset: 0x80046F48
		// Variables:
	// 		int i; // $t0
	/* end block 1 */
	// End offset: 0x80046FF0
	// End Line: 1370

	/* begin block 2 */
		// Start line: 2870
	/* end block 2 */
	// End Line: 2871

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
// void /*$ra*/ ChangeVisionXY__Fiii(int id /*$a0*/, int x /*$a1*/, int y /*$a2*/)
 // line 1374, offset 0x80046ffc
	/* begin block 1 */
		// Start line: 1375
		// Start offset: 0x80046FFC
		// Variables:
	// 		int i; // $t2
	/* end block 1 */
	// End offset: 0x800470A8
	// End Line: 1389

	/* begin block 2 */
		// Start line: 2908
	/* end block 2 */
	// End Line: 2909

void ChangeVisionXY__Fiii(int id,int x,int y)

{
	char cVar1;
	int iVar2;
	char *pcVar3;
	LightListStruct *pLVar4;
	int iVar5;
	
	iVar5 = 0;
	if (0 < numvision) {
		pcVar3 = &VisionList[0]._ly;
		pLVar4 = VisionList;
		iVar2 = 0;
		do {
			if ((int)(&VisionList[0]._lid)[iVar2] == id) {
				(&VisionList[0]._lunflag)[iVar2] = '\x01';
				(&VisionList[0]._lunx)[iVar2] = pLVar4->_lx;
				cVar1 = *pcVar3;
				(&VisionList[0]._lunr)[iVar2] = (char)*(undefined2 *)((int)&VisionList[0]._lradius + iVar2);
				(&VisionList[0]._luny)[iVar2] = cVar1;
				pLVar4->_lx = (char)x;
				*pcVar3 = (char)y;
				dovision = '\x01';
			}
			pcVar3 = pcVar3 + 0xe;
			pLVar4 = pLVar4 + 1;
			iVar5 = iVar5 + 1;
			iVar2 = iVar2 + 0xe;
		} while (iVar5 < numvision);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessVisionList__Fv()
 // line 1417, offset 0x800470b4
	/* begin block 1 */
		// Start line: 1418
		// Start offset: 0x800470B4
		// Variables:
	// 		int i; // $s1
	// 		unsigned char delflag; // $a0
	/* end block 1 */
	// End offset: 0x800472F8
	// End Line: 1447

	/* begin block 2 */
		// Start line: 3001
	/* end block 2 */
	// End Line: 3002

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessVisionList__Fv(void)

{
	undefined2 uVar1;
	bool bVar2;
	void **ppvVar3;
	int iVar4;
	undefined4 uVar5;
	undefined4 uVar6;
	uint visible;
	LightListStruct *pLVar7;
	int iVar8;
	int iVar9;
	uchar *puVar10;
	
	if (dovision != '\0') {
		iVar9 = 0;
		if (0 < numvision) {
			puVar10 = &VisionList[0]._lunflag;
			iVar8 = 0;
			do {
				if ((&VisionList[0]._ldel)[iVar8] != '\0') {
					DoUnVision__Fiii((int)(&VisionList[0]._lx)[iVar8],(int)(&VisionList[0]._ly)[iVar8],
													 (uint)*(ushort *)((int)&VisionList[0]._lradius + iVar8));
				}
				if (*puVar10 != '\0') {
					DoUnVision__Fiii((int)(&VisionList[0]._lunx)[iVar8],(int)(&VisionList[0]._luny)[iVar8],
													 (int)(&VisionList[0]._lunr)[iVar8]);
					*puVar10 = '\0';
				}
				puVar10 = puVar10 + 0xe;
				iVar9 = iVar9 + 1;
				iVar8 = iVar8 + 0xe;
			} while (iVar9 < numvision);
		}
		iVar9 = (int)TransVal;
		iVar8 = 0;
		if (0 < iVar9) {
			ppvVar3 = &TransList;
			do {
				*ppvVar3 = (void *)0x0;
				iVar8 = iVar8 + 1;
				ppvVar3 = ppvVar3 + 1;
			} while (iVar8 < iVar9);
		}
		iVar9 = 0;
		if (0 < numvision) {
			iVar8 = 0;
			do {
				if ((&VisionList[0]._ldel)[iVar8] == '\0') {
					visible = (uint)(&VisionList[0]._lflags)[iVar8] & 1;
					DoVision__FiiiUcUc((int)(&VisionList[0]._lx)[iVar8],(int)(&VisionList[0]._ly)[iVar8],
														 (uint)*(ushort *)((int)&VisionList[0]._lradius + iVar8),(uchar)visible,
														 visible);
				}
				iVar9 = iVar9 + 1;
				iVar8 = iVar8 + 0xe;
			} while (iVar9 < numvision);
		}
		do {
			bVar2 = false;
			iVar9 = 0;
			if (0 < numvision) {
				iVar8 = 0;
				pLVar7 = VisionList;
				do {
					iVar4 = numvision + -1;
					if ((&VisionList[0]._ldel)[iVar8] != '\0') {
						numvision = iVar4;
						if ((0 < iVar4) && (numvision = iVar4, iVar9 != iVar4)) {
							uVar5 = *(undefined4 *)&VisionList[iVar4]._lid;
							uVar6 = *(undefined4 *)&VisionList[iVar4]._luny;
							uVar1 = *(undefined2 *)&VisionList[iVar4]._lflags;
							numvision = iVar4;
							*(undefined4 *)pLVar7 = *(undefined4 *)(VisionList + iVar4);
							*(undefined4 *)&pLVar7->_lid = uVar5;
							*(undefined4 *)&pLVar7->_luny = uVar6;
							*(undefined2 *)&pLVar7->_lflags = uVar1;
						}
						bVar2 = true;
					}
					pLVar7 = pLVar7 + 1;
					iVar9 = iVar9 + 1;
					iVar8 = iVar8 + 0xe;
				} while (iVar9 < numvision);
			}
		} while (bVar2);
	}
	dovision = '\0';
	return;
}





