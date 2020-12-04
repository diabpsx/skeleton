#ifndef CPLAYER_H
#define CPLAYER_H


extern struct CPlayer * __7CPlayerbi(struct CPlayer *this, void * Town, int mPlayerNum); // 0x8008C04C

extern void _._7CPlayer(struct CPlayer *this, int __in_chrg); // 0x8008C130

extern void Load__7CPlayeri(struct CPlayer *this, int Id); // 0x8008C188

extern void SetBlockXY__7CPlayerR7CBlocksR12PlayerStruct(struct CPlayer *this, struct CBlocks *Bg, struct PlayerStruct *Plr); // 0x8008C1E4

extern void SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg); // 0x8008C330

extern int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr); // 0x8008C75C

extern void Print__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg); // 0x8008C7DC

extern int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr); // 0x8008CCD0

extern enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr); // 0x8008CD4C

extern void Init__7CPlayer(struct CPlayer *this); // 0x8008CDC8

extern void Dump__7CPlayer(struct CPlayer *this); // 0x8008CDD0


extern int GetTexId__7CPlayer(struct CPlayer *this); // 0x80091F00

extern int GetLastScrX__C7CPlayer(struct CPlayer *this); // 0x800610D0

extern int GetLastScrX__C7CPlayer(struct CPlayer *this); // 0x80075A70

extern int GetLastScrY__C7CPlayer(struct CPlayer *this); // 0x800610C4

extern int GetLastScrY__C7CPlayer(struct CPlayer *this); // 0x80075A64

extern int GetLastOtPos__C7CPlayer(struct CPlayer *this); // 0x800610B8

extern int GetLastOtPos__C7CPlayer(struct CPlayer *this); // 0x80075A58

extern struct CPlayer * GetPlayer__7CPlayeri(int PNum); // 0x80061068

extern struct CPlayer * GetPlayer__7CPlayeri(int PNum); // 0x80075A08


// decompiled code
// original method signature: 
// int /*$ra*/ GetTexId__7CPlayer(struct CPlayer *this /*$a0*/)
 // line 55, offset 0x80091f00
	/* begin block 1 */
		// Start line: 56
		// Start offset: 0x80091F00
	/* end block 1 */
	// End offset: 0x80091F04
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
 // line 58, offset 0x800610d0
	/* begin block 1 */
		// Start line: 59
		// Start offset: 0x800610D0
	/* end block 1 */
	// End offset: 0x800610D4
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
// int /*$ra*/ GetLastScrX__C7CPlayer(struct CPlayer *this /*$a0*/)
 // line 58, offset 0x80075a70
	/* begin block 1 */
		// Start line: 59
		// Start offset: 0x80075A70
	/* end block 1 */
	// End offset: 0x80075A74
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
 // line 59, offset 0x800610c4
	/* begin block 1 */
		// Start line: 60
		// Start offset: 0x800610C4
	/* end block 1 */
	// End offset: 0x800610C8
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
// int /*$ra*/ GetLastScrY__C7CPlayer(struct CPlayer *this /*$a0*/)
 // line 59, offset 0x80075a64
	/* begin block 1 */
		// Start line: 60
		// Start offset: 0x80075A64
	/* end block 1 */
	// End offset: 0x80075A68
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
 // line 60, offset 0x800610b8
	/* begin block 1 */
		// Start line: 61
		// Start offset: 0x800610B8
	/* end block 1 */
	// End offset: 0x800610BC
	// End Line: 61

	/* begin block 2 */
		// Start line: 120
	/* end block 2 */
	// End Line: 121

int GetLastOtPos__C7CPlayer(CPlayer *this)

{
	return this->LastOtPos;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetLastOtPos__C7CPlayer(struct CPlayer *this /*$a0*/)
 // line 60, offset 0x80075a58
	/* begin block 1 */
		// Start line: 61
		// Start offset: 0x80075A58
	/* end block 1 */
	// End offset: 0x80075A5C
	// End Line: 61

	/* begin block 2 */
		// Start line: 120
	/* end block 2 */
	// End Line: 121

int GetLastOtPos__C7CPlayer(CPlayer *this)

{
	return this->LastOtPos;
}



// decompiled code
// original method signature: 
// struct CPlayer * /*$ra*/ GetPlayer__7CPlayeri(int PNum /*$s0*/)
 // line 63, offset 0x80061068
	/* begin block 1 */
		// Start line: 64
		// Start offset: 0x80061068
	/* end block 1 */
	// End offset: 0x800610A4
	// End Line: 66

	/* begin block 2 */
		// Start line: 126
	/* end block 2 */
	// End Line: 127

CPlayer * GetPlayer__7CPlayeri(int PNum)

{
	if (1 < (uint)PNum) {
		DBG_Error((char *)0x0,"psxsrc/cplayer.h",0x40);
	}
	return *(CPlayer **)(&PActiveArray + PNum * 4);
}



// decompiled code
// original method signature: 
// struct CPlayer * /*$ra*/ GetPlayer__7CPlayeri(int PNum /*$s0*/)
 // line 63, offset 0x80075a08
	/* begin block 1 */
		// Start line: 64
		// Start offset: 0x80075A08
	/* end block 1 */
	// End offset: 0x80075A44
	// End Line: 66

	/* begin block 2 */
		// Start line: 126
	/* end block 2 */
	// End Line: 127

CPlayer * GetPlayer__7CPlayeri(int PNum)

{
	if (1 < (uint)PNum) {
		DBG_Error((char *)0x0,"psxsrc/cplayer.h",0x40);
	}
	return *(CPlayer **)(&PActiveArray + PNum * 4);
}





#endif
