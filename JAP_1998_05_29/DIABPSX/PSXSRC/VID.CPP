#include "THISDUST.H"
#include "VID.H"


// decompiled code
// original method signature: 
// void /*$ra*/ VID_AfterDisplay__Fv()
 // line 149, offset 0x80084030
	/* begin block 1 */
		// Start line: 150
		// Start offset: 0x80084030
	/* end block 1 */
	// End offset: 0x80084048
	// End Line: 158

	/* begin block 2 */
		// Start line: 298
	/* end block 2 */
	// End Line: 299

/* WARNING: Unknown calling convention yet parameter storage is locked */

void VID_AfterDisplay__Fv(void)

{
	PRIM_Flush__Fv();
	ClearKanjiCount__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VID_ScrOn__Fv()
 // line 226, offset 0x80084058
	/* begin block 1 */
		// Start line: 227
		// Start offset: 0x80084058
	/* end block 1 */
	// End offset: 0x80084084
	// End Line: 231

	/* begin block 2 */
		// Start line: 452
	/* end block 2 */
	// End Line: 453

/* WARNING: Unknown calling convention yet parameter storage is locked */

void VID_ScrOn__Fv(void)

{
	screen.drawenv.isbg = '\x01';
	SCREEN_ENV_8011cb50.drawenv.isbg = '\x01';
	VSync(0);
	SetDispMask(1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VID_DoThisNextSync__FPFv_v(TDRFuncPtr_VID_DoThisNextSync__FPFv_v0Func Func /*$s0*/)
 // line 249, offset 0x80084094
	/* begin block 1 */
		// Start line: 250
		// Start offset: 0x80084094
	/* end block 1 */
	// End offset: 0x800840D8
	// End Line: 256

	/* begin block 2 */
		// Start line: 499
	/* end block 2 */
	// End Line: 500

void VID_DoThisNextSync__FPFv_v(TDRFuncPtr_VID_DoThisNextSync__FPFv_v0Func Func)

{
	uchar uVar1;
	
	VidWait = 0;
	while (uVar1 = VID_NextSyncRoutHasExecuted__Fv(), uVar1 == '\0') {
		VidWait = VidWait + 1;
	}
	VbFunc = Func;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ VID_NextSyncRoutHasExecuted__Fv()
 // line 259, offset 0x800840ec
	/* begin block 1 */
		// Start line: 260
		// Start offset: 0x800840EC
	/* end block 1 */
	// End offset: 0x800840F0
	// End Line: 261

	/* begin block 2 */
		// Start line: 520
	/* end block 2 */
	// End Line: 521

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar VID_NextSyncRoutHasExecuted__Fv(void)

{
	return (uchar)(VbFunc == 0);
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ VID_GetTick__Fv()
 // line 264, offset 0x800840f8
	/* begin block 1 */
		// Start line: 265
		// Start offset: 0x800840F8
	/* end block 1 */
	// End offset: 0x800840FC
	// End Line: 266

	/* begin block 2 */
		// Start line: 530
	/* end block 2 */
	// End Line: 531

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong VID_GetTick__Fv(void)

{
	return VidTick;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VID_DispEnvSend()
 // line 270, offset 0x80084104
	/* begin block 1 */
		// Start line: 271
		// Start offset: 0x80084104
		// Variables:
	// 		unsigned long OldGp; // $s0
	/* end block 1 */
	// End offset: 0x80084148
	// End Line: 283

	/* begin block 2 */
		// Start line: 541
	/* end block 2 */
	// End Line: 542

/* WARNING: Unknown calling convention yet parameter storage is locked */

void VID_DispEnvSend(void)

{
	undefined4 uVar1;
	
	uVar1 = ReloadGP();
	VidTick = VidTick + 1;
	if (VbFunc != (code *)0x0) {
		(*VbFunc)();
		VbFunc = (code *)0x0;
	}
	SetGP(uVar1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VID_SetXYOff__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 287, offset 0x8008415c
	/* begin block 1 */
		// Start line: 288
		// Start offset: 0x8008415C
	/* end block 1 */
	// End offset: 0x80084164
	// End Line: 290

	/* begin block 2 */
		// Start line: 576
	/* end block 2 */
	// End Line: 577

void VID_SetXYOff__Fii(int x,int y)

{
	VXOff = x;
	VYOff = y;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ VID_GetXOff__Fv()
 // line 293, offset 0x8008416c
	/* begin block 1 */
		// Start line: 294
		// Start offset: 0x8008416C
	/* end block 1 */
	// End offset: 0x80084170
	// End Line: 295

	/* begin block 2 */
		// Start line: 588
	/* end block 2 */
	// End Line: 589

/* WARNING: Unknown calling convention yet parameter storage is locked */

int VID_GetXOff__Fv(void)

{
	return VXOff;
}



// decompiled code
// original method signature: 
// int /*$ra*/ VID_GetYOff__Fv()
 // line 298, offset 0x80084178
	/* begin block 1 */
		// Start line: 299
		// Start offset: 0x80084178
	/* end block 1 */
	// End offset: 0x8008417C
	// End Line: 300

	/* begin block 2 */
		// Start line: 598
	/* end block 2 */
	// End Line: 599

/* WARNING: Unknown calling convention yet parameter storage is locked */

int VID_GetYOff__Fv(void)

{
	return VYOff;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ VID_IsDbuffer__Fv()
 // line 304, offset 0x80084184
	/* begin block 1 */
		// Start line: 305
		// Start offset: 0x80084184
	/* end block 1 */
	// End offset: 0x80084188
	// End Line: 307

	/* begin block 2 */
		// Start line: 610
	/* end block 2 */
	// End Line: 611

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * VID_IsDbuffer__Fv(void)

{
	return (void *)(uint)(DBufferFlag == (void *)0x0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ VID_SetDBuffer__Fb(void * DBuf /*$a0*/)
 // line 313, offset 0x80084190
	/* begin block 1 */
		// Start line: 314
		// Start offset: 0x80084190

		/* begin block 1.1 */
			// Start line: 314
			// Start offset: 0x80084190

			/* begin block 1.1.1 */
				// Start line: 329
				// Start offset: 0x800841B0
			/* end block 1.1.1 */
			// End offset: 0x800841B0
			// End Line: 330
		/* end block 1.1 */
		// End offset: 0x800843E8
		// End Line: 366
	/* end block 1 */
	// End offset: 0x80084408
	// End Line: 370

	/* begin block 2 */
		// Start line: 627
	/* end block 2 */
	// End Line: 628

void VID_SetDBuffer__Fb(void *DBuf)

{
	bool bVar1;
	byte bVar2;
	int iVar3;
	
	bVar1 = DBuf == (void *)0x0;
	if (bVar1) {
		DBufferFlag = DBuf;
		SetDefDrawEnv(&screen,0,0,0x140,0xf0);
		SetDefDispEnv(0x8011cb3c,0x140,0,0x140,0xf0);
		SetDefDrawEnv(&SCREEN_ENV_8011cb50,0x140,0,0x140,0xf0);
		SetDefDispEnv(0x8011cbac,0,0,0x140,0xf0);
		iVar3 = VID_GetXOff__Fv();
		screen.drawenv.ofs[0] = screen.drawenv.ofs[0] + (short)iVar3;
		iVar3 = VID_GetYOff__Fv();
		screen.drawenv.ofs[1] = screen.drawenv.ofs[1] + (short)iVar3;
		iVar3 = VID_GetXOff__Fv();
		SCREEN_ENV_8011cb50.drawenv.ofs[0] = SCREEN_ENV_8011cb50.drawenv.ofs[0] + (short)iVar3;
		iVar3 = VID_GetYOff__Fv();
		SCREEN_ENV_8011cb50.drawenv.ofs[1] = SCREEN_ENV_8011cb50.drawenv.ofs[1] + (short)iVar3;
	}
	else {
		DBufferFlag = DBuf;
		bVar2 = PRIM_GetCurrentScreen__Fv();
		iVar3 = ((uint)bVar2 + 1 & 1) * 0x140;
		SetDefDrawEnv(&screen,iVar3,0,0x140,0xf0);
		SetDefDispEnv(0x8011cb3c,iVar3,0,0x140,0xf0);
		SetDefDrawEnv(&SCREEN_ENV_8011cb50,iVar3,0,0x140,0xf0);
		SetDefDispEnv(0x8011cbac,iVar3,0,0x140,0xf0);
		iVar3 = VID_GetXOff__Fv();
		screen.drawenv.ofs[0] = screen.drawenv.ofs[0] + (short)iVar3;
		iVar3 = VID_GetYOff__Fv();
		screen.drawenv.ofs[1] = screen.drawenv.ofs[1] + (short)iVar3;
		iVar3 = VID_GetXOff__Fv();
		SCREEN_ENV_8011cb50.drawenv.ofs[0] = SCREEN_ENV_8011cb50.drawenv.ofs[0] + (short)iVar3;
		iVar3 = VID_GetYOff__Fv();
		SCREEN_ENV_8011cb50.drawenv.ofs[1] = SCREEN_ENV_8011cb50.drawenv.ofs[1] + (short)iVar3;
	}
	SCREEN_ENV_8011cb50.drawenv.dtd = '\x01';
	screen.drawenv.dtd = '\x01';
	screen.drawenv.isbg = bVar1;
	SCREEN_ENV_8011cb50.drawenv.isbg = bVar1;
	SetDrawEnv(0x8011cafc,&screen);
	SetDrawEnv(0x8011cb6c,&SCREEN_ENV_8011cb50);
	return;
}





