#include "THISDUST.H"
#include "SCROLLRT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DrawView__Fii(int StartX /*$a0*/, int StartY /*$a1*/)
 // line 85, offset 0x8006931c
	/* begin block 1 */
		// Start line: 86
		// Start offset: 0x8006931C
	/* end block 1 */
	// End offset: 0x800694BC
	// End Line: 153

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
			FUN_80162e50();
		}
		if (chrflag == '\0') {
			if ((questlog == '\0') && (invflag != '\0')) {
				FUN_801590b4();
			}
			if (((chrflag == '\0') && (questlog == '\0')) && (invflag == '\0')) {
				if ((plr.plractive != '\0') && (plr._pStatPts != 0)) {
					DrawLevelUpIcon__Fi(0);
				}
				if ((PlayerStruct_800dbf20.plractive != '\0') && (PlayerStruct_800dbf20._pStatPts != 0)) {
					DrawLevelUpIcon__Fi(1);
				}
			}
		}
		if ((((msgflag != '\0') && (_spselflag2 == (TASK *)0x0)) && (PTR_8011b654 == (TASK *)0x0)) &&
			 (PauseMode == '\0')) {
			DrawDiabloMsg__Fv();
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAndBlit__Fv()
 // line 282, offset 0x800694d0
	/* begin block 1 */
		// Start line: 283
		// Start offset: 0x800694D0
	/* end block 1 */
	// End offset: 0x80069590
	// End Line: 340

	/* begin block 2 */
		// Start line: 564
	/* end block 2 */
	// End Line: 565

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawAndBlit__Fv(void)

{
	bool bVar1;
	void *pvVar2;
	
	bVar1 = false;
	pvVar2 = GLUE_Finished__Fv();
	if ((pvVar2 != (void *)0x0) || (pvVar2 = IsGameLoading__Fv(), pvVar2 != (void *)0x0)) {
		bVar1 = true;
	}
	if (!bVar1) {
		drawhpflag = '\x01';
		drawmanaflag = '\x01';
		drawbtnflag = '\x01';
		drawsbarflag = '\x01';
		if (leveltype == '\0') {
			T_DrawView__Fii(ViewX,ViewY);
		}
		else {
			DrawView__Fii(ViewX,ViewY);
		}
		drawhpflag = '\0';
		drawmanaflag = '\0';
		drawbtnflag = '\0';
		drawsbarflag = '\0';
	}
	return;
}





