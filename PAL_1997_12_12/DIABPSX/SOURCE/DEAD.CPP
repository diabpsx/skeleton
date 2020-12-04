#include "THISDUST.H"
#include "DEAD.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitDead__Fv()
 // line 40, offset 0x800355b0
	/* begin block 1 */
		// Start line: 41
		// Start offset: 0x800355B0
		// Variables:
	// 		int nd; // $a2
	// 		int i; // $a3
	// 		int mi; // $v0
	// 		int mtypes[200]; // stack offset -816
	/* end block 1 */
	// End offset: 0x800357A0
	// End Line: 91

	/* begin block 2 */
		// Start line: 80
	/* end block 2 */
	// End Line: 81

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitDead__Fv(void)

{
	char cVar1;
	long lVar2;
	undefined4 *puVar3;
	int iVar4;
	int iVar5;
	byte *pbVar6;
	int iVar7;
	int iVar8;
	short *psVar9;
	int aiStack816 [199];
	undefined4 local_14 [5];
	
	iVar7 = 199;
	puVar3 = local_14;
	do {
		*puVar3 = 0;
		iVar7 = iVar7 + -1;
		puVar3 = puVar3 + -1;
	} while (-1 < iVar7);
	iVar7 = 0;
	iVar8 = 0;
	if (0 < nummtypes) {
		pbVar6 = &Monsters[0].mtype;
		iVar5 = 0;
		do {
			if (aiStack816[(uint)*pbVar6] == 0) {
				dead[iVar7]._deadtype = iVar8;
				cVar1 = (&Monsters[0].Anims[4].Frames)[iVar5];
				dead[iVar7]._deadtrans = '\0';
				dead[iVar7]._deadFrame = (int)cVar1;
				iVar7 = iVar7 + 1;
				(&Monsters[0].mdeadval)[iVar5] = (char)iVar7;
				aiStack816[(uint)*pbVar6] = iVar7;
			}
			pbVar6 = pbVar6 + 0x1c;
			iVar8 = iVar8 + 1;
			iVar5 = iVar5 + 0x1c;
		} while (iVar8 < nummtypes);
	}
	iVar8 = iVar7 + 1;
	stonendx = iVar7 + 2;
	dead[iVar7]._deadFrame = 8;
	dead[iVar7]._deadtrans = '\0';
	spurtndx = iVar8;
	dead[iVar8]._deadtrans = '\0';
	lVar2 = nummonsters;
	dead[iVar8]._deadFrame = 0xc;
	iVar7 = 0;
	if (0 < lVar2) {
		psVar9 = monstactive;
		iVar8 = stonendx;
		do {
			iVar4 = (int)*psVar9;
			iVar5 = iVar8;
			if (monster[iVar4]._uniqtype != '\0') {
				iVar5 = iVar8 + 1;
				dead[iVar8]._deadFrame = (int)(monster[iVar4].MType)->Anims[4].Frames;
				dead[iVar8]._deadtrans = monster[iVar4]._uniqtrans + '\x04';
				monster[iVar4]._udeadval = (char)iVar5;
			}
			iVar7 = iVar7 + 1;
			psVar9 = psVar9 + 1;
			iVar8 = iVar5;
		} while (iVar7 < nummonsters);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddDead__Fiici(int dx /*$a0*/, int dy /*$a1*/, char dv /*$a2*/, int ddir /*$a3*/)
 // line 98, offset 0x800357ac
	/* begin block 1 */
		// Start line: 99
		// Start offset: 0x800357AC
		// Variables:
	// 		char tdv; // $a2
	/* end block 1 */
	// End offset: 0x800357EC
	// End Line: 103

	/* begin block 2 */
		// Start line: 238
	/* end block 2 */
	// End Line: 239

void AddDead__Fiici(int dx,int dy,char dv,int ddir)

{
	dung_map[dx * 0x6c + dy].dDead = dv & 0x1fU | (byte)((ddir & 7U) << 5);
	return;
}





