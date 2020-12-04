#include "THISDUST.H"
#include "SCROLLRT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DrawView__Fii(int StartX /*$a0*/, int StartY /*$a1*/)
 // line 85, offset 0x80063128
	/* begin block 1 */
		// Start line: 86
		// Start offset: 0x80063128
	/* end block 1 */
	// End offset: 0x800632DC
	// End Line: 152

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

void DrawView__Fii(int StartX,int StartY)

{
	bool bVar1;
	void *pvVar2;
	
	bVar1 = false;
	pvVar2 = GLUE_Finished__Fv();
	if ((pvVar2 != (void *)0x0) || (pvVar2 = IsGameLoading__Fv(), pvVar2 != (void *)0x0)) {
		bVar1 = true;
	}
	if (!bVar1) {
		if ((automapflag != '\0') && (DoShowPanel != (void *)0x0)) {
			DrawAutomap__Fv();
		}
		if (chrflag == '\0') {
			if ((questlog == '\0') && (invflag != '\0')) {
				DrawInv__Fv();
			}
			if (((chrflag == '\0') && (questlog == '\0')) && (invflag == '\0')) {
				if ((plr[0].plractive != '\0') && (plr[0]._pStatPts != 0)) {
					DrawLevelUpIcon__Fi(0);
				}
				if ((plr[1].plractive != '\0') && (plr[1]._pStatPts != 0)) {
					DrawLevelUpIcon__Fi(1);
				}
			}
		}
		if ((((msgflag != '\0') && (_spselflag2 == (TASK *)0x0)) && (PTR_8012b154 == (TASK *)0x0)) &&
			 ((iscflag == (void *)0x0 && (PauseMode == '\0')))) {
			DrawDiabloMsg__Fv();
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAndBlit__Fv()
 // line 315, offset 0x800632f0
	/* begin block 1 */
		// Start line: 316
		// Start offset: 0x800632F0
		// Variables:
	// 		unsigned char ctrlPan; // $s0
	/* end block 1 */
	// End offset: 0x800633D4
	// End Line: 373

	/* begin block 2 */
		// Start line: 635
	/* end block 2 */
	// End Line: 636

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawAndBlit__Fv(void)

{
	bool bVar1;
	
	if (gbRunGame != '\0') {
		if (force_redraw == 0xff) {
			drawhpflag = '\x01';
			drawmanaflag = '\x01';
			drawbtnflag = '\x01';
			drawsbarflag = '\x01';
			bVar1 = true;
		}
		else {
			bVar1 = false;
			if (force_redraw != 1) {
				return;
			}
		}
		force_redraw = 0;
		if (leveltype == '\0') {
			T_DrawView__Fii(ViewX,ViewY);
		}
		else {
			DrawView__Fii(ViewX,ViewY);
		}
		if (bVar1) {
			DrawCtrlPan__Fv();
		}
		drawhpflag = '\0';
		drawmanaflag = '\0';
		drawbtnflag = '\0';
		drawsbarflag = '\0';
	}
	return;
}





