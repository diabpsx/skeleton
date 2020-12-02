#include "THISDUST.H"
#include "PAK.H"


// decompiled code
// original method signature: 
// void /*$ra*/ fputc__5blockUc(struct block *this /*$a0*/, unsigned char Val /*$a1*/)
 // line 55, offset 0x800ae364
	/* begin block 1 */
		// Start line: 56
		// Start offset: 0x800AE364
	/* end block 1 */
	// End offset: 0x800AE384
	// End Line: 59

	/* begin block 2 */
		// Start line: 111
	/* end block 2 */
	// End Line: 112

/* WARNING: Unknown calling convention yet parameter storage is locked */

void fputc__5blockUc(block *this,uchar Val)

{
	*this->Dest = Val;
	this->Dest = this->Dest + 1;
	this->outsize = this->outsize + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ writeblock__FP5block(struct block *theblock /*$s0*/)
 // line 85, offset 0x800adf9c
	/* begin block 1 */
		// Start line: 86
		// Start offset: 0x800ADF9C

		/* begin block 1.1 */
			// Start line: 86
			// Start offset: 0x800ADF9C

			/* begin block 1.1.1 */
				// Start line: 93
				// Start offset: 0x800ADFF0

				/* begin block 1.1.1.1 */
					// Start line: 93
					// Start offset: 0x800ADFF0

					/* begin block 1.1.1.1.1 */
						// Start line: 99
						// Start offset: 0x800AE010

						/* begin block 1.1.1.1.1.1 */
							// Start line: 100
							// Start offset: 0x800AE010
							// Variables:
						// 		int i; // $s2
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800AE058
						// End Line: 103
					/* end block 1.1.1.1.1 */
					// End offset: 0x800AE058
					// End Line: 103
				/* end block 1.1.1.1 */
				// End offset: 0x800AE058
				// End Line: 103
			/* end block 1.1.1 */
			// End offset: 0x800AE058
			// End Line: 103
		/* end block 1.1 */
		// End offset: 0x800AE058
		// End Line: 103
	/* end block 1 */
	// End offset: 0x800AE068
	// End Line: 109

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

/* WARNING: Unknown calling convention yet parameter storage is locked */

void writeblock__FP5block(block *theblock)

{
	block *pbVar1;
	int iVar2;
	
	if (theblock->blockrep == '\0') {
		fputc__5blockUc(theblock,(byte)theblock->blocksize & 0x7f);
		iVar2 = 0;
		pbVar1 = theblock;
		if (-1 < theblock->blocksize) {
			do {
				fputc__5blockUc(theblock,*(uchar *)pbVar1->data);
				iVar2 = iVar2 + 1;
				pbVar1 = (block *)(pbVar1->data + 1);
			} while (iVar2 <= theblock->blocksize);
		}
	}
	else {
		if (theblock->blocksize == 0) {
			fputc__5blockUc(theblock,-0x80);
			fputc__5blockUc(theblock,'\0');
		}
		else {
			fputc__5blockUc(theblock,*(uchar *)&theblock->blockoffset);
			fputc__5blockUc(theblock,*(uchar *)&theblock->blocksize);
		}
	}
	theblock->blockrep = '\0';
	theblock->blockoffset = 0;
	theblock->blocksize = -1;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PAK_DoPak__FPUcPCUci(unsigned char *Dest /*$a0*/, unsigned char *buffer /*$fp*/, int insize /*stack -56*/)
 // line 118, offset 0x800ae084
	/* begin block 1 */
		// Start line: 119
		// Start offset: 0x800AE084
		// Variables:
	// 		long begin; // $v1
	// 		long end; // $s3
	// 		long bestlength; // $s1
	// 		int offset; // $s4
	// 		int bestoffset; // $s7
	// 		unsigned char *theptr; // $s6
	// 		unsigned char *ptr1; // $s2
	// 		unsigned char *ptr2; // $a1
	// 		unsigned char *ptr3; // $a0
	// 		struct block theblock; // stack offset -592
	// 		int inpos; // $s5
	/* end block 1 */
	// End offset: 0x800AE290
	// End Line: 236

	/* begin block 2 */
		// Start line: 238
	/* end block 2 */
	// End Line: 239

/* WARNING: Unknown calling convention yet parameter storage is locked */

int PAK_DoPak__FPUcPCUci(uchar *Dest,uchar *buffer,int insize)

{
	bool bVar1;
	int iVar2;
	byte *pbVar3;
	int iVar4;
	uchar *puVar5;
	uchar *puVar6;
	int iVar7;
	int iVar8;
	uchar *puVar9;
	int iVar10;
	int iVar11;
	uchar *puVar12;
	int iVar13;
	block local_250;
	int local_38;
	block *local_30;
	
	local_250.data[0] = (uint)*buffer;
	local_250.data[1] = (uint)buffer[1];
	local_250.blocksize = 1;
	iVar11 = 2;
	local_250.outsize = 0;
	local_250.blockrep = '\0';
	local_250.Dest = Dest;
	local_38 = insize;
	if (2 < insize) {
		local_30 = &local_250;
		iVar4 = -2;
		local_250.Dest = Dest;
		local_38 = insize;
		do {
			iVar10 = local_38 - iVar11;
			if (iVar4 < -0x80) {
				iVar4 = -0x80;
			}
			if (0xff < iVar10) {
				iVar10 = 0xff;
			}
			iVar8 = 1;
			puVar9 = buffer + iVar11 + iVar4;
			puVar12 = buffer + iVar11;
			iVar13 = iVar4;
			while (iVar2 = iVar8, iVar4 < 0) {
				bVar1 = iVar8 < iVar10;
				if (*puVar9 == *puVar12) {
					iVar7 = iVar8 + 1;
					iVar2 = memcmp(puVar9,puVar12,iVar7);
					bVar1 = iVar8 < iVar10;
					if (iVar2 == 0) {
						puVar6 = puVar9 + iVar7;
						puVar5 = puVar12 + iVar7;
						if (*puVar6 == *puVar5) {
							do {
								puVar6 = puVar6 + 1;
								iVar7 = iVar7 + 1;
								puVar5 = puVar5 + 1;
								iVar2 = iVar10;
								iVar13 = iVar4;
								if (iVar10 <= iVar7) goto LAB_800ae1d8;
							} while (*puVar6 == *puVar5);
						}
						bVar1 = iVar7 < iVar10;
						iVar8 = iVar7;
						iVar13 = iVar4;
					}
				}
				iVar2 = iVar10;
				if (!bVar1) break;
				iVar4 = iVar4 + 1;
				puVar9 = puVar9 + 1;
			}
LAB_800ae1d8:
			if (iVar2 < 3) {
				if ((local_250.blockrep != '\0') || (0x7e < local_250.blocksize)) {
					writeblock__FP5block(&local_250);
				}
				pbVar3 = buffer + iVar11;
				iVar11 = iVar11 + 1;
				local_30->data[local_250.blocksize + 1] = (uint)*pbVar3;
				local_250.blocksize = local_250.blocksize + 1;
			}
			else {
				writeblock__FP5block(&local_250);
				iVar11 = iVar11 + iVar2;
				local_250.blockrep = '\x01';
				local_250.blocksize = iVar2;
				local_250.blockoffset = iVar13;
			}
			iVar4 = -iVar11;
		} while (iVar11 < local_38);
	}
	writeblock__FP5block(&local_250);
	local_250.blockrep = '\x01';
	local_250.blocksize = 0;
	local_250.blockoffset = 0;
	writeblock__FP5block(&local_250);
	return local_250.outsize;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PAK_DoUnpak__FPUcPCUc(unsigned char *Dest /*$s2*/, unsigned char *Source /*$s0*/)
 // line 245, offset 0x800ae2c4
	/* begin block 1 */
		// Start line: 246
		// Start offset: 0x800AE2C4
		// Variables:
	// 		int outsize; // $s3

		/* begin block 1.1 */
			// Start line: 249
			// Start offset: 0x800AE2E8
			// Variables:
		// 		unsigned char *From; // $a1
		// 		int size; // $s1
		// 		int ch; // $v1
		/* end block 1.1 */
		// End offset: 0x800AE328
		// End Line: 274
	/* end block 1 */
	// End offset: 0x800AE344
	// End Line: 279

	/* begin block 2 */
		// Start line: 569
	/* end block 2 */
	// End Line: 570

/* WARNING: Unknown calling convention yet parameter storage is locked */

int PAK_DoUnpak__FPUcPCUc(uchar *Dest,uchar *Source)

{
	byte bVar1;
	byte *__src;
	size_t __n;
	int iVar2;
	
	iVar2 = 0;
	do {
		bVar1 = *Source;
		__src = Source + 1;
		if (bVar1 < 0x80) {
			__n = (uint)bVar1 + 1;
			Source = __src + __n;
		}
		else {
			__n = (size_t)*__src;
			Source = Source + 2;
			if (*__src == 0) {
				return iVar2;
			}
			__src = Dest + (int)(char)bVar1;
		}
		memcpy(Dest,__src,__n);
		Dest = Dest + __n;
		iVar2 = iVar2 + __n;
	} while( true );
}





