#include "THISDUST.H"
#include "DEAD.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitDead__Fv()
 // line 40, offset 0x80037d88
	/* begin block 1 */
		// Start line: 41
		// Start offset: 0x80037D88
		// Variables:
	// 		int nd; // $a2
	// 		int i; // $a3
	// 		int mi; // $v0
	// 		int mtypes[190]; // stack offset -776
	/* end block 1 */
	// End offset: 0x80037F80
	// End Line: 92

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
	MonsterStruct *pMVar9;
	int aiStack776 [189];
	undefined4 local_14 [5];
	
	iVar7 = 0xbd;
	puVar3 = local_14;
	do {
		*puVar3 = 0;
		iVar7 = iVar7 + -1;
		puVar3 = puVar3 + -1;
	} while (-1 < iVar7);
	iVar7 = 0;
	iVar8 = 0;
	if (0 < nummtypes) {
		pbVar6 = (byte *)&monster[0xc5]._mMTidx;
		iVar5 = 0;
		do {
			if (aiStack776[(uint)*pbVar6] == 0) {
				dead[iVar7]._deadtype = iVar8;
				cVar1 = *(char *)((int)&monster[0xc5]._mFlags + iVar5);
				dead[iVar7]._deadtrans = '\0';
				dead[iVar7]._deadFrame = (int)cVar1;
				iVar7 = iVar7 + 1;
				(&monster[0xc5]._moldx)[iVar5] = (char)iVar7;
				aiStack776[(uint)*pbVar6] = iVar7;
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
		pMVar9 = monster + 0xbe;
		iVar8 = stonendx;
		do {
			iVar4 = (int)*(short *)&pMVar9->mtalkmsg;
			iVar5 = iVar8;
			if (monster[iVar4]._uniqtype != '\0') {
				iVar5 = iVar8 + 1;
				dead[iVar8]._deadFrame = (int)(monster[iVar4].MType)->Anims[4].Frames;
				dead[iVar8]._deadtrans = monster[iVar4]._uniqtype + '\x04';
				monster[iVar4]._udeadval = (char)iVar5;
			}
			iVar7 = iVar7 + 1;
			pMVar9 = (MonsterStruct *)((int)&pMVar9->mtalkmsg + 2);
			iVar8 = iVar5;
		} while (iVar7 < nummonsters);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddDead__Fiici(int dx /*$a0*/, int dy /*$a1*/, char dv /*$a2*/, int ddir /*$a3*/)
 // line 99, offset 0x80037f8c
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x80037F8C
	/* end block 1 */
	// End offset: 0x80037F9C
	// End Line: 104

	/* begin block 2 */
		// Start line: 238
	/* end block 2 */
	// End Line: 239

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddDead__Fiici(int dx,int dy,char dv,int ddir)

{
	SetdDead__FiiUc(dx,dy,dv & 0x1f);
	return;
}





