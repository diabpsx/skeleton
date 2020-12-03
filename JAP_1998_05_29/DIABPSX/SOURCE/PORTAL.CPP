#include "THISDUST.H"
#include "PORTAL.H"


// decompiled code
// original method signature: 
// void /*$ra*/ AddWarpMissile__Fiii(int i /*$s1*/, int x /*$v0*/, int y /*$a3*/)
 // line 151, offset 0x80080ef8
	/* begin block 1 */
		// Start line: 152
		// Start offset: 0x80080EF8
		// Variables:
	// 		int mi; // $v0
	/* end block 1 */
	// End offset: 0x80080FCC
	// End Line: 183

	/* begin block 2 */
		// Start line: 302
	/* end block 2 */
	// End Line: 303

void AddWarpMissile__Fiii(int i,int x,int y)

{
	int mi;
	
	missiledata[10].mlSFX = -1;
	dung_map[x * 0x70 + y].dMissile = '\0';
	mi = AddMissile__Fiiiiiiciii(0,0,x,y,0,10,0,i,0,0);
	if (mi != -1) {
		SetMissDir__Fii(mi,1);
		mi = AddLight__Fiii((int)missile[i]._mix,(int)missile[i]._miy,0x14a);
		missile[i]._mlid = (char)mi;
		missiledata[10].mlSFX = 0x6e;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncPortals__Fv()
 // line 189, offset 0x80080fe8
	/* begin block 1 */
		// Start line: 190
		// Start offset: 0x80080FE8

		/* begin block 1.1 */
			// Start line: 190
			// Start offset: 0x80080FE8
			// Variables:
		// 		int i; // $s1

			/* begin block 1.1.1 */
				// Start line: 192
				// Start offset: 0x80081008

				/* begin block 1.1.1.1 */
					// Start line: 193
					// Start offset: 0x80081014

					/* begin block 1.1.1.1.1 */
						// Start line: 193
						// Start offset: 0x8008102C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 194
							// Start offset: 0x8008102C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 195
								// Start offset: 0x80081040

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 196
									// Start offset: 0x80081040
									// Variables:
								// 		int x; // $a2

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 196
										// Start offset: 0x80081044

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 198
											// Start offset: 0x80081050
											// Variables:
										// 		int y; // $a0
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x8008108C
										// End Line: 202
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8008108C
									// End Line: 202
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80081098
								// End Line: 203
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80081098
							// End Line: 204
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80081114
						// End Line: 208
					/* end block 1.1.1.1.1 */
					// End offset: 0x80081114
					// End Line: 208
				/* end block 1.1.1.1 */
				// End offset: 0x80081114
				// End Line: 208
			/* end block 1.1.1 */
			// End offset: 0x80081114
			// End Line: 208
		/* end block 1.1 */
		// End offset: 0x80081120
		// End Line: 220
	/* end block 1 */
	// End offset: 0x80081120
	// End Line: 220

	/* begin block 2 */
		// Start line: 414
	/* end block 2 */
	// End Line: 415

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SyncPortals__Fv(void)

{
	int iVar1;
	int iVar2;
	int y;
	int x;
	int iVar3;
	int i;
	
	i = 0;
	iVar3 = 0;
	do {
		if (3 < i) {
			return;
		}
		if ((&portal[0].open)[iVar3] != '\0') {
			x = 0;
			if (currlevel == '\0') {
				y = 0;
				while (iVar2 = 0, iVar1 = y, x < 0x70) {
					do {
						iVar2 = iVar2 + 1;
						(&dung_map[0].dMissile)[iVar1] = '\0';
						(&dung_map[0].dFlags)[iVar1] = (&dung_map[0].dFlags)[iVar1] & 0xbf;
						iVar1 = iVar1 + 8;
					} while (iVar2 < 0x70);
					y = y + 0x380;
					x = x + 1;
				}
				x = WarpDropX[i];
				y = WarpDropY[i];
			}
			else {
				if (((&portal[0].setlvl)[iVar3] != setlevel) ||
					 ((int)(&portal[0].level)[iVar3] != (uint)currlevel)) goto LAB_80081114;
				x = (int)(&portal[0].x)[iVar3];
				y = (int)(&portal[0].y)[iVar3];
			}
			AddWarpMissile__Fiii(i,x,y);
		}
LAB_80081114:
		iVar3 = iVar3 + 0xc;
		i = i + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ ActivatePortal__FiiiiiUc(int i /*$a0*/, int x /*$a1*/, int y /*$a2*/, int lvl /*$a3*/, int lvltype /*stack 16*/, int sp /*stack 20*/)
 // line 236, offset 0x8008113c
	/* begin block 1 */
		// Start line: 237
		// Start offset: 0x8008113C
	/* end block 1 */
	// End offset: 0x800811C0
	// End Line: 246

	/* begin block 2 */
		// Start line: 518
	/* end block 2 */
	// End Line: 519

void ActivatePortal__FiiiiiUc(int i,int x,int y,int lvl,int lvltype,int sp)

{
	uchar uVar1;
	
	portal[i].open = '\x01';
	if (lvl != 0) {
		portal[i].x = (char)x;
		portal[i].y = (char)y;
		uVar1 = currlevel;
		portal[i].setlvl = (uchar)sp;
		portal[i].level = uVar1;
		uVar1 = setlvlnum;
		portal[i].ltype = lvltype;
		portal[i].setlvlnum = uVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeactivatePortal__Fi(int i /*$a0*/)
 // line 253, offset 0x800811c8
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x800811C8
	/* end block 1 */
	// End offset: 0x800811E0
	// End Line: 256

	/* begin block 2 */
		// Start line: 558
	/* end block 2 */
	// End Line: 559

void DeactivatePortal__Fi(int i)

{
	portal[i].open = '\0';
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PortalOnLevel__Fi(int i /*$a0*/)
 // line 262, offset 0x800811e8
	/* begin block 1 */
		// Start line: 263
		// Start offset: 0x800811E8
	/* end block 1 */
	// End offset: 0x80081218
	// End Line: 267

	/* begin block 2 */
		// Start line: 576
	/* end block 2 */
	// End Line: 577

uchar PortalOnLevel__Fi(int i)

{
	return (uchar)((int)portal[i].level == (uint)currlevel || currlevel == '\0');
}



// decompiled code
// original method signature: 
// void /*$ra*/ DelMis__Fii(int mi /*$a0*/, int i /*$a1*/)
 // line 272, offset 0x80081220
	/* begin block 1 */
		// Start line: 273
		// Start offset: 0x80081220
	/* end block 1 */
	// End offset: 0x80081278
	// End Line: 280

	/* begin block 2 */
		// Start line: 596
	/* end block 2 */
	// End Line: 597

void DelMis__Fii(int mi,int i)

{
	missileavail[0x7d - nummissiles] = (short)mi;
	nummissiles = nummissiles + -1;
	if ((0 < nummissiles) && (i != nummissiles)) {
		(&missileactive)[i] = (&missileactive)[nummissiles];
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemovePortalMissile__Fi(int id /*$s3*/)
 // line 285, offset 0x80081280
	/* begin block 1 */
		// Start line: 286
		// Start offset: 0x80081280
		// Variables:
	// 		int i; // $s2
	// 		int mi; // $s1
	// 		struct MissileStruct *m; // $s0
	/* end block 1 */
	// End offset: 0x800813C0
	// End Line: 301

	/* begin block 2 */
		// Start line: 625
	/* end block 2 */
	// End Line: 626

void RemovePortalMissile__Fi(int id)

{
	int mi;
	int i;
	
	i = 0;
	if (0 < nummissiles) {
		mi = 0;
		do {
			mi = (int)*(short *)((int)&missileactive + mi);
			if ((missile[mi]._mitype == '\n') && ((int)missile[mi]._misource == id)) {
				dung_map[(int)missile[mi]._mix * 0x70 + (int)missile[mi]._miy].dFlags =
						 dung_map[(int)missile[mi]._mix * 0x70 + (int)missile[mi]._miy].dFlags & 0xbf;
				dung_map[(int)missile[mi]._mix * 0x70 + (int)missile[mi]._miy].dMissile = '\0';
				if (portal[id].level != '\0') {
					AddUnLight__Fi((int)missile[mi]._mlid);
				}
				DelMis__Fii(mi,i);
				missile[mi]._miDelFlag = '\x01';
			}
			i = i + 1;
			mi = i * 2;
		} while (i < nummissiles);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetCurrentPortal__Fi(int p /*$a0*/)
 // line 306, offset 0x800813e4
	/* begin block 1 */
		// Start line: 307
		// Start offset: 0x800813E4
	/* end block 1 */
	// End offset: 0x800813E8
	// End Line: 308

	/* begin block 2 */
		// Start line: 673
	/* end block 2 */
	// End Line: 674

void SetCurrentPortal__Fi(int p)

{
	portalindex = p;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetPortalLevel__Fv()
 // line 312, offset 0x800813f0
	/* begin block 1 */
		// Start line: 313
		// Start offset: 0x800813F0
	/* end block 1 */
	// End offset: 0x80081544
	// End Line: 339

	/* begin block 2 */
		// Start line: 685
	/* end block 2 */
	// End Line: 686

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetPortalLevel__Fv(void)

{
	bool bVar1;
	int iVar2;
	
	iVar2 = portalindex;
	if (currlevel == '\0') {
		bVar1 = portal[portalindex].setlvl == '\0';
		if (bVar1) {
			setlvlnum = '\0';
		}
		else {
			setlvlnum = portal[portalindex].setlvlnum;
		}
		setlevel = !bVar1;
		currlevel = portal[portalindex].level;
		plr[myplr].plrlevel = (uint)currlevel;
		leveltype = (uchar)portal[iVar2].ltype;
		NetSendCmd__FUcUc('\x01','9');
		DeactivatePortal__Fi(portalindex);
	}
	else {
		setlevel = '\0';
		setlvlnum = '\0';
		currlevel = '\0';
		leveltype = '\0';
		plr[myplr].plrlevel = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetPortalLvlPos__Fv()
 // line 346, offset 0x80081554
	/* begin block 1 */
		// Start line: 347
		// Start offset: 0x80081554
	/* end block 1 */
	// End offset: 0x80081600
	// End Line: 358

	/* begin block 2 */
		// Start line: 767
	/* end block 2 */
	// End Line: 768

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetPortalLvlPos__Fv(void)

{
	if (currlevel == '\0') {
		ViewX = WarpDropX[portalindex];
		ViewY = WarpDropY[portalindex];
	}
	else {
		ViewX = (int)portal[portalindex].x;
		ViewY = (int)portal[portalindex].y;
		if (portalindex == myplr) {
			return;
		}
	}
	ViewX = ViewX + 1;
	ViewY = ViewY + 1;
	return;
}





