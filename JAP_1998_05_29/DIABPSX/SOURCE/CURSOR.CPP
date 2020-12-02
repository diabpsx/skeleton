#include "THISDUST.H"
#include "CURSOR.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitCursor__Fv()
 // line 126, offset 0x80037734
	/* begin block 1 */
		// Start line: 127
		// Start offset: 0x80037734
	/* end block 1 */
	// End offset: 0x80037734
	// End Line: 127

	/* begin block 2 */
		// Start line: 258
	/* end block 2 */
	// End Line: 259

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitCursor__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreeCursor__Fv()
 // line 137, offset 0x8003773c
	/* begin block 1 */
		// Start line: 138
		// Start offset: 0x8003773C
	/* end block 1 */
	// End offset: 0x8003773C
	// End Line: 138

	/* begin block 2 */
		// Start line: 279
	/* end block 2 */
	// End Line: 280

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeCursor__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetICursor__Fi(int i /*$a0*/)
 // line 148, offset 0x80037744
	/* begin block 1 */
		// Start line: 149
		// Start offset: 0x80037744
	/* end block 1 */
	// End offset: 0x80037798
	// End Line: 159

	/* begin block 2 */
		// Start line: 303
	/* end block 2 */
	// End Line: 304

/* WARNING: Removing unreachable block (ram,0x80037774) */
/* WARNING: Removing unreachable block (ram,0x8003778c) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetICursor__Fi(int i)

{
	icursW = (uint)InvItemWidth[i];
	icursH = (uint)InvItemHeight[i];
	icursW28 = (int)(uint)InvItemWidth[i] >> 4;
	icursH28 = (int)(uint)InvItemHeight[i] >> 4;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetCursor__Fi(int i /*$a0*/)
 // line 165, offset 0x800377a0
	/* begin block 1 */
		// Start line: 166
		// Start offset: 0x800377A0
	/* end block 1 */
	// End offset: 0x800377F4
	// End Line: 174

	/* begin block 2 */
		// Start line: 330
	/* end block 2 */
	// End Line: 331

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetCursor__Fi(int i)

{
	int *piVar1;
	
	piVar1 = &_pcurs + myplr;
	*piVar1 = i;
	cursW = ZEXT14(InvItemWidth[i]);
	cursH = ZEXT14(InvItemHeight[*piVar1]);
	SetICursor__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NewCursor__Fi(int i /*$a0*/)
 // line 179, offset 0x80037804
	/* begin block 1 */
		// Start line: 180
		// Start offset: 0x80037804
	/* end block 1 */
	// End offset: 0x80037814
	// End Line: 181

	/* begin block 2 */
		// Start line: 364
	/* end block 2 */
	// End Line: 365

/* WARNING: Unknown calling convention yet parameter storage is locked */

void NewCursor__Fi(int i)

{
	SetCursor__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitLevelCursor__Fv()
 // line 186, offset 0x80037824
	/* begin block 1 */
		// Start line: 187
		// Start offset: 0x80037824
	/* end block 1 */
	// End offset: 0x80037874
	// End Line: 202

	/* begin block 2 */
		// Start line: 378
	/* end block 2 */
	// End Line: 379

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitLevelCursor__Fv(void)

{
	SetCursor__Fi(1);
	cursmx = ViewX;
	cursmy = ViewY;
	_pcursmonst = -1;
	INT_8011b75c = -1;
	_pcursobj = -1;
	CHAR_00h_8011b761 = -1;
	_pcursitem = -1;
	CHAR_00h_8011b765 = -1;
	_pcursplr = -1;
	CHAR_00h_8011b76d = -1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckTown__Fv()
 // line 211, offset 0x80037884
	/* begin block 1 */
		// Start line: 212
		// Start offset: 0x80037884
		// Variables:
	// 		int ocursmx; // $t3
	// 		int ocursmy; // $t2

		/* begin block 1.1 */
			// Start line: 212
			// Start offset: 0x80037884
			// Variables:
		// 		int i; // $t1

			/* begin block 1.1.1 */
				// Start line: 216
				// Start offset: 0x800378A8
				// Variables:
			// 		int mx; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 217
					// Start offset: 0x800378C0

					/* begin block 1.1.1.1.1 */
						// Start line: 218
						// Start offset: 0x800378FC

						/* begin block 1.1.1.1.1.1 */
							// Start line: 219
							// Start offset: 0x800378FC
							// Variables:
						// 		int dir; // $t0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80037AF8
						// End Line: 240
					/* end block 1.1.1.1.1 */
					// End offset: 0x80037AF8
					// End Line: 240
				/* end block 1.1.1.1 */
				// End offset: 0x80037AF8
				// End Line: 240
			/* end block 1.1.1 */
			// End offset: 0x80037AF8
			// End Line: 240
		/* end block 1.1 */
		// End offset: 0x80037B00
		// End Line: 242
	/* end block 1 */
	// End offset: 0x80037B00
	// End Line: 242

	/* begin block 2 */
		// Start line: 441
	/* end block 2 */
	// End Line: 442

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckTown__Fv(void)

{
	int iVar1;
	int iVar2;
	char *__src;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = cursmy;
	iVar1 = cursmx;
	iVar7 = 0;
	do {
		if (nummissiles <= iVar7) {
			return;
		}
		iVar3 = (int)(&missileactive)[iVar7];
		iVar6 = 0;
		if (missile[iVar3]._mitype == '\n') {
			do {
				cursmx = iVar1 + (int)(&offset_x)[iVar6];
				cursmy = iVar2 + (int)(&offset_y)[iVar6];
				iVar4 = (int)missile[iVar3]._mix;
				iVar5 = iVar4 + -1;
				if ((((cursmx == iVar5) && (cursmy == (int)missile[iVar3]._miy)) ||
						((cursmx == iVar4 && (cursmy == (int)missile[iVar3]._miy + -1)))) ||
					 ((((cursmx == iVar5 && (cursmy == (int)missile[iVar3]._miy + -1)) ||
						 ((cursmx == iVar4 + -2 &&
							((cursmy == (int)missile[iVar3]._miy + -1 || (cursmy == (int)missile[iVar3]._miy + -2)
							 ))))) ||
						(((cursmx == iVar5 && (cursmy == (int)missile[iVar3]._miy + -2)) ||
						 ((cursmx == iVar4 && (cursmy == (int)missile[iVar3]._miy)))))))) {
					_trigflag[sel_data] = '\x01';
					ClearPanel__Fv();
					__src = GetStr__Fi(0x494);
					strcpy(_infostr + sel_data * 0x100,__src);
					__src = GetStr__Fi(0x16e);
					sprintf(&tempstr,__src,(int)missile[iVar3]._misource * 0x19e8 + -0x7ff259f2);
					AddPanelString__FPCci(&tempstr,1);
					cursmx = (int)missile[iVar3]._mix;
					cursmy = (int)missile[iVar3]._miy;
					return;
				}
				iVar6 = iVar6 + 1;
			} while (iVar6 < 8);
		}
		iVar7 = iVar7 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckRportal__Fv()
 // line 247, offset 0x80037b18
	/* begin block 1 */
		// Start line: 248
		// Start offset: 0x80037B18
		// Variables:
	// 		int ocursmx; // $t3
	// 		int ocursmy; // $t2

		/* begin block 1.1 */
			// Start line: 248
			// Start offset: 0x80037B18
			// Variables:
		// 		int i; // $t1

			/* begin block 1.1.1 */
				// Start line: 252
				// Start offset: 0x80037B30
				// Variables:
			// 		int mx; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 253
					// Start offset: 0x80037B48

					/* begin block 1.1.1.1.1 */
						// Start line: 254
						// Start offset: 0x80037B84

						/* begin block 1.1.1.1.1.1 */
							// Start line: 255
							// Start offset: 0x80037B84
							// Variables:
						// 		int dir; // $t0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80037D64
						// End Line: 277
					/* end block 1.1.1.1.1 */
					// End offset: 0x80037D64
					// End Line: 277
				/* end block 1.1.1.1 */
				// End offset: 0x80037D64
				// End Line: 277
			/* end block 1.1.1 */
			// End offset: 0x80037D64
			// End Line: 277
		/* end block 1.1 */
		// End offset: 0x80037D6C
		// End Line: 279
	/* end block 1 */
	// End offset: 0x80037D6C
	// End Line: 279

	/* begin block 2 */
		// Start line: 521
	/* end block 2 */
	// End Line: 522

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckRportal__Fv(void)

{
	int iVar1;
	char *__src;
	int iVar2;
	int StrId;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar1 = cursmy;
	StrId = cursmx;
	iVar6 = 0;
	do {
		if (nummissiles <= iVar6) {
			return;
		}
		iVar2 = (int)(&missileactive)[iVar6];
		iVar5 = 0;
		if (missile[iVar2]._mitype == 'A') {
			do {
				cursmx = StrId + (int)(&offset_x)[iVar5];
				cursmy = iVar1 + (int)(&offset_y)[iVar5];
				iVar3 = (int)missile[iVar2]._mix;
				iVar4 = iVar3 + -1;
				if ((((cursmx == iVar4) && (cursmy == (int)missile[iVar2]._miy)) ||
						((cursmx == iVar3 && (cursmy == (int)missile[iVar2]._miy + -1)))) ||
					 ((((cursmx == iVar4 && (cursmy == (int)missile[iVar2]._miy + -1)) ||
						 ((cursmx == iVar3 + -2 &&
							((cursmy == (int)missile[iVar2]._miy + -1 || (cursmy == (int)missile[iVar2]._miy + -2)
							 ))))) ||
						(((cursmx == iVar4 && (cursmy == (int)missile[iVar2]._miy + -2)) ||
						 ((cursmx == iVar3 && (cursmy == (int)missile[iVar2]._miy)))))))) {
					_trigflag[sel_data] = '\x01';
					ClearPanel__Fv();
					__src = GetStr__Fi(0x31e);
					strcpy(_infostr + sel_data * 0x100,__src);
					StrId = 0x244;
					if (setlevel == '\0') {
						StrId = 0x479;
					}
					__src = GetStr__Fi(StrId);
					strcpy(&tempstr,__src);
					AddPanelString__FPCci(&tempstr,1);
					cursmx = (int)missile[iVar2]._mix;
					cursmy = (int)missile[iVar2]._miy;
					return;
				}
				iVar5 = iVar5 + 1;
			} while (iVar5 < 8);
		}
		iVar6 = iVar6 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckCursMove__Fv()
 // line 284, offset 0x80037d80
	/* begin block 1 */
		// Start line: 285
		// Start offset: 0x80037D80
	/* end block 1 */
	// End offset: 0x80037D80
	// End Line: 285

	/* begin block 2 */
		// Start line: 1092
	/* end block 2 */
	// End Line: 1093

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckCursMove__Fv(void)

{
	return;
}





