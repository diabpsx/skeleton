#ifndef PRINTY_H
#define PRINTY_H


extern void Set__7FontTab(struct FontTab *this); // 0x80089C60

extern void InitPrinty__Fv(); // 0x80089CFC

extern void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat); // 0x80089DAC

extern int KanjiPrintChar__5CFontUsUsUsUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, unsigned short kan, int R, int G, int B); // 0x80089DB4

extern int PrintChar__5CFontUsUsUcUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, unsigned char C, int R, int G, int B); // 0x80089EEC

extern int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(struct CFont *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B); // 0x8008A090

extern int GetWrap__5CFontPcP4RECT(struct CFont *this, char *Str, struct RECT *TextWindow); // 0x8008A6C8

extern int GetWrapWidth__5CFontPcP4RECT(struct CFont *this, char *Str, struct RECT *TextWindow); // 0x8008A938

extern int GetStrWidth__5CFontPc(struct CFont *this, char *Str); // 0x8008AAA4

extern void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm); // 0x8008AB20

extern int SetOTpos__5CFonti(struct CFont *this, int OT); // 0x8008ABA0

extern int GetCharWidth__5CFontUc(struct CFont *this, unsigned char ch); // 0x8008ABAC

extern void _GLOBAL_.I.WHITER(); // 0x8008AC80


extern void Init__5CFont(struct CFont *this); // 0x8008AD40

extern int GetCharFrameNum__5CFontUc(struct CFont *this, unsigned char ch); // 0x8008AD28

extern void * IsDefined__5CFontUc(struct CFont *this, unsigned char C); // 0x8008AD08

extern void ClearFont__5CFont(struct CFont *this); // 0x8008ACE4


// decompiled code
// original method signature: 
// void /*$ra*/ Init__5CFont(struct CFont *this /*$s0*/)
 // line 59, offset 0x8008ad40
	/* begin block 1 */
		// Start line: 60
		// Start offset: 0x8008AD40
	/* end block 1 */
	// End offset: 0x8008AD60
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
// int /*$ra*/ GetCharFrameNum__5CFontUc(struct CFont *this /*$a0*/, unsigned char ch /*$a1*/)
 // line 79, offset 0x8008ad28
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x8008AD28
	/* end block 1 */
	// End offset: 0x8008AD38
	// End Line: 80

	/* begin block 2 */
		// Start line: 158
	/* end block 2 */
	// End Line: 159

int GetCharFrameNum__5CFontUc(CFont *this,uchar ch)

{
	return (uint)this->FontTab[(uint)ch];
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsDefined__5CFontUc(struct CFont *this /*$a0*/, unsigned char C /*$a1*/)
 // line 82, offset 0x8008ad08
	/* begin block 1 */
		// Start line: 83
		// Start offset: 0x8008AD08
	/* end block 1 */
	// End offset: 0x8008AD20
	// End Line: 83

	/* begin block 2 */
		// Start line: 164
	/* end block 2 */
	// End Line: 165

void * IsDefined__5CFontUc(CFont *this,uchar C)

{
	return (void *)(uint)(this->FontTab[(uint)C] != 0x3039);
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearFont__5CFont(struct CFont *this /*$a0*/)
 // line 85, offset 0x8008ace4
	/* begin block 1 */
		// Start line: 86
		// Start offset: 0x8008ACE4
	/* end block 1 */
	// End offset: 0x8008ACF8
	// End Line: 86

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

void ClearFont__5CFont(CFont *this)

{
	GM_FinishedUsing__FP7TextDat(this->ThisDat);
	return;
}





#endif
