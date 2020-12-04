#include "THISDUST.H"
#include "LZNP.H"


// decompiled code
// original method signature: 
// int /*$ra*/ LZNP_Decode__FPUcT0(unsigned char *in /*$a0*/, unsigned char *out /*$a1*/)
 // line 42, offset 0x80082ae0
	/* begin block 1 */
		// Start line: 43
		// Start offset: 0x80082AE0
		// Variables:
	// 		int i; // $a2
	// 		int j; // $v1
	// 		unsigned int flags; // $a3
	// 		unsigned char *OriginalOut; // $t0
	/* end block 1 */
	// End offset: 0x80082BAC
	// End Line: 91

	/* begin block 2 */
		// Start line: 87
	/* end block 2 */
	// End Line: 88

int LZNP_Decode__FPUcT0(uchar *in,uchar *out)

{
	byte bVar1;
	uint uVar2;
	int iVar3;
	byte *pbVar4;
	byte *pbVar5;
	uint uVar6;
	uint uVar7;
	
	uVar7 = 0;
	pbVar5 = out;
	do {
		while( true ) {
			uVar7 = uVar7 >> 1;
			pbVar4 = in;
			uVar2 = uVar7;
			if ((uVar7 & 0xff00) == 0) {
				uVar2 = (uint)*in;
				pbVar4 = in + 1;
				uVar7 = uVar2 | 0xff00;
			}
			if ((uVar2 & 1) != 0) break;
			in = pbVar4 + 1;
			*pbVar5 = *pbVar4;
			pbVar5 = pbVar5 + 1;
		}
		uVar2 = (uint)*pbVar4;
		in = pbVar4 + 1;
		if (*pbVar4 < 0x60) {
			uVar6 = (uVar2 & 0xf) << 8 | (uint)*in;
			in = pbVar4 + 2;
			if (uVar6 == 0) {
				return (int)(pbVar5 + -(int)out);
			}
			iVar3 = ((int)uVar2 >> 4) + 3;
			if ((int)uVar2 >> 4 == 5) {
				bVar1 = *in;
				in = pbVar4 + 3;
				iVar3 = (uint)bVar1 + 8;
			}
		}
		else {
			uVar6 = 0x100 - uVar2;
			iVar3 = 2;
		}
		if (iVar3 != 0) {
			pbVar4 = pbVar5 + -uVar6;
			do {
				bVar1 = *pbVar4;
				pbVar4 = pbVar4 + 1;
				iVar3 = iVar3 + -1;
				*pbVar5 = bVar1;
				pbVar5 = pbVar5 + 1;
			} while (iVar3 != 0);
		}
	} while( true );
}





