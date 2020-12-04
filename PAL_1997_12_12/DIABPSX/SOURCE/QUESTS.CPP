#include "THISDUST.H"
#include "QUESTS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ TSK_Lava2Water__FP4TASK(struct TASK *T /*$a0*/)
 // line 159, offset 0x800610dc
	/* begin block 1 */
		// Start line: 160
		// Start offset: 0x800610DC
		// Variables:
	// 		unsigned short LAVAPAL[16]; // stack offset -80
	// 		unsigned short WATERPAL[16]; // stack offset -48
	// 		struct RECT ClutR; // stack offset -16
	// 		int clut; // $s0
	// 		struct TextDat *ThisDat; // $s0
	// 		struct PAL *Pal; // $v1
	// 		unsigned short cx; // $v0
	// 		unsigned short cy; // $v1
	// 		void * ch; // $s0

		/* begin block 1.1 */
			// Start line: 160
			// Start offset: 0x800610DC

			/* begin block 1.1.1 */
				// Start line: 174
				// Start offset: 0x8006112C
			/* end block 1.1.1 */
			// End offset: 0x8006112C
			// End Line: 177
		/* end block 1.1 */
		// End offset: 0x80061158
		// End Line: 181

		/* begin block 1.2 */
			// Start line: 185
			// Start offset: 0x80061158
			// Variables:
		// 		int i; // $a0
		/* end block 1.2 */
		// End offset: 0x800611B0
		// End Line: 191

		/* begin block 1.3 */
			// Start line: 194
			// Start offset: 0x800611B4

			/* begin block 1.3.1 */
				// Start line: 196
				// Start offset: 0x800611BC
				// Variables:
			// 		int i; // $t2

				/* begin block 1.3.1.1 */
					// Start line: 197
					// Start offset: 0x800611C0
					// Variables:
				// 		unsigned short col1; // $t3
				// 		unsigned short col2; // $v1
				// 		unsigned char sb; // $t6
				// 		unsigned char sg; // $t5
				// 		unsigned char dr; // $t0
				// 		unsigned char dg; // $a3
				// 		unsigned char db; // $a1
				/* end block 1.3.1.1 */
				// End offset: 0x800612D0
				// End Line: 217
			/* end block 1.3.1 */
			// End offset: 0x800612FC
			// End Line: 218
		/* end block 1.3 */
		// End offset: 0x800612FC
		// End Line: 219
	/* end block 1 */
	// End offset: 0x80061318
	// End Line: 220

	/* begin block 2 */
		// Start line: 318
	/* end block 2 */
	// End Line: 319

void TSK_Lava2Water__FP4TASK(TASK *T)

{
	ushort uVar1;
	bool bVar2;
	ushort uVar3;
	CBlocks *this;
	TextDat *this_00;
	FRAME_HDR *pFVar4;
	PAL *pPVar5;
	uint uVar6;
	ushort *puVar7;
	int iVar8;
	ushort uVar9;
	ushort uVar10;
	ushort uVar11;
	ushort uVar12;
	ushort uVar13;
	uint uVar14;
	ushort local_50 [16];
	ushort local_30 [16];
	short local_10;
	undefined2 local_e;
	undefined2 local_c;
	undefined2 local_a;
	
	this = BL_GetCurrentBlocks__Fv();
	this_00 = GetBlockTexDat__7CBlocks(this);
	pFVar4 = GetFr__7TextDati(this_00,0x41);
	pPVar5 = GetPal__7TextDati(this_00,(uint)pFVar4->X >> 0x19);
	uVar14 = 0;
	if ((pPVar5->InVram & 1) == 0) {
		DBG_Error((char *)0x0,"source/QUESTS.cpp",0xb4);
		uVar6 = 0;
	}
	else {
		uVar14 = (uint)*(ushort *)((int)&pPVar5->InVram + 2);
		uVar6 = uVar14 & 0x3f;
	}
	local_10 = (short)(uVar6 << 4);
	local_c = 0x10;
	local_e = (undefined2)(uVar14 >> 6);
	local_a = 1;
	DrawSync(0);
	StoreImage(&local_10,local_50);
	iVar8 = 0;
	puVar7 = local_50;
	do {
		iVar8 = iVar8 + 1;
		puVar7[0x10] = *puVar7;
		puVar7 = puVar7 + 1;
	} while (iVar8 < 0x10);
	bVar2 = true;
	while (bVar2) {
		iVar8 = 0;
		bVar2 = false;
		while (iVar8 < 0x10) {
			uVar1 = local_50[iVar8];
			uVar9 = local_30[iVar8];
			uVar13 = uVar1 & 0x1f;
			uVar12 = uVar1 >> 5 & 0x1f;
			uVar11 = uVar9 & 0x1f;
			uVar10 = uVar9 >> 5 & 0x1f;
			uVar9 = uVar9 >> 10 & 0x1f;
			uVar3 = uVar1 >> 10 & 0x1f;
			if (uVar11 < uVar3) {
				uVar11 = uVar11 + 1;
				bVar2 = true;
			}
			if (uVar3 < uVar11) {
				uVar11 = uVar11 - 1;
				bVar2 = true;
			}
			if (uVar10 < uVar12) {
				uVar10 = uVar10 + 1;
				bVar2 = true;
			}
			if (uVar12 < uVar10) {
				uVar10 = uVar10 - 1;
				bVar2 = true;
			}
			if (uVar9 < uVar13) {
				uVar9 = uVar9 + 1;
				bVar2 = true;
			}
			uVar3 = uVar9;
			if (uVar13 < uVar9) {
				uVar9 = uVar9 - 1;
				bVar2 = true;
				uVar3 = uVar9 & 0xff;
			}
			if (uVar3 < uVar13) {
				uVar9 = uVar9 + 1;
				bVar2 = true;
			}
			if (uVar13 < (uVar9 & 0xff)) {
				uVar9 = uVar9 - 1;
				bVar2 = true;
			}
			local_30[iVar8] = (uVar11 & 0xff) + (uVar10 & 0xff) * 0x20 + uVar9 * 0x400 + (uVar1 & 0x8000);
			iVar8 = iVar8 + 1;
		}
		LoadImage(&local_10,local_30);
		TSK_Sleep(2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckQuests__Fv()
 // line 225, offset 0x8006132c
	/* begin block 1 */
		// Start line: 226
		// Start offset: 0x8006132C
		// Variables:
	// 		int i; // $s2
	// 		int rportx; // $a0
	// 		int rporty; // $a1
	/* end block 1 */
	// End offset: 0x800617CC
	// End Line: 289

	/* begin block 2 */
		// Start line: 454
	/* end block 2 */
	// End Line: 455

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckQuests__Fv(void)

{
	uchar uVar1;
	int iVar2;
	byte *pbVar3;
	int iVar4;
	
	uVar1 = QuestStatus__Fi(0xf);
	if (uVar1 == '\0') {
LAB_800613b8:
		if (gbMaxPlayers != '\x01') {
			return;
		}
	}
	else {
		if (gbMaxPlayers != '\x01') {
			if (QuestStruct_800e34b8._qvar1 == '\x02') {
				AddObject__Fiii(0x53,setpc_x * 2 + 0x14,setpc_y * 2 + 0x16);
				QuestStruct_800e34b8._qvar1 = '\x03';
				NetSendCmdQuest__FUcUc('\x01','\x0f');
			}
			goto LAB_800613b8;
		}
	}
	if (((((currlevel == QuestStruct_800e34b8._qlevel) && (setlevel == '\0')) &&
			 (1 < QuestStruct_800e34b8._qvar1)) && ((uint)QuestStruct_800e34b8._qactive - 2 < 2)) &&
		 ((QuestStruct_800e34b8._qvar2 == '\0' || (QuestStruct_800e34b8._qvar2 == '\x02')))) {
		QuestStruct_800e34b8._qtx = QuestStruct_800e34b8._qtx * 2 + 0x10;
		QuestStruct_800e34b8._qty = QuestStruct_800e34b8._qty * 2 + 0x10;
		AddMissile__Fiiiiiiciii
							(QuestStruct_800e34b8._qtx,QuestStruct_800e34b8._qty,QuestStruct_800e34b8._qtx,
							 QuestStruct_800e34b8._qty,0,0x41,0,myplr,0,0);
		QuestStruct_800e34b8._qvar2 = '\x01';
		if (QuestStruct_800e34b8._qactive == '\x02') {
			QuestStruct_800e34b8._qvar1 = '\x03';
		}
	}
	if (QuestStruct_800e34b8._qactive == '\x03') {
		if (setlevel == '\0') goto LAB_80061674;
		if ((setlvlnum == '\x05') && (QuestStruct_800e34b8._qvar2 == '\x04')) {
			AddMissile__Fiiiiiiciii(0x23,0x20,0x23,0x20,0,0x41,0,myplr,0,0);
			QuestStruct_800e34b8._qvar2 = '\x03';
		}
	}
	if (setlevel != '\0') {
		if (setlvlnum != QuestStruct_800e3490._qslvl) {
			return;
		}
		if (QuestStruct_800e3490._qactive == '\x01') {
			return;
		}
		if (leveltype != QuestStruct_800e3490._qlvltype) {
			return;
		}
		if (((nummonsters != 4) || (QuestStruct_800e3490._qactive == '\x03')) &&
			 (QuestStruct_800e3490._qactive != '\x03')) {
			return;
		}
		if (WaterDone != (void *)0x0) {
			return;
		}
		QuestStruct_800e3490._qactive = '\x03';
		PlaySfxLoc__Fiii(IS_QUESTDN,(int)plr[myplr]._px,(int)plr[myplr]._py);
		TSK_AddTask(0,TSK_Lava2Water__FP4TASK,0x800,0);
		WaterDone = &DAT_00000001;
		return;
	}
LAB_80061674:
	iVar4 = 0;
	if (plr[myplr]._pmode == 0) {
		pbVar3 = &quests._qslvl;
		iVar2 = 0;
		do {
			if (((currlevel == (&quests._qlevel)[iVar2]) && (*pbVar3 != 0)) &&
				 (((&quests._qactive)[iVar2] != '\0' &&
					(((int)plr[myplr]._px == *(int *)((int)&quests._qtx + iVar2) &&
					 ((int)plr[myplr]._py == *(int *)((int)&quests._qty + iVar2))))))) {
				if ((&quests._qlvltype)[iVar2] != -1) {
					setlvltype = (&quests._qlvltype)[iVar2];
				}
				StartNewLvl__Fiii(myplr,0x45,(uint)*pbVar3);
			}
			pbVar3 = pbVar3 + 0x14;
			iVar4 = iVar4 + 1;
			iVar2 = iVar2 + 0x14;
		} while (iVar4 < 0x10);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ForceQuests__Fv()
 // line 294, offset 0x800617e8
	/* begin block 1 */
		// Start line: 295
		// Start offset: 0x800617E8

		/* begin block 1.1 */
			// Start line: 301
			// Start offset: 0x80061870
			// Variables:
		// 		int i; // $a2

			/* begin block 1.1.1 */
				// Start line: 301
				// Start offset: 0x80061894
				// Variables:
			// 		int ql; // $s0
			// 		int qx; // $s2
			// 		int qy; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 307
					// Start offset: 0x800618D8
					// Variables:
				// 		int j; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x80061960
				// End Line: 318
			/* end block 1.1.1 */
			// End offset: 0x80061960
			// End Line: 318
		/* end block 1.1 */
		// End offset: 0x8006196C
		// End Line: 319
	/* end block 1 */
	// End offset: 0x80061970
	// End Line: 322

	/* begin block 2 */
		// Start line: 607
	/* end block 2 */
	// End Line: 608

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
			if (((iVar5 != 0xf) && (currlevel == (&quests._qlevel)[iVar4])) &&
				 (iVar3 = 0, (&quests._qslvl)[iVar4] != '\0')) {
				iVar7 = *(int *)((int)&quests._qtx + iVar4);
				bVar1 = (&quests)[(uint)(&quests._qidx)[iVar4]]._qslvl;
				iVar6 = *(int *)((int)&quests._qty + iVar4);
				do {
					if ((iVar7 + (int)(&questxoff)[iVar3] == cursmx) &&
						 (iVar6 + (int)questyoff[iVar3] == cursmy)) {
						__format = GetStr__Fi(STR_TO__S);
						pcVar2 = GetStr__Fi(questtrigstr[(uint)bVar1 - 1]);
						sprintf(_infostr + sel_data * 0x100,__format,pcVar2);
						cursmx = iVar7;
						cursmy = iVar6;
						return '\x01';
					}
					iVar3 = iVar3 + 1;
				} while (iVar3 < 7);
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
 // line 326, offset 0x8006198c
	/* begin block 1 */
		// Start line: 327
		// Start offset: 0x8006198C
	/* end block 1 */
	// End offset: 0x80061A18
	// End Line: 333

	/* begin block 2 */
		// Start line: 695
	/* end block 2 */
	// End Line: 696

uchar QuestStatus__Fi(int i)

{
	if (setlevel == '\0') {
		if (currlevel != (&quests)[i]._qlevel) {
			return '\0';
		}
		if ((&quests)[i]._qactive != '\0') {
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
// void /*$ra*/ CheckQuestKill__FiUc(int m /*$a0*/, unsigned char sendmsg /*$a1*/)
 // line 338, offset 0x80061a20
	/* begin block 1 */
		// Start line: 339
		// Start offset: 0x80061A20

		/* begin block 1.1 */
			// Start line: 339
			// Start offset: 0x80061A20

			/* begin block 1.1.1 */
				// Start line: 355
				// Start offset: 0x80061AFC

				/* begin block 1.1.1.1 */
					// Start line: 355
					// Start offset: 0x80061AFC

					/* begin block 1.1.1.1.1 */
						// Start line: 366
						// Start offset: 0x80061BA4

						/* begin block 1.1.1.1.1.1 */
							// Start line: 366
							// Start offset: 0x80061BA4

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 376
								// Start offset: 0x80061C44

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 376
									// Start offset: 0x80061C44

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 386
										// Start offset: 0x80061CD8

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 386
											// Start offset: 0x80061CD8

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 386
												// Start offset: 0x80061D00
												// Variables:
											// 		int i; // $a0
											// 		int j; // $a3
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x80061E58
											// End Line: 410
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x80061FEC
										// End Line: 437
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80061FEC
									// End Line: 437
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80061FEC
								// End Line: 437
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80061FEC
							// End Line: 437
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80061FEC
						// End Line: 437
					/* end block 1.1.1.1.1 */
					// End offset: 0x80061FEC
					// End Line: 437
				/* end block 1.1.1.1 */
				// End offset: 0x80061FEC
				// End Line: 437
			/* end block 1.1.1 */
			// End offset: 0x80061FEC
			// End Line: 437
		/* end block 1.1 */
		// End offset: 0x80061FEC
		// End Line: 437
	/* end block 1 */
	// End offset: 0x80061FEC
	// End Line: 437

	/* begin block 2 */
		// Start line: 718
	/* end block 2 */
	// End Line: 719

void CheckQuestKill__FiUc(int m,uchar sendmsg)

{
	char cVar1;
	uchar uVar2;
	int iVar3;
	uint uVar4;
	uint uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	uVar2 = (monster[m].MType)->mtype;
	if (uVar2 == '2') {
		QuestStruct_800e347c._qactive = '\x03';
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
		QuestStruct_800e347c._qactive = '\x03';
		sfxdelay = 0x1e;
		return;
	}
	if (uVar2 == '3') {
		QuestStruct_ARRAY_800e3404[0]._qactive = '\x03';
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
		QuestStruct_ARRAY_800e3404[0]._qactive = '\x03';
		sfxdelay = 0x1e;
		return;
	}
	uVar4 = monster[m].mName;
	if (uVar4 == (uint)UniqMonst[0].mName) {
		QuestStruct_ARRAY_800e33a0[1]._qactive = '\x03';
		cVar1 = plr[myplr]._pClass;
		if (cVar1 == '\0') {
			QuestStruct_ARRAY_800e33a0[1]._qactive = '\x03';
			sfxdelay = 0x1e;
			sfxdnum = 0x30e;
			return;
		}
		if (cVar1 == '\x01') {
			QuestStruct_ARRAY_800e33a0[1]._qactive = '\x03';
			sfxdelay = 0x1e;
			sfxdnum = 0x2a0;
			return;
		}
		iVar3 = 0x238;
	}
	else {
		if (uVar4 == (uint)UniqMonst[2].mName) {
			QuestStruct_ARRAY_800e33a0[2]._qactive = '\x03';
			cVar1 = plr[myplr]._pClass;
			if (cVar1 == '\0') {
				QuestStruct_ARRAY_800e33a0[2]._qactive = '\x03';
				sfxdelay = 0x1e;
				sfxdnum = 0x30f;
				return;
			}
			if (cVar1 == '\x01') {
				QuestStruct_ARRAY_800e33a0[2]._qactive = '\x03';
				sfxdelay = 0x1e;
				sfxdnum = 0x2a1;
				return;
			}
			iVar3 = 0x239;
		}
		else {
			if (uVar4 == (uint)UniqMonst[4].mName) {
				uVar4 = (uint)gbMaxPlayers;
				iVar3 = 0;
				if (gbMaxPlayers != '\x01') {
					iVar8 = 0;
					QuestStruct_800e34b8._qactive = '\x03';
					QuestStruct_800e34b8._qvar1 = '\a';
					sfxdelay = 0x1e;
					QuestStruct_ARRAY_800e33dc[1]._qactive = '\x02';
					do {
						iVar6 = 0;
						iVar7 = iVar8;
						do {
							if ((*(short *)((int)&dung_map[0].dPiece + iVar7) == 0x172) &&
								 (QuestStruct_800e34b8._qactive == '\x03')) {
								(&trigs)[numtrigs]._tx = iVar6;
								(&trigs)[numtrigs]._ty = iVar3;
								(&trigs)[numtrigs]._tmsg = 0x42;
								numtrigs = numtrigs + 1;
							}
							iVar6 = iVar6 + 1;
							iVar7 = iVar7 + 0x510;
						} while (iVar6 < 0x70);
						iVar3 = iVar3 + 1;
						iVar8 = iVar8 + 0xc;
					} while (iVar3 < 0x70);
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
				QuestStruct_800e34b8._qactive = '\x03';
				sfxdelay = 0x1e;
				FUN_80160954();
				QuestStruct_800e34b8._qvar1 = '\a';
				QuestStruct_800e34b8._qvar2 = '\x04';
				QuestStruct_ARRAY_800e33dc[1]._qactive = '\x02';
				AddMissile__Fiiiiiiciii(0x23,0x20,0x23,0x20,0,0x41,0,myplr,0,0);
				uVar5 = SEXT14(plr[myplr]._pClass);
				if (uVar5 == 0) {
					sfxdnum = 0x325;
					return;
				}
				if (uVar5 == uVar4) {
					sfxdnum = 0x2b7;
					return;
				}
				if (uVar5 == 2) {
					sfxdnum = 0x24f;
					return;
				}
				return;
			}
			if (uVar4 != (uint)UniqMonst[8].mName) {
				return;
			}
			QuestStruct_ARRAY_800e3404[5]._qactive = '\x03';
			cVar1 = plr[myplr]._pClass;
			if (cVar1 == '\0') {
				QuestStruct_ARRAY_800e3404[5]._qactive = '\x03';
				sfxdelay = 0x1e;
				sfxdnum = 0x330;
				return;
			}
			if (cVar1 == '\x01') {
				QuestStruct_ARRAY_800e3404[5]._qactive = '\x03';
				sfxdelay = 0x1e;
				sfxdnum = 0x2c2;
				return;
			}
			iVar3 = 0x25a;
		}
	}
	if (cVar1 == '\x02') {
		sfxdelay = 0x1e;
		sfxdnum = iVar3;
		return;
	}
	sfxdelay = 0x1e;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetReturnLvlPos__Fv()
 // line 470, offset 0x80062000
	/* begin block 1 */
		// Start line: 471
		// Start offset: 0x80062000
	/* end block 1 */
	// End offset: 0x80062108
	// End Line: 496

	/* begin block 2 */
		// Start line: 1013
	/* end block 2 */
	// End Line: 1014

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetReturnLvlPos__Fv(void)

{
	byte bVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = QuestStruct_800e34a4._qty;
	iVar2 = QuestStruct_800e34a4._qtx;
	bVar1 = QuestStruct_800e34a4._qlevel;
	if (setlvlnum != '\x02') {
		if (2 < setlvlnum) {
			if (setlvlnum == '\x04') {
				ReturnLvlX = QuestStruct_800e3490._qtx;
				ReturnLvlY = QuestStruct_800e3490._qty + 1;
				ReturnLvl = (uint)QuestStruct_800e3490._qlevel;
				ReturnLvlT = 1;
				return;
			}
			if (setlvlnum != '\x05') {
				return;
			}
			ReturnLvlX = QuestStruct_800e34b8._qtx + 1;
			ReturnLvlY = QuestStruct_800e34b8._qty + -1;
			ReturnLvl = (uint)QuestStruct_800e34b8._qlevel;
			ReturnLvlT = 4;
			return;
		}
		iVar3 = QuestStruct_800e347c._qty;
		iVar2 = QuestStruct_800e347c._qtx;
		bVar1 = QuestStruct_800e347c._qlevel;
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
 // line 503, offset 0x80062110
	/* begin block 1 */
		// Start line: 504
		// Start offset: 0x80062110
	/* end block 1 */
	// End offset: 0x8006215C
	// End Line: 509

	/* begin block 2 */
		// Start line: 1093
	/* end block 2 */
	// End Line: 1094

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetReturnLvlPos__Fv(void)

{
	if (QuestStruct_800e34b8._qactive == '\x03') {
		QuestStruct_800e34b8._qvar2 = '\x02';
	}
	currlevel = (uchar)ReturnLvl;
	leveltype = (uchar)ReturnLvlT;
	ViewX = ReturnLvlX;
	ViewY = ReturnLvlY;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ResyncMPQuests__Fv()
 // line 515, offset 0x80062164
	/* begin block 1 */
		// Start line: 516
		// Start offset: 0x80062164
	/* end block 1 */
	// End offset: 0x80062290
	// End Line: 538

	/* begin block 2 */
		// Start line: 1119
	/* end block 2 */
	// End Line: 1120

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ResyncMPQuests__Fv(void)

{
	uchar uVar1;
	
	if (QuestStruct_800e347c._qactive == '\x01') {
		if (((int)((uint)QuestStruct_800e347c._qlevel - 1) <= (int)(uint)currlevel) &&
			 ((uint)currlevel <= (uint)QuestStruct_800e347c._qlevel + 1)) {
			QuestStruct_800e347c._qactive = '\x02';
			NetSendCmdQuest__FUcUc('\x01','\f');
		}
	}
	if (QuestStruct_ARRAY_800e3404[0]._qactive == '\x01') {
		if (((int)((uint)QuestStruct_ARRAY_800e3404[0]._qlevel - 1) <= (int)(uint)currlevel) &&
			 ((uint)currlevel <= (uint)QuestStruct_ARRAY_800e3404[0]._qlevel + 1)) {
			QuestStruct_ARRAY_800e3404[0]._qactive = '\x02';
			NetSendCmdQuest__FUcUc('\x01','\x06');
		}
	}
	if ((QuestStruct_800e34b8._qactive == '\x01') &&
		 ((uint)currlevel == (uint)QuestStruct_800e34b8._qlevel - 1)) {
		QuestStruct_800e34b8._qactive = '\x02';
		NetSendCmdQuest__FUcUc('\x01','\x0f');
	}
	uVar1 = QuestStatus__Fi(0xf);
	if (uVar1 != '\0') {
		AddObject__Fiii(0x53,setpc_x * 2 + 0x14,setpc_y * 2 + 0x16);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ResyncQuests__Fv()
 // line 547, offset 0x800622a0
	/* begin block 1 */
		// Start line: 548
		// Start offset: 0x800622A0
		// Variables:
	// 		int i; // $s0
	// 		int tren; // $s0
	/* end block 1 */
	// End offset: 0x800627EC
	// End Line: 637

	/* begin block 2 */
		// Start line: 1193
	/* end block 2 */
	// End Line: 1194

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ResyncQuests__Fv(void)

{
	char *pcVar1;
	char cVar2;
	uchar uVar3;
	int iVar4;
	
	if ((((setlevel != '\0') && (setlvlnum == QuestStruct_800e3490._qslvl)) &&
			(QuestStruct_800e3490._qactive != '\x01')) &&
		 ((leveltype == QuestStruct_800e3490._qlvltype && (QuestStruct_800e3490._qactive == '\x03')))) {
		TSK_AddTask(0,TSK_Lava2Water__FP4TASK,0x800,0);
	}
	uVar3 = QuestStatus__Fi(7);
	if (uVar3 != '\0') {
		if (QuestStruct_ARRAY_800e3404[1]._qvar1 == '\x01') {
			ObjChangeMapResync__Fiiii
								(setpc_x + setpc_w + -2,setpc_y + setpc_h + -2,setpc_x + setpc_w + 1,
								 setpc_y + setpc_h + 1);
		}
		if (QuestStruct_ARRAY_800e3404[1]._qvar1 == '\x02') {
			ObjChangeMapResync__Fiiii
								(setpc_x + setpc_w + -2,setpc_y + setpc_h + -2,setpc_x + setpc_w + 1,
								 setpc_y + setpc_h + 1);
			ObjChangeMapResync__Fiiii
								(setpc_x,setpc_y,setpc_x + (setpc_w >> 1) + 2,setpc_y + (setpc_h >> 1) + -2);
			iVar4 = 0;
			if (0 < numobjects) {
				do {
					pcVar1 = objectactive + iVar4;
					iVar4 = iVar4 + 1;
					SyncObjectAnim__Fi((int)*pcVar1);
				} while (iVar4 < numobjects);
			}
			cVar2 = TransVal;
			TransVal = '\t';
			DRLG_MRectTrans__Fiiii(setpc_x,setpc_y,setpc_x + (setpc_w >> 1) + 4,setpc_y + (setpc_h >> 1));
			TransVal = cVar2;
		}
		if (QuestStruct_ARRAY_800e3404[1]._qvar1 == '\x03') {
			ObjChangeMapResync__Fiiii(setpc_x,setpc_y,setpc_x + setpc_w + 1,setpc_y + setpc_h + 1);
			iVar4 = 0;
			if (0 < numobjects) {
				do {
					pcVar1 = objectactive + iVar4;
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
	if (currlevel == QuestStruct_ARRAY_800e33a0[0]._qlevel) {
		if ((QuestStruct_ARRAY_800e33a0[0]._qactive == '\x01') &&
			 (QuestStruct_ARRAY_800e33a0[0]._qvar1 == '\0')) {
			SpawnQuestItem__Fiiiii(0x13,0,0,5,(uint)QuestStruct_ARRAY_800e33a0[0]._qactive);
			QuestStruct_ARRAY_800e33a0[0]._qvar1 = '\x01';
		}
		else {
			if (QuestStruct_ARRAY_800e33a0[0]._qactive == '\x02') {
				if (QuestStruct_ARRAY_800e33a0[0]._qvar1 < 5) {
					if (6 < QuestStruct_ARRAY_800e33a0[0]._qvar1) {
						DAT_800bf098 = 0xffffffff;
					}
				}
				else {
					DAT_800bf098 = 0x7b;
					DAT_800bf1d8 = 0xffffffff;
				}
			}
		}
	}
	if ((((uint)currlevel == (uint)QuestStruct_ARRAY_800e33dc[0]._qlevel + 1) &&
			(QuestStruct_ARRAY_800e33dc[0]._qactive == '\x02')) &&
		 (QuestStruct_ARRAY_800e33dc[0]._qvar1 == '\0')) {
		QuestStruct_ARRAY_800e33dc[0]._qvar1 = '\x01';
		SpawnQuestItem__Fiiiii(0xf,0,0,5,1);
	}
	if ((setlevel != '\0') && (setlvlnum == '\x05')) {
		if (3 < QuestStruct_800e34b8._qvar1) {
			ObjChangeMapResync__Fiiii(1,0xb,0x14,0x12);
		}
		if (5 < QuestStruct_800e34b8._qvar1) {
			ObjChangeMapResync__Fiiii(1,0x12,0x14,0x18);
		}
		if (6 < QuestStruct_800e34b8._qvar1) {
			FUN_80160954();
		}
		iVar4 = 0;
		if (0 < numobjects) {
			do {
				pcVar1 = objectactive + iVar4;
				iVar4 = iVar4 + 1;
				SyncObjectAnim__Fi((int)*pcVar1);
			} while (iVar4 < numobjects);
		}
	}
	if ((((currlevel == QuestStruct_800e34b8._qlevel) && (setlevel == '\0')) &&
			((QuestStruct_800e34b8._qvar2 == '\x01' || (2 < QuestStruct_800e34b8._qvar2)))) &&
		 ((uint)QuestStruct_800e34b8._qactive - 2 < 2)) {
		QuestStruct_800e34b8._qvar2 = '\x02';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintQLString__FiiUcPcc(int x /*$s0*/, int y /*$s5*/, unsigned char cjustflag /*$a2*/, char *str /*$s1*/, int col /*stack 16*/)
 // line 652, offset 0x80062800
	/* begin block 1 */
		// Start line: 653
		// Start offset: 0x80062800
		// Variables:
	// 		unsigned char r; // $t2
	// 		unsigned char g; // $t1
	// 		unsigned char b; // $t0

		/* begin block 1.1 */
			// Start line: 684
			// Start offset: 0x800628F8

			/* begin block 1.1.1 */
				// Start line: 690
				// Start offset: 0x80062950
				// Variables:
			// 		int len; // $s1
			/* end block 1.1.1 */
			// End offset: 0x80062A00
			// End Line: 694
		/* end block 1.1 */
		// End offset: 0x80062A00
		// End Line: 694
	/* end block 1 */
	// End offset: 0x80062A00
	// End Line: 694

	/* begin block 2 */
		// Start line: 1406
	/* end block 2 */
	// End Line: 1407

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
		DrawSpinner__FiiUcUcUciiibiT8
							(iVar2 + QS_PX + -0xb,uVar3 + QS_PY + 3,-0x10,'@',0,0x20,0x40,0,(void *)0x0,0x100,
							 &DAT_00000001);
		DrawSpinner__FiiUcUcUciiibiT8
							(iVar2 + iVar1 + QS_PX + 3,uVar3 + QS_PY + 3,-0x10,'@',0,0x20,0x40,0,(void *)0x0,0x100
							 ,&DAT_00000001);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawQuestLog__Fv()
 // line 702, offset 0x80062a2c
	/* begin block 1 */
		// Start line: 703
		// Start offset: 0x80062A2C
		// Variables:
	// 		int i; // $s2
	// 		int l; // $s1
	// 		int q; // $v0
	/* end block 1 */
	// End offset: 0x80062BC4
	// End Line: 730

	/* begin block 2 */
		// Start line: 1520
	/* end block 2 */
	// End Line: 1521

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawQuestLog__Fv(void)

{
	char *str;
	int iVar1;
	int *piVar2;
	int y;
	int iVar3;
	
	SetBack__6Dialogi(&QSBack,0xc6);
	SetBorder__6Dialogi(&QSBack,0x28);
	iVar3 = 0;
	SetRGB__6DialogUcUcUc(&QSBack,BACKR >> 1,BACKG >> 1,BACKB >> 1);
	Back__6Dialogiiii(&QSBack,QS_PX + 0x10,QS_PY + 8,QS_PW + -0x20,QS_PH + -0x10);
	SetBorder__6Dialogi(&QSBack,0x1c);
	SetBack__6Dialogi(&QSBack,0x1b);
	SetRGB__6DialogUcUcUc(&QSBack,BORDERR,BORDERG,BORDERB);
	Back__6Dialogiiii(&QSBack,QS_PX,QS_PY,QS_PW,QS_PH);
	QSRect.x = (short)QS_PX;
	QSRect.y = (short)QS_PY;
	QSRect.w = (short)QS_PW;
	QSRect.h = (short)QS_PH;
	str = GetStr__Fi(STR_QUEST_LOG);
	PrintQLString__FiiUcPcc(0,2,'\x01',str,3);
	if (0 < numqlines) {
		piVar2 = &qlist;
		y = qtopline;
		do {
			iVar1 = *piVar2;
			piVar2 = piVar2 + 1;
			iVar3 = iVar3 + 1;
			str = GetStr__Fi(questlist[iVar1]._qlstr);
			PrintQLString__FiiUcPcc(0,y,'\x01',str,0);
			y = y + 2;
		} while (iVar3 < numqlines);
	}
	PrintSelectBack__FbT0(&DAT_00000001,&DAT_00000001);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawQuestLogTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 738, offset 0x80062be0
	/* begin block 1 */
		// Start line: 739
		// Start offset: 0x80062BE0
	/* end block 1 */
	// End offset: 0x80062C50
	// End Line: 757

	/* begin block 2 */
		// Start line: 1611
	/* end block 2 */
	// End Line: 1612

void DrawQuestLogTSK__FP4TASK(TASK *T)

{
	TSK_Sleep(1);
	questlog = '\x01';
	do {
		GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
		GLUE_SetShowPanelFlag__Fb((void *)0x0);
		GLUE_SuspendGame__Fv();
		DrawQuestLog__Fv();
		TSK_Sleep(1);
	} while (questlog != '\0');
	TSK_Sleep(1);
	GLUE_ResumeGame__Fv();
	GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
	GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartQuestlog__Fv()
 // line 764, offset 0x80062c60
	/* begin block 1 */
		// Start line: 765
		// Start offset: 0x80062C60
		// Variables:
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x80062D60
	// End Line: 785

	/* begin block 2 */
		// Start line: 1663
	/* end block 2 */
	// End Line: 1664

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
			if (((&quests._qactive)[iVar3] == '\x02') && ((&quests._qlog)[iVar3] != '\0')) {
				piVar2 = &qlist + numqlines;
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
	qline = 0x14;
	if (numqlines != 0) {
		qline = qtopline;
	}
	PostGamePad__Fiiii(2,0,0,0);
	TSK_AddTask(0,DrawQuestLogTSK__FP4TASK,0x800,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ QuestlogUp__Fv()
 // line 791, offset 0x80062d70
	/* begin block 1 */
		// Start line: 792
		// Start offset: 0x80062D70
	/* end block 1 */
	// End offset: 0x80062DB8
	// End Line: 800

	/* begin block 2 */
		// Start line: 1723
	/* end block 2 */
	// End Line: 1724

/* WARNING: Unknown calling convention yet parameter storage is locked */

void QuestlogUp__Fv(void)

{
	int iVar1;
	
	if (numqlines != 0) {
		iVar1 = 0x14;
		if (qline != qtopline) {
			if (qline == 0x14) {
				iVar1 = (numqlines + -1) * 2 + qtopline;
			}
			else {
				iVar1 = qline + -2;
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
 // line 807, offset 0x80062dc8
	/* begin block 1 */
		// Start line: 808
		// Start offset: 0x80062DC8
	/* end block 1 */
	// End offset: 0x80062E20
	// End Line: 815

	/* begin block 2 */
		// Start line: 1756
	/* end block 2 */
	// End Line: 1757

/* WARNING: Unknown calling convention yet parameter storage is locked */

void QuestlogDown__Fv(void)

{
	int iVar1;
	
	if (numqlines != 0) {
		iVar1 = qtopline;
		if ((qline != 0x14) && (iVar1 = qline + 2, qline == (numqlines + -1) * 2 + qtopline)) {
			qline = 0x14;
			iVar1 = qline;
		}
		qline = iVar1;
		PlaySFX__Fi(IS_TITLEMOV);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveQLog__Fv()
 // line 824, offset 0x80062e30
	/* begin block 1 */
		// Start line: 825
		// Start offset: 0x80062E30
	/* end block 1 */
	// End offset: 0x80062E8C
	// End Line: 836

	/* begin block 2 */
		// Start line: 1790
	/* end block 2 */
	// End Line: 1791

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RemoveQLog__Fv(void)

{
	questlog = '\0';
	GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
	if (Qfromoptions == '\0') {
		PostGamePad__Fiiii(5,0,0,0);
		GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
	}
	else {
		options_pad = (uint)Qfromoptions - 1;
		ToggleOptions__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ QuestlogEnter__Fv()
 // line 840, offset 0x80062e9c
	/* begin block 1 */
		// Start line: 841
		// Start offset: 0x80062E9C
		// Variables:
	// 		int q; // $v1
	/* end block 1 */
	// End offset: 0x80062F28
	// End Line: 854

	/* begin block 2 */
		// Start line: 1822
	/* end block 2 */
	// End Line: 1823

/* WARNING: Unknown calling convention yet parameter storage is locked */

void QuestlogEnter__Fv(void)

{
	PlaySFX__Fi(IS_TITLSLCT);
	if (numqlines == 0) {
		RemoveQLog__Fv();
	}
	else {
		InitQTextMsg__Fi((uint)(&quests)[(&qlist)[qline - qtopline >> 1]]._qmsg);
		questlog = '\0';
		GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
		GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ QuestlogESC__Fv()
 // line 862, offset 0x80062f38
	/* begin block 1 */
		// Start line: 863
		// Start offset: 0x80062F38
	/* end block 1 */
	// End offset: 0x80062F50
	// End Line: 865

	/* begin block 2 */
		// Start line: 1866
	/* end block 2 */
	// End Line: 1867

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
 // line 871, offset 0x80062f60
	/* begin block 1 */
		// Start line: 872
		// Start offset: 0x80062F60
	/* end block 1 */
	// End offset: 0x80062FD8
	// End Line: 890

	/* begin block 2 */
		// Start line: 1890
	/* end block 2 */
	// End Line: 1891

void SetMultiQuest__FiiUci(int q,int s,uchar l,int v1)

{
	byte bVar1;
	
	if ((&quests)[q]._qactive != 3) {
		if ((int)(uint)(&quests)[q]._qactive < s) {
			(&quests)[q]._qactive = (uchar)s;
		}
		bVar1 = (&quests)[q]._qvar1;
		(&quests)[q]._qlog = (&quests)[q]._qlog | l;
		if ((int)(uint)bVar1 < v1) {
			(&quests)[q]._qvar1 = (uchar)v1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.questlog()
 // line 938, offset 0x80062fe0
	/* begin block 1 */
		// Start line: 939
		// Start offset: 0x80062FE0
	/* end block 1 */
	// End offset: 0x80062FF8
	// End Line: 939

	/* begin block 2 */
		// Start line: 2024
	/* end block 2 */
	// End Line: 2025

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_questlog(void)

{
	___6Dialog(&QSBack,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.questlog()
 // line 938, offset 0x80063008
	/* begin block 1 */
		// Start line: 939
		// Start offset: 0x80063008
	/* end block 1 */
	// End offset: 0x80063020
	// End Line: 939

	/* begin block 2 */
		// Start line: 2024
	/* end block 2 */
	// End Line: 2025

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_questlog(void)

{
	__6Dialog(&QSBack);
	return;
}





