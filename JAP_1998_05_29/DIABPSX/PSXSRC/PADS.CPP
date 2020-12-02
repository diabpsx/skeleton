#include "THISDUST.H"
#include "PADS.H"


// decompiled code
// original method signature: 
// unsigned long /*$ra*/ ReadPadStream__Fv()
 // line 116, offset 0x800894e0
	/* begin block 1 */
		// Start line: 117
		// Start offset: 0x800894E0
		// Variables:
	// 		unsigned char *p0; // $s3
	// 		unsigned char *p1; // $s2
	// 		unsigned long rval; // $s0
	/* end block 1 */
	// End offset: 0x800895D8
	// End Line: 166

	/* begin block 2 */
		// Start line: 232
	/* end block 2 */
	// End Line: 233

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong ReadPadStream__Fv(void)

{
	uchar uVar1;
	uint uVar2;
	
	SetActive__4CPadUc(&Pad0,RawPadData0 == '\0');
	SetActive__4CPadUc(&Pad1,RawPadData1 == '\0');
	SetPadType__4CPadUc(&Pad0,UCHAR_00h_800b7f0d);
	SetPadType__4CPadUc(&Pad1,UCHAR_00h_800b7f31);
	uVar1 = CheckActive__4CPad(&Pad1);
	if (uVar1 == '\0') {
		uVar2 = 0xffff00;
	}
	else {
		uVar2 = (uint)CONCAT11(UCHAR_00h_800b7f32,s__800b7f33[0]) << 8;
	}
	uVar1 = CheckActive__4CPad(&Pad0);
	if (uVar1 == '\0') {
		uVar2 = uVar2 << 8 | 0xffff;
	}
	else {
		uVar2 = (uVar2 | (uint)UCHAR_00h_800b7f0e) << 8 | (uint)s__800b7f0f[0];
	}
	return ~uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PAD_Handler__Fv()
 // line 176, offset 0x800895f8
	/* begin block 1 */
		// Start line: 177
		// Start offset: 0x800895F8
		// Variables:
	// 		unsigned long JVal; // $s4
	// 		unsigned long v; // $v1
	// 		unsigned char fin; // $s0
	/* end block 1 */
	// End offset: 0x800897D0
	// End Line: 238

	/* begin block 2 */
		// Start line: 357
	/* end block 2 */
	// End Line: 358

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PAD_Handler__Fv(void)

{
	byte *pbVar1;
	ushort New;
	void *pvVar2;
	void *pvVar3;
	ulong uVar4;
	uint uVar5;
	int iVar6;
	ushort New_00;
	
	pvVar2 = IsGameLoading__Fv();
	pvVar3 = GLUE_Finished__Fv();
	uVar4 = ReadPadStream__Fv();
	cac_pad = uVar4;
	if ((((uint)pvVar2 | (uint)pvVar3) & 0xff) != 0) {
		cac_pad = 0;
	}
	uVar5 = ((uint)pvVar2 | (uint)pvVar3) & 0xff;
	if (demo_record_load == 1) {
		if ((uVar5 == 0) && (demo_pad_time != 0)) {
			pbVar1 = demo_buffer + demo_pad_count;
			demo_pad_time = demo_pad_time + -1;
			demo_pad_count = demo_pad_count + 1;
			*pbVar1 = (byte)((uVar4 & 0xf0) >> 4) | (byte)(uVar4 >> 8) & 0xf0;
			if (demo_pad_time == 0) {
				save_demo_pad_data__FUl(demo_level);
				printf(&DAT_80110490);
			}
		}
	}
	else {
		if ((uVar5 == 0) && (demo_pad_time != 0)) {
			PA_SetPauseOk__Fb((void *)0x0);
			demo_pad_time = demo_pad_time + -1;
			iVar6 = demo_pad_count + 1;
			uVar4 = uVar4 & 0xffff0f0f | ((uint)demo_buffer[demo_pad_count] & 0xf0) << 8 |
							((uint)demo_buffer[demo_pad_count] & 0xf) << 4;
			if (((demo_pad_time == 0) || (demo_pad_count = iVar6, cac_pad != 0)) &&
				 ((demo_finish = 1, demo_pad_count = iVar6, cac_pad != 0 &&
					(demo_finish = 2, demo_pad_count = iVar6, (cac_pad & 0x800U) != 0)))) {
				user_start = &DAT_00000001;
				demo_pad_count = iVar6;
			}
		}
	}
	New = (ushort)uVar4;
	NewVal__4CPadUs(&Pad0,New);
	New_00 = (ushort)(uVar4 >> 0x10);
	NewVal__4CPadUs(&Pad1,New_00);
	BothNewVal__4CPadUsUs(&Pad0,New,New_00);
	BothNewVal__4CPadUsUs(&Pad1,New,New_00);
	return;
}



// decompiled code
// original method signature: 
// struct CPad * /*$ra*/ PAD_GetPad__FiUc(int PadNum /*$s3*/, unsigned char both /*$s0*/)
 // line 251, offset 0x800897f4
	/* begin block 1 */
		// Start line: 252
		// Start offset: 0x800897F4
	/* end block 1 */
	// End offset: 0x80089884
	// End Line: 266

	/* begin block 2 */
		// Start line: 514
	/* end block 2 */
	// End Line: 515

CPad * PAD_GetPad__FiUc(int PadNum,uchar both)

{
	CPad *pCVar1;
	
	if (deathflag != '\0') {
		both = '\x01';
	}
	if ((both == '\0') && (1 < (uint)PadNum)) {
		DBG_Error((char *)0x0,"psxsrc/PADS.CPP",0x101);
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
 // line 277, offset 0x800898a4
	/* begin block 1 */
		// Start line: 278
		// Start offset: 0x800898A4
	/* end block 1 */
	// End offset: 0x80089904
	// End Line: 286

	/* begin block 2 */
		// Start line: 566
	/* end block 2 */
	// End Line: 567

void NewVal__4CPadUs(CPad *this,ushort New)

{
	ushort uVar1;
	ushort uVar2;
	
	uVar1 = Trans__4CPadUs(this,New);
	uVar2 = this->Cur;
	this->Cur = uVar1;
	this->Old = uVar2;
	this->Down = uVar1 & (uVar1 ^ this->Old);
	this->Up = this->Old & ~this->Cur;
	uVar2 = MakeClickBits__FiiiPUs
										((uint)this->Cur,(uint)this->Down,(uint)this->PADTICK,this->GazTickCount);
	this->Tick = uVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BothNewVal__4CPadUsUs(struct CPad *this /*$s1*/, unsigned short New /*$a1*/, unsigned short New2 /*$s0*/)
 // line 290, offset 0x80089918
	/* begin block 1 */
		// Start line: 291
		// Start offset: 0x80089918
	/* end block 1 */
	// End offset: 0x80089994
	// End Line: 300

	/* begin block 2 */
		// Start line: 602
	/* end block 2 */
	// End Line: 603

void BothNewVal__4CPadUsUs(CPad *this,ushort New,ushort New2)

{
	ushort uVar1;
	ushort uVar2;
	ushort uVar3;
	
	uVar1 = Trans__4CPadUs(this,New);
	uVar2 = Trans__4CPadUs(this,New2);
	uVar3 = this->both_Cur;
	uVar1 = uVar1 | uVar2;
	this->both_Cur = uVar1;
	this->both_Old = uVar3;
	this->both_Down = uVar1 & (uVar1 ^ this->both_Old);
	this->both_Up = this->both_Old & ~this->both_Cur;
	uVar3 = MakeClickBits__FiiiPUs
										((uint)this->both_Cur,(uint)this->both_Down,(uint)this->PADTICK,
										 this->BothTickCount);
	this->both_Tick = uVar3;
	return;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ Trans__4CPadUs(struct CPad *this /*$a0*/, unsigned short PadVal /*$a0*/)
 // line 309, offset 0x800899ac
	/* begin block 1 */
		// Start line: 310
		// Start offset: 0x800899AC
		// Variables:
	// 		unsigned short RetVal; // $v0
	/* end block 1 */
	// End offset: 0x80089AC8
	// End Line: 341

	/* begin block 2 */
		// Start line: 654
	/* end block 2 */
	// End Line: 655

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
	uVar1 = uVar2 | 0x100;
	if ((PadVal & 0x40) == 0) {
		uVar1 = uVar2;
	}
	uVar2 = uVar1 | 0x80;
	if ((PadVal & 0x80) == 0) {
		uVar2 = uVar1;
	}
	uVar1 = uVar2 | 0x40;
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
// void /*$ra*/ Flush__4CPad(struct CPad *this /*$s0*/)
 // line 344, offset 0x80089ad0
	/* begin block 1 */
		// Start line: 345
		// Start offset: 0x80089AD0
	/* end block 1 */
	// End offset: 0x80089B10
	// End Line: 351

	/* begin block 2 */
		// Start line: 724
	/* end block 2 */
	// End Line: 725

void Flush__4CPad(CPad *this)

{
	this->Cur = 0;
	this->both_Cur = 0;
	this->Up = 0;
	this->both_Up = 0;
	this->Down = 0;
	this->both_Down = 0;
	this->Old = 0;
	this->both_Old = 0;
	InitClickBits__FPUs(this->GazTickCount);
	InitClickBits__FPUs(this->BothTickCount);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitClickBits__FPUs(unsigned short *CountArray /*$a0*/)
 // line 357, offset 0x80089b24
	/* begin block 1 */
		// Start line: 358
		// Start offset: 0x80089B24
		// Variables:
	// 		int f; // $v0
	/* end block 1 */
	// End offset: 0x80089B3C
	// End Line: 362

	/* begin block 2 */
		// Start line: 758
	/* end block 2 */
	// End Line: 759

void InitClickBits__FPUs(ushort *CountArray)

{
	int iVar1;
	
	iVar1 = 0xf;
	CountArray = CountArray + 0xf;
	do {
		*CountArray = 0;
		iVar1 = iVar1 + -1;
		CountArray = CountArray + -1;
	} while (-1 < iVar1);
	return;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ MakeClickBits__FiiiPUs(int Switch /*$a0*/, int Closed /*$a1*/, int Speed /*$a2*/, unsigned short *CountArray /*$a3*/)
 // line 365, offset 0x80089b44
	/* begin block 1 */
		// Start line: 366
		// Start offset: 0x80089B44
		// Variables:
	// 		unsigned short Click; // $t1
	// 		unsigned short BitMask; // $v1

		/* begin block 1.1 */
			// Start line: 368
			// Start offset: 0x80089B44

			/* begin block 1.1.1 */
				// Start line: 371
				// Start offset: 0x80089B58
				// Variables:
			// 		int ResetSpeed; // $t0
			/* end block 1.1.1 */
			// End offset: 0x80089BBC
			// End Line: 397
		/* end block 1.1 */
		// End offset: 0x80089BC8
		// End Line: 398
	/* end block 1 */
	// End offset: 0x80089BC8
	// End Line: 400

	/* begin block 2 */
		// Start line: 773
	/* end block 2 */
	// End Line: 774

ushort MakeClickBits__FiiiPUs(int Switch,int Closed,int Speed,ushort *CountArray)

{
	ushort uVar1;
	uint uVar2;
	ushort uVar3;
	uint uVar4;
	ushort *puVar5;
	
	uVar4 = 0;
	uVar2 = 1;
	puVar5 = CountArray + 0x10;
	while ((int)CountArray < (int)puVar5) {
		uVar3 = (ushort)Speed;
		if ((Closed & uVar2 & 0xffff) != 0) {
			*CountArray = 1;
			uVar3 = (ushort)Speed * 3;
		}
		if ((Switch & uVar2 & 0xffff) == 0) {
			*CountArray = 0;
		}
		uVar1 = *CountArray;
		if ((uVar1 != 0) && (*CountArray = uVar1 - 1, uVar1 == 1)) {
			*CountArray = uVar3;
			uVar4 = uVar4 | uVar2;
		}
		uVar2 = uVar2 << 1;
		CountArray = CountArray + 1;
	}
	return (ushort)uVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.Pad0()
 // line 404, offset 0x80089bd0
	/* begin block 1 */
		// Start line: 405
		// Start offset: 0x80089BD0
	/* end block 1 */
	// End offset: 0x80089BF8
	// End Line: 405

	/* begin block 2 */
		// Start line: 849
	/* end block 2 */
	// End Line: 850

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_Pad0(void)

{
	__4CPadi(&Pad0,0);
	__4CPadi(&Pad1,1);
	return;
}





