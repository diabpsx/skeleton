#include "THISDUST.H"
#include "QUESTS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ CheckRPortalOK__FPiT0(int *rx /*$a0*/, int *ry /*$a1*/)
 // line 166, offset 0x800674b4
	/* begin block 1 */
		// Start line: 167
		// Start offset: 0x800674B4
		// Variables:
	// 		int nx; // $a2
	// 		int ny; // $v1
	/* end block 1 */
	// End offset: 0x800674EC
	// End Line: 174

	/* begin block 2 */
		// Start line: 333
	/* end block 2 */
	// End Line: 334

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckRPortalOK__FPiT0(int *rx,int *ry)

{
	int iVar1;
	int iVar2;
	
	iVar2 = *rx;
	iVar1 = *ry;
	if ((iVar2 == ViewX) && (iVar1 == ViewY)) {
		iVar2 = iVar2 + -1;
		iVar1 = iVar1 + -1;
	}
	*rx = iVar2;
	*ry = iVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckQuests__Fv()
 // line 185, offset 0x800674f4
	/* begin block 1 */
		// Start line: 186
		// Start offset: 0x800674F4
		// Variables:
	// 		int i; // $s4
	// 		int rportx; // stack offset -40
	// 		int rporty; // stack offset -36
	// 		int omp; // $s5

		/* begin block 1.1 */
			// Start line: 248
			// Start offset: 0x80067868

			/* begin block 1.1.1 */
				// Start line: 248
				// Start offset: 0x80067870

				/* begin block 1.1.1.1 */
					// Start line: 250
					// Start offset: 0x8006787C
					// Variables:
				// 		int pl; // $s1

					/* begin block 1.1.1.1.1 */
						// Start line: 250
						// Start offset: 0x80067884
						// Variables:
					// 		struct PlayerStruct *player; // $a0
					/* end block 1.1.1.1.1 */
					// End offset: 0x80067984
					// End Line: 263
				/* end block 1.1.1.1 */
				// End offset: 0x80067990
				// End Line: 266
			/* end block 1.1.1 */
			// End offset: 0x80067990
			// End Line: 266
		/* end block 1.1 */
		// End offset: 0x8006799C
		// End Line: 267
	/* end block 1 */
	// End offset: 0x800679A4
	// End Line: 268

	/* begin block 2 */
		// Start line: 372
	/* end block 2 */
	// End Line: 373

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckQuests__Fv(void)

{
	int iVar1;
	uchar uVar2;
	int iVar3;
	undefined *puVar4;
	int iVar5;
	int iVar6;
	int local_28;
	int local_24;
	
	iVar1 = myplr;
	uVar2 = QuestStatus__Fi(0xf);
	if (uVar2 == '\0') {
LAB_800675a0:
		if (gbMaxPlayers != '\x01') {
			return;
		}
	}
	else {
		if (gbMaxPlayers != '\x01') {
			if (quests[15]._qvar1 == '\x02') {
				AddObject__Fiii(0x53,setpc_x * 2 + 0x14,setpc_y * 2 + 0x16);
				quests[15]._qvar1 = '\x03';
				if (deltaload == '\0') {
					NetSendCmdQuest__FUcUc('\x01','\x0f');
				}
			}
			goto LAB_800675a0;
		}
	}
	if (((((currlevel == quests[15]._qlevel) && (setlevel == '\0')) && (1 < quests[15]._qvar1)) &&
			((uint)quests[15]._qactive - 2 < 2)) &&
		 ((quests[15]._qvar2 == '\0' || (quests[15]._qvar2 == '\x02')))) {
		local_28 = quests[15]._qtx * 2 + 0x10;
		local_24 = quests[15]._qty * 2 + 0x10;
		CheckRPortalOK__FPiT0(&local_28,&local_24);
		quests[15]._qtx = local_28;
		quests[15]._qty = local_24;
		AddMissile__Fiiiiiiciii(local_28,local_24,local_28,local_24,0,0x41,0,myplr,0,0);
		quests[15]._qvar2 = '\x01';
		if (quests[15]._qactive == '\x02') {
			quests[15]._qvar1 = '\x03';
		}
		if (deltaload == '\0') {
			NetSendCmdQuest__FUcUc('\x01','\x0f');
		}
	}
	if (quests[15]._qactive == '\x03') {
		if (setlevel == '\0') goto LAB_8006786c;
		if ((setlvlnum == '\x05') && (quests[15]._qvar2 == '\x04')) {
			AddMissile__Fiiiiiiciii(0x23,0x20,0x23,0x20,0,0x41,0,myplr,0,0);
			quests[15]._qvar2 = '\x03';
			if (deltaload == '\0') {
				NetSendCmdQuest__FUcUc('\x01','\x0f');
			}
		}
	}
	if (setlevel != '\0') {
		if (setlvlnum != quests[13]._qslvl) {
			return;
		}
		if (quests[13]._qactive == '\x01') {
			return;
		}
		if (leveltype != quests[13]._qlvltype) {
			return;
		}
		if (((nummonsters != 4) || (quests[13]._qactive == '\x03')) && (quests[13]._qactive != '\x03'))
		{
			return;
		}
		if (WaterDone != (void *)0x0) {
			return;
		}
		quests[13]._qactive = '\x03';
		PlaySFX__Fi(IS_QUESTDN);
		WaterDone = &DAT_00000001;
		if (deltaload != '\0') {
			return;
		}
		NetSendCmdQuest__FUcUc('\x01','\r');
		return;
	}
LAB_8006786c:
	iVar6 = 0;
	iVar5 = 0;
	while (iVar3 = 0, iVar6 < 0x10) {
		puVar4 = (undefined *)0x0;
		while (iVar3 < 2) {
			if (((((&plr[0].plractive)[(int)puVar4] != '\0') && (currlevel == (&quests[0]._qlevel)[iVar5])
					 ) && (((&quests[0]._qslvl)[iVar5] != '\0' &&
								 (((&quests[0]._qactive)[iVar5] != '\0' &&
									((int)*(short *)((int)&plr[0]._px + (int)puVar4) ==
									 *(int *)((int)&quests[0]._qtx + iVar5))))))) &&
				 ((int)*(short *)((int)&plr[0]._py + (int)puVar4) == *(int *)((int)&quests[0]._qty + iVar5))
				 ) {
				if ((&quests[0]._qlvltype)[iVar5] != -1) {
					setlvltype = (&quests[0]._qlvltype)[iVar5];
				}
				myplr = iVar3;
				FadeGameOut__Fv();
				StartNewLvl__Fiii(myplr,0x45,(uint)(&quests[0]._qslvl)[iVar5]);
			}
			puVar4 = &DAT_000019e8 + (int)puVar4;
			iVar3 = iVar3 + 1;
		}
		iVar5 = iVar5 + 0x14;
		iVar6 = iVar6 + 1;
	}
	myplr = iVar1;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ForceQuests__Fv()
 // line 273, offset 0x800679cc
	/* begin block 1 */
		// Start line: 274
		// Start offset: 0x800679CC

		/* begin block 1.1 */
			// Start line: 280
			// Start offset: 0x80067A54
			// Variables:
		// 		int i; // $a2

			/* begin block 1.1.1 */
				// Start line: 280
				// Start offset: 0x80067A78
				// Variables:
			// 		int ql; // $s0
			// 		int qx; // $s2
			// 		int qy; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 286
					// Start offset: 0x80067ABC
					// Variables:
				// 		int j; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x80067B44
				// End Line: 297
			/* end block 1.1.1 */
			// End offset: 0x80067B44
			// End Line: 297
		/* end block 1.1 */
		// End offset: 0x80067B50
		// End Line: 298
	/* end block 1 */
	// End offset: 0x80067B54
	// End Line: 301

	/* begin block 2 */
		// Start line: 568
	/* end block 2 */
	// End Line: 569

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ForceQuests__Fv(void)

{
	byte bVar1;
	char *__format;
	char *pcVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (gbMaxPlayers == '\x01') {
		iVar5 = 0;
		iVar4 = 0;
		while (iVar5 < 0x10) {
			if (((iVar5 != 0xf) && (currlevel == (&quests[0]._qlevel)[iVar4])) &&
				 (iVar3 = 0, (&quests[0]._qslvl)[iVar4] != '\0')) {
				iVar7 = *(int *)((int)&quests[0]._qtx + iVar4);
				bVar1 = quests[(uint)(&quests[0]._qidx)[iVar4]]._qslvl;
				iVar6 = *(int *)((int)&quests[0]._qty + iVar4);
				do {
					if ((iVar7 + (int)offset_x[iVar3] == cursmx) && (iVar6 + (int)offset_y[iVar3] == cursmy))
					{
						__format = GetStr__Fi(STR_TO__S_1176);
						pcVar2 = GetStr__Fi(questtrigstr[(uint)bVar1 - 1]);
						sprintf(_infostr + sel_data * 0x100,__format,pcVar2);
						cursmx = iVar7;
						cursmy = iVar6;
						return '\x01';
					}
					iVar3 = iVar3 + 1;
				} while (iVar3 < 8);
			}
			iVar4 = iVar4 + 0x14;
			iVar5 = iVar5 + 1;
		}
	}
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ QuestStatus__Fi(int i /*$a1*/)
 // line 305, offset 0x80067b70
	/* begin block 1 */
		// Start line: 306
		// Start offset: 0x80067B70
	/* end block 1 */
	// End offset: 0x80067BFC
	// End Line: 312

	/* begin block 2 */
		// Start line: 656
	/* end block 2 */
	// End Line: 657

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar QuestStatus__Fi(int i)

{
	if (setlevel == '\0') {
		if (currlevel != quests[i]._qlevel) {
			return '\0';
		}
		if (quests[i]._qactive != '\0') {
			if (gbMaxPlayers == '\x01') {
				return '\x01';
			}
			return questlist[i]._qflags & 1;
		}
	}
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckQuestKill__FiUc(int m /*$a0*/, unsigned char sendmsg /*$s5*/)
 // line 317, offset 0x80067c04
	/* begin block 1 */
		// Start line: 318
		// Start offset: 0x80067C04

		/* begin block 1.1 */
			// Start line: 318
			// Start offset: 0x80067C04

			/* begin block 1.1.1 */
				// Start line: 335
				// Start offset: 0x80067CFC

				/* begin block 1.1.1.1 */
					// Start line: 335
					// Start offset: 0x80067CFC

					/* begin block 1.1.1.1.1 */
						// Start line: 347
						// Start offset: 0x80067DA8

						/* begin block 1.1.1.1.1.1 */
							// Start line: 347
							// Start offset: 0x80067DA8

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 358
								// Start offset: 0x80067E48

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 358
									// Start offset: 0x80067E48

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 369
										// Start offset: 0x80067EDC

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 369
											// Start offset: 0x80067EDC

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 370
												// Start offset: 0x80067F04
												// Variables:
											// 		int i; // $s0
											// 		int j; // $s1
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x8006804C
											// End Line: 396
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x800681A4
										// End Line: 425
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x800681A4
									// End Line: 425
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800681A4
								// End Line: 425
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800681A4
							// End Line: 425
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800681A4
						// End Line: 425
					/* end block 1.1.1.1.1 */
					// End offset: 0x800681A4
					// End Line: 425
				/* end block 1.1.1.1 */
				// End offset: 0x800681A4
				// End Line: 425
			/* end block 1.1.1 */
			// End offset: 0x800681A4
			// End Line: 425
		/* end block 1.1 */
		// End offset: 0x800681A4
		// End Line: 425
	/* end block 1 */
	// End offset: 0x800681A4
	// End Line: 425

	/* begin block 2 */
		// Start line: 679
	/* end block 2 */
	// End Line: 680

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckQuestKill__FiUc(int m,uchar sendmsg)

{
	char cVar1;
	uchar uVar2;
	int y;
	int iVar3;
	uint uVar4;
	uint uVar5;
	int x;
	
	uVar2 = (monster[m].MType)->mtype;
	if (uVar2 == '2') {
		quests[12]._qactive = '\x03';
		sfxdelay = 0x1e;
		cVar1 = plr[myplr]._pClass;
		if (cVar1 == '\0') {
			sfxdnum = 0x324;
		}
		else {
			if (cVar1 == '\x01') {
				sfxdnum = 0x2b6;
			}
			else {
				if (cVar1 == '\x02') {
					sfxdnum = 0x24e;
				}
			}
		}
		if (sendmsg != '\0') {
			NetSendCmdQuest__FUcUc('\x01','\f');
			return;
		}
		quests[12]._qactive = '\x03';
		sfxdelay = 0x1e;
		return;
	}
	if (uVar2 == '3') {
		quests[6]._qactive = '\x03';
		sfxdelay = 0x1e;
		cVar1 = plr[myplr]._pClass;
		if (cVar1 == '\0') {
			sfxdnum = 0x322;
		}
		else {
			if (cVar1 == '\x01') {
				sfxdnum = 0x2b4;
			}
			else {
				if (cVar1 == '\x02') {
					sfxdnum = 0x24c;
				}
			}
		}
		if (sendmsg != '\0') {
			NetSendCmdQuest__FUcUc('\x01','\x06');
			return;
		}
		quests[6]._qactive = '\x03';
		sfxdelay = 0x1e;
		return;
	}
	uVar4 = monster[m].mName;
	if (uVar4 == (uint)UniqMonst[0].mName) {
		quests[2]._qactive = '\x03';
		cVar1 = plr[myplr]._pClass;
		if (cVar1 == '\0') {
			quests[2]._qactive = '\x03';
			sfxdelay = 0x1e;
			sfxdnum = 0x30e;
			return;
		}
		if (cVar1 == '\x01') {
			quests[2]._qactive = '\x03';
			sfxdelay = 0x1e;
			sfxdnum = 0x2a0;
			return;
		}
		y = 0x238;
	}
	else {
		if (uVar4 == (uint)UniqMonst[2].mName) {
			quests[3]._qactive = '\x03';
			cVar1 = plr[myplr]._pClass;
			if (cVar1 == '\0') {
				quests[3]._qactive = '\x03';
				sfxdelay = 0x1e;
				sfxdnum = 0x30f;
				return;
			}
			if (cVar1 == '\x01') {
				quests[3]._qactive = '\x03';
				sfxdelay = 0x1e;
				sfxdnum = 0x2a1;
				return;
			}
			y = 0x239;
		}
		else {
			if (uVar4 == (uint)UniqMonst[4].mName) {
				uVar4 = (uint)gbMaxPlayers;
				y = 0;
				if (gbMaxPlayers != '\x01') {
					quests[15]._qactive = '\x03';
					quests[15]._qvar1 = '\a';
					sfxdelay = 0x1e;
					quests[5]._qactive = '\x02';
					do {
						x = 0;
						do {
							iVar3 = FindBlock__Fii(x,y);
							if ((iVar3 == 0x172) && (quests[15]._qactive == '\x03')) {
								(&trigs)[numtrigs]._tx = x;
								(&trigs)[numtrigs]._ty = y;
								(&trigs)[numtrigs]._tmsg = 0x42;
								numtrigs = numtrigs + 1;
							}
							x = x + 1;
						} while (x < 0x60);
						y = y + 1;
					} while (y < 0x60);
					cVar1 = plr[myplr]._pClass;
					if (cVar1 == '\0') {
						sfxdnum = 0x325;
					}
					else {
						if (cVar1 == '\x01') {
							sfxdnum = 0x2b7;
						}
						else {
							if (cVar1 == '\x02') {
								sfxdnum = 0x24f;
							}
						}
					}
					if (sendmsg != '\0') {
						NetSendCmdQuest__FUcUc('\x01','\x0f');
						NetSendCmdQuest__FUcUc('\x01','\x05');
						return;
					}
					return;
				}
				quests[15]._qactive = '\x03';
				sfxdelay = 0x1e;
				InitVPTriggers__Fv();
				uVar5 = SEXT14(plr[myplr]._pClass);
				if (uVar5 == 0) {
					quests[5]._qactive = '\x02';
					quests[15]._qvar1 = '\a';
					quests[15]._qvar2 = '\x04';
					sfxdnum = 0x325;
					return;
				}
				if (uVar5 == uVar4) {
					quests[5]._qactive = '\x02';
					quests[15]._qvar1 = '\a';
					quests[15]._qvar2 = '\x04';
					sfxdnum = 0x2b7;
					return;
				}
				if (uVar5 == 2) {
					quests[5]._qactive = '\x02';
					quests[15]._qvar1 = '\a';
					quests[15]._qvar2 = '\x04';
					sfxdnum = 0x24f;
					return;
				}
				quests[5]._qactive = '\x02';
				quests[15]._qvar1 = '\a';
				quests[15]._qvar2 = '\x04';
				return;
			}
			if (uVar4 != (uint)UniqMonst[8].mName) {
				return;
			}
			quests[11]._qactive = '\x03';
			cVar1 = plr[myplr]._pClass;
			if (cVar1 == '\0') {
				quests[11]._qactive = '\x03';
				sfxdelay = 0x1e;
				sfxdnum = 0x330;
				return;
			}
			if (cVar1 == '\x01') {
				quests[11]._qactive = '\x03';
				sfxdelay = 0x1e;
				sfxdnum = 0x2c2;
				return;
			}
			y = 0x25a;
		}
	}
	if (cVar1 == '\x02') {
		sfxdelay = 0x1e;
		sfxdnum = y;
		return;
	}
	sfxdelay = 0x1e;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetReturnLvlPos__Fv()
 // line 458, offset 0x800681cc
	/* begin block 1 */
		// Start line: 459
		// Start offset: 0x800681CC
	/* end block 1 */
	// End offset: 0x800682D4
	// End Line: 484

	/* begin block 2 */
		// Start line: 989
	/* end block 2 */
	// End Line: 990

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetReturnLvlPos__Fv(void)

{
	byte bVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = quests[14]._qty;
	iVar2 = quests[14]._qtx;
	bVar1 = quests[14]._qlevel;
	if (setlvlnum != '\x02') {
		if (2 < setlvlnum) {
			if (setlvlnum == '\x04') {
				ReturnLvlX = quests[13]._qtx;
				ReturnLvlY = quests[13]._qty + 1;
				ReturnLvl = (uint)quests[13]._qlevel;
				ReturnLvlT = 1;
				return;
			}
			if (setlvlnum != '\x05') {
				return;
			}
			ReturnLvlX = quests[15]._qtx + 1;
			ReturnLvlY = quests[15]._qty + -1;
			ReturnLvl = (uint)quests[15]._qlevel;
			ReturnLvlT = 4;
			return;
		}
		iVar3 = quests[12]._qty;
		iVar2 = quests[12]._qtx;
		bVar1 = quests[12]._qlevel;
		if (setlvlnum != '\x01') {
			return;
		}
	}
	ReturnLvlX = iVar2 + 1;
	ReturnLvlY = iVar3;
	ReturnLvl = (uint)bVar1;
	ReturnLvlT = (uint)setlvlnum;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetReturnLvlPos__Fv()
 // line 491, offset 0x800682dc
	/* begin block 1 */
		// Start line: 492
		// Start offset: 0x800682DC
	/* end block 1 */
	// End offset: 0x80068328
	// End Line: 497

	/* begin block 2 */
		// Start line: 1069
	/* end block 2 */
	// End Line: 1070

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetReturnLvlPos__Fv(void)

{
	if (quests[15]._qactive == '\x03') {
		quests[15]._qvar2 = '\x02';
	}
	currlevel = (uchar)ReturnLvl;
	leveltype = (uchar)ReturnLvlT;
	ViewX = ReturnLvlX;
	ViewY = ReturnLvlY;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ResyncQuests__Fv()
 // line 536, offset 0x80068330
	/* begin block 1 */
		// Start line: 537
		// Start offset: 0x80068330
		// Variables:
	// 		int i; // $s0
	// 		int tren; // $s0
	/* end block 1 */
	// End offset: 0x80068808
	// End Line: 626

	/* begin block 2 */
		// Start line: 1161
	/* end block 2 */
	// End Line: 1162

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ResyncQuests__Fv(void)

{
	char *pcVar1;
	char cVar2;
	uchar uVar3;
	int iVar4;
	
	uVar3 = QuestStatus__Fi(7);
	if (uVar3 != '\0') {
		if (quests[7]._qvar1 == '\x01') {
			ObjChangeMapResync__Fiiii
								(setpc_x + setpc_w + -2,setpc_y + setpc_h + -2,setpc_x + setpc_w + 1,
								 setpc_y + setpc_h + 1);
		}
		if (quests[7]._qvar1 == '\x02') {
			ObjChangeMapResync__Fiiii
								(setpc_x + setpc_w + -2,setpc_y + setpc_h + -2,setpc_x + setpc_w + 1,
								 setpc_y + setpc_h + 1);
			ObjChangeMapResync__Fiiii
								(setpc_x,setpc_y,setpc_x + (setpc_w >> 1) + 2,setpc_y + (setpc_h >> 1) + -2);
			iVar4 = 0;
			if (0 < numobjects) {
				do {
					pcVar1 = &objectactive + iVar4;
					iVar4 = iVar4 + 1;
					SyncObjectAnim__Fi((int)*pcVar1);
				} while (iVar4 < numobjects);
			}
			cVar2 = TransVal;
			TransVal = '\t';
			DRLG_MRectTrans__Fiiii(setpc_x,setpc_y,setpc_x + (setpc_w >> 1) + 4,setpc_y + (setpc_h >> 1));
			TransVal = cVar2;
		}
		if (quests[7]._qvar1 == '\x03') {
			ObjChangeMapResync__Fiiii(setpc_x,setpc_y,setpc_x + setpc_w + 1,setpc_y + setpc_h + 1);
			iVar4 = 0;
			if (0 < numobjects) {
				do {
					pcVar1 = &objectactive + iVar4;
					iVar4 = iVar4 + 1;
					SyncObjectAnim__Fi((int)*pcVar1);
				} while (iVar4 < numobjects);
			}
			cVar2 = TransVal;
			TransVal = '\t';
			DRLG_MRectTrans__Fiiii(setpc_x,setpc_y,setpc_x + (setpc_w >> 1) + 4,setpc_y + (setpc_h >> 1));
			TransVal = cVar2;
		}
	}
	if (currlevel == quests[1]._qlevel) {
		if ((quests[1]._qactive == '\x01') && (quests[1]._qvar1 == '\0')) {
			SpawnQuestItem__Fiiiii(0x13,0,0,5,(uint)quests[1]._qactive);
			quests[1]._qvar1 = '\x01';
		}
		else {
			if (quests[1]._qactive == '\x02') {
				if (quests[1]._qvar1 < 5) {
					if (6 < quests[1]._qvar1) {
						DAT_800cfc04 = 0xffffffff;
					}
				}
				else {
					DAT_800cfc04 = 0x7b;
					DAT_800cfd44 = 0xffffffff;
				}
			}
		}
	}
	if ((((uint)currlevel == (uint)quests[4]._qlevel + 1) && (quests[4]._qactive == '\x02')) &&
		 (quests[4]._qvar1 == '\0')) {
		quests[4]._qvar1 = '\x01';
		SpawnQuestItem__Fiiiii(0xf,0,0,5,1);
	}
	if ((setlevel != '\0') && (setlvlnum == '\x05')) {
		if (3 < quests[15]._qvar1) {
			ObjChangeMapResync__Fiiii(1,0xb,0x14,0x12);
		}
		if (5 < quests[15]._qvar1) {
			ObjChangeMapResync__Fiiii(1,0x12,0x14,0x18);
		}
		if (6 < quests[15]._qvar1) {
			InitVPTriggers__Fv();
		}
		iVar4 = 0;
		if (0 < numobjects) {
			do {
				pcVar1 = &objectactive + iVar4;
				iVar4 = iVar4 + 1;
				SyncObjectAnim__Fi((int)*pcVar1);
			} while (iVar4 < numobjects);
		}
	}
	if ((((currlevel == quests[15]._qlevel) && (setlevel == '\0')) &&
			((quests[15]._qvar2 == '\x01' || (2 < quests[15]._qvar2)))) &&
		 ((uint)quests[15]._qactive - 2 < 2)) {
		quests[15]._qvar2 = '\x02';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintQLString__FiiUcPcc(int x /*$s0*/, int y /*$s7*/, unsigned char cjustflag /*$a2*/, char *str /*$s1*/, int col /*stack 16*/)
 // line 641, offset 0x8006881c
	/* begin block 1 */
		// Start line: 642
		// Start offset: 0x8006881C
		// Variables:
	// 		unsigned char r; // $t2
	// 		unsigned char g; // $t1
	// 		unsigned char b; // $t0

		/* begin block 1.1 */
			// Start line: 673
			// Start offset: 0x8006891C

			/* begin block 1.1.1 */
				// Start line: 679
				// Start offset: 0x80068974
				// Variables:
			// 		int len; // $s1
			/* end block 1.1.1 */
			// End offset: 0x80068A3C
			// End Line: 684
		/* end block 1.1 */
		// End offset: 0x80068A3C
		// End Line: 684
	/* end block 1 */
	// End offset: 0x80068A3C
	// End Line: 684

	/* begin block 2 */
		// Start line: 1374
	/* end block 2 */
	// End Line: 1375

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintQLString__FiiUcPcc(int x,int y,uchar cjustflag,char *str,int col)

{
	int iVar1;
	uint B;
	uint G;
	uint R;
	int iVar2;
	uint uVar3;
	
	R = 0;
	G = 0;
	B = 0;
	uVar3 = y * 8;
	if ((char)col == '\x01') {
		R = (uint)BLUER;
		G = (uint)BLUEG;
		B = (uint)BLUEB;
	}
	else {
		if ((char)col < '\x02') {
			if ((char)col == '\0') {
				R = (uint)WHITER;
				G = (uint)WHITEG;
				B = (uint)WHITEB;
			}
		}
		else {
			if ((char)col == '\x02') {
				R = (uint)REDR;
				G = (uint)REDG;
				B = (uint)REDB;
			}
			else {
				if ((char)col == '\x03') {
					R = (uint)GOLDR;
					G = (uint)GOLDG;
					B = (uint)GOLDB;
				}
			}
		}
	}
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,uVar3 | 3,str,JustCentre,&QSRect,R,G,B);
	B = uVar3;
	if ((int)uVar3 < 0) {
		B = uVar3 + 7;
	}
	if (qline == (int)B >> 3) {
		iVar1 = GetStrWidth__5CFontPc(&MediumFont,str);
		iVar2 = (int)((QS_PW - iVar1) + ((uint)(QS_PW - iVar1) >> 0x1f)) >> 1;
		DrawSpinner__FiiUcUcUciiibiT8T8Uc
							(iVar2 + QS_PX + -0xb,uVar3 + QS_PY + 3,-0x60,'@',0xf0,0x20,0x40,0,1,0xffff,1,0,8);
		DrawSpinner__FiiUcUcUciiibiT8T8Uc
							(iVar2 + iVar1 + QS_PX + 3,uVar3 + QS_PY + 3,-0x60,'@',0xf0,0x20,0x40,0,1,0xffff,1,0,8
							);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawQuestLog__Fv()
 // line 696, offset 0x80068a70
	/* begin block 1 */
		// Start line: 697
		// Start offset: 0x80068A70
		// Variables:
	// 		int i; // $s0
	// 		int l; // $s1
	// 		int q; // $v0
	// 		int totlines; // $s2
	/* end block 1 */
	// End offset: 0x80068C48
	// End Line: 736

	/* begin block 2 */
		// Start line: 1506
	/* end block 2 */
	// End Line: 1507

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawQuestLog__Fv(void)

{
	char *str;
	int iVar1;
	int y;
	int iVar2;
	
	if (qtextflag == '\0') {
		PrintSelectBack__FUs(0x4e6);
	}
	SetBack__6Dialogi(&QSBack,0x94);
	SetBorder__6Dialogi(&QSBack,0x12);
	SetRGB__6DialogUcUcUc(&QSBack,BACKR >> 1,BACKG >> 1,BACKB >> 1);
	Back__6Dialogiiii(&QSBack,QS_PX + 0x10,QS_PY + 8,QS_PW + -0x20,QS_PH + -0x10);
	SetBorder__6Dialogi(&QSBack,0x12);
	SetBack__6Dialogi(&QSBack,5);
	SetRGB__6DialogUcUcUc(&QSBack,BORDERR,BORDERG,BORDERB);
	Back__6Dialogiiii(&QSBack,QS_PX,QS_PY,QS_PW,QS_PH);
	QSRect.x = (short)QS_PX;
	QSRect.y = (short)QS_PY;
	QSRect.w = (short)QS_PW;
	QSRect.h = (short)QS_PH;
	if (qtextflag == '\0') {
		str = GetStr__Fi(STR_QUEST_LOG_827);
		PrintQLString__FiiUcPcc(0,2,'\x01',str,1);
	}
	iVar2 = 7;
	if (numqlines < 7) {
		iVar2 = numqlines;
	}
	iVar1 = 0;
	y = qtopline;
	if (0 < iVar2) {
		do {
			if (qtextflag == '\0') {
				str = GetStr__Fi(questlist[qlist[iVar1 + qtoffset]]._qlstr);
				PrintQLString__FiiUcPcc(0,y,'\x01',str,0);
			}
			iVar1 = iVar1 + 1;
			y = y + 2;
		} while (iVar1 < iVar2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawQuestLogTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 743, offset 0x80068c68
	/* begin block 1 */
		// Start line: 744
		// Start offset: 0x80068C68
	/* end block 1 */
	// End offset: 0x80068D30
	// End Line: 770

	/* begin block 2 */
		// Start line: 1606
	/* end block 2 */
	// End Line: 1607

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawQuestLogTSK__FP4TASK(TASK *T)

{
	GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	GLUE_SuspendGame__Fv();
	stream_stop__Fv();
	while (TSK_Sleep(1), questlog != '\0') {
		if ((qtextflag == '\0') && (CDWAIT == (void *)0x0)) {
			DrawQuestLog__Fv();
		}
	}
	if (Qfromoptions == '\0') {
		RemoveQLog__Fv();
	}
	if (qtextflag == '\0') {
		GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
		GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
		GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
	}
	Qfromoptions = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartQuestlog__Fv()
 // line 777, offset 0x80068d40
	/* begin block 1 */
		// Start line: 778
		// Start offset: 0x80068D40
		// Variables:
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x80068E64
	// End Line: 804

	/* begin block 2 */
		// Start line: 1674
	/* end block 2 */
	// End Line: 1675

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartQuestlog__Fv(void)

{
	int iVar1;
	int *piVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = ALLQUESTS;
	numqlines = 0;
	iVar4 = 0;
	if (0 < ALLQUESTS) {
		iVar3 = 0;
		do {
			if (((&quests[0]._qactive)[iVar3] == '\x02') && ((&quests[0]._qlog)[iVar3] != '\0')) {
				piVar2 = qlist + numqlines;
				numqlines = numqlines + 1;
				*piVar2 = iVar4;
			}
			iVar4 = iVar4 + 1;
			iVar3 = iVar3 + 0x14;
		} while (iVar4 < iVar1);
	}
	if (numqlines < 7) {
		qtopline = (7 - numqlines >> 1) * 2 + 6;
	}
	else {
		qtopline = 6;
	}
	if (numqlines != 0) {
		qline = qtopline;
	}
	questlog = '\x01';
	qtoffset = 0;
	PostGamePad__Fiiii(2,0,0,0);
	GLUE_SetHomingScrollFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	GLUE_SuspendGame__Fv();
	TSK_AddTask(0,DrawQuestLogTSK__FP4TASK,0x800,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ QuestlogUp__Fv()
 // line 810, offset 0x80068e74
	/* begin block 1 */
		// Start line: 811
		// Start offset: 0x80068E74
	/* end block 1 */
	// End offset: 0x80068EFC
	// End Line: 838

	/* begin block 2 */
		// Start line: 1749
	/* end block 2 */
	// End Line: 1750

/* WARNING: Unknown calling convention yet parameter storage is locked */

void QuestlogUp__Fv(void)

{
	int iVar1;
	
	if (1 < numqlines) {
		if (numqlines < 7) {
			if (qline == qtopline) {
				iVar1 = qline + (numqlines + -1) * 2;
			}
			else {
				iVar1 = qline + -2;
			}
		}
		else {
			iVar1 = qline + -2;
			if (qline == qtopline) {
				qtoffset = qtoffset + -1;
				iVar1 = qline;
				if (qtoffset < 0) {
					qtoffset = numqlines + -7;
					iVar1 = qline + 0xc;
				}
			}
		}
		qline = iVar1;
		PlaySFX__Fi(IS_TITLEMOV);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ QuestlogDown__Fv()
 // line 845, offset 0x80068f0c
	/* begin block 1 */
		// Start line: 846
		// Start offset: 0x80068F0C
	/* end block 1 */
	// End offset: 0x80068FB0
	// End Line: 874

	/* begin block 2 */
		// Start line: 1820
	/* end block 2 */
	// End Line: 1821

/* WARNING: Unknown calling convention yet parameter storage is locked */

void QuestlogDown__Fv(void)

{
	int iVar1;
	
	if (numqlines < 2) {
		return;
	}
	if (numqlines < 7) {
		iVar1 = (numqlines + -1) * 2 + qtopline;
		if (qline == iVar1) {
			qline = iVar1;
		}
		if (qline == iVar1) {
			qline = qtopline;
			goto LAB_80068fa8;
		}
	}
	else {
		if (qline == qtopline + 0xc) {
			qtoffset = qtoffset + 1;
			if (numqlines + -7 < qtoffset) {
				qtoffset = 0;
				qline = qtopline;
			}
			goto LAB_80068fa8;
		}
	}
	qline = qline + 2;
LAB_80068fa8:
	PlaySFX__Fi(IS_TITLEMOV);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveQLog__Fv()
 // line 881, offset 0x80068fc0
	/* begin block 1 */
		// Start line: 882
		// Start offset: 0x80068FC0
	/* end block 1 */
	// End offset: 0x80069068
	// End Line: 903

	/* begin block 2 */
		// Start line: 1895
	/* end block 2 */
	// End Line: 1896

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RemoveQLog__Fv(void)

{
	if (questlog != '\0') {
		GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
		if (Qfromoptions == '\0') {
			PostGamePad__Fiiii(5,0,0,0);
			GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
			if (qtextflag == '\0') {
				GLUE_ResumeGame__Fv();
				GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
				options_pad = -1;
			}
		}
		else {
			options_pad = (uint)Qfromoptions - 1;
			TSK_Sleep(1);
			Qfromoptions = '\x03';
			ToggleOptions__Fv();
		}
		questlog = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ QuestlogEnter__Fv()
 // line 909, offset 0x80069078
	/* begin block 1 */
		// Start line: 910
		// Start offset: 0x80069078
		// Variables:
	// 		int q; // $s0
	/* end block 1 */
	// End offset: 0x80069130
	// End Line: 927

	/* begin block 2 */
		// Start line: 1954
	/* end block 2 */
	// End Line: 1955

/* WARNING: Unknown calling convention yet parameter storage is locked */

void QuestlogEnter__Fv(void)

{
	int iVar1;
	
	if ((TextPtr != (char **)0x0) && (CDWAIT == (void *)0x0)) {
		if (numqlines == 0) {
			if (Qfromoptions == '\0') {
				PlaySFX__Fi(IS_TITLSLCT);
			}
		}
		else {
			iVar1 = qlist[(qline + qtoffset * 2) - qtopline >> 1];
			PlaySFX__Fi(IS_TITLSLCT);
			InitQTextMsg__Fi((uint)quests[iVar1]._qmsg);
			questlog = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ QuestlogESC__Fv()
 // line 936, offset 0x80069144
	/* begin block 1 */
		// Start line: 937
		// Start offset: 0x80069144
	/* end block 1 */
	// End offset: 0x8006915C
	// End Line: 939

	/* begin block 2 */
		// Start line: 2008
	/* end block 2 */
	// End Line: 2009

/* WARNING: Unknown calling convention yet parameter storage is locked */

void QuestlogESC__Fv(void)

{
	PlaySFX__Fi(IS_TITLSLCT);
	RemoveQLog__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetMultiQuest__FiiUci(int q /*$a0*/, int s /*$a1*/, unsigned char l /*$a2*/, int v1 /*$a3*/)
 // line 945, offset 0x8006916c
	/* begin block 1 */
		// Start line: 946
		// Start offset: 0x8006916C
	/* end block 1 */
	// End offset: 0x800691E4
	// End Line: 964

	/* begin block 2 */
		// Start line: 2032
	/* end block 2 */
	// End Line: 2033

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetMultiQuest__FiiUci(int q,int s,uchar l,int v1)

{
	byte bVar1;
	
	if (quests[q]._qactive != 3) {
		if ((int)(uint)quests[q]._qactive < s) {
			quests[q]._qactive = (uchar)s;
		}
		bVar1 = quests[q]._qvar1;
		quests[q]._qlog = quests[q]._qlog | l;
		if ((int)(uint)bVar1 < v1) {
			quests[q]._qvar1 = (uchar)v1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.questlog()
 // line 965, offset 0x800691ec
	/* begin block 1 */
		// Start line: 966
		// Start offset: 0x800691EC
	/* end block 1 */
	// End offset: 0x80069204
	// End Line: 966

	/* begin block 2 */
		// Start line: 2072
	/* end block 2 */
	// End Line: 2073

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_questlog(void)

{
	___6Dialog(&QSBack,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.questlog()
 // line 965, offset 0x80069214
	/* begin block 1 */
		// Start line: 966
		// Start offset: 0x80069214
	/* end block 1 */
	// End offset: 0x8006922C
	// End Line: 966

	/* begin block 2 */
		// Start line: 2072
	/* end block 2 */
	// End Line: 2073

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_questlog(void)

{
	__6Dialog(&QSBack);
	return;
}





