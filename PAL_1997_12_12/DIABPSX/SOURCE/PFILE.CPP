#include "THISDUST.H"
#include "PFILE.H"


// decompiled code
// original method signature: 
// unsigned char /*$ra*/ game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p /*$a0*/)
 // line 380, offset 0x80058b14
	/* begin block 1 */
		// Start line: 381
		// Start offset: 0x80058B14
	/* end block 1 */
	// End offset: 0x80058B38
	// End Line: 386

	/* begin block 2 */
		// Start line: 761
	/* end block 2 */
	// End Line: 762

uchar game_2_ui_class__FPC12PlayerStruct(PlayerStruct *p)

{
	uchar uVar1;
	
	if (p->_pClass == '\0') {
		uVar1 = '\0';
	}
	else {
		uVar1 = '\x01';
		if (p->_pClass != '\x01') {
			uVar1 = '\x02';
		}
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p /*$s1*/, struct _uiheroinfo *heroinfo /*$s0*/, unsigned char bHasSaveFile /*$s2*/)
 // line 391, offset 0x80058b40
	/* begin block 1 */
		// Start line: 392
		// Start offset: 0x80058B40
	/* end block 1 */
	// End offset: 0x80058BD8
	// End Line: 405

	/* begin block 2 */
		// Start line: 783
	/* end block 2 */
	// End Line: 784

void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc
							 (PlayerStruct *p,_uiheroinfo *heroinfo,uchar bHasSaveFile)

{
	char cVar1;
	ushort uVar2;
	ushort uVar3;
	ushort uVar4;
	ushort uVar5;
	uchar uVar6;
	ulong uVar7;
	ulong uVar8;
	
	memset(heroinfo,0,0x28);
	strncpy(heroinfo->name,p->_pName,0xf);
	cVar1 = p->_pLevel;
	heroinfo->name[0xf] = '\0';
	heroinfo->level = (short)cVar1;
	uVar6 = game_2_ui_class__FPC12PlayerStruct(p);
	uVar2 = p->_pStrength;
	uVar3 = p->_pMagic;
	uVar4 = p->_pDexterity;
	uVar5 = p->_pVitality;
	uVar7 = p->_pGold;
	uVar8 = p->pDiabloKillLevel;
	heroinfo->heroclass = uVar6;
	heroinfo->hassaved = bHasSaveFile;
	heroinfo->spawned = '\0';
	heroinfo->strength = uVar2;
	heroinfo->magic = uVar3;
	heroinfo->dexterity = uVar4;
	heroinfo->vitality = uVar5;
	heroinfo->gold = uVar7;
	heroinfo->herorank = (uchar)uVar8;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetupLocalPlayer__Fv()
 // line 449, offset 0x80058bf4
	/* begin block 1 */
		// Start line: 450
		// Start offset: 0x80058BF4
	/* end block 1 */
	// End offset: 0x80058C0C
	// End Line: 499

	/* begin block 2 */
		// Start line: 936
	/* end block 2 */
	// End Line: 937

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetupLocalPlayer__Fv(void)

{
	if (DoLoadedChar != (void *)0x0) {
		DoLoadedChar = (void *)0x0;
	}
	gbValidSaveFile = '\x01';
	return;
}





