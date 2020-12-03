#ifndef PADS_H
#define PADS_H


extern struct CPad * __4CPadi(struct CPad *this, int PhysStick); // 0x80089C2C

extern void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl); // 0x80089C24

extern void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick); // 0x8009DBD0

extern void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick); // 0x800AB5AC

extern void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick); // 0x800AF0E0

extern void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick); // 0x8003760C

extern void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask); // 0x8009DBC8

extern void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask); // 0x800AB5A4

extern void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask); // 0x800AF0D8

extern void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask); // 0x80037604

extern void SetActive__4CPadUc(struct CPad *this, unsigned char a); // 0x80089C1C

extern unsigned char CheckActive__4CPad(struct CPad *this); // 0x80085840

extern unsigned char CheckActive__4CPad(struct CPad *this); // 0x800894D4

extern unsigned char CheckActive__4CPad(struct CPad *this); // 0x80089C10

extern void SetPadType__4CPadUc(struct CPad *this, unsigned char val); // 0x80089C08

extern unsigned short GetCur__C4CPad(struct CPad *this); // 0x80085818

extern unsigned short GetCur__C4CPad(struct CPad *this); // 0x8009DBA0

extern unsigned short GetCur__C4CPad(struct CPad *this); // 0x800A435C

extern unsigned short GetCur__C4CPad(struct CPad *this); // 0x800B02F4

extern unsigned short GetCur__C4CPad(struct CPad *this); // 0x8007B148

extern void __SPLTARGT_text_objend() ; // 0x800B031C

extern unsigned short GetUp__C4CPad(struct CPad *this); // 0x8009DB78

extern unsigned short GetUp__C4CPad(struct CPad *this); // 0x800AB57C

extern unsigned short GetUp__C4CPad(struct CPad *this); // 0x8007B120

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x800894AC

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x8009DB50

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x800A4334

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x800AB554

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x800AF0B0

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x800375DC

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x8004EA64

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x80074378

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x8007B0F8

extern unsigned short GetDown__C4CPad(struct CPad *this); // 0x80082590

extern unsigned short GetTick__C4CPad(struct CPad *this); // 0x8009DB28

extern unsigned short GetTick__C4CPad(struct CPad *this); // 0x800AB52C

extern unsigned short GetTick__C4CPad(struct CPad *this); // 0x800AF088

extern unsigned short GetTick__C4CPad(struct CPad *this); // 0x800375B4


// decompiled code
// original method signature: 
// struct CPad * /*$ra*/ __4CPadi(struct CPad *this /*$s0*/, int PhysStick /*$a1*/)
 // line 85, offset 0x80089c2c
	/* begin block 1 */
		// Start line: 86
		// Start offset: 0x80089C2C
	/* end block 1 */
	// End offset: 0x80089C2C
	// End Line: 86

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

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
 // line 87, offset 0x80089c24
	/* begin block 1 */
		// Start line: 88
		// Start offset: 0x80089C24
	/* end block 1 */
	// End offset: 0x80089C24
	// End Line: 88

	/* begin block 2 */
		// Start line: 174
	/* end block 2 */
	// End Line: 175

void SetBothFlag__4CPadUc(CPad *this,uchar fl)

{
	this->get_both = fl;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPadTick__4CPadUs(struct CPad *this /*$a0*/, unsigned short tick /*$a1*/)
 // line 91, offset 0x8009dbd0
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x8009DBD0
	/* end block 1 */
	// End offset: 0x8009DBD0
	// End Line: 92

	/* begin block 2 */
		// Start line: 182
	/* end block 2 */
	// End Line: 183

void SetPadTick__4CPadUs(CPad *this,ushort tick)

{
	this->PADTICK = (uchar)tick;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPadTick__4CPadUs(struct CPad *this /*$a0*/, unsigned short tick /*$a1*/)
 // line 91, offset 0x800ab5ac
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x800AB5AC
	/* end block 1 */
	// End offset: 0x800AB5AC
	// End Line: 92

	/* begin block 2 */
		// Start line: 182
	/* end block 2 */
	// End Line: 183

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPadTick__4CPadUs(CPad *this,ushort tick)

{
	this->PADTICK = (uchar)tick;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPadTick__4CPadUs(struct CPad *this /*$a0*/, unsigned short tick /*$a1*/)
 // line 91, offset 0x800af0e0
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x800AF0E0
	/* end block 1 */
	// End offset: 0x800AF0E0
	// End Line: 92

	/* begin block 2 */
		// Start line: 182
	/* end block 2 */
	// End Line: 183

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPadTick__4CPadUs(CPad *this,ushort tick)

{
	this->PADTICK = (uchar)tick;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPadTick__4CPadUs(struct CPad *this /*$a0*/, unsigned short tick /*$a1*/)
 // line 91, offset 0x8003760c
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x8003760C
	/* end block 1 */
	// End offset: 0x8003760C
	// End Line: 92

	/* begin block 2 */
		// Start line: 182
	/* end block 2 */
	// End Line: 183

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPadTick__4CPadUs(CPad *this,ushort tick)

{
	this->PADTICK = (uchar)tick;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPadTickMask__4CPadUs(struct CPad *this /*$a0*/, unsigned short mask /*$a1*/)
 // line 92, offset 0x8009dbc8
	/* begin block 1 */
		// Start line: 93
		// Start offset: 0x8009DBC8
	/* end block 1 */
	// End offset: 0x8009DBC8
	// End Line: 93

	/* begin block 2 */
		// Start line: 184
	/* end block 2 */
	// End Line: 185

void SetPadTickMask__4CPadUs(CPad *this,ushort mask)

{
	this->PADTICKMASK = mask;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPadTickMask__4CPadUs(struct CPad *this /*$a0*/, unsigned short mask /*$a1*/)
 // line 92, offset 0x800ab5a4
	/* begin block 1 */
		// Start line: 93
		// Start offset: 0x800AB5A4
	/* end block 1 */
	// End offset: 0x800AB5A4
	// End Line: 93

	/* begin block 2 */
		// Start line: 184
	/* end block 2 */
	// End Line: 185

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPadTickMask__4CPadUs(CPad *this,ushort mask)

{
	this->PADTICKMASK = mask;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPadTickMask__4CPadUs(struct CPad *this /*$a0*/, unsigned short mask /*$a1*/)
 // line 92, offset 0x800af0d8
	/* begin block 1 */
		// Start line: 93
		// Start offset: 0x800AF0D8
	/* end block 1 */
	// End offset: 0x800AF0D8
	// End Line: 93

	/* begin block 2 */
		// Start line: 184
	/* end block 2 */
	// End Line: 185

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPadTickMask__4CPadUs(CPad *this,ushort mask)

{
	this->PADTICKMASK = mask;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPadTickMask__4CPadUs(struct CPad *this /*$a0*/, unsigned short mask /*$a1*/)
 // line 92, offset 0x80037604
	/* begin block 1 */
		// Start line: 93
		// Start offset: 0x80037604
	/* end block 1 */
	// End offset: 0x80037604
	// End Line: 93

	/* begin block 2 */
		// Start line: 184
	/* end block 2 */
	// End Line: 185

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPadTickMask__4CPadUs(CPad *this,ushort mask)

{
	this->PADTICKMASK = mask;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetActive__4CPadUc(struct CPad *this /*$a0*/, unsigned char a /*$a1*/)
 // line 94, offset 0x80089c1c
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x80089C1C
	/* end block 1 */
	// End offset: 0x80089C1C
	// End Line: 95

	/* begin block 2 */
		// Start line: 188
	/* end block 2 */
	// End Line: 189

void SetActive__4CPadUc(CPad *this,uchar a)

{
	this->active = a;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckActive__4CPad(struct CPad *this /*$a0*/)
 // line 97, offset 0x80085840
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x80085840
	/* end block 1 */
	// End offset: 0x80085844
	// End Line: 100

	/* begin block 2 */
		// Start line: 196
	/* end block 2 */
	// End Line: 197

uchar CheckActive__4CPad(CPad *this)

{
	return this->active;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckActive__4CPad(struct CPad *this /*$a0*/)
 // line 97, offset 0x800894d4
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x800894D4
	/* end block 1 */
	// End offset: 0x800894D8
	// End Line: 100

	/* begin block 2 */
		// Start line: 196
	/* end block 2 */
	// End Line: 197

uchar CheckActive__4CPad(CPad *this)

{
	return this->active;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckActive__4CPad(struct CPad *this /*$a0*/)
 // line 97, offset 0x80089c10
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x80089C10
	/* end block 1 */
	// End offset: 0x80089C14
	// End Line: 100

	/* begin block 2 */
		// Start line: 196
	/* end block 2 */
	// End Line: 197

uchar CheckActive__4CPad(CPad *this)

{
	return this->active;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPadType__4CPadUc(struct CPad *this /*$a0*/, unsigned char val /*$a1*/)
 // line 102, offset 0x80089c08
	/* begin block 1 */
		// Start line: 103
		// Start offset: 0x80089C08
	/* end block 1 */
	// End offset: 0x80089C08
	// End Line: 103

	/* begin block 2 */
		// Start line: 204
	/* end block 2 */
	// End Line: 205

void SetPadType__4CPadUc(CPad *this,uchar val)

{
	this->PadType = val;
	return;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetCur__C4CPad(struct CPad *this /*$a0*/)
 // line 106, offset 0x80085818
	/* begin block 1 */
		// Start line: 107
		// Start offset: 0x80085818
	/* end block 1 */
	// End offset: 0x80085838
	// End Line: 111

	/* begin block 2 */
		// Start line: 213
	/* end block 2 */
	// End Line: 214

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
 // line 106, offset 0x8009dba0
	/* begin block 1 */
		// Start line: 107
		// Start offset: 0x8009DBA0
	/* end block 1 */
	// End offset: 0x8009DBC0
	// End Line: 111

	/* begin block 2 */
		// Start line: 213
	/* end block 2 */
	// End Line: 214

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
 // line 106, offset 0x800a435c
	/* begin block 1 */
		// Start line: 107
		// Start offset: 0x800A435C
	/* end block 1 */
	// End offset: 0x800A437C
	// End Line: 111

	/* begin block 2 */
		// Start line: 213
	/* end block 2 */
	// End Line: 214

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 106, offset 0x800b02f4
	/* begin block 1 */
		// Start line: 107
		// Start offset: 0x800B02F4
	/* end block 1 */
	// End offset: 0x800B0314
	// End Line: 111

	/* begin block 2 */
		// Start line: 213
	/* end block 2 */
	// End Line: 214

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 106, offset 0x8007b148
	/* begin block 1 */
		// Start line: 107
		// Start offset: 0x8007B148
	/* end block 1 */
	// End offset: 0x8007B168
	// End Line: 111

	/* begin block 2 */
		// Start line: 213
	/* end block 2 */
	// End Line: 214

/* WARNING: Unknown calling convention yet parameter storage is locked */

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



// autogenerated function stub: 
// void __SPLTARGT_text_objend() /* __SPLTARGT_text_objend method signature is not contained in the debug symbol data. This is likely either a library function or the game was compiled without debug symbols. Please refer to the TDR documentation for additional guidance. */
void __SPLTARGT_text_objend() 
{ // line 112, offset 0x800b031c
	return null;
}


// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetUp__C4CPad(struct CPad *this /*$a0*/)
 // line 113, offset 0x8009db78
	/* begin block 1 */
		// Start line: 114
		// Start offset: 0x8009DB78
	/* end block 1 */
	// End offset: 0x8009DB98
	// End Line: 118

	/* begin block 2 */
		// Start line: 227
	/* end block 2 */
	// End Line: 228

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
 // line 113, offset 0x800ab57c
	/* begin block 1 */
		// Start line: 114
		// Start offset: 0x800AB57C
	/* end block 1 */
	// End offset: 0x800AB59C
	// End Line: 118

	/* begin block 2 */
		// Start line: 227
	/* end block 2 */
	// End Line: 228

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 113, offset 0x8007b120
	/* begin block 1 */
		// Start line: 114
		// Start offset: 0x8007B120
	/* end block 1 */
	// End offset: 0x8007B140
	// End Line: 118

	/* begin block 2 */
		// Start line: 227
	/* end block 2 */
	// End Line: 228

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 120, offset 0x800894ac
	/* begin block 1 */
		// Start line: 121
		// Start offset: 0x800894AC
	/* end block 1 */
	// End offset: 0x800894CC
	// End Line: 125

	/* begin block 2 */
		// Start line: 241
	/* end block 2 */
	// End Line: 242

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
 // line 120, offset 0x8009db50
	/* begin block 1 */
		// Start line: 121
		// Start offset: 0x8009DB50
	/* end block 1 */
	// End offset: 0x8009DB70
	// End Line: 125

	/* begin block 2 */
		// Start line: 241
	/* end block 2 */
	// End Line: 242

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
 // line 120, offset 0x800a4334
	/* begin block 1 */
		// Start line: 121
		// Start offset: 0x800A4334
	/* end block 1 */
	// End offset: 0x800A4354
	// End Line: 125

	/* begin block 2 */
		// Start line: 241
	/* end block 2 */
	// End Line: 242

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 120, offset 0x800ab554
	/* begin block 1 */
		// Start line: 121
		// Start offset: 0x800AB554
	/* end block 1 */
	// End offset: 0x800AB574
	// End Line: 125

	/* begin block 2 */
		// Start line: 241
	/* end block 2 */
	// End Line: 242

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 120, offset 0x800af0b0
	/* begin block 1 */
		// Start line: 121
		// Start offset: 0x800AF0B0
	/* end block 1 */
	// End offset: 0x800AF0D0
	// End Line: 125

	/* begin block 2 */
		// Start line: 241
	/* end block 2 */
	// End Line: 242

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 120, offset 0x800375dc
	/* begin block 1 */
		// Start line: 121
		// Start offset: 0x800375DC
	/* end block 1 */
	// End offset: 0x800375FC
	// End Line: 125

	/* begin block 2 */
		// Start line: 241
	/* end block 2 */
	// End Line: 242

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 120, offset 0x8004ea64
	/* begin block 1 */
		// Start line: 121
		// Start offset: 0x8004EA64
	/* end block 1 */
	// End offset: 0x8004EA84
	// End Line: 125

	/* begin block 2 */
		// Start line: 241
	/* end block 2 */
	// End Line: 242

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 120, offset 0x80074378
	/* begin block 1 */
		// Start line: 121
		// Start offset: 0x80074378
	/* end block 1 */
	// End offset: 0x80074398
	// End Line: 125

	/* begin block 2 */
		// Start line: 241
	/* end block 2 */
	// End Line: 242

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 120, offset 0x8007b0f8
	/* begin block 1 */
		// Start line: 121
		// Start offset: 0x8007B0F8
	/* end block 1 */
	// End offset: 0x8007B118
	// End Line: 125

	/* begin block 2 */
		// Start line: 241
	/* end block 2 */
	// End Line: 242

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 120, offset 0x80082590
	/* begin block 1 */
		// Start line: 121
		// Start offset: 0x80082590
	/* end block 1 */
	// End offset: 0x800825B0
	// End Line: 125

	/* begin block 2 */
		// Start line: 241
	/* end block 2 */
	// End Line: 242

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
 // line 127, offset 0x8009db28
	/* begin block 1 */
		// Start line: 128
		// Start offset: 0x8009DB28
	/* end block 1 */
	// End offset: 0x8009DB48
	// End Line: 132

	/* begin block 2 */
		// Start line: 255
	/* end block 2 */
	// End Line: 256

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
 // line 127, offset 0x800ab52c
	/* begin block 1 */
		// Start line: 128
		// Start offset: 0x800AB52C
	/* end block 1 */
	// End offset: 0x800AB54C
	// End Line: 132

	/* begin block 2 */
		// Start line: 255
	/* end block 2 */
	// End Line: 256

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 127, offset 0x800af088
	/* begin block 1 */
		// Start line: 128
		// Start offset: 0x800AF088
	/* end block 1 */
	// End offset: 0x800AF0A8
	// End Line: 132

	/* begin block 2 */
		// Start line: 255
	/* end block 2 */
	// End Line: 256

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 127, offset 0x800375b4
	/* begin block 1 */
		// Start line: 128
		// Start offset: 0x800375B4
	/* end block 1 */
	// End offset: 0x800375D4
	// End Line: 132

	/* begin block 2 */
		// Start line: 255
	/* end block 2 */
	// End Line: 256

/* WARNING: Unknown calling convention yet parameter storage is locked */

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





extern unsigned long ReadPadStream__Fv(); // 0x800894E0

extern void PAD_Handler__Fv(); // 0x800895F8

extern struct CPad * PAD_GetPad__FiUc(int PadNum, unsigned char both); // 0x800897F4

extern void NewVal__4CPadUs(struct CPad *this, unsigned short New); // 0x800898A4

extern void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2); // 0x80089918

extern unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal); // 0x800899AC

extern void Flush__4CPad(struct CPad *this); // 0x80089AD0

extern void InitClickBits__FPUs(unsigned short *CountArray); // 0x80089B24

extern unsigned short MakeClickBits__FiiiPUs(int Switch, int Closed, int Speed, unsigned short *CountArray); // 0x80089B44

extern void _GLOBAL_.I.Pad0(); // 0x80089BD0


#endif
