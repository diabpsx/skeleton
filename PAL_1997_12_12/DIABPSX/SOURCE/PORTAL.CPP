#include "THISDUST.H"
#include "PORTAL.H"


// decompiled code
// original method signature: 
// int /*$ra*/ lAddMissile__Fiiici(int sx /*$s1*/, int sy /*$s3*/, int midir /*$a2*/, char micaster /*$a3*/, int id /*stack 16*/)
 // line 70, offset 0x8007a1d0
	/* begin block 1 */
		// Start line: 71
		// Start offset: 0x8007A1D0
		// Variables:
	// 		struct MissileStruct *m; // $s0
	// 		int mi; // $s2
	/* end block 1 */
	// End offset: 0x8007A380
	// End Line: 141

	/* begin block 2 */
		// Start line: 140
	/* end block 2 */
	// End Line: 141

int lAddMissile__Fiiici(int sx,int sy,int midir,char micaster,int id)

{
	int *piVar1;
	byte bVar2;
	uchar uVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = missileavail[0];
	if (nummissiles < 0x7d) {
		piVar1 = &missileactive + nummissiles;
		iVar4 = missileavail[0x7c - nummissiles];
		nummissiles = nummissiles + 1;
		*piVar1 = missileavail[0];
		missileavail[0] = iVar4;
		missile[iVar5]._mitype = '\n';
		missile[iVar5]._micaster = (int)micaster;
		missile[iVar5]._misource = (char)id;
		missile[iVar5]._miAnimType = missiledata[10].mFileNum;
		uVar3 = missiledata[10].mDraw;
		missile[iVar5]._mispllvl = '\0';
		missile[iVar5]._mimfnum = '\x01';
		missile[iVar5]._mix = (char)sx;
		missile[iVar5]._miy = (char)sy;
		missile[iVar5]._misx = (char)sx;
		missile[iVar5]._misy = (char)sy;
		missile[iVar5]._mitxoff = 0;
		missile[iVar5]._mityoff = 0;
		missile[iVar5]._mixoff = '\0';
		missile[iVar5]._miyoff = '\0';
		missile[iVar5]._mimfnum = '\x01';
		missile[iVar5]._miDelFlag = '\0';
		missile[iVar5]._miAnimAdd = '\x01';
		missile[iVar5]._miLightFlag = '\0';
		missile[iVar5]._miPreFlag = '\0';
		missile[iVar5]._miUniqTrans = '\0';
		missile[iVar5]._midam = 0;
		missile[iVar5]._miHitFlag = '\0';
		missile[iVar5]._midist = 0;
		missile[iVar5]._mlid = -1;
		missile[iVar5]._mirnd = 0;
		missile[iVar5]._miDrawFlag = uVar3;
		if (missiledata[10].mlSFX != -1) {
			PlaySfxLoc__Fiii(missiledata[10].mlSFX,(int)missile[iVar5]._mix,(int)missile[iVar5]._miy);
		}
		bVar2 = dung_map[sx * 0x6c + sy].dFlags;
		dung_map[sx * 0x6c + sy].dMissile = (char)iVar5 + '\x01';
		dung_map[sx * 0x6c + sy].dFlags = bVar2 | 1;
		if (missile[iVar5]._miPreFlag != '\0') {
			MissilePreFlag = '\x01';
		}
	}
	else {
		iVar5 = -1;
	}
	return iVar5;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddWarpMissile__Fiii(int i /*$s1*/, int x /*$t0*/, int y /*$a3*/)
 // line 149, offset 0x8007a3a4
	/* begin block 1 */
		// Start line: 150
		// Start offset: 0x8007A3A4
		// Variables:
	// 		int mi; // $v1
	/* end block 1 */
	// End offset: 0x8007A4D4
	// End Line: 178

	/* begin block 2 */
		// Start line: 380
	/* end block 2 */
	// End Line: 381

void AddWarpMissile__Fiii(int i,int x,int y)

{
	int iVar1;
	
	missiledata[10].mlSFX = -1;
	dung_map[x * 0x6c + y].dMissile = '\0';
	if (currlevel == '\0') {
		iVar1 = lAddMissile__Fiiici(x,y,0,'\0',i);
	}
	else {
		iVar1 = AddMissile__Fiiiiiiciii(0,0,x,y,0,10,0,i,0,0);
	}
	if (iVar1 != -1) {
		missile[iVar1]._mimfnum = '\x01';
		if (currlevel != '\0') {
			iVar1 = AddLight__Fiii((int)missile[i]._mix,(int)missile[i]._miy,0xf);
			missile[i]._mlid = (char)iVar1;
		}
		missiledata[10].mlSFX = 0x6e;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncPortals__Fv()
 // line 184, offset 0x8007a4ec
	/* begin block 1 */
		// Start line: 185
		// Start offset: 0x8007A4EC

		/* begin block 1.1 */
			// Start line: 185
			// Start offset: 0x8007A4EC
			// Variables:
		// 		int i; // $s0
		/* end block 1.1 */
		// End offset: 0x8007A5D0
		// End Line: 199
	/* end block 1 */
	// End offset: 0x8007A5D0
	// End Line: 199

	/* begin block 2 */
		// Start line: 458
	/* end block 2 */
	// End Line: 459

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SyncPortals__Fv(void)

{
	char cVar1;
	char cVar2;
	uint uVar3;
	uint uVar4;
	int i;
	char *pcVar5;
	char *pcVar6;
	char *pcVar7;
	int iVar8;
	
	i = 0;
	pcVar5 = &portal[0].y;
	pcVar7 = &portal[0].x;
	pcVar6 = &portal[0].level;
	iVar8 = 0;
	do {
		if ((&portal[0].open)[iVar8] != '\0') {
			uVar4 = (uint)currlevel;
			if (currlevel == '\0') {
				cVar1 = WarpDropX[i];
				cVar2 = WarpDropY[i];
			}
			else {
				if (setlevel == '\0') {
					uVar3 = SEXT14(*pcVar6);
				}
				else {
					uVar4 = SEXT14(*pcVar6);
					uVar3 = (uint)setlvlnum;
				}
				if (uVar4 != uVar3) goto LAB_8007a5b4;
				cVar1 = *pcVar7;
				cVar2 = *pcVar5;
			}
			AddWarpMissile__Fiii(i,(int)cVar1,(int)cVar2);
		}
LAB_8007a5b4:
		pcVar5 = pcVar5 + 0xc;
		pcVar7 = pcVar7 + 0xc;
		pcVar6 = pcVar6 + 0xc;
		i = i + 1;
		iVar8 = iVar8 + 0xc;
		if (1 < i) {
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddInTownPortal__Fi(int i /*$a0*/)
 // line 206, offset 0x8007a5f4
	/* begin block 1 */
		// Start line: 207
		// Start offset: 0x8007A5F4
	/* end block 1 */
	// End offset: 0x8007A61C
	// End Line: 208

	/* begin block 2 */
		// Start line: 512
	/* end block 2 */
	// End Line: 513

void AddInTownPortal__Fi(int i)

{
	AddWarpMissile__Fiii(i,(int)WarpDropX[i],(int)WarpDropY[i]);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ActivatePortal__FiiiiiUc(int i /*$a0*/, int x /*$a1*/, int y /*$a2*/, int lvl /*$a3*/, int lvltype /*stack 16*/, int sp /*stack 20*/)
 // line 214, offset 0x8007a62c
	/* begin block 1 */
		// Start line: 215
		// Start offset: 0x8007A62C
	/* end block 1 */
	// End offset: 0x8007A694
	// End Line: 223

	/* begin block 2 */
		// Start line: 530
	/* end block 2 */
	// End Line: 531

void ActivatePortal__FiiiiiUc(int i,int x,int y,int lvl,int lvltype,int sp)

{
	portal[i].open = '\x01';
	if (lvl != 0) {
		portal[i].x = (char)x;
		portal[i].y = (char)y;
		portal[i].level = (char)lvl;
		portal[i].ltype = lvltype;
		portal[i].setlvl = (uchar)sp;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeactivatePortal__Fi(int i /*$a0*/)
 // line 230, offset 0x8007a69c
	/* begin block 1 */
		// Start line: 231
		// Start offset: 0x8007A69C
	/* end block 1 */
	// End offset: 0x8007A6B4
	// End Line: 233

	/* begin block 2 */
		// Start line: 564
	/* end block 2 */
	// End Line: 565

void DeactivatePortal__Fi(int i)

{
	portal[i].open = '\0';
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PortalOnLevel__Fi(int i /*$a0*/)
 // line 239, offset 0x8007a6bc
	/* begin block 1 */
		// Start line: 240
		// Start offset: 0x8007A6BC
	/* end block 1 */
	// End offset: 0x8007A6EC
	// End Line: 244

	/* begin block 2 */
		// Start line: 582
	/* end block 2 */
	// End Line: 583

uchar PortalOnLevel__Fi(int i)

{
	return (uchar)((int)portal[i].level == (uint)currlevel || currlevel == '\0');
}



// decompiled code
// original method signature: 
// void /*$ra*/ DelMis__Fii(int mi /*$a0*/, int i /*$a1*/)
 // line 249, offset 0x8007a6f4
	/* begin block 1 */
		// Start line: 250
		// Start offset: 0x8007A6F4
	/* end block 1 */
	// End offset: 0x8007A74C
	// End Line: 257

	/* begin block 2 */
		// Start line: 602
	/* end block 2 */
	// End Line: 603

void DelMis__Fii(int mi,int i)

{
	missileavail[0x7d - nummissiles] = mi;
	nummissiles = nummissiles + -1;
	if ((0 < nummissiles) && (i != nummissiles)) {
		(&missileactive)[i] = (&missileactive)[nummissiles];
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemovePortalMissile__Fi(int id /*$s3*/)
 // line 262, offset 0x8007a754
	/* begin block 1 */
		// Start line: 263
		// Start offset: 0x8007A754
		// Variables:
	// 		int i; // $s1
	// 		int mi; // $s2
	// 		struct MissileStruct *m; // $s0
	/* end block 1 */
	// End offset: 0x8007A8AC
	// End Line: 278

	/* begin block 2 */
		// Start line: 631
	/* end block 2 */
	// End Line: 632

void RemovePortalMissile__Fi(int id)

{
	int mi;
	int i;
	
	i = 0;
	if (0 < nummissiles) {
		mi = 0;
		do {
			mi = *(int *)((int)&missileactive + mi);
			if ((missile[mi]._mitype == '\n') && ((int)missile[mi]._misource == id)) {
				dung_map[(int)missile[mi]._mix * 0x6c + (int)missile[mi]._miy].dFlags =
						 dung_map[(int)missile[mi]._mix * 0x6c + (int)missile[mi]._miy].dFlags & 0xfe;
				dung_map[(int)missile[mi]._mix * 0x6c + (int)missile[mi]._miy].dMissile = '\0';
				if (portal[id].level != '\0') {
					AddUnLight__Fi((int)missile[mi]._mlid);
				}
				DelMis__Fii(mi,i);
				missile[mi]._miDelFlag = '\x01';
			}
			i = i + 1;
			mi = i * 4;
		} while (i < nummissiles);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetCurrentPortal__Fi(int p /*$a0*/)
 // line 283, offset 0x8007a8d0
	/* begin block 1 */
		// Start line: 284
		// Start offset: 0x8007A8D0
	/* end block 1 */
	// End offset: 0x8007A8D4
	// End Line: 285

	/* begin block 2 */
		// Start line: 679
	/* end block 2 */
	// End Line: 680

void SetCurrentPortal__Fi(int p)

{
	portalindex = (char)p;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetPortalLevel__Fv()
 // line 289, offset 0x8007a8dc
	/* begin block 1 */
		// Start line: 290
		// Start offset: 0x8007A8DC
	/* end block 1 */
	// End offset: 0x8007AA70
	// End Line: 314

	/* begin block 2 */
		// Start line: 691
	/* end block 2 */
	// End Line: 692

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetPortalLevel__Fv(void)

{
	int iVar1;
	
	if (currlevel == '\0') {
		iVar1 = (int)portalindex;
		if (portal[iVar1].setlvl == '\0') {
			setlevel = '\0';
			currlevel = portal[iVar1].level;
			plr[myplr].plrlevel = (uint)currlevel;
		}
		else {
			setlevel = '\x01';
			setlvlnum = portal[iVar1].level;
			currlevel = portal[iVar1].level;
			plr[myplr].plrlevel = (uint)setlvlnum;
		}
		leveltype = (uchar)portal[iVar1].ltype;
		if ((int)portalindex == myplr) {
			NetSendCmd__FUcUc('\x01','9');
			DeactivatePortal__Fi((int)portalindex);
		}
	}
	else {
		setlevel = '\0';
		currlevel = '\0';
		leveltype = '\0';
		plr[myplr].plrlevel = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetPortalLvlPos__Fv()
 // line 321, offset 0x8007aa80
	/* begin block 1 */
		// Start line: 322
		// Start offset: 0x8007AA80
	/* end block 1 */
	// End offset: 0x8007AB28
	// End Line: 333

	/* begin block 2 */
		// Start line: 770
	/* end block 2 */
	// End Line: 771

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetPortalLvlPos__Fv(void)

{
	int iVar1;
	
	if (currlevel == '\0') {
		ViewX = (int)WarpDropX[(int)portalindex];
		ViewY = (int)WarpDropY[(int)portalindex];
	}
	else {
		iVar1 = (int)portalindex;
		ViewX = (int)portal[iVar1].x;
		ViewY = (int)portal[iVar1].y;
		if (iVar1 == myplr) {
			return;
		}
	}
	ViewX = ViewX + 1;
	ViewY = ViewY + 1;
	return;
}





