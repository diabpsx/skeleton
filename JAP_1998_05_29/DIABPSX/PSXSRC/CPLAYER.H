#ifndef CPLAYER_H
#define CPLAYER_H


extern struct CPlayer * __7CPlayerbii(struct CPlayer *this, void * Town, int mPlayerNum, int NewNumOfPlayers); // 0x80095854

extern void _._7CPlayer(struct CPlayer *this, int __in_chrg); // 0x800959AC

extern void Load__7CPlayeri(struct CPlayer *this, int Id); // 0x80095A3C

extern void SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg); // 0x80095AA8

extern void Print__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg); // 0x80095E8C

extern int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr); // 0x800963C4

extern enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr); // 0x80096448

extern void Init__7CPlayer(struct CPlayer *this); // 0x800964CC

extern void Dump__7CPlayer(struct CPlayer *this); // 0x800964D4

extern void LoadThis__7CPlayeri(struct CPlayer *this, int Id); // 0x800964DC

extern void NonBlockingLoadNewGFX__7CPlayeri(struct CPlayer *this, int Id); // 0x8009654C

extern void FilthyTask__FP4TASK(struct TASK *T); // 0x800965B8


extern int GetTexId__7CPlayer(struct CPlayer *this); // 0x8009C520

extern int GetLastScrX__C7CPlayer(struct CPlayer *this); // 0x800674A8

extern int GetLastScrX__C7CPlayer(struct CPlayer *this); // 0x8007D5BC

extern int GetLastScrY__C7CPlayer(struct CPlayer *this); // 0x8006749C

extern int GetLastScrY__C7CPlayer(struct CPlayer *this); // 0x8007D5B0

extern int GetLastOtPos__C7CPlayer(struct CPlayer *this); // 0x800A0978

extern int GetLastOtPos__C7CPlayer(struct CPlayer *this); // 0x80067490

extern struct CPlayer * GetPlayer__7CPlayeri(int PNum); // 0x800A0928

extern struct CPlayer * GetPlayer__7CPlayeri(int PNum); // 0x80067440

extern struct CPlayer * GetPlayer__7CPlayeri(int PNum); // 0x8007D560

extern int GetDatMaxSize__7CPlayer(struct CPlayer *this); // 0x80096720


// decompiled code
// original method signature: 
// int /*$ra*/ GetTexId__7CPlayer(struct CPlayer *this /*$a0*/)
 // line 55, offset 0x8009c520
	/* begin block 1 */
		// Start line: 56
		// Start offset: 0x8009C520
	/* end block 1 */
	// End offset: 0x8009C524
	// End Line: 56

	/* begin block 2 */
		// Start line: 110
	/* end block 2 */
	// End Line: 111

int GetTexId__7CPlayer(CPlayer *this)

{
	return this->TexId;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetLastScrX__C7CPlayer(struct CPlayer *this /*$a0*/)
 // line 58, offset 0x800674a8
	/* begin block 1 */
		// Start line: 59
		// Start offset: 0x800674A8
	/* end block 1 */
	// End offset: 0x800674AC
	// End Line: 59

	/* begin block 2 */
		// Start line: 116
	/* end block 2 */
	// End Line: 117

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetLastScrX__C7CPlayer(CPlayer *this)

{
	return this->LastScrX;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetLastScrX__C7CPlayer(struct CPlayer *this /*$a0*/)
 // line 58, offset 0x8007d5bc
	/* begin block 1 */
		// Start line: 59
		// Start offset: 0x8007D5BC
	/* end block 1 */
	// End offset: 0x8007D5C0
	// End Line: 59

	/* begin block 2 */
		// Start line: 116
	/* end block 2 */
	// End Line: 117

int GetLastScrX__C7CPlayer(CPlayer *this)

{
	return this->LastScrX;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetLastScrY__C7CPlayer(struct CPlayer *this /*$a0*/)
 // line 59, offset 0x8006749c
	/* begin block 1 */
		// Start line: 60
		// Start offset: 0x8006749C
	/* end block 1 */
	// End offset: 0x800674A0
	// End Line: 60

	/* begin block 2 */
		// Start line: 118
	/* end block 2 */
	// End Line: 119

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetLastScrY__C7CPlayer(CPlayer *this)

{
	return this->LastScrY;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetLastScrY__C7CPlayer(struct CPlayer *this /*$a0*/)
 // line 59, offset 0x8007d5b0
	/* begin block 1 */
		// Start line: 60
		// Start offset: 0x8007D5B0
	/* end block 1 */
	// End offset: 0x8007D5B4
	// End Line: 60

	/* begin block 2 */
		// Start line: 118
	/* end block 2 */
	// End Line: 119

int GetLastScrY__C7CPlayer(CPlayer *this)

{
	return this->LastScrY;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetLastOtPos__C7CPlayer(struct CPlayer *this /*$a0*/)
 // line 60, offset 0x800a0978
	/* begin block 1 */
		// Start line: 61
		// Start offset: 0x800A0978
	/* end block 1 */
	// End offset: 0x800A097C
	// End Line: 61

	/* begin block 2 */
		// Start line: 120
	/* end block 2 */
	// End Line: 121

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetLastOtPos__C7CPlayer(CPlayer *this)

{
	return this->LastOtPos;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetLastOtPos__C7CPlayer(struct CPlayer *this /*$a0*/)
 // line 60, offset 0x80067490
	/* begin block 1 */
		// Start line: 61
		// Start offset: 0x80067490
	/* end block 1 */
	// End offset: 0x80067494
	// End Line: 61

	/* begin block 2 */
		// Start line: 120
	/* end block 2 */
	// End Line: 121

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetLastOtPos__C7CPlayer(CPlayer *this)

{
	return this->LastOtPos;
}



// decompiled code
// original method signature: 
// struct CPlayer * /*$ra*/ GetPlayer__7CPlayeri(int PNum /*$s0*/)
 // line 64, offset 0x800a0928
	/* begin block 1 */
		// Start line: 65
		// Start offset: 0x800A0928
	/* end block 1 */
	// End offset: 0x800A0964
	// End Line: 67

	/* begin block 2 */
		// Start line: 128
	/* end block 2 */
	// End Line: 129

CPlayer * GetPlayer__7CPlayeri(int PNum)

{
	if (1 < (uint)PNum) {
		DBG_Error((char *)0x0,"psxsrc/cplayer.h",0x41);
	}
	return *(CPlayer **)(&PActiveArray + PNum * 4);
}



// decompiled code
// original method signature: 
// struct CPlayer * /*$ra*/ GetPlayer__7CPlayeri(int PNum /*$s0*/)
 // line 64, offset 0x80067440
	/* begin block 1 */
		// Start line: 65
		// Start offset: 0x80067440
	/* end block 1 */
	// End offset: 0x8006747C
	// End Line: 67

	/* begin block 2 */
		// Start line: 128
	/* end block 2 */
	// End Line: 129

/* WARNING: Unknown calling convention yet parameter storage is locked */

CPlayer * GetPlayer__7CPlayeri(int PNum)

{
	if (1 < (uint)PNum) {
		DBG_Error((char *)0x0,"psxsrc/cplayer.h",0x41);
	}
	return *(CPlayer **)(&PActiveArray + PNum * 4);
}



// decompiled code
// original method signature: 
// struct CPlayer * /*$ra*/ GetPlayer__7CPlayeri(int PNum /*$s0*/)
 // line 64, offset 0x8007d560
	/* begin block 1 */
		// Start line: 65
		// Start offset: 0x8007D560
	/* end block 1 */
	// End offset: 0x8007D59C
	// End Line: 67

	/* begin block 2 */
		// Start line: 128
	/* end block 2 */
	// End Line: 129

CPlayer * GetPlayer__7CPlayeri(int PNum)

{
	if (1 < (uint)PNum) {
		DBG_Error((char *)0x0,"psxsrc/cplayer.h",0x41);
	}
	return *(CPlayer **)(&PActiveArray + PNum * 4);
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetDatMaxSize__7CPlayer(struct CPlayer *this /*$a0*/)
 // line 76, offset 0x80096720
	/* begin block 1 */
		// Start line: 77
		// Start offset: 0x80096720
	/* end block 1 */
	// End offset: 0x80096758
	// End Line: 81

	/* begin block 2 */
		// Start line: 153
	/* end block 2 */
	// End Line: 154

int GetDatMaxSize__7CPlayer(CPlayer *this)

{
	undefined *puVar1;
	
	if (this->InTown == (void *)0x0) {
		puVar1 = &LAB_000182b8;
		if (this->NumOfPlayers == 0) {
			puVar1 = &LAB_0002c308;
		}
	}
	else {
		puVar1 = (undefined *)0x19e10;
	}
	return (int)puVar1;
}





#endif
