#ifndef PRINTY_H
#define PRINTY_H


extern void Set__7FontTab(struct FontTab *this); // 0x800845C0

extern void InitPrinty__Fv(); // 0x8008465C

extern void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat); // 0x800846E4

extern int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B); // 0x800846EC

extern int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(struct CFont *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B); // 0x8008486C

extern int GetStrWidth__5CFontPc(struct CFont *this, char *Str); // 0x80084E8C

extern void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm); // 0x80084F40

extern int SetOTpos__5CFonti(struct CFont *this, int OT); // 0x80084FA4


extern void Init__5CFont(struct CFont *this); // 0x80085064

extern int GetCharWidth__5CFontc(struct CFont *this, char ch); // 0x8008500C

extern int GetCharWidth__5CFontc(struct CFont *this, char ch); // 0x80047B00

extern int GetCharFrameNum__5CFontc(struct CFont *this, char ch); // 0x80084FF4

extern void * IsDefined__5CFontUc(struct CFont *this, unsigned char C); // 0x80084FD4

extern void ClearFont__5CFont(struct CFont *this); // 0x80084FB0


// decompiled code
// original method signature: 
// void /*$ra*/ Init__5CFont(struct CFont *this /*$s0*/)
 // line 59, offset 0x80085064
	/* begin block 1 */
		// Start line: 60
		// Start offset: 0x80085064
	/* end block 1 */
	// End offset: 0x80085084
	// End Line: 60

	/* begin block 2 */
		// Start line: 118
	/* end block 2 */
	// End Line: 119

void Init__5CFont(CFont *this)

{
	TextDat *pTVar1;
	
	pTVar1 = GM_UseTexData__Fi(this->TextureId);
	this->ThisDat = pTVar1;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetCharWidth__5CFontc(struct CFont *this /*$a0*/, char ch /*$a1*/)
 // line 71, offset 0x8008500c
	/* begin block 1 */
		// Start line: 72
		// Start offset: 0x8008500C
	/* end block 1 */
	// End offset: 0x80085054
	// End Line: 76

	/* begin block 2 */
		// Start line: 142
	/* end block 2 */
	// End Line: 143

int GetCharWidth__5CFontc(CFont *this,char ch)

{
	FRAME_HDR *pFVar1;
	int iVar2;
	
	if ((int)ch == 0x20) {
		iVar2 = 3;
	}
	else {
		pFVar1 = GetFr__7TextDati(this->ThisDat,(uint)this->FontTab[(int)ch]);
		iVar2 = ((uint)*(ushort *)((int)&pFVar1->X + 2) & 0x1ff) - 1;
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetCharWidth__5CFontc(struct CFont *this /*$a0*/, char ch /*$a1*/)
 // line 71, offset 0x80047b00
	/* begin block 1 */
		// Start line: 72
		// Start offset: 0x80047B00
	/* end block 1 */
	// End offset: 0x80047B48
	// End Line: 76

	/* begin block 2 */
		// Start line: 142
	/* end block 2 */
	// End Line: 143

int GetCharWidth__5CFontc(CFont *this,char ch)

{
	FRAME_HDR *pFVar1;
	int iVar2;
	
	if ((int)ch == 0x20) {
		iVar2 = 3;
	}
	else {
		pFVar1 = GetFr__7TextDati(this->ThisDat,(uint)this->FontTab[(int)ch]);
		iVar2 = ((uint)*(ushort *)((int)&pFVar1->X + 2) & 0x1ff) - 1;
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetCharFrameNum__5CFontc(struct CFont *this /*$a0*/, char ch /*$a1*/)
 // line 82, offset 0x80084ff4
	/* begin block 1 */
		// Start line: 83
		// Start offset: 0x80084FF4
	/* end block 1 */
	// End offset: 0x80085004
	// End Line: 83

	/* begin block 2 */
		// Start line: 164
	/* end block 2 */
	// End Line: 165

int GetCharFrameNum__5CFontc(CFont *this,char ch)

{
	return (uint)*(ushort *)((int)this->FontTab + ((int)((uint)(byte)ch << 0x18) >> 0x17));
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsDefined__5CFontUc(struct CFont *this /*$a0*/, unsigned char C /*$a1*/)
 // line 85, offset 0x80084fd4
	/* begin block 1 */
		// Start line: 86
		// Start offset: 0x80084FD4
	/* end block 1 */
	// End offset: 0x80084FEC
	// End Line: 86

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

void * IsDefined__5CFontUc(CFont *this,uchar C)

{
	return (void *)(uint)(this->FontTab[(uint)C] != 0x3039);
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearFont__5CFont(struct CFont *this /*$a0*/)
 // line 88, offset 0x80084fb0
	/* begin block 1 */
		// Start line: 89
		// Start offset: 0x80084FB0
	/* end block 1 */
	// End offset: 0x80084FC4
	// End Line: 89

	/* begin block 2 */
		// Start line: 176
	/* end block 2 */
	// End Line: 177

void ClearFont__5CFont(CFont *this)

{
	GM_FinishedUsing__FP7TextDat(this->ThisDat);
	return;
}





#endif
