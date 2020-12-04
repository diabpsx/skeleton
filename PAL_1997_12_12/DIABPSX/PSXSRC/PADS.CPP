#include "THISDUST.H"
#include "PADS.H"


// decompiled code
// original method signature: 
// unsigned long /*$ra*/ ReadPadStream__Fv()
 // line 111, offset 0x80083de8
	/* begin block 1 */
		// Start line: 112
		// Start offset: 0x80083DE8
		// Variables:
	// 		unsigned char *p0; // $s3
	// 		unsigned char *p1; // $s2
	// 		unsigned long rval; // $s0
	/* end block 1 */
	// End offset: 0x80083EE0
	// End Line: 142

	/* begin block 2 */
		// Start line: 222
	/* end block 2 */
	// End Line: 223

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong ReadPadStream__Fv(void)

{
	uchar uVar1;
	uint uVar2;
	
	SetActive__4CPadUc(&Pad0,RawPadData0 == '\0');
	SetActive__4CPadUc(&Pad1,RawPadData1 == '\0');
	SetPadType__4CPadUc(&Pad0,UCHAR_00h_800a8bed);
	SetPadType__4CPadUc(&Pad1,UCHAR_00h_800a8c11);
	uVar1 = CheckActive__4CPad(&Pad1);
	if (uVar1 == '\0') {
		uVar2 = 0xffff00;
	}
	else {
		uVar2 = (uint)CONCAT11(UCHAR_00h_800a8c12,s__800a8c13[0]) << 8;
	}
	uVar1 = CheckActive__4CPad(&Pad0);
	if (uVar1 == '\0') {
		uVar2 = uVar2 << 8 | 0xffff;
	}
	else {
		uVar2 = (uVar2 | (uint)UCHAR_00h_800a8bee) << 8 | (uint)s__800a8bef[0];
	}
	return ~uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PAD_Handler__Fv()
 // line 152, offset 0x80083f00
	/* begin block 1 */
		// Start line: 153
		// Start offset: 0x80083F00
		// Variables:
	// 		unsigned long JVal; // $s0
	// 		unsigned long v; // $v1
	// 		unsigned char fin; // $s1
	/* end block 1 */
	// End offset: 0x80084098
	// End Line: 202

	/* begin block 2 */
		// Start line: 309
	/* end block 2 */
	// End Line: 310

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PAD_Handler__Fv(void)

{
	byte *pbVar1;
	ushort New;
	void *pvVar2;
	ulong uVar3;
	int iVar4;
	ushort New_00;
	
	pvVar2 = IsGameLoading__Fv();
	uVar3 = ReadPadStream__Fv();
	cac_pad = uVar3;
	if (((uint)pvVar2 & 0xff) != 0) {
		cac_pad = 0;
	}
	if (demo_record_load == 1) {
		if ((((uint)pvVar2 & 0xff) == 0) && (demo_pad_time != 0)) {
			pbVar1 = demo_buffer + demo_pad_count;
			demo_pad_time = demo_pad_time + -1;
			demo_pad_count = demo_pad_count + 1;
			*pbVar1 = (byte)((uVar3 & 0xf0) >> 4) | (byte)(uVar3 >> 8) & 0xf0;
			if (demo_pad_time == 0) {
				save_demo_pad_data__FUl(demo_level);
			}
		}
	}
	else {
		if ((((uint)pvVar2 & 0xff) == 0) && (demo_pad_time != 0)) {
			PA_SetPauseOk__Fb((void *)0x0);
			demo_pad_time = demo_pad_time + -1;
			iVar4 = demo_pad_count + 1;
			uVar3 = uVar3 & 0xffff0f0f | ((uint)demo_buffer[demo_pad_count] & 0xf0) << 8 |
							((uint)demo_buffer[demo_pad_count] & 0xf) << 4;
			if ((demo_pad_time == 0) || (demo_pad_count = iVar4, cac_pad != 0)) {
				demo_finish = 1;
				demo_pad_count = iVar4;
			}
		}
	}
	New = (ushort)uVar3;
	NewVal__4CPadUs(&Pad0,New);
	New_00 = (ushort)(uVar3 >> 0x10);
	NewVal__4CPadUs(&Pad1,New_00);
	BothNewVal__4CPadUsUs(&Pad0,New,New_00);
	BothNewVal__4CPadUsUs(&Pad1,New,New_00);
	return;
}



// decompiled code
// original method signature: 
// struct CPad * /*$ra*/ PAD_GetPad__FiUc(int PadNum /*$s3*/, unsigned char both /*$s0*/)
 // line 215, offset 0x800840b8
	/* begin block 1 */
		// Start line: 216
		// Start offset: 0x800840B8
	/* end block 1 */
	// End offset: 0x80084134
	// End Line: 227

	/* begin block 2 */
		// Start line: 440
	/* end block 2 */
	// End Line: 441

CPad * PAD_GetPad__FiUc(int PadNum,uchar both)

{
	CPad *pCVar1;
	
	if ((both == '\0') && (1 < (uint)PadNum)) {
		DBG_Error((char *)0x0,"psxsrc/PADS.CPP",0xda);
	}
	pCVar1 = &Pad0;
	SetBothFlag__4CPadUc(&Pad0,both);
	SetBothFlag__4CPadUc(&Pad1,both);
	if (PadNum != 0) {
		pCVar1 = &Pad1;
	}
	return pCVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NewVal__4CPadUs(struct CPad *this /*$s0*/, unsigned short New /*$a1*/)
 // line 238, offset 0x80084154
	/* begin block 1 */
		// Start line: 239
		// Start offset: 0x80084154

		/* begin block 1.1 */
			// Start line: 247
			// Start offset: 0x800841B4
			// Variables:
		// 		int i; // $a3

			/* begin block 1.1.1 */
				// Start line: 249
				// Start offset: 0x800841C8
			/* end block 1.1.1 */
			// End offset: 0x80084268
			// End Line: 267
		/* end block 1.1 */
		// End offset: 0x80084278
		// End Line: 270
	/* end block 1 */
	// End offset: 0x80084278
	// End Line: 270

	/* begin block 2 */
		// Start line: 487
	/* end block 2 */
	// End Line: 488

void NewVal__4CPadUs(CPad *this,ushort New)

{
	ushort uVar1;
	ushort uVar2;
	CPad *pCVar3;
	uint uVar4;
	CPad *pCVar5;
	uint uVar6;
	
	uVar1 = Trans__4CPadUs(this,New);
	uVar2 = this->Cur;
	this->Cur = uVar1;
	this->Old = uVar2;
	this->Down = uVar1 & (uVar1 ^ this->Old);
	this->Up = this->Old & ~this->Cur;
	if (this->PADTICKMASK == 0) {
		uVar2 = this->Cur & 1;
	}
	else {
		uVar2 = 0;
	}
	this->Tick = uVar2;
	uVar6 = 0;
	pCVar3 = this;
	pCVar5 = this;
	while (uVar4 = 1 << (uVar6 & 0x1f), (int)uVar6 < 0x10) {
		if (((uint)this->PADTICKMASK & uVar4) != 0) {
			if (((uint)this->Cur & uVar4) == 0) {
				pCVar5->TickDown[0] = (void *)0x0;
				pCVar3->TickCount[0] = '\0';
			}
			else {
				if (pCVar5->TickDown[0] != (void *)0x0) {
					pCVar3->TickCount[0] = pCVar3->TickCount[0] + '\x01';
				}
				if ((this->PADTICK < pCVar3->TickCount[0]) || (pCVar5->TickDown[0] == (void *)0x0)) {
					this->Tick = this->Tick | (ushort)uVar4;
					pCVar3->TickCount[0] = '\0';
				}
				*(undefined **)pCVar5->TickDown = &DAT_00000001;
			}
		}
		pCVar3 = (CPad *)&pCVar3->active;
		pCVar5 = (CPad *)&pCVar5->PADTICKMASK;
		uVar6 = uVar6 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BothNewVal__4CPadUsUs(struct CPad *this /*$s1*/, unsigned short New /*$a1*/, unsigned short New2 /*$s0*/)
 // line 273, offset 0x8008428c
	/* begin block 1 */
		// Start line: 274
		// Start offset: 0x8008428C

		/* begin block 1.1 */
			// Start line: 283
			// Start offset: 0x8008430C
			// Variables:
		// 		int i; // $a3

			/* begin block 1.1.1 */
				// Start line: 285
				// Start offset: 0x80084320
			/* end block 1.1.1 */
			// End offset: 0x800843C0
			// End Line: 303
		/* end block 1.1 */
		// End offset: 0x800843D0
		// End Line: 306
	/* end block 1 */
	// End offset: 0x800843D0
	// End Line: 306

	/* begin block 2 */
		// Start line: 563
	/* end block 2 */
	// End Line: 564

void BothNewVal__4CPadUsUs(CPad *this,ushort New,ushort New2)

{
	ushort uVar1;
	ushort uVar2;
	ushort uVar3;
	CPad *pCVar4;
	uint uVar5;
	CPad *pCVar6;
	uint uVar7;
	
	uVar1 = Trans__4CPadUs(this,New);
	uVar2 = Trans__4CPadUs(this,New2);
	uVar3 = this->both_Cur;
	uVar1 = uVar1 | uVar2;
	this->both_Cur = uVar1;
	this->both_Old = uVar3;
	this->both_Down = uVar1 & (uVar1 ^ this->both_Old);
	this->both_Up = this->both_Old & ~this->both_Cur;
	if (this->PADTICKMASK == 0) {
		uVar3 = this->both_Cur & 1;
	}
	else {
		uVar3 = 0;
	}
	this->both_Tick = uVar3;
	uVar7 = 0;
	pCVar4 = this;
	pCVar6 = this;
	while (uVar5 = 1 << (uVar7 & 0x1f), (int)uVar7 < 0x10) {
		if (((uint)this->PADTICKMASK & uVar5) != 0) {
			if (((uint)this->both_Cur & uVar5) == 0) {
				pCVar6->TickDown[0] = (void *)0x0;
				pCVar4->TickCount[0] = '\0';
			}
			else {
				if (pCVar6->TickDown[0] != (void *)0x0) {
					pCVar4->TickCount[0] = pCVar4->TickCount[0] + '\x01';
				}
				if ((this->PADTICK < pCVar4->TickCount[0]) || (pCVar6->TickDown[0] == (void *)0x0)) {
					this->both_Tick = this->both_Tick | (ushort)uVar5;
					pCVar4->TickCount[0] = '\0';
				}
				*(undefined **)pCVar6->TickDown = &DAT_00000001;
			}
		}
		pCVar4 = (CPad *)&pCVar4->active;
		pCVar6 = (CPad *)&pCVar6->PADTICKMASK;
		uVar7 = uVar7 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ Trans__4CPadUs(struct CPad *this /*$a0*/, unsigned short PadVal /*$a0*/)
 // line 315, offset 0x800843e8
	/* begin block 1 */
		// Start line: 316
		// Start offset: 0x800843E8
		// Variables:
	// 		unsigned short RetVal; // $v0
	/* end block 1 */
	// End offset: 0x80084504
	// End Line: 340

	/* begin block 2 */
		// Start line: 657
	/* end block 2 */
	// End Line: 658

ushort Trans__4CPadUs(CPad *this,ushort PadVal)

{
	ushort uVar1;
	ushort uVar2;
	
	uVar1 = (ushort)(((uint)PadVal & 0x1000) >> 0xc);
	if ((PadVal & 0x4000) != 0) {
		uVar1 = uVar1 | 2;
	}
	uVar2 = uVar1 | 4;
	if ((PadVal & 0x8000) == 0) {
		uVar2 = uVar1;
	}
	uVar1 = uVar2 | 8;
	if ((PadVal & 0x2000) == 0) {
		uVar1 = uVar2;
	}
	uVar2 = uVar1 | 0x10;
	if ((PadVal & 0x800) == 0) {
		uVar2 = uVar1;
	}
	uVar1 = uVar2 | 0x20;
	if ((PadVal & 0x100) == 0) {
		uVar1 = uVar2;
	}
	uVar2 = uVar1 | 0x20;
	if ((PadVal & 0x100) == 0) {
		uVar2 = uVar1;
	}
	uVar1 = uVar2 | 0x40;
	if ((PadVal & 0x40) == 0) {
		uVar1 = uVar2;
	}
	uVar2 = uVar1 | 0x80;
	if ((PadVal & 0x80) == 0) {
		uVar2 = uVar1;
	}
	uVar1 = uVar2 | 0x100;
	if ((PadVal & 0x20) == 0) {
		uVar1 = uVar2;
	}
	uVar2 = uVar1 | 0x200;
	if ((PadVal & 0x10) == 0) {
		uVar2 = uVar1;
	}
	uVar1 = uVar2 | 0x400;
	if ((PadVal & 4) == 0) {
		uVar1 = uVar2;
	}
	uVar2 = uVar1 | 0x800;
	if ((PadVal & 1) == 0) {
		uVar2 = uVar1;
	}
	uVar1 = uVar2 | 0x1000;
	if ((PadVal & 8) == 0) {
		uVar1 = uVar2;
	}
	uVar2 = uVar1 | 0x2000;
	if ((PadVal & 2) == 0) {
		uVar2 = uVar1;
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.Pad0()
 // line 343, offset 0x8008450c
	/* begin block 1 */
		// Start line: 344
		// Start offset: 0x8008450C
	/* end block 1 */
	// End offset: 0x80084534
	// End Line: 344

	/* begin block 2 */
		// Start line: 713
	/* end block 2 */
	// End Line: 714

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_Pad0(void)

{
	__4CPadi(&Pad0,0);
	__4CPadi(&Pad1,1);
	return;
}





