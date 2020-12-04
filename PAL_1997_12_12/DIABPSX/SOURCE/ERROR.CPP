#include "THISDUST.H"
#include "ERROR.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitDiabloMsg__Fc(char e /*$a3*/)
 // line 154, offset 0x8003aa2c
	/* begin block 1 */
		// Start line: 155
		// Start offset: 0x8003AA2C
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x8003AAB4
	// End Line: 165

	/* begin block 2 */
		// Start line: 308
	/* end block 2 */
	// End Line: 309

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
 // line 171, offset 0x8003aac0
	/* begin block 1 */
		// Start line: 172
		// Start offset: 0x8003AAC0

		/* begin block 1.1 */
			// Start line: 173
			// Start offset: 0x8003AAC0
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x8003AADC
		// End Line: 173
	/* end block 1 */
	// End offset: 0x8003AAE4
	// End Line: 175

	/* begin block 2 */
		// Start line: 344
	/* end block 2 */
	// End Line: 345

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClrDiabloMsg__Fv(void)

{
	char *pcVar1;
	int iVar2;
	
	iVar2 = 0x4f;
	pcVar1 = &CHAR_00h_800c1163;
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
 // line 183, offset 0x8003aaec
	/* begin block 1 */
		// Start line: 184
		// Start offset: 0x8003AAEC
		// Variables:
	// 		char tempstr[256]; // stack offset -280
	// 		struct RECT MsgBox; // stack offset -24
	/* end block 1 */
	// End offset: 0x8003ABE8
	// End Line: 267

	/* begin block 2 */
		// Start line: 418
	/* end block 2 */
	// End Line: 419

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawDiabloMsg__Fv(void)

{
	char *__src;
	char acStack280 [256];
	RECT local_18 [2];
	
	__src = GetStr__Fi(MsgStrings[(int)msgflag]);
	strcpy(acStack280,__src);
	local_18[0].x = 0x28;
	local_18[0].y = 0x6c;
	local_18[0].w = 0x100;
	local_18[0].h = 0xb0;
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,0,0,acStack280,JustCentre,local_18,(uint)WHITER,(uint)WHITEG,(uint)WHITEG);
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
	return;
}





