#include "THISDUST.H"
#include "COREAUTO.H"


// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetAutomapType__FiiUc(int x /*$a2*/, int y /*$a1*/, unsigned char view /*$a2*/)
 // line 158, offset 0x800809d4
	/* begin block 1 */
		// Start line: 159
		// Start offset: 0x800809D4
		// Variables:
	// 		unsigned short rv; // $a1
	// 		unsigned char f; // $a0
	// 		unsigned char AMLWallFlag; // $a3
	// 		unsigned char AMRWallFlag; // $t0
	/* end block 1 */
	// End offset: 0x80080AA0
	// End Line: 237

	/* begin block 2 */
		// Start line: 316
	/* end block 2 */
	// End Line: 317

ushort GetAutomapType__FiiUc(int x,int y,uchar view)

{
	ushort uVar1;
	
	if (((int)(uint)(&automapview)[y + (x >> 3) * 0x28] >> (x & 7U) & 1U) == 0) {
		uVar1 = 0;
	}
	else {
		uVar1 = automaptype[(uint)dungeon[x * 0x30 + y]];
		switch((uint)uVar1 & 0xf) {
		case 2:
		case 5:
		case 8:
			break;
		case 4:
		}
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetAutomapView__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 242, offset 0x80080aa8
	/* begin block 1 */
		// Start line: 243
		// Start offset: 0x80080AA8
		// Variables:
	// 		int xx; // $s0
	// 		int yy; // $s1
	// 		unsigned short s; // $v0
	// 		unsigned short d; // $v1
	/* end block 1 */
	// End offset: 0x80080ED8
	// End Line: 313

	/* begin block 2 */
		// Start line: 484
	/* end block 2 */
	// End Line: 485

void SetAutomapView__Fii(int x,int y)

{
	ushort uVar1;
	int iVar2;
	uint x_00;
	uint y_00;
	uint x_01;
	
	x_00 = x + -0x10 >> 1;
	y_00 = y + -0x10 >> 1;
	if (0x27 < x_00) {
		return;
	}
	if (0x27 < y_00) {
		return;
	}
	(&automapview)[y_00 + (x + -0x10 >> 4) * 0x28] =
			 (&automapview)[y_00 + (x + -0x10 >> 4) * 0x28] | (byte)(1 << (x_00 & 7));
	uVar1 = GetAutomapType__FiiUc(x_00,y_00,'\0');
	if (4 < ((uint)uVar1 & 0xf) - 2) {
		return;
	}
	iVar2 = (int)x_00 >> 3;
	switch((uint)uVar1 & 0xf) {
	case 2:
		if ((uVar1 & 0x4000) != 0) {
LAB_80080d58:
			uVar1 = GetAutomapType__FiiUc(x_00,y_00 + 1,'\0');
			if (uVar1 != 0x4007) {
				return;
			}
			(&automapview + y_00 + iVar2 * 0x28)[1] =
					 (&automapview + y_00 + iVar2 * 0x28)[1] | (byte)(1 << (x_00 & 7));
			return;
		}
		uVar1 = GetAutomapType__FiiUc(x_00 - 1,y_00,'\0');
		break;
	case 3:
		if ((uVar1 & 0x4000) == 0) {
LAB_80080e8c:
			uVar1 = GetAutomapType__FiiUc(x_00,y_00 - 1,'\0');
joined_r0x80080cd4:
			if ((uVar1 & 0x4000) == 0) {
				return;
			}
			(&automapview + y_00 + iVar2 * 0x28)[-1] =
					 (&automapview + y_00 + iVar2 * 0x28)[-1] | (byte)(1 << (x_00 & 7));
			return;
		}
		goto LAB_80080e2c;
	case 4:
		if ((uVar1 & 0x4000) == 0) {
			x_01 = x_00 - 1;
			uVar1 = GetAutomapType__FiiUc(x_01,y_00,'\0');
			if ((uVar1 & 0x4000) != 0) {
				(&automapview)[y_00 + ((int)x_01 >> 3) * 0x28] =
						 (&automapview)[y_00 + ((int)x_01 >> 3) * 0x28] | (byte)(1 << (x_01 & 7));
			}
			uVar1 = GetAutomapType__FiiUc(x_00,y_00 - 1,'\0');
			if ((uVar1 & 0x4000) != 0) {
				(&automapview + y_00 + iVar2 * 0x28)[-1] =
						 (&automapview + y_00 + iVar2 * 0x28)[-1] | (byte)(1 << (x_00 & 7));
			}
			uVar1 = GetAutomapType__FiiUc(x_01,y_00 - 1,'\0');
			x_00 = x_01;
			iVar2 = (int)x_01 >> 3;
			goto joined_r0x80080cd4;
		}
		uVar1 = GetAutomapType__FiiUc(x_00,y_00 + 1,'\0');
		if (uVar1 == 0x4007) {
			(&automapview + y_00 + iVar2 * 0x28)[1] =
					 (&automapview + y_00 + iVar2 * 0x28)[1] | (byte)(1 << (x_00 & 7));
		}
		uVar1 = GetAutomapType__FiiUc(x_00 + 1,y_00,'\0');
		goto joined_r0x80080c08;
	case 5:
		if ((uVar1 & 0x4000) != 0) {
			uVar1 = GetAutomapType__FiiUc(x_00,y_00 - 1,'\0');
			if ((uVar1 & 0x4000) != 0) {
				(&automapview + y_00 + iVar2 * 0x28)[-1] =
						 (&automapview + y_00 + iVar2 * 0x28)[-1] | (byte)(1 << (x_00 & 7));
			}
			goto LAB_80080d58;
		}
		uVar1 = GetAutomapType__FiiUc(x_00 - 1,y_00,'\0');
		break;
	case 6:
		x_01 = x_00 - 1;
		if ((uVar1 & 0x4000) == 0) goto LAB_80080e8c;
		uVar1 = GetAutomapType__FiiUc(x_01,y_00,'\0');
		if ((uVar1 & 0x4000) != 0) {
			(&automapview)[y_00 + ((int)x_01 >> 3) * 0x28] =
					 (&automapview)[y_00 + ((int)x_01 >> 3) * 0x28] | (byte)(1 << (x_01 & 7));
		}
LAB_80080e2c:
		uVar1 = GetAutomapType__FiiUc(x_00 + 1,y_00,'\0');
joined_r0x80080c08:
		x_00 = x_00 + 1;
		if (uVar1 != 0x4007) {
			return;
		}
		goto LAB_80080e50;
	}
	x_00 = x_00 - 1;
	if ((uVar1 & 0x4000) != 0) {
LAB_80080e50:
		(&automapview)[y_00 + ((int)x_00 >> 3) * 0x28] =
				 (&automapview)[y_00 + ((int)x_00 >> 3) * 0x28] | (byte)(1 << (x_00 & 7));
	}
	return;
}





