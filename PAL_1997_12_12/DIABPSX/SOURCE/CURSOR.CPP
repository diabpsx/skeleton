#include "THISDUST.H"
#include "CURSOR.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitCursor__Fv()
 // line 126, offset 0x80034fd8
	/* begin block 1 */
		// Start line: 127
		// Start offset: 0x80034FD8
	/* end block 1 */
	// End offset: 0x80034FD8
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
 // line 137, offset 0x80034fe0
	/* begin block 1 */
		// Start line: 138
		// Start offset: 0x80034FE0
	/* end block 1 */
	// End offset: 0x80034FE0
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
 // line 148, offset 0x80034fe8
	/* begin block 1 */
		// Start line: 149
		// Start offset: 0x80034FE8
	/* end block 1 */
	// End offset: 0x8003503C
	// End Line: 159

	/* begin block 2 */
		// Start line: 303
	/* end block 2 */
	// End Line: 304

/* WARNING: Removing unreachable block (ram,0x80035018) */
/* WARNING: Removing unreachable block (ram,0x80035030) */

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
 // line 165, offset 0x80035044
	/* begin block 1 */
		// Start line: 166
		// Start offset: 0x80035044
	/* end block 1 */
	// End offset: 0x80035098
	// End Line: 174

	/* begin block 2 */
		// Start line: 330
	/* end block 2 */
	// End Line: 331

void SetCursor__Fi(int i)

{
	int *piVar1;
	
	piVar1 = _pcurs + myplr;
	*piVar1 = i;
	cursW = ZEXT14(InvItemWidth[i]);
	cursH = ZEXT14(InvItemHeight[*piVar1]);
	SetICursor__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NewCursor__Fi(int i /*$a0*/)
 // line 179, offset 0x800350a8
	/* begin block 1 */
		// Start line: 180
		// Start offset: 0x800350A8
	/* end block 1 */
	// End offset: 0x800350B8
	// End Line: 181

	/* begin block 2 */
		// Start line: 364
	/* end block 2 */
	// End Line: 365

void NewCursor__Fi(int i)

{
	SetCursor__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitLevelCursor__Fv()
 // line 186, offset 0x800350c8
	/* begin block 1 */
		// Start line: 187
		// Start offset: 0x800350C8
	/* end block 1 */
	// End offset: 0x80035118
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
	INT_8012b268 = -1;
	_pcursobj = -1;
	CHAR_00h_8012b26d = -1;
	_pcursitem = -1;
	CHAR_00h_8012b271 = -1;
	_pcursplr = -1;
	CHAR_00h_8012b279 = -1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckTown__Fv()
 // line 211, offset 0x80035128
	/* begin block 1 */
		// Start line: 212
		// Start offset: 0x80035128

		/* begin block 1.1 */
			// Start line: 212
			// Start offset: 0x80035128
			// Variables:
		// 		int i; // $s2

			/* begin block 1.1.1 */
				// Start line: 213
				// Start offset: 0x8003514C
				// Variables:
			// 		int mx; // $s1
			/* end block 1.1.1 */
			// End offset: 0x80035358
			// End Line: 229
		/* end block 1.1 */
		// End offset: 0x80035360
		// End Line: 232
	/* end block 1 */
	// End offset: 0x80035360
	// End Line: 232

	/* begin block 2 */
		// Start line: 441
	/* end block 2 */
	// End Line: 442

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckTown__Fv(void)

{
	char *__src;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	do {
		if (nummissiles <= iVar4) {
			return;
		}
		iVar3 = (&missileactive)[iVar4];
		if (missile[iVar3]._mitype == '\n') {
			iVar2 = (int)missile[iVar3]._mix;
			iVar1 = iVar2 + -1;
			if ((((cursmx != iVar1) || (cursmy != (int)missile[iVar3]._miy)) &&
					((cursmx != iVar2 || (cursmy != (int)missile[iVar3]._miy + -1)))) &&
				 ((cursmx != iVar1 || (cursmy != (int)missile[iVar3]._miy + -1)))) {
				if (cursmx == iVar2 + -2) {
					if ((cursmy == (int)missile[iVar3]._miy + -1) || (cursmy == (int)missile[iVar3]._miy + -2)
						 ) goto LAB_8003528c;
				}
				if (((cursmx != iVar1) || (cursmy != (int)missile[iVar3]._miy + -2)) &&
					 ((cursmx != iVar2 || (cursmy != (int)missile[iVar3]._miy)))) goto LAB_80035358;
			}
LAB_8003528c:
			_trigflag[sel_data] = '\x01';
			ClearPanel__Fv();
			__src = GetStr__Fi(STR_TOWN_PORTAL);
			strcpy(_infostr + sel_data * 0x100,__src);
			__src = GetStr__Fi(STR_FROM__S);
			sprintf(tempstr,__src,(int)missile[iVar3]._misource * 0x23a8 + -0x7ff21404);
			AddPanelString__FPCci(tempstr,1);
			cursmx = (int)missile[iVar3]._mix;
			cursmy = (int)missile[iVar3]._miy;
		}
LAB_80035358:
		iVar4 = iVar4 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckRportal__Fv()
 // line 237, offset 0x80035380
	/* begin block 1 */
		// Start line: 238
		// Start offset: 0x80035380

		/* begin block 1.1 */
			// Start line: 238
			// Start offset: 0x80035380
			// Variables:
		// 		int i; // $s1

			/* begin block 1.1.1 */
				// Start line: 239
				// Start offset: 0x80035394
				// Variables:
			// 		int mx; // $s0
			/* end block 1.1.1 */
			// End offset: 0x80035588
			// End Line: 256
		/* end block 1.1 */
		// End offset: 0x80035590
		// End Line: 259
	/* end block 1 */
	// End offset: 0x80035590
	// End Line: 259

	/* begin block 2 */
		// Start line: 495
	/* end block 2 */
	// End Line: 496

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckRportal__Fv(void)

{
	char *__src;
	text_strs StrId;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	do {
		if (nummissiles <= iVar4) {
			return;
		}
		iVar3 = (&missileactive)[iVar4];
		if (missile[iVar3]._mitype == 'A') {
			iVar2 = (int)missile[iVar3]._mix;
			iVar1 = iVar2 + -1;
			if ((((cursmx != iVar1) || (cursmy != (int)missile[iVar3]._miy)) &&
					((cursmx != iVar2 || (cursmy != (int)missile[iVar3]._miy + -1)))) &&
				 ((cursmx != iVar1 || (cursmy != (int)missile[iVar3]._miy + -1)))) {
				if (cursmx == iVar2 + -2) {
					if ((cursmy == (int)missile[iVar3]._miy + -1) || (cursmy == (int)missile[iVar3]._miy + -2)
						 ) goto LAB_800354d4;
				}
				if (((cursmx != iVar1) || (cursmy != (int)missile[iVar3]._miy + -2)) &&
					 ((cursmx != iVar2 || (cursmy != (int)missile[iVar3]._miy)))) goto LAB_80035588;
			}
LAB_800354d4:
			_trigflag[sel_data] = '\x01';
			ClearPanel__Fv();
			__src = GetStr__Fi(STR_PORTAL_TO);
			strcpy(_infostr + sel_data * 0x100,__src);
			StrId = STR_LEVEL_15;
			if (setlevel == '\0') {
				StrId = STR_THE_UNHOLY_ALTAR;
			}
			__src = GetStr__Fi(StrId);
			strcpy(tempstr,__src);
			AddPanelString__FPCci(tempstr,1);
			cursmx = (int)missile[iVar3]._mix;
			cursmy = (int)missile[iVar3]._miy;
		}
LAB_80035588:
		iVar4 = iVar4 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckCursMove__Fv()
 // line 264, offset 0x800355a8
	/* begin block 1 */
		// Start line: 265
		// Start offset: 0x800355A8
	/* end block 1 */
	// End offset: 0x800355A8
	// End Line: 265

	/* begin block 2 */
		// Start line: 1042
	/* end block 2 */
	// End Line: 1043

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckCursMove__Fv(void)

{
	return;
}





