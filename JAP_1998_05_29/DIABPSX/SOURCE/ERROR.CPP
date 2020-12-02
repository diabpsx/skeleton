#include "THISDUST.H"
#include "ERROR.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitDiabloMsg__Fc(char e /*$a3*/)
 // line 156, offset 0x8003dc44
	/* begin block 1 */
		// Start line: 157
		// Start offset: 0x8003DC44
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x8003DCCC
	// End Line: 167

	/* begin block 2 */
		// Start line: 312
	/* end block 2 */
	// End Line: 313

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitDiabloMsg__Fc(char e)

{
	char *pcVar1;
	int iVar2;
	
	iVar2 = 0;
	if (0 < (int)msgcnt) {
		do {
			pcVar1 = &msgtable + iVar2;
			iVar2 = iVar2 + 1;
			if (*pcVar1 == e) {
				return;
			}
		} while (iVar2 < (int)msgcnt);
	}
	(&msgtable)[(int)msgcnt] = e;
	if (msgcnt < 'P') {
		msgcnt = msgcnt + '\x01';
	}
	msgflag = msgtable;
	msgdelay = 'F';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClrDiabloMsg__Fv()
 // line 173, offset 0x8003dcd8
	/* begin block 1 */
		// Start line: 174
		// Start offset: 0x8003DCD8

		/* begin block 1.1 */
			// Start line: 175
			// Start offset: 0x8003DCD8
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x8003DCF4
		// End Line: 175
	/* end block 1 */
	// End offset: 0x8003DCFC
	// End Line: 177

	/* begin block 2 */
		// Start line: 348
	/* end block 2 */
	// End Line: 349

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClrDiabloMsg__Fv(void)

{
	char *pcVar1;
	int iVar2;
	
	iVar2 = 0x4f;
	pcVar1 = &CHAR_00h_800d1b3f;
	do {
		*pcVar1 = '\0';
		iVar2 = iVar2 + -1;
		pcVar1 = pcVar1 + -1;
	} while (-1 < iVar2);
	msgcnt = '\0';
	msgflag = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawDiabloMsg__Fv()
 // line 185, offset 0x8003dd04
	/* begin block 1 */
		// Start line: 186
		// Start offset: 0x8003DD04
		// Variables:
	// 		struct RECT MsgBox; // stack offset -24
	/* end block 1 */
	// End offset: 0x8003DE28
	// End Line: 281

	/* begin block 2 */
		// Start line: 378
	/* end block 2 */
	// End Line: 379

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawDiabloMsg__Fv(void)

{
	char *Str;
	RECT local_18 [2];
	
	if (stextflag == '\0') {
		if (msgholdflag == '\0') {
			local_18[0].x = 0x30;
			local_18[0].y = 0x6c;
			local_18[0].w = 0xe0;
			local_18[0].h = 0xb0;
			Str = GetStr__Fi(MsgStrings[(int)msgflag]);
			Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
								(&MediumFont,0,0xc,Str,JustCentre,local_18,(uint)WHITER,(uint)WHITEG,(uint)WHITEG);
			if ('\0' < msgdelay) {
				msgdelay = msgdelay + -1;
			}
			if (msgdelay == '\0') {
				msgdelay = 'F';
				msgcnt = msgcnt + -1;
				if ((int)msgcnt == 0) {
					msgflag = '\0';
				}
				else {
					msgflag = (&msgtable)[(int)msgcnt];
				}
			}
		}
		else {
			msgholdflag = '\0';
		}
	}
	else {
		msgholdflag = '\x01';
	}
	return;
}





