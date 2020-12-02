#ifndef DIALOG_H
#define DIALOG_H


extern struct Dialog * __6Dialog(struct Dialog *this); // 0x8008941C

extern struct Dialog * __6Dialog(struct Dialog *this); // 0x8009DC28

extern struct Dialog * __6Dialog(struct Dialog *this); // 0x800A42A0

extern struct Dialog * __6Dialog(struct Dialog *this); // 0x800A4F5C

extern struct Dialog * __6Dialog(struct Dialog *this); // 0x800A6848

extern struct Dialog * __6Dialog(struct Dialog *this); // 0x800AB60C

extern struct Dialog * __6Dialog(struct Dialog *this); // 0x800AF000

extern struct Dialog * __6Dialog(struct Dialog *this); // 0x8003766C

extern struct Dialog * __6Dialog(struct Dialog *this); // 0x8004E9DC

extern struct Dialog * __6Dialog(struct Dialog *this); // 0x80069294

extern struct Dialog * __6Dialog(struct Dialog *this); // 0x800743F0

extern struct Dialog * __6Dialog(struct Dialog *this); // 0x80082610

extern void _._6Dialog(struct Dialog *this, int __in_chrg); // 0x800893F4

extern void _._6Dialog(struct Dialog *this, int __in_chrg); // 0x8009DC00

extern void _._6Dialog(struct Dialog *this, int __in_chrg); // 0x800A4278

extern void _._6Dialog(struct Dialog *this, int __in_chrg); // 0x800A4F34

extern void _._6Dialog(struct Dialog *this, int __in_chrg); // 0x800A6820

extern void _._6Dialog(struct Dialog *this, int __in_chrg); // 0x800AB5E4

extern void _._6Dialog(struct Dialog *this, int __in_chrg); // 0x800AEFD8

extern void _._6Dialog(struct Dialog *this, int __in_chrg); // 0x80037644

extern void _._6Dialog(struct Dialog *this, int __in_chrg); // 0x8004E9B4

extern void _._6Dialog(struct Dialog *this, int __in_chrg); // 0x8006926C

extern void _._6Dialog(struct Dialog *this, int __in_chrg); // 0x800743C8

extern void _._6Dialog(struct Dialog *this, int __in_chrg); // 0x800825E8

extern void SetBorder__6Dialogi(struct Dialog *this, int Type); // 0x800893EC

extern void SetBorder__6Dialogi(struct Dialog *this, int Type); // 0x8009DBF8

extern void SetBorder__6Dialogi(struct Dialog *this, int Type); // 0x800A4270

extern void SetBorder__6Dialogi(struct Dialog *this, int Type); // 0x800A4F2C

extern void SetBorder__6Dialogi(struct Dialog *this, int Type); // 0x800A6818

extern void SetBorder__6Dialogi(struct Dialog *this, int Type); // 0x800AB5DC

extern void SetBorder__6Dialogi(struct Dialog *this, int Type); // 0x800AEFD0

extern void SetBorder__6Dialogi(struct Dialog *this, int Type); // 0x8003763C

extern void SetBorder__6Dialogi(struct Dialog *this, int Type); // 0x8004E9AC

extern void SetBorder__6Dialogi(struct Dialog *this, int Type); // 0x80069264

extern void SetBorder__6Dialogi(struct Dialog *this, int Type); // 0x800743C0

extern void SetBorder__6Dialogi(struct Dialog *this, int Type); // 0x800825E0

extern void SetBack__6Dialogi(struct Dialog *this, int Type); // 0x800893E4

extern void SetBack__6Dialogi(struct Dialog *this, int Type); // 0x800A4268

extern void SetBack__6Dialogi(struct Dialog *this, int Type); // 0x800A4F24

extern void SetBack__6Dialogi(struct Dialog *this, int Type); // 0x800A6810

extern void SetBack__6Dialogi(struct Dialog *this, int Type); // 0x800AB5D4

extern void SetBack__6Dialogi(struct Dialog *this, int Type); // 0x80037634

extern void SetBack__6Dialogi(struct Dialog *this, int Type); // 0x8006925C

extern void SetBack__6Dialogi(struct Dialog *this, int Type); // 0x800825D8

extern void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B); // 0x800893C4

extern void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B); // 0x8009DBD8

extern void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B); // 0x800A4248

extern void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B); // 0x800A4F04

extern void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B); // 0x800A67F0

extern void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B); // 0x800AB5B4

extern void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B); // 0x800AEFB0

extern void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B); // 0x80037614

extern void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B); // 0x8004E98C

extern void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B); // 0x8006923C

extern void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B); // 0x800743A0

extern void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B); // 0x800825B8


// decompiled code
// original method signature: 
// struct Dialog * /*$ra*/ __6Dialog(struct Dialog *this /*$s0*/)
 // line 62, offset 0x8008941c
	/* begin block 1 */
		// Start line: 63
		// Start offset: 0x8008941C
	/* end block 1 */
	// End offset: 0x8008941C
	// End Line: 63

	/* begin block 2 */
		// Start line: 124
	/* end block 2 */
	// End Line: 125

Dialog * __6Dialog(Dialog *this)

{
	int iVar1;
	
	this->BackGfx = 0x94;
	this->BevelGfx = 0x1a;
	this->BorderGfx = 0x1a;
	DialogRed = -0x80;
	DialogGreen = -0x80;
	DialogBlue = -0x80;
	DialogTRed = ' ';
	DialogTGreen = ' ';
	DialogTBlue = ' ';
	iVar1 = GetOverlayOtBase__7CBlocks();
	this->DialogOTpos = iVar1;
	return this;
}



// decompiled code
// original method signature: 
// struct Dialog * /*$ra*/ __6Dialog(struct Dialog *this /*$s0*/)
 // line 62, offset 0x8009dc28
	/* begin block 1 */
		// Start line: 63
		// Start offset: 0x8009DC28
	/* end block 1 */
	// End offset: 0x8009DC28
	// End Line: 63

	/* begin block 2 */
		// Start line: 124
	/* end block 2 */
	// End Line: 125

Dialog * __6Dialog(Dialog *this)

{
	int iVar1;
	
	this->BackGfx = 0x94;
	this->BevelGfx = 0x1a;
	this->BorderGfx = 0x1a;
	DialogRed = -0x80;
	DialogGreen = -0x80;
	DialogBlue = -0x80;
	DialogTRed = ' ';
	DialogTGreen = ' ';
	DialogTBlue = ' ';
	iVar1 = GetOverlayOtBase__7CBlocks();
	this->DialogOTpos = iVar1;
	return this;
}



// decompiled code
// original method signature: 
// struct Dialog * /*$ra*/ __6Dialog(struct Dialog *this /*$s0*/)
 // line 62, offset 0x800a42a0
	/* begin block 1 */
		// Start line: 63
		// Start offset: 0x800A42A0
	/* end block 1 */
	// End offset: 0x800A42A0
	// End Line: 63

	/* begin block 2 */
		// Start line: 124
	/* end block 2 */
	// End Line: 125

/* WARNING: Unknown calling convention yet parameter storage is locked */

Dialog * __6Dialog(Dialog *this)

{
	int iVar1;
	
	this->BackGfx = 0x94;
	this->BevelGfx = 0x1a;
	this->BorderGfx = 0x1a;
	DialogRed = -0x80;
	DialogGreen = -0x80;
	DialogBlue = -0x80;
	DialogTRed = ' ';
	DialogTGreen = ' ';
	DialogTBlue = ' ';
	iVar1 = GetOverlayOtBase__7CBlocks();
	this->DialogOTpos = iVar1;
	return this;
}



// decompiled code
// original method signature: 
// struct Dialog * /*$ra*/ __6Dialog(struct Dialog *this /*$s0*/)
 // line 62, offset 0x800a4f5c
	/* begin block 1 */
		// Start line: 63
		// Start offset: 0x800A4F5C
	/* end block 1 */
	// End offset: 0x800A4F5C
	// End Line: 63

	/* begin block 2 */
		// Start line: 124
	/* end block 2 */
	// End Line: 125

/* WARNING: Unknown calling convention yet parameter storage is locked */

Dialog * __6Dialog(Dialog *this)

{
	int iVar1;
	
	this->BackGfx = 0x94;
	this->BevelGfx = 0x1a;
	this->BorderGfx = 0x1a;
	DialogRed = -0x80;
	DialogGreen = -0x80;
	DialogBlue = -0x80;
	DialogTRed = ' ';
	DialogTGreen = ' ';
	DialogTBlue = ' ';
	iVar1 = GetOverlayOtBase__7CBlocks();
	this->DialogOTpos = iVar1;
	return this;
}



// decompiled code
// original method signature: 
// struct Dialog * /*$ra*/ __6Dialog(struct Dialog *this /*$s0*/)
 // line 62, offset 0x800a6848
	/* begin block 1 */
		// Start line: 63
		// Start offset: 0x800A6848
	/* end block 1 */
	// End offset: 0x800A6848
	// End Line: 63

	/* begin block 2 */
		// Start line: 124
	/* end block 2 */
	// End Line: 125

/* WARNING: Unknown calling convention yet parameter storage is locked */

Dialog * __6Dialog(Dialog *this)

{
	int iVar1;
	
	this->BackGfx = 0x94;
	this->BevelGfx = 0x1a;
	this->BorderGfx = 0x1a;
	DialogRed = -0x80;
	DialogGreen = -0x80;
	DialogBlue = -0x80;
	DialogTRed = ' ';
	DialogTGreen = ' ';
	DialogTBlue = ' ';
	iVar1 = GetOverlayOtBase__7CBlocks();
	this->DialogOTpos = iVar1;
	return this;
}



// decompiled code
// original method signature: 
// struct Dialog * /*$ra*/ __6Dialog(struct Dialog *this /*$s0*/)
 // line 62, offset 0x800ab60c
	/* begin block 1 */
		// Start line: 63
		// Start offset: 0x800AB60C
	/* end block 1 */
	// End offset: 0x800AB60C
	// End Line: 63

	/* begin block 2 */
		// Start line: 124
	/* end block 2 */
	// End Line: 125

/* WARNING: Unknown calling convention yet parameter storage is locked */

Dialog * __6Dialog(Dialog *this)

{
	int iVar1;
	
	this->BackGfx = 0x94;
	this->BevelGfx = 0x1a;
	this->BorderGfx = 0x1a;
	DialogRed = -0x80;
	DialogGreen = -0x80;
	DialogBlue = -0x80;
	DialogTRed = ' ';
	DialogTGreen = ' ';
	DialogTBlue = ' ';
	iVar1 = GetOverlayOtBase__7CBlocks();
	this->DialogOTpos = iVar1;
	return this;
}



// decompiled code
// original method signature: 
// struct Dialog * /*$ra*/ __6Dialog(struct Dialog *this /*$s0*/)
 // line 62, offset 0x800af000
	/* begin block 1 */
		// Start line: 63
		// Start offset: 0x800AF000
	/* end block 1 */
	// End offset: 0x800AF000
	// End Line: 63

	/* begin block 2 */
		// Start line: 124
	/* end block 2 */
	// End Line: 125

/* WARNING: Unknown calling convention yet parameter storage is locked */

Dialog * __6Dialog(Dialog *this)

{
	int iVar1;
	
	this->BackGfx = 0x94;
	this->BevelGfx = 0x1a;
	this->BorderGfx = 0x1a;
	DialogRed = -0x80;
	DialogGreen = -0x80;
	DialogBlue = -0x80;
	DialogTRed = ' ';
	DialogTGreen = ' ';
	DialogTBlue = ' ';
	iVar1 = GetOverlayOtBase__7CBlocks();
	this->DialogOTpos = iVar1;
	return this;
}



// decompiled code
// original method signature: 
// struct Dialog * /*$ra*/ __6Dialog(struct Dialog *this /*$s0*/)
 // line 62, offset 0x8003766c
	/* begin block 1 */
		// Start line: 63
		// Start offset: 0x8003766C
	/* end block 1 */
	// End offset: 0x8003766C
	// End Line: 63

	/* begin block 2 */
		// Start line: 124
	/* end block 2 */
	// End Line: 125

/* WARNING: Unknown calling convention yet parameter storage is locked */

Dialog * __6Dialog(Dialog *this)

{
	int iVar1;
	
	this->BackGfx = 0x94;
	this->BevelGfx = 0x1a;
	this->BorderGfx = 0x1a;
	DialogRed = -0x80;
	DialogGreen = -0x80;
	DialogBlue = -0x80;
	DialogTRed = ' ';
	DialogTGreen = ' ';
	DialogTBlue = ' ';
	iVar1 = GetOverlayOtBase__7CBlocks();
	this->DialogOTpos = iVar1;
	return this;
}



// decompiled code
// original method signature: 
// struct Dialog * /*$ra*/ __6Dialog(struct Dialog *this /*$s0*/)
 // line 62, offset 0x8004e9dc
	/* begin block 1 */
		// Start line: 63
		// Start offset: 0x8004E9DC
	/* end block 1 */
	// End offset: 0x8004E9DC
	// End Line: 63

	/* begin block 2 */
		// Start line: 124
	/* end block 2 */
	// End Line: 125

/* WARNING: Unknown calling convention yet parameter storage is locked */

Dialog * __6Dialog(Dialog *this)

{
	int iVar1;
	
	this->BackGfx = 0x94;
	this->BevelGfx = 0x1a;
	this->BorderGfx = 0x1a;
	DialogRed = -0x80;
	DialogGreen = -0x80;
	DialogBlue = -0x80;
	DialogTRed = ' ';
	DialogTGreen = ' ';
	DialogTBlue = ' ';
	iVar1 = GetOverlayOtBase__7CBlocks();
	this->DialogOTpos = iVar1;
	return this;
}



// decompiled code
// original method signature: 
// struct Dialog * /*$ra*/ __6Dialog(struct Dialog *this /*$s0*/)
 // line 62, offset 0x80069294
	/* begin block 1 */
		// Start line: 63
		// Start offset: 0x80069294
	/* end block 1 */
	// End offset: 0x80069294
	// End Line: 63

	/* begin block 2 */
		// Start line: 124
	/* end block 2 */
	// End Line: 125

/* WARNING: Unknown calling convention yet parameter storage is locked */

Dialog * __6Dialog(Dialog *this)

{
	int iVar1;
	
	this->BackGfx = 0x94;
	this->BevelGfx = 0x1a;
	this->BorderGfx = 0x1a;
	DialogRed = -0x80;
	DialogGreen = -0x80;
	DialogBlue = -0x80;
	DialogTRed = ' ';
	DialogTGreen = ' ';
	DialogTBlue = ' ';
	iVar1 = GetOverlayOtBase__7CBlocks();
	this->DialogOTpos = iVar1;
	return this;
}



// decompiled code
// original method signature: 
// struct Dialog * /*$ra*/ __6Dialog(struct Dialog *this /*$s0*/)
 // line 62, offset 0x800743f0
	/* begin block 1 */
		// Start line: 63
		// Start offset: 0x800743F0
	/* end block 1 */
	// End offset: 0x800743F0
	// End Line: 63

	/* begin block 2 */
		// Start line: 124
	/* end block 2 */
	// End Line: 125

/* WARNING: Unknown calling convention yet parameter storage is locked */

Dialog * __6Dialog(Dialog *this)

{
	int iVar1;
	
	this->BackGfx = 0x94;
	this->BevelGfx = 0x1a;
	this->BorderGfx = 0x1a;
	DialogRed = -0x80;
	DialogGreen = -0x80;
	DialogBlue = -0x80;
	DialogTRed = ' ';
	DialogTGreen = ' ';
	DialogTBlue = ' ';
	iVar1 = GetOverlayOtBase__7CBlocks();
	this->DialogOTpos = iVar1;
	return this;
}



// decompiled code
// original method signature: 
// struct Dialog * /*$ra*/ __6Dialog(struct Dialog *this /*$s0*/)
 // line 62, offset 0x80082610
	/* begin block 1 */
		// Start line: 63
		// Start offset: 0x80082610
	/* end block 1 */
	// End offset: 0x80082610
	// End Line: 63

	/* begin block 2 */
		// Start line: 124
	/* end block 2 */
	// End Line: 125

/* WARNING: Unknown calling convention yet parameter storage is locked */

Dialog * __6Dialog(Dialog *this)

{
	int iVar1;
	
	this->BackGfx = 0x94;
	this->BevelGfx = 0x1a;
	this->BorderGfx = 0x1a;
	DialogRed = -0x80;
	DialogGreen = -0x80;
	DialogBlue = -0x80;
	DialogTRed = ' ';
	DialogTGreen = ' ';
	DialogTBlue = ' ';
	iVar1 = GetOverlayOtBase__7CBlocks();
	this->DialogOTpos = iVar1;
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._6Dialog(struct Dialog *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 79, offset 0x800893f4
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x800893F4
	/* end block 1 */
	// End offset: 0x800893F4
	// End Line: 80

	/* begin block 2 */
		// Start line: 158
	/* end block 2 */
	// End Line: 159

void ___6Dialog(Dialog *this,int __in_chrg)

{
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._6Dialog(struct Dialog *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 79, offset 0x8009dc00
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x8009DC00
	/* end block 1 */
	// End offset: 0x8009DC00
	// End Line: 80

	/* begin block 2 */
		// Start line: 158
	/* end block 2 */
	// End Line: 159

void ___6Dialog(Dialog *this,int __in_chrg)

{
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._6Dialog(struct Dialog *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 79, offset 0x800a4278
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x800A4278
	/* end block 1 */
	// End offset: 0x800A4278
	// End Line: 80

	/* begin block 2 */
		// Start line: 158
	/* end block 2 */
	// End Line: 159

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ___6Dialog(Dialog *this,int __in_chrg)

{
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._6Dialog(struct Dialog *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 79, offset 0x800a4f34
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x800A4F34
	/* end block 1 */
	// End offset: 0x800A4F34
	// End Line: 80

	/* begin block 2 */
		// Start line: 158
	/* end block 2 */
	// End Line: 159

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ___6Dialog(Dialog *this,int __in_chrg)

{
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._6Dialog(struct Dialog *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 79, offset 0x800a6820
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x800A6820
	/* end block 1 */
	// End offset: 0x800A6820
	// End Line: 80

	/* begin block 2 */
		// Start line: 158
	/* end block 2 */
	// End Line: 159

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ___6Dialog(Dialog *this,int __in_chrg)

{
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._6Dialog(struct Dialog *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 79, offset 0x800ab5e4
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x800AB5E4
	/* end block 1 */
	// End offset: 0x800AB5E4
	// End Line: 80

	/* begin block 2 */
		// Start line: 158
	/* end block 2 */
	// End Line: 159

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ___6Dialog(Dialog *this,int __in_chrg)

{
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._6Dialog(struct Dialog *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 79, offset 0x800aefd8
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x800AEFD8
	/* end block 1 */
	// End offset: 0x800AEFD8
	// End Line: 80

	/* begin block 2 */
		// Start line: 158
	/* end block 2 */
	// End Line: 159

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ___6Dialog(Dialog *this,int __in_chrg)

{
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._6Dialog(struct Dialog *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 79, offset 0x80037644
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x80037644
	/* end block 1 */
	// End offset: 0x80037644
	// End Line: 80

	/* begin block 2 */
		// Start line: 158
	/* end block 2 */
	// End Line: 159

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ___6Dialog(Dialog *this,int __in_chrg)

{
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._6Dialog(struct Dialog *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 79, offset 0x8004e9b4
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x8004E9B4
	/* end block 1 */
	// End offset: 0x8004E9B4
	// End Line: 80

	/* begin block 2 */
		// Start line: 158
	/* end block 2 */
	// End Line: 159

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ___6Dialog(Dialog *this,int __in_chrg)

{
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._6Dialog(struct Dialog *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 79, offset 0x8006926c
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x8006926C
	/* end block 1 */
	// End offset: 0x8006926C
	// End Line: 80

	/* begin block 2 */
		// Start line: 158
	/* end block 2 */
	// End Line: 159

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ___6Dialog(Dialog *this,int __in_chrg)

{
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._6Dialog(struct Dialog *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 79, offset 0x800743c8
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x800743C8
	/* end block 1 */
	// End offset: 0x800743C8
	// End Line: 80

	/* begin block 2 */
		// Start line: 158
	/* end block 2 */
	// End Line: 159

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ___6Dialog(Dialog *this,int __in_chrg)

{
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._6Dialog(struct Dialog *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 79, offset 0x800825e8
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x800825E8
	/* end block 1 */
	// End offset: 0x800825E8
	// End Line: 80

	/* begin block 2 */
		// Start line: 158
	/* end block 2 */
	// End Line: 159

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ___6Dialog(Dialog *this,int __in_chrg)

{
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBorder__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 91, offset 0x800893ec
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x800893EC
	/* end block 1 */
	// End offset: 0x800893EC
	// End Line: 92

	/* begin block 2 */
		// Start line: 182
	/* end block 2 */
	// End Line: 183

void SetBorder__6Dialogi(Dialog *this,int Type)

{
	this->BorderGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBorder__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 91, offset 0x8009dbf8
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x8009DBF8
	/* end block 1 */
	// End offset: 0x8009DBF8
	// End Line: 92

	/* begin block 2 */
		// Start line: 182
	/* end block 2 */
	// End Line: 183

void SetBorder__6Dialogi(Dialog *this,int Type)

{
	this->BorderGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBorder__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 91, offset 0x800a4270
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x800A4270
	/* end block 1 */
	// End offset: 0x800A4270
	// End Line: 92

	/* begin block 2 */
		// Start line: 182
	/* end block 2 */
	// End Line: 183

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBorder__6Dialogi(Dialog *this,int Type)

{
	this->BorderGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBorder__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 91, offset 0x800a4f2c
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x800A4F2C
	/* end block 1 */
	// End offset: 0x800A4F2C
	// End Line: 92

	/* begin block 2 */
		// Start line: 182
	/* end block 2 */
	// End Line: 183

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBorder__6Dialogi(Dialog *this,int Type)

{
	this->BorderGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBorder__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 91, offset 0x800a6818
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x800A6818
	/* end block 1 */
	// End offset: 0x800A6818
	// End Line: 92

	/* begin block 2 */
		// Start line: 182
	/* end block 2 */
	// End Line: 183

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBorder__6Dialogi(Dialog *this,int Type)

{
	this->BorderGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBorder__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 91, offset 0x800ab5dc
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x800AB5DC
	/* end block 1 */
	// End offset: 0x800AB5DC
	// End Line: 92

	/* begin block 2 */
		// Start line: 182
	/* end block 2 */
	// End Line: 183

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBorder__6Dialogi(Dialog *this,int Type)

{
	this->BorderGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBorder__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 91, offset 0x800aefd0
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x800AEFD0
	/* end block 1 */
	// End offset: 0x800AEFD0
	// End Line: 92

	/* begin block 2 */
		// Start line: 182
	/* end block 2 */
	// End Line: 183

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBorder__6Dialogi(Dialog *this,int Type)

{
	this->BorderGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBorder__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 91, offset 0x8003763c
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x8003763C
	/* end block 1 */
	// End offset: 0x8003763C
	// End Line: 92

	/* begin block 2 */
		// Start line: 182
	/* end block 2 */
	// End Line: 183

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBorder__6Dialogi(Dialog *this,int Type)

{
	this->BorderGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBorder__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 91, offset 0x8004e9ac
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x8004E9AC
	/* end block 1 */
	// End offset: 0x8004E9AC
	// End Line: 92

	/* begin block 2 */
		// Start line: 182
	/* end block 2 */
	// End Line: 183

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBorder__6Dialogi(Dialog *this,int Type)

{
	this->BorderGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBorder__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 91, offset 0x80069264
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x80069264
	/* end block 1 */
	// End offset: 0x80069264
	// End Line: 92

	/* begin block 2 */
		// Start line: 182
	/* end block 2 */
	// End Line: 183

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBorder__6Dialogi(Dialog *this,int Type)

{
	this->BorderGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBorder__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 91, offset 0x800743c0
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x800743C0
	/* end block 1 */
	// End offset: 0x800743C0
	// End Line: 92

	/* begin block 2 */
		// Start line: 182
	/* end block 2 */
	// End Line: 183

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBorder__6Dialogi(Dialog *this,int Type)

{
	this->BorderGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBorder__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 91, offset 0x800825e0
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x800825E0
	/* end block 1 */
	// End offset: 0x800825E0
	// End Line: 92

	/* begin block 2 */
		// Start line: 182
	/* end block 2 */
	// End Line: 183

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBorder__6Dialogi(Dialog *this,int Type)

{
	this->BorderGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBack__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 94, offset 0x800893e4
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x800893E4
	/* end block 1 */
	// End offset: 0x800893E4
	// End Line: 95

	/* begin block 2 */
		// Start line: 188
	/* end block 2 */
	// End Line: 189

void SetBack__6Dialogi(Dialog *this,int Type)

{
	this->BackGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBack__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 94, offset 0x800a4268
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x800A4268
	/* end block 1 */
	// End offset: 0x800A4268
	// End Line: 95

	/* begin block 2 */
		// Start line: 188
	/* end block 2 */
	// End Line: 189

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBack__6Dialogi(Dialog *this,int Type)

{
	this->BackGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBack__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 94, offset 0x800a4f24
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x800A4F24
	/* end block 1 */
	// End offset: 0x800A4F24
	// End Line: 95

	/* begin block 2 */
		// Start line: 188
	/* end block 2 */
	// End Line: 189

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBack__6Dialogi(Dialog *this,int Type)

{
	this->BackGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBack__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 94, offset 0x800a6810
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x800A6810
	/* end block 1 */
	// End offset: 0x800A6810
	// End Line: 95

	/* begin block 2 */
		// Start line: 188
	/* end block 2 */
	// End Line: 189

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBack__6Dialogi(Dialog *this,int Type)

{
	this->BackGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBack__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 94, offset 0x800ab5d4
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x800AB5D4
	/* end block 1 */
	// End offset: 0x800AB5D4
	// End Line: 95

	/* begin block 2 */
		// Start line: 188
	/* end block 2 */
	// End Line: 189

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBack__6Dialogi(Dialog *this,int Type)

{
	this->BackGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBack__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 94, offset 0x80037634
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x80037634
	/* end block 1 */
	// End offset: 0x80037634
	// End Line: 95

	/* begin block 2 */
		// Start line: 188
	/* end block 2 */
	// End Line: 189

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBack__6Dialogi(Dialog *this,int Type)

{
	this->BackGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBack__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 94, offset 0x8006925c
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x8006925C
	/* end block 1 */
	// End offset: 0x8006925C
	// End Line: 95

	/* begin block 2 */
		// Start line: 188
	/* end block 2 */
	// End Line: 189

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBack__6Dialogi(Dialog *this,int Type)

{
	this->BackGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBack__6Dialogi(struct Dialog *this /*$a0*/, int Type /*$a1*/)
 // line 94, offset 0x800825d8
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x800825D8
	/* end block 1 */
	// End offset: 0x800825D8
	// End Line: 95

	/* begin block 2 */
		// Start line: 188
	/* end block 2 */
	// End Line: 189

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBack__6Dialogi(Dialog *this,int Type)

{
	this->BackGfx = Type;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetRGB__6DialogUcUcUc(struct Dialog *this /*$a0*/, unsigned char R /*$a1*/, unsigned char G /*$a2*/, unsigned char B /*$a3*/)
 // line 99, offset 0x800893c4
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x800893C4
	/* end block 1 */
	// End offset: 0x800893DC
	// End Line: 103

	/* begin block 2 */
		// Start line: 199
	/* end block 2 */
	// End Line: 200

void SetRGB__6DialogUcUcUc(Dialog *this,uchar R,uchar G,uchar B)

{
	DialogRed = R;
	DialogGreen = G;
	DialogBlue = B;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetRGB__6DialogUcUcUc(struct Dialog *this /*$a0*/, unsigned char R /*$a1*/, unsigned char G /*$a2*/, unsigned char B /*$a3*/)
 // line 99, offset 0x8009dbd8
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x8009DBD8
	/* end block 1 */
	// End offset: 0x8009DBF0
	// End Line: 103

	/* begin block 2 */
		// Start line: 199
	/* end block 2 */
	// End Line: 200

void SetRGB__6DialogUcUcUc(Dialog *this,uchar R,uchar G,uchar B)

{
	DialogRed = R;
	DialogGreen = G;
	DialogBlue = B;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetRGB__6DialogUcUcUc(struct Dialog *this /*$a0*/, unsigned char R /*$a1*/, unsigned char G /*$a2*/, unsigned char B /*$a3*/)
 // line 99, offset 0x800a4248
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x800A4248
	/* end block 1 */
	// End offset: 0x800A4260
	// End Line: 103

	/* begin block 2 */
		// Start line: 199
	/* end block 2 */
	// End Line: 200

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetRGB__6DialogUcUcUc(Dialog *this,uchar R,uchar G,uchar B)

{
	DialogRed = R;
	DialogGreen = G;
	DialogBlue = B;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetRGB__6DialogUcUcUc(struct Dialog *this /*$a0*/, unsigned char R /*$a1*/, unsigned char G /*$a2*/, unsigned char B /*$a3*/)
 // line 99, offset 0x800a4f04
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x800A4F04
	/* end block 1 */
	// End offset: 0x800A4F1C
	// End Line: 103

	/* begin block 2 */
		// Start line: 199
	/* end block 2 */
	// End Line: 200

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetRGB__6DialogUcUcUc(Dialog *this,uchar R,uchar G,uchar B)

{
	DialogRed = R;
	DialogGreen = G;
	DialogBlue = B;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetRGB__6DialogUcUcUc(struct Dialog *this /*$a0*/, unsigned char R /*$a1*/, unsigned char G /*$a2*/, unsigned char B /*$a3*/)
 // line 99, offset 0x800a67f0
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x800A67F0
	/* end block 1 */
	// End offset: 0x800A6808
	// End Line: 103

	/* begin block 2 */
		// Start line: 199
	/* end block 2 */
	// End Line: 200

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetRGB__6DialogUcUcUc(Dialog *this,uchar R,uchar G,uchar B)

{
	DialogRed = R;
	DialogGreen = G;
	DialogBlue = B;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetRGB__6DialogUcUcUc(struct Dialog *this /*$a0*/, unsigned char R /*$a1*/, unsigned char G /*$a2*/, unsigned char B /*$a3*/)
 // line 99, offset 0x800ab5b4
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x800AB5B4
	/* end block 1 */
	// End offset: 0x800AB5CC
	// End Line: 103

	/* begin block 2 */
		// Start line: 199
	/* end block 2 */
	// End Line: 200

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetRGB__6DialogUcUcUc(Dialog *this,uchar R,uchar G,uchar B)

{
	DialogRed = R;
	DialogGreen = G;
	DialogBlue = B;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetRGB__6DialogUcUcUc(struct Dialog *this /*$a0*/, unsigned char R /*$a1*/, unsigned char G /*$a2*/, unsigned char B /*$a3*/)
 // line 99, offset 0x800aefb0
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x800AEFB0
	/* end block 1 */
	// End offset: 0x800AEFC8
	// End Line: 103

	/* begin block 2 */
		// Start line: 199
	/* end block 2 */
	// End Line: 200

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetRGB__6DialogUcUcUc(Dialog *this,uchar R,uchar G,uchar B)

{
	DialogRed = R;
	DialogGreen = G;
	DialogBlue = B;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetRGB__6DialogUcUcUc(struct Dialog *this /*$a0*/, unsigned char R /*$a1*/, unsigned char G /*$a2*/, unsigned char B /*$a3*/)
 // line 99, offset 0x80037614
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x80037614
	/* end block 1 */
	// End offset: 0x8003762C
	// End Line: 103

	/* begin block 2 */
		// Start line: 199
	/* end block 2 */
	// End Line: 200

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetRGB__6DialogUcUcUc(Dialog *this,uchar R,uchar G,uchar B)

{
	DialogRed = R;
	DialogGreen = G;
	DialogBlue = B;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetRGB__6DialogUcUcUc(struct Dialog *this /*$a0*/, unsigned char R /*$a1*/, unsigned char G /*$a2*/, unsigned char B /*$a3*/)
 // line 99, offset 0x8004e98c
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x8004E98C
	/* end block 1 */
	// End offset: 0x8004E9A4
	// End Line: 103

	/* begin block 2 */
		// Start line: 199
	/* end block 2 */
	// End Line: 200

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetRGB__6DialogUcUcUc(Dialog *this,uchar R,uchar G,uchar B)

{
	DialogRed = R;
	DialogGreen = G;
	DialogBlue = B;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetRGB__6DialogUcUcUc(struct Dialog *this /*$a0*/, unsigned char R /*$a1*/, unsigned char G /*$a2*/, unsigned char B /*$a3*/)
 // line 99, offset 0x8006923c
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x8006923C
	/* end block 1 */
	// End offset: 0x80069254
	// End Line: 103

	/* begin block 2 */
		// Start line: 199
	/* end block 2 */
	// End Line: 200

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetRGB__6DialogUcUcUc(Dialog *this,uchar R,uchar G,uchar B)

{
	DialogRed = R;
	DialogGreen = G;
	DialogBlue = B;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetRGB__6DialogUcUcUc(struct Dialog *this /*$a0*/, unsigned char R /*$a1*/, unsigned char G /*$a2*/, unsigned char B /*$a3*/)
 // line 99, offset 0x800743a0
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x800743A0
	/* end block 1 */
	// End offset: 0x800743B8
	// End Line: 103

	/* begin block 2 */
		// Start line: 199
	/* end block 2 */
	// End Line: 200

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetRGB__6DialogUcUcUc(Dialog *this,uchar R,uchar G,uchar B)

{
	DialogRed = R;
	DialogGreen = G;
	DialogBlue = B;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetRGB__6DialogUcUcUc(struct Dialog *this /*$a0*/, unsigned char R /*$a1*/, unsigned char G /*$a2*/, unsigned char B /*$a3*/)
 // line 99, offset 0x800825b8
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x800825B8
	/* end block 1 */
	// End offset: 0x800825D0
	// End Line: 103

	/* begin block 2 */
		// Start line: 199
	/* end block 2 */
	// End Line: 200

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetRGB__6DialogUcUcUc(Dialog *this,uchar R,uchar G,uchar B)

{
	DialogRed = R;
	DialogGreen = G;
	DialogBlue = B;
	return;
}





extern unsigned char TrimCol__Fs(short col); // 0x8008AD90

extern struct POLY_GT4 * DialogPrint__Fiiiiiiiiii(int Frm, int X, int Y, int SW, int SH, int UW, int UH, int UOfs, int VOfs, int Trans); // 0x8008ADC8

extern struct POLY_G4 * GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3); // 0x8008B748

extern void DropShadows__Fiiii(int x, int y, int w, int h); // 0x8008B880

extern void InitDialog__Fv(); // 0x8008BB24

extern void GetSizes__6Dialog(struct Dialog *this); // 0x8008BC5C

extern void Back__6Dialogiiii(struct Dialog *this, int DX, int DY, int DW, int DH); // 0x8008BEE0

extern void Line__6Dialogiii(struct Dialog *this, int DX, int DY, int DW); // 0x8008CFF8

extern int SetOTpos__6Dialogi(struct Dialog *this, int OT); // 0x8008D228


#endif
