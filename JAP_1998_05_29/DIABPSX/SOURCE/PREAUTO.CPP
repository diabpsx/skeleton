#include "THISDUST.H"
#include "PREAUTO.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitAutomap__Fv()
 // line 140, offset 0x8015f4c4
	/* begin block 1 */
		// Start line: 141
		// Start offset: 0x8015F4C4
		// Variables:
	// 		int i; // $a0
	// 		int j; // $a1
	// 		unsigned long dwTiles; // $a2
	// 		unsigned char *pTmp; // $s0
	// 		struct FileIO *FIO; // $s2
	// 		int x; // $v1
	// 		int y; // $a1
	// 		char *Name; // $s0

		/* begin block 1.1 */
			// Start line: 178
			// Start offset: 0x8015F57C

			/* begin block 1.1.1 */
				// Start line: 179
				// Start offset: 0x8015F584
				// Variables:
			// 		int Len; // $s1
			// 		unsigned char b1; // $v1
			// 		unsigned char b2; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 182
					// Start offset: 0x8015F5B0
					// Variables:
				// 		unsigned long d; // $a1
				/* end block 1.1.1.1 */
				// End offset: 0x8015F60C
				// End Line: 199
			/* end block 1.1.1 */
			// End offset: 0x8015F6A0
			// End Line: 215
		/* end block 1.1 */
		// End offset: 0x8015F6A0
		// End Line: 215
	/* end block 1 */
	// End offset: 0x8015F6A0
	// End Line: 215

	/* begin block 2 */
		// Start line: 280
	/* end block 2 */
	// End Line: 281

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitAutomap__Fv(void)

{
	byte bVar1;
	FileIO *this;
	ushort *puVar2;
	uint uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	uint uVar7;
	char *Name;
	byte *pbVar8;
	uchar *puVar9;
	
	this = SYSI_GetFs__Fv();
	iVar4 = 0x1ff;
	puVar2 = &USHORT_8010dbaa;
	do {
		*puVar2 = 0;
		iVar4 = iVar4 + -1;
		puVar2 = puVar2 + -1;
	} while (-1 < iVar4);
	if (leveltype == '\x02') {
		Name = (char *)0x8011c1e8;
	}
	else {
		if (leveltype < 3) {
			if (leveltype != '\x01') {
				return;
			}
			Name = "L1.Amp";
		}
		else {
			if (leveltype == '\x03') {
				Name = (char *)0x8011c1f0;
			}
			else {
				if (leveltype != '\x04') {
					return;
				}
				Name = (char *)0x8011c1f8;
			}
		}
	}
	if (Name != (char *)0x0) {
		uVar3 = FileLen__6FileIOPCc(this,Name);
		if (0x200 < (int)uVar3) {
			DBG_Error((char *)0x0,"source/PREAUTO.cpp",0xb5);
		}
		puVar9 = &AmpBuffer;
		ReadAtAddr__6FileIOPCcPUci(this,Name,&AmpBuffer,-1);
		uVar7 = 1;
		if (uVar3 >> 1 != 0) {
			puVar2 = &USHORT_8010d7ae;
			do {
				bVar1 = *puVar9;
				pbVar8 = puVar9 + 1;
				puVar9 = puVar9 + 2;
				uVar7 = uVar7 + 1;
				*puVar2 = (ushort)bVar1 + (ushort)*pbVar8 * 0x100;
				puVar2 = puVar2 + 1;
			} while (uVar7 <= uVar3 >> 1);
		}
		iVar4 = 0;
		do {
			iVar5 = 0;
			puVar9 = &automapview;
			do {
				puVar9[iVar4] = '\0';
				iVar5 = iVar5 + 1;
				puVar9 = puVar9 + 0x28;
			} while (iVar5 < 5);
			iVar4 = iVar4 + 1;
		} while (iVar4 < 0x28);
		iVar4 = 0;
		do {
			iVar6 = 0;
			iVar5 = iVar4 << 3;
			do {
				iVar6 = iVar6 + 1;
				(&dung_map[0].dFlags)[iVar5] = (&dung_map[0].dFlags)[iVar5] & 0x7f;
				iVar5 = iVar5 + 0x380;
			} while (iVar6 < 0x60);
			iVar4 = iVar4 + 1;
		} while (iVar4 < 0x60);
		AutoMapXOfs = 0;
		AutoMapYOfs = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitAutomapOnce__Fv()
 // line 219, offset 0x8015f6bc
	/* begin block 1 */
		// Start line: 220
		// Start offset: 0x8015F6BC
	/* end block 1 */
	// End offset: 0x8015F6D8
	// End Line: 224

	/* begin block 2 */
		// Start line: 439
	/* end block 2 */
	// End Line: 440

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitAutomapOnce__Fv(void)

{
	automapflag = '\0';
	AutoMapTData = GM_UseTexData__Fi(0);
	return;
}





