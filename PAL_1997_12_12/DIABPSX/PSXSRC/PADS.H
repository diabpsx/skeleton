#ifndef PADS_H
#define PADS_H


extern struct CPad * __4CPadi(struct CPad *this, int PhysStick); // 0x80084568

extern void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl); // 0x80084560

extern void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick); // 0x800933B4

extern void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick); // 0x8009E35C

extern void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick); // 0x80034EE4

extern void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask); // 0x800933AC

extern void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask); // 0x8009E354

extern void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask); // 0x80034EDC

extern void SetActive__4CPadUc(struct CPad *this, unsigned char a); // 0x80084558

extern unsigned char CheckActive__4CPad(struct CPad *this); // 0x80083DDC

extern unsigned char CheckActive__4CPad(struct CPad *this); // 0x8008454C

extern void SetPadType__4CPadUc(struct CPad *this, unsigned char val); // 0x80084544

extern unsigned short GetCur__C4CPad(struct CPad *this); // 0x8007CD14

extern unsigned short GetCur__C4CPad(struct CPad *this); // 0x80099B18

extern unsigned short GetCur__C4CPad(struct CPad *this); // 0x800735BC

extern unsigned short GetUp__C4CPad(struct CPad *this); // 0x80083DB4

extern unsigned short GetUp__C4CPad(struct CPad *this); // 0x80093384

extern unsigned short GetUp__C4CPad(struct CPad *this); // 0x8009E32C

extern unsigned short GetUp__C4CPad(struct CPad *this); // 0x80073594

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x80083D8C

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x8009335C

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x80099AF0

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x8009E304

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x800A0010

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x80034EB4

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x8006CF8C

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x8007356C

extern unsigned short GetTick__C4CPad(struct CPad *this); // 0x80093334

extern unsigned short GetTick__C4CPad(struct CPad *this); // 0x8009E2DC

extern unsigned short GetTick__C4CPad(struct CPad *this); // 0x80034E8C

extern void Flush__4CPad(struct CPad *this); // 0x8008459C


// decompiled code
// original method signature: 
// struct CPad * /*$ra*/ __4CPadi(struct CPad *this /*$s0*/, int PhysStick /*$a1*/)
 // line 79, offset 0x80084568
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x80084568
	/* end block 1 */
	// End offset: 0x80084568
	// End Line: 80

	/* begin block 2 */
		// Start line: 158
	/* end block 2 */
	// End Line: 159

CPad * __4CPadi(CPad *this,int PhysStick)

{
	this->PadNum = (ushort)PhysStick;
	this->get_both = '\0';
	Flush__4CPad(this);
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBothFlag__4CPadUc(struct CPad *this /*$a0*/, unsigned char fl /*$a1*/)
 // line 81, offset 0x80084560
	/* begin block 1 */
		// Start line: 82
		// Start offset: 0x80084560
	/* end block 1 */
	// End offset: 0x80084560
	// End Line: 82

	/* begin block 2 */
		// Start line: 162
	/* end block 2 */
	// End Line: 163

void SetBothFlag__4CPadUc(CPad *this,uchar fl)

{
	this->get_both = fl;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPadTick__4CPadUs(struct CPad *this /*$a0*/, unsigned short tick /*$a1*/)
 // line 85, offset 0x800933b4
	/* begin block 1 */
		// Start line: 86
		// Start offset: 0x800933B4
	/* end block 1 */
	// End offset: 0x800933B4
	// End Line: 86

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

void SetPadTick__4CPadUs(CPad *this,ushort tick)

{
	this->PADTICK = (uchar)tick;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPadTick__4CPadUs(struct CPad *this /*$a0*/, unsigned short tick /*$a1*/)
 // line 85, offset 0x8009e35c
	/* begin block 1 */
		// Start line: 86
		// Start offset: 0x8009E35C
	/* end block 1 */
	// End offset: 0x8009E35C
	// End Line: 86

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

void SetPadTick__4CPadUs(CPad *this,ushort tick)

{
	this->PADTICK = (uchar)tick;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPadTick__4CPadUs(struct CPad *this /*$a0*/, unsigned short tick /*$a1*/)
 // line 85, offset 0x80034ee4
	/* begin block 1 */
		// Start line: 86
		// Start offset: 0x80034EE4
	/* end block 1 */
	// End offset: 0x80034EE4
	// End Line: 86

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

void SetPadTick__4CPadUs(CPad *this,ushort tick)

{
	this->PADTICK = (uchar)tick;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPadTickMask__4CPadUs(struct CPad *this /*$a0*/, unsigned short mask /*$a1*/)
 // line 86, offset 0x800933ac
	/* begin block 1 */
		// Start line: 87
		// Start offset: 0x800933AC
	/* end block 1 */
	// End offset: 0x800933AC
	// End Line: 87

	/* begin block 2 */
		// Start line: 172
	/* end block 2 */
	// End Line: 173

void SetPadTickMask__4CPadUs(CPad *this,ushort mask)

{
	this->PADTICKMASK = mask;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPadTickMask__4CPadUs(struct CPad *this /*$a0*/, unsigned short mask /*$a1*/)
 // line 86, offset 0x8009e354
	/* begin block 1 */
		// Start line: 87
		// Start offset: 0x8009E354
	/* end block 1 */
	// End offset: 0x8009E354
	// End Line: 87

	/* begin block 2 */
		// Start line: 172
	/* end block 2 */
	// End Line: 173

void SetPadTickMask__4CPadUs(CPad *this,ushort mask)

{
	this->PADTICKMASK = mask;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPadTickMask__4CPadUs(struct CPad *this /*$a0*/, unsigned short mask /*$a1*/)
 // line 86, offset 0x80034edc
	/* begin block 1 */
		// Start line: 87
		// Start offset: 0x80034EDC
	/* end block 1 */
	// End offset: 0x80034EDC
	// End Line: 87

	/* begin block 2 */
		// Start line: 172
	/* end block 2 */
	// End Line: 173

void SetPadTickMask__4CPadUs(CPad *this,ushort mask)

{
	this->PADTICKMASK = mask;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetActive__4CPadUc(struct CPad *this /*$a0*/, unsigned char a /*$a1*/)
 // line 88, offset 0x80084558
	/* begin block 1 */
		// Start line: 89
		// Start offset: 0x80084558
	/* end block 1 */
	// End offset: 0x80084558
	// End Line: 89

	/* begin block 2 */
		// Start line: 176
	/* end block 2 */
	// End Line: 177

void SetActive__4CPadUc(CPad *this,uchar a)

{
	this->active = a;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckActive__4CPad(struct CPad *this /*$a0*/)
 // line 91, offset 0x80083ddc
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x80083DDC
	/* end block 1 */
	// End offset: 0x80083DE0
	// End Line: 94

	/* begin block 2 */
		// Start line: 184
	/* end block 2 */
	// End Line: 185

uchar CheckActive__4CPad(CPad *this)

{
	return this->active;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckActive__4CPad(struct CPad *this /*$a0*/)
 // line 91, offset 0x8008454c
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x8008454C
	/* end block 1 */
	// End offset: 0x80084550
	// End Line: 94

	/* begin block 2 */
		// Start line: 184
	/* end block 2 */
	// End Line: 185

uchar CheckActive__4CPad(CPad *this)

{
	return this->active;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPadType__4CPadUc(struct CPad *this /*$a0*/, unsigned char val /*$a1*/)
 // line 96, offset 0x80084544
	/* begin block 1 */
		// Start line: 97
		// Start offset: 0x80084544
	/* end block 1 */
	// End offset: 0x80084544
	// End Line: 97

	/* begin block 2 */
		// Start line: 192
	/* end block 2 */
	// End Line: 193

void SetPadType__4CPadUc(CPad *this,uchar val)

{
	this->PadType = val;
	return;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetCur__C4CPad(struct CPad *this /*$a0*/)
 // line 100, offset 0x8007cd14
	/* begin block 1 */
		// Start line: 101
		// Start offset: 0x8007CD14
	/* end block 1 */
	// End offset: 0x8007CD34
	// End Line: 105

	/* begin block 2 */
		// Start line: 201
	/* end block 2 */
	// End Line: 202

ushort GetCur__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Cur;
	}
	else {
		uVar1 = this->both_Cur;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetCur__C4CPad(struct CPad *this /*$a0*/)
 // line 100, offset 0x80099b18
	/* begin block 1 */
		// Start line: 101
		// Start offset: 0x80099B18
	/* end block 1 */
	// End offset: 0x80099B38
	// End Line: 105

	/* begin block 2 */
		// Start line: 201
	/* end block 2 */
	// End Line: 202

ushort GetCur__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Cur;
	}
	else {
		uVar1 = this->both_Cur;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetCur__C4CPad(struct CPad *this /*$a0*/)
 // line 100, offset 0x800735bc
	/* begin block 1 */
		// Start line: 101
		// Start offset: 0x800735BC
	/* end block 1 */
	// End offset: 0x800735DC
	// End Line: 105

	/* begin block 2 */
		// Start line: 201
	/* end block 2 */
	// End Line: 202

ushort GetCur__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Cur;
	}
	else {
		uVar1 = this->both_Cur;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetUp__C4CPad(struct CPad *this /*$a0*/)
 // line 107, offset 0x80083db4
	/* begin block 1 */
		// Start line: 108
		// Start offset: 0x80083DB4
	/* end block 1 */
	// End offset: 0x80083DD4
	// End Line: 112

	/* begin block 2 */
		// Start line: 215
	/* end block 2 */
	// End Line: 216

ushort GetUp__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Up;
	}
	else {
		uVar1 = this->both_Up;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetUp__C4CPad(struct CPad *this /*$a0*/)
 // line 107, offset 0x80093384
	/* begin block 1 */
		// Start line: 108
		// Start offset: 0x80093384
	/* end block 1 */
	// End offset: 0x800933A4
	// End Line: 112

	/* begin block 2 */
		// Start line: 215
	/* end block 2 */
	// End Line: 216

ushort GetUp__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Up;
	}
	else {
		uVar1 = this->both_Up;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetUp__C4CPad(struct CPad *this /*$a0*/)
 // line 107, offset 0x8009e32c
	/* begin block 1 */
		// Start line: 108
		// Start offset: 0x8009E32C
	/* end block 1 */
	// End offset: 0x8009E34C
	// End Line: 112

	/* begin block 2 */
		// Start line: 215
	/* end block 2 */
	// End Line: 216

ushort GetUp__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Up;
	}
	else {
		uVar1 = this->both_Up;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetUp__C4CPad(struct CPad *this /*$a0*/)
 // line 107, offset 0x80073594
	/* begin block 1 */
		// Start line: 108
		// Start offset: 0x80073594
	/* end block 1 */
	// End offset: 0x800735B4
	// End Line: 112

	/* begin block 2 */
		// Start line: 215
	/* end block 2 */
	// End Line: 216

ushort GetUp__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Up;
	}
	else {
		uVar1 = this->both_Up;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetDown__C4CPad(struct CPad *this /*$a0*/)
 // line 114, offset 0x80083d8c
	/* begin block 1 */
		// Start line: 115
		// Start offset: 0x80083D8C
	/* end block 1 */
	// End offset: 0x80083DAC
	// End Line: 119

	/* begin block 2 */
		// Start line: 229
	/* end block 2 */
	// End Line: 230

ushort GetDown__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Down;
	}
	else {
		uVar1 = this->both_Down;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetDown__C4CPad(struct CPad *this /*$a0*/)
 // line 114, offset 0x8009335c
	/* begin block 1 */
		// Start line: 115
		// Start offset: 0x8009335C
	/* end block 1 */
	// End offset: 0x8009337C
	// End Line: 119

	/* begin block 2 */
		// Start line: 229
	/* end block 2 */
	// End Line: 230

ushort GetDown__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Down;
	}
	else {
		uVar1 = this->both_Down;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetDown__C4CPad(struct CPad *this /*$a0*/)
 // line 114, offset 0x80099af0
	/* begin block 1 */
		// Start line: 115
		// Start offset: 0x80099AF0
	/* end block 1 */
	// End offset: 0x80099B10
	// End Line: 119

	/* begin block 2 */
		// Start line: 229
	/* end block 2 */
	// End Line: 230

ushort GetDown__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Down;
	}
	else {
		uVar1 = this->both_Down;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetDown__C4CPad(struct CPad *this /*$a0*/)
 // line 114, offset 0x8009e304
	/* begin block 1 */
		// Start line: 115
		// Start offset: 0x8009E304
	/* end block 1 */
	// End offset: 0x8009E324
	// End Line: 119

	/* begin block 2 */
		// Start line: 229
	/* end block 2 */
	// End Line: 230

ushort GetDown__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Down;
	}
	else {
		uVar1 = this->both_Down;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetDown__C4CPad(struct CPad *this /*$a0*/)
 // line 114, offset 0x800a0010
	/* begin block 1 */
		// Start line: 115
		// Start offset: 0x800A0010
	/* end block 1 */
	// End offset: 0x800A0030
	// End Line: 119

	/* begin block 2 */
		// Start line: 229
	/* end block 2 */
	// End Line: 230

ushort GetDown__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Down;
	}
	else {
		uVar1 = this->both_Down;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetDown__C4CPad(struct CPad *this /*$a0*/)
 // line 114, offset 0x80034eb4
	/* begin block 1 */
		// Start line: 115
		// Start offset: 0x80034EB4
	/* end block 1 */
	// End offset: 0x80034ED4
	// End Line: 119

	/* begin block 2 */
		// Start line: 229
	/* end block 2 */
	// End Line: 230

ushort GetDown__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Down;
	}
	else {
		uVar1 = this->both_Down;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetDown__C4CPad(struct CPad *this /*$a0*/)
 // line 114, offset 0x8006cf8c
	/* begin block 1 */
		// Start line: 115
		// Start offset: 0x8006CF8C
	/* end block 1 */
	// End offset: 0x8006CFAC
	// End Line: 119

	/* begin block 2 */
		// Start line: 229
	/* end block 2 */
	// End Line: 230

ushort GetDown__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Down;
	}
	else {
		uVar1 = this->both_Down;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetDown__C4CPad(struct CPad *this /*$a0*/)
 // line 114, offset 0x8007356c
	/* begin block 1 */
		// Start line: 115
		// Start offset: 0x8007356C
	/* end block 1 */
	// End offset: 0x8007358C
	// End Line: 119

	/* begin block 2 */
		// Start line: 229
	/* end block 2 */
	// End Line: 230

ushort GetDown__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Down;
	}
	else {
		uVar1 = this->both_Down;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetTick__C4CPad(struct CPad *this /*$a0*/)
 // line 121, offset 0x80093334
	/* begin block 1 */
		// Start line: 122
		// Start offset: 0x80093334
	/* end block 1 */
	// End offset: 0x80093354
	// End Line: 126

	/* begin block 2 */
		// Start line: 243
	/* end block 2 */
	// End Line: 244

ushort GetTick__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Tick;
	}
	else {
		uVar1 = this->both_Tick;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetTick__C4CPad(struct CPad *this /*$a0*/)
 // line 121, offset 0x8009e2dc
	/* begin block 1 */
		// Start line: 122
		// Start offset: 0x8009E2DC
	/* end block 1 */
	// End offset: 0x8009E2FC
	// End Line: 126

	/* begin block 2 */
		// Start line: 243
	/* end block 2 */
	// End Line: 244

ushort GetTick__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Tick;
	}
	else {
		uVar1 = this->both_Tick;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetTick__C4CPad(struct CPad *this /*$a0*/)
 // line 121, offset 0x80034e8c
	/* begin block 1 */
		// Start line: 122
		// Start offset: 0x80034E8C
	/* end block 1 */
	// End offset: 0x80034EAC
	// End Line: 126

	/* begin block 2 */
		// Start line: 243
	/* end block 2 */
	// End Line: 244

ushort GetTick__C4CPad(CPad *this)

{
	ushort uVar1;
	
	if (this->get_both == '\0') {
		uVar1 = this->Tick;
	}
	else {
		uVar1 = this->both_Tick;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Flush__4CPad(struct CPad *this /*$a0*/)
 // line 128, offset 0x8008459c
	/* begin block 1 */
		// Start line: 129
		// Start offset: 0x8008459C
	/* end block 1 */
	// End offset: 0x800845B8
	// End Line: 133

	/* begin block 2 */
		// Start line: 274
	/* end block 2 */
	// End Line: 275

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
	return;
}





extern unsigned long ReadPadStream__Fv(); // 0x80083DE8

extern void PAD_Handler__Fv(); // 0x80083F00

extern struct CPad * PAD_GetPad__FiUc(int PadNum, unsigned char both); // 0x800840B8

extern void NewVal__4CPadUs(struct CPad *this, unsigned short New); // 0x80084154

extern void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2); // 0x8008428C

extern unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal); // 0x800843E8

extern void _GLOBAL_.I.Pad0(); // 0x8008450C


#endif
