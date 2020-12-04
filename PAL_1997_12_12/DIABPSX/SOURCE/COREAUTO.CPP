#include "THISDUST.H"
#include "COREAUTO.H"


// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetAutomapType__FiiUc(int x /*$a2*/, int y /*$a1*/, unsigned char view /*$a2*/)
 // line 110, offset 0x80079a84
	/* begin block 1 */
		// Start line: 111
		// Start offset: 0x80079A84
		// Variables:
	// 		unsigned short rv; // $a1
	// 		unsigned char f; // $a0
	/* end block 1 */
	// End offset: 0x80079D78
	// End Line: 199

	/* begin block 2 */
		// Start line: 220
	/* end block 2 */
	// End Line: 221

ushort GetAutomapType__FiiUc(int x,int y,uchar view)

{
	ushort uVar1;
	ushort uVar2;
	bool bVar3;
	bool bVar4;
	
	AMLRWallFlag = '\0';
	AMLLWallFlag = '\0';
	AMRWallFlag = '\0';
	bVar4 = false;
	AMLWallFlag = '\0';
	bVar3 = false;
	AMColumnFlag = '\0';
	AMLArchFlag = '\0';
	AMLGrateFlag = '\0';
	AMLDoorFlag = '\0';
	AMRArchFlag = '\0';
	AMRGrateFlag = '\0';
	AMRDoorFlag = '\0';
	if (((0x27 < (uint)x) || (0x27 < (uint)y)) ||
		 (((int)(uint)(&automapview)[y + (x >> 3) * 0x28] >> (x & 7U) & 1U) == 0)) {
		AMLWallFlag = '\0';
		AMRWallFlag = '\0';
		AMLLWallFlag = '\0';
		AMLRWallFlag = '\0';
		AMDirtFlag = '\0';
		AMColumnFlag = '\0';
		AMStairFlag = '\0';
		AMLDoorFlag = '\0';
		AMLGrateFlag = '\0';
		AMLArchFlag = '\0';
		AMRDoorFlag = '\0';
		AMRGrateFlag = '\0';
		AMRArchFlag = '\0';
		return 0;
	}
	uVar1 = automaptype[(uint)(&dungeon)[x * 0x30 + y]];
	uVar2 = uVar1 >> 8;
	switch((uint)uVar1 & 0xf) {
	case 1:
		AMColumnFlag = '\x01';
		break;
	case 2:
	case 5:
		AMLWallFlag = '\x01';
		bVar3 = true;
		break;
	case 3:
	case 6:
		AMRWallFlag = '\x01';
		bVar4 = true;
		break;
	case 4:
		AMLWallFlag = '\x01';
		bVar3 = true;
		AMRWallFlag = '\x01';
		bVar4 = true;
		break;
	case 8:
		AMLWallFlag = '\x01';
		bVar3 = true;
		AMLLWallFlag = '\x01';
		break;
	case 9:
		AMRWallFlag = '\x01';
		bVar4 = true;
		goto LAB_80079c84;
	case 10:
		AMLLWallFlag = '\x01';
		break;
	case 0xb:
		goto LAB_80079c84;
	case 0xc:
		AMLLWallFlag = '\x01';
LAB_80079c84:
		AMLRWallFlag = '\x01';
	}
	if (bVar3) {
		if ((uVar2 & 1) == 0) {
			if ((uVar2 & 0x10) == 0) {
				if ((uVar2 & 4) != 0) {
					AMLWallFlag = '\0';
					AMLArchFlag = '\x01';
				}
			}
			else {
				AMLWallFlag = '\0';
				AMLGrateFlag = '\x01';
			}
		}
		else {
			AMLWallFlag = '\0';
			AMLDoorFlag = '\x01';
		}
	}
	if (bVar4) {
		if ((uVar2 & 2) == 0) {
			if ((uVar2 & 0x20) == 0) {
				if ((uVar2 & 8) != 0) {
					AMRWallFlag = '\0';
					AMRArchFlag = '\x01';
				}
			}
			else {
				AMRWallFlag = '\0';
				AMRGrateFlag = '\x01';
			}
		}
		else {
			AMRWallFlag = '\0';
			AMRDoorFlag = '\x01';
		}
	}
	AMDirtFlag = (uVar2 & 0x40) != 0;
	AMStairFlag = (uVar2 & 0x80) != 0;
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetAutomapView__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 203, offset 0x80079d80
	/* begin block 1 */
		// Start line: 204
		// Start offset: 0x80079D80
		// Variables:
	// 		int xx; // $s0
	// 		int yy; // $s1
	// 		unsigned short s; // $v0
	// 		unsigned short d; // $v1
	/* end block 1 */
	// End offset: 0x8007A1B0
	// End Line: 274

	/* begin block 2 */
		// Start line: 411
	/* end block 2 */
	// End Line: 412

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
LAB_8007a030:
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
LAB_8007a164:
			uVar1 = GetAutomapType__FiiUc(x_00,y_00 - 1,'\0');
joined_r0x80079fac:
			if ((uVar1 & 0x4000) == 0) {
				return;
			}
			(&automapview + y_00 + iVar2 * 0x28)[-1] =
					 (&automapview + y_00 + iVar2 * 0x28)[-1] | (byte)(1 << (x_00 & 7));
			return;
		}
		goto LAB_8007a104;
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
			goto joined_r0x80079fac;
		}
		uVar1 = GetAutomapType__FiiUc(x_00,y_00 + 1,'\0');
		if (uVar1 == 0x4007) {
			(&automapview + y_00 + iVar2 * 0x28)[1] =
					 (&automapview + y_00 + iVar2 * 0x28)[1] | (byte)(1 << (x_00 & 7));
		}
		uVar1 = GetAutomapType__FiiUc(x_00 + 1,y_00,'\0');
		goto joined_r0x80079ee0;
	case 5:
		if ((uVar1 & 0x4000) != 0) {
			uVar1 = GetAutomapType__FiiUc(x_00,y_00 - 1,'\0');
			if ((uVar1 & 0x4000) != 0) {
				(&automapview + y_00 + iVar2 * 0x28)[-1] =
						 (&automapview + y_00 + iVar2 * 0x28)[-1] | (byte)(1 << (x_00 & 7));
			}
			goto LAB_8007a030;
		}
		uVar1 = GetAutomapType__FiiUc(x_00 - 1,y_00,'\0');
		break;
	case 6:
		x_01 = x_00 - 1;
		if ((uVar1 & 0x4000) == 0) goto LAB_8007a164;
		uVar1 = GetAutomapType__FiiUc(x_01,y_00,'\0');
		if ((uVar1 & 0x4000) != 0) {
			(&automapview)[y_00 + ((int)x_01 >> 3) * 0x28] =
					 (&automapview)[y_00 + ((int)x_01 >> 3) * 0x28] | (byte)(1 << (x_01 & 7));
		}
LAB_8007a104:
		uVar1 = GetAutomapType__FiiUc(x_00 + 1,y_00,'\0');
joined_r0x80079ee0:
		x_00 = x_00 + 1;
		if (uVar1 != 0x4007) {
			return;
		}
		goto LAB_8007a128;
	}
	x_00 = x_00 - 1;
	if ((uVar1 & 0x4000) != 0) {
LAB_8007a128:
		(&automapview)[y_00 + ((int)x_00 >> 3) * 0x28] =
				 (&automapview)[y_00 + ((int)x_00 >> 3) * 0x28] | (byte)(1 << (x_00 & 7));
	}
	return;
}





