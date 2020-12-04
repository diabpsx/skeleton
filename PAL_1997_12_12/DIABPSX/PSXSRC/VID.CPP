#include "THISDUST.H"
#include "VID.H"


// decompiled code
// original method signature: 
// void /*$ra*/ VID_AfterDisplay__Fv()
 // line 127, offset 0x8007c788
	/* begin block 1 */
		// Start line: 128
		// Start offset: 0x8007C788
	/* end block 1 */
	// End offset: 0x8007C798
	// End Line: 129

	/* begin block 2 */
		// Start line: 254
	/* end block 2 */
	// End Line: 255

/* WARNING: Unknown calling convention yet parameter storage is locked */

void VID_AfterDisplay__Fv(void)

{
	PRIM_Flush__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VID_ScrOn__Fv()
 // line 182, offset 0x8007c7a8
	/* begin block 1 */
		// Start line: 183
		// Start offset: 0x8007C7A8
	/* end block 1 */
	// End offset: 0x8007C7C0
	// End Line: 185

	/* begin block 2 */
		// Start line: 364
	/* end block 2 */
	// End Line: 365

/* WARNING: Unknown calling convention yet parameter storage is locked */

void VID_ScrOn__Fv(void)

{
	VSync(0);
	SetDispMask(1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VID_DoThisNextSync__FPFv_v(TDRFuncPtr_VID_DoThisNextSync__FPFv_v0Func Func /*$s0*/)
 // line 203, offset 0x8007c7d0
	/* begin block 1 */
		// Start line: 204
		// Start offset: 0x8007C7D0
	/* end block 1 */
	// End offset: 0x8007C814
	// End Line: 210

	/* begin block 2 */
		// Start line: 406
	/* end block 2 */
	// End Line: 407

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
 // line 213, offset 0x8007c828
	/* begin block 1 */
		// Start line: 214
		// Start offset: 0x8007C828
	/* end block 1 */
	// End offset: 0x8007C82C
	// End Line: 215

	/* begin block 2 */
		// Start line: 427
	/* end block 2 */
	// End Line: 428

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar VID_NextSyncRoutHasExecuted__Fv(void)

{
	return (uchar)(VbFunc == 0);
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ VID_GetTick__Fv()
 // line 218, offset 0x8007c834
	/* begin block 1 */
		// Start line: 219
		// Start offset: 0x8007C834
	/* end block 1 */
	// End offset: 0x8007C838
	// End Line: 220

	/* begin block 2 */
		// Start line: 437
	/* end block 2 */
	// End Line: 438

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong VID_GetTick__Fv(void)

{
	return VidTick;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VID_DispEnvSend()
 // line 224, offset 0x8007c840
	/* begin block 1 */
		// Start line: 225
		// Start offset: 0x8007C840
	/* end block 1 */
	// End offset: 0x8007C86C
	// End Line: 231

	/* begin block 2 */
		// Start line: 449
	/* end block 2 */
	// End Line: 450

/* WARNING: Unknown calling convention yet parameter storage is locked */

void VID_DispEnvSend(void)

{
	VidTick = VidTick + 1;
	if (VbFunc != (code *)0x0) {
		(*VbFunc)();
		VbFunc = (code *)0x0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VID_SetXYOff__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 236, offset 0x8007c87c
	/* begin block 1 */
		// Start line: 237
		// Start offset: 0x8007C87C
	/* end block 1 */
	// End offset: 0x8007C884
	// End Line: 239

	/* begin block 2 */
		// Start line: 476
	/* end block 2 */
	// End Line: 477

void VID_SetXYOff__Fii(int x,int y)

{
	VXOff = x;
	VYOff = y;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ VID_GetXOff__Fv()
 // line 242, offset 0x8007c88c
	/* begin block 1 */
		// Start line: 243
		// Start offset: 0x8007C88C
	/* end block 1 */
	// End offset: 0x8007C890
	// End Line: 244

	/* begin block 2 */
		// Start line: 488
	/* end block 2 */
	// End Line: 489

/* WARNING: Unknown calling convention yet parameter storage is locked */

int VID_GetXOff__Fv(void)

{
	return VXOff;
}



// decompiled code
// original method signature: 
// int /*$ra*/ VID_GetYOff__Fv()
 // line 247, offset 0x8007c898
	/* begin block 1 */
		// Start line: 248
		// Start offset: 0x8007C898
	/* end block 1 */
	// End offset: 0x8007C89C
	// End Line: 249

	/* begin block 2 */
		// Start line: 498
	/* end block 2 */
	// End Line: 499

/* WARNING: Unknown calling convention yet parameter storage is locked */

int VID_GetYOff__Fv(void)

{
	return VYOff;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VID_SetDBuffer__Fb(void * DBuf /*$s0*/)
 // line 252, offset 0x8007c8a4
	/* begin block 1 */
		// Start line: 253
		// Start offset: 0x8007C8A4

		/* begin block 1.1 */
			// Start line: 253
			// Start offset: 0x8007C8A4

			/* begin block 1.1.1 */
				// Start line: 262
				// Start offset: 0x8007C8D0
			/* end block 1.1.1 */
			// End offset: 0x8007C8D0
			// End Line: 265
		/* end block 1.1 */
		// End offset: 0x8007C9DC
		// End Line: 289
	/* end block 1 */
	// End offset: 0x8007C9FC
	// End Line: 293

	/* begin block 2 */
		// Start line: 507
	/* end block 2 */
	// End Line: 508

void VID_SetDBuffer__Fb(void *DBuf)

{
	bool bVar1;
	
	VSync(0);
	VSync(0);
	bVar1 = DBuf == (void *)0x0;
	if (bVar1) {
		SetDefDrawEnv((undefined2 *)&screen,0,0,0x140,0xf0);
		SetDefDispEnv((undefined2 *)&screen.dispenv,0x140,0,0x140,0xf0);
		SetDefDrawEnv((undefined2 *)&SCREEN_ENV_8012c470,0x140,0,0x140,0xf0);
		SetDefDispEnv((undefined2 *)&SCREEN_ENV_8012c470.dispenv,0,0,0x140,0xf0);
	}
	else {
		SetDefDrawEnv((undefined2 *)&screen,0,0,0x140,0xf0);
		SetDefDispEnv((undefined2 *)&screen.dispenv,0,0,0x140,0xf0);
		SetDefDrawEnv((undefined2 *)&SCREEN_ENV_8012c470,0,0,0x140,0xf0);
		SetDefDispEnv((undefined2 *)&SCREEN_ENV_8012c470.dispenv,0,0,0x140,0xf0);
	}
	screen.drawenv.dtd = '\x01';
	SCREEN_ENV_8012c470.drawenv.dtd = '\x01';
	screen.drawenv.isbg = bVar1;
	SCREEN_ENV_8012c470.drawenv.isbg = bVar1;
	SetDrawEnv(-0x7fed3be4,(ushort *)&screen);
	SetDrawEnv(-0x7fed3b74,(ushort *)&SCREEN_ENV_8012c470);
	return;
}





