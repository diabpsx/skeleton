#include "THISDUST.H"
#include "PAK.H"


// decompiled code
// original method signature: 
// void /*$ra*/ fputc__5blockUc(struct block *this /*$a0*/, unsigned char Val /*$a1*/)
 // line 55, offset 0x800a0ab4
	/* begin block 1 */
		// Start line: 56
		// Start offset: 0x800A0AB4
	/* end block 1 */
	// End offset: 0x800A0AD4
	// End Line: 59

	/* begin block 2 */
		// Start line: 111
	/* end block 2 */
	// End Line: 112

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
 // line 85, offset 0x800a06ec
	/* begin block 1 */
		// Start line: 86
		// Start offset: 0x800A06EC

		/* begin block 1.1 */
			// Start line: 86
			// Start offset: 0x800A06EC

			/* begin block 1.1.1 */
				// Start line: 93
				// Start offset: 0x800A0740

				/* begin block 1.1.1.1 */
					// Start line: 93
					// Start offset: 0x800A0740

					/* begin block 1.1.1.1.1 */
						// Start line: 99
						// Start offset: 0x800A0760

						/* begin block 1.1.1.1.1.1 */
							// Start line: 100
							// Start offset: 0x800A0760
							// Variables:
						// 		int i; // $s2
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800A07A8
						// End Line: 103
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A07A8
					// End Line: 103
				/* end block 1.1.1.1 */
				// End offset: 0x800A07A8
				// End Line: 103
			/* end block 1.1.1 */
			// End offset: 0x800A07A8
			// End Line: 103
		/* end block 1.1 */
		// End offset: 0x800A07A8
		// End Line: 103
	/* end block 1 */
	// End offset: 0x800A07B8
	// End Line: 109

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

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
// int /*$ra*/ PAK_DoPak__FPUcT0i(unsigned char *Dest /*$a0*/, unsigned char *buffer /*$fp*/, int insize /*stack -56*/)
 // line 118, offset 0x800a07d4
	/* begin block 1 */
		// Start line: 119
		// Start offset: 0x800A07D4
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
	// End offset: 0x800A09E0
	// End Line: 236

	/* begin block 2 */
		// Start line: 238
	/* end block 2 */
	// End Line: 239

int PAK_DoPak__FPUcT0i(uchar *Dest,uchar *buffer,int insize)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	byte *pbVar4;
	byte *pbVar5;
	int iVar6;
	int iVar7;
	byte *pbVar8;
	int iVar9;
	int iVar10;
	byte *pbVar11;
	int iVar12;
	block local_250;
	int local_38;
	block *local_30;
	
	local_250.outsize = 0;
	local_250.blockrep = '\0';
	local_250.data[0] = (uint)*buffer;
	local_250.blocksize = 1;
	local_250.data[1] = (uint)buffer[1];
	iVar10 = 2;
	local_250.Dest = Dest;
	local_38 = insize;
	if (2 < insize) {
		iVar3 = -2;
		local_250.Dest = Dest;
		local_38 = insize;
		local_30 = &local_250;
		do {
			iVar9 = local_38 - iVar10;
			if (iVar3 < -0x80) {
				iVar3 = -0x80;
			}
			if (0xff < iVar9) {
				iVar9 = 0xff;
			}
			iVar7 = 1;
			pbVar8 = buffer + iVar10 + iVar3;
			pbVar11 = buffer + iVar10;
			iVar12 = iVar3;
			while (iVar2 = iVar7, iVar3 < 0) {
				bVar1 = iVar7 < iVar9;
				if (*pbVar8 == *pbVar11) {
					iVar6 = iVar7 + 1;
					iVar2 = memcmp(pbVar8,pbVar11,iVar6);
					bVar1 = iVar7 < iVar9;
					if (iVar2 == 0) {
						pbVar5 = pbVar8 + iVar6;
						pbVar4 = pbVar11 + iVar6;
						if (*pbVar5 == *pbVar4) {
							do {
								pbVar5 = pbVar5 + 1;
								iVar6 = iVar6 + 1;
								pbVar4 = pbVar4 + 1;
								iVar2 = iVar9;
								iVar12 = iVar3;
								if (iVar9 <= iVar6) goto LAB_800a0928;
							} while (*pbVar5 == *pbVar4);
						}
						bVar1 = iVar6 < iVar9;
						iVar7 = iVar6;
						iVar12 = iVar3;
					}
				}
				iVar2 = iVar9;
				if (!bVar1) break;
				iVar3 = iVar3 + 1;
				pbVar8 = pbVar8 + 1;
			}
LAB_800a0928:
			if (iVar2 < 3) {
				if ((local_250.blockrep != '\0') || (0x7e < local_250.blocksize)) {
					writeblock__FP5block(&local_250);
				}
				pbVar8 = buffer + iVar10;
				iVar10 = iVar10 + 1;
				local_30->data[local_250.blocksize + 1] = (uint)*pbVar8;
				local_250.blocksize = local_250.blocksize + 1;
			}
			else {
				writeblock__FP5block(&local_250);
				iVar10 = iVar10 + iVar2;
				local_250.blockrep = '\x01';
				local_250.blocksize = iVar2;
				local_250.blockoffset = iVar12;
			}
			iVar3 = -iVar10;
		} while (iVar10 < local_38);
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
// int /*$ra*/ PAK_DoUnpak__FPUcT0(unsigned char *Dest /*$s2*/, unsigned char *Source /*$s0*/)
 // line 245, offset 0x800a0a14
	/* begin block 1 */
		// Start line: 246
		// Start offset: 0x800A0A14
		// Variables:
	// 		int outsize; // $s3

		/* begin block 1.1 */
			// Start line: 249
			// Start offset: 0x800A0A38
			// Variables:
		// 		unsigned char *From; // $a1
		// 		int size; // $s1
		// 		int ch; // $v1
		/* end block 1.1 */
		// End offset: 0x800A0A78
		// End Line: 274
	/* end block 1 */
	// End offset: 0x800A0A94
	// End Line: 279

	/* begin block 2 */
		// Start line: 502
	/* end block 2 */
	// End Line: 503

int PAK_DoUnpak__FPUcT0(uchar *Dest,uchar *Source)

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



// autogenerated function stub: 
// void __PAK_text_objend() /* __PAK_text_objend method signature is not contained in the debug symbol data. This is likely either a library function or the game was compiled without debug symbols. Please refer to the TDR documentation for additional guidance. */
void __PAK_text_objend() 
{ // line 295, offset 0x800a0adc
	return null;
}




