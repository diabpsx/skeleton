#include "THISDUST.H"
#include "PREMSG.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DefragItems__FPUci(unsigned char *ilist /*$a0*/, int num /*$a1*/)
 // line 92, offset 0x80162fd4
	/* begin block 1 */
		// Start line: 93
		// Start offset: 0x80162FD4
		// Variables:
	// 		int p; // $v1

		/* begin block 1.1 */
			// Start line: 94
			// Start offset: 0x80162FD4
		/* end block 1.1 */
		// End offset: 0x80163014
		// End Line: 99
	/* end block 1 */
	// End offset: 0x80163014
	// End Line: 99

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DefragItems__FPUci(uchar *ilist,int num)

{
	int iVar1;
	uchar *puVar2;
	
	iVar1 = 0;
	if (0 < num) {
		puVar2 = ilist + num;
		do {
			if (*ilist != -1) {
				(&itemactive)[iVar1] = *ilist;
				iVar1 = iVar1 + 1;
			}
			ilist = ilist + 1;
		} while ((int)ilist < (int)puVar2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ removellist__FPUcUc(unsigned char *ilist /*$a0*/, unsigned char val /*$a1*/)
 // line 102, offset 0x8016301c
	/* begin block 1 */
		// Start line: 103
		// Start offset: 0x8016301C

		/* begin block 1.1 */
			// Start line: 104
			// Start offset: 0x8016301C
		/* end block 1.1 */
		// End offset: 0x8016304C
		// End Line: 107
	/* end block 1 */
	// End offset: 0x8016304C
	// End Line: 107

/* WARNING: Unknown calling convention yet parameter storage is locked */

void removellist__FPUcUc(uchar *ilist,uchar val)

{
	uchar *puVar1;
	
	puVar1 = ilist + 0x7f;
	do {
		if (*ilist == val) {
			*ilist = -1;
		}
		ilist = ilist + 1;
	} while ((int)ilist < (int)puVar1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeltaLoadLevel__Fv()
 // line 115, offset 0x80163054
	/* begin block 1 */
		// Start line: 116
		// Start offset: 0x80163054
		// Variables:
	// 		int i; // stack offset -88
	// 		int ii; // $s6
	// 		struct DLevel *ThisLevel; // stack offset -80
	// 		unsigned char litemlist[127]; // stack offset -216
	// 		int lnumitems; // stack offset -72

		/* begin block 1.1 */
			// Start line: 116
			// Start offset: 0x80163054

			/* begin block 1.1.1 */
				// Start line: 129
				// Start offset: 0x801630B8

				/* begin block 1.1.1.1 */
					// Start line: 130
					// Start offset: 0x801630B8

					/* begin block 1.1.1.1.1 */
						// Start line: 130
						// Start offset: 0x801630C0
						// Variables:
					// 		struct MonsterStruct *DestMptr; // $s0
					// 		struct DMonsterStr *SrcMptr; // $s1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 151
							// Start offset: 0x80163150

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 174
								// Start offset: 0x801631B0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80163250
							// End Line: 190
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80163250
						// End Line: 190
					/* end block 1.1.1.1.1 */
					// End offset: 0x80163250
					// End Line: 190
				/* end block 1.1.1.1 */
				// End offset: 0x80163264
				// End Line: 193
			/* end block 1.1.1 */
			// End offset: 0x80163420
			// End Line: 200
		/* end block 1.1 */
		// End offset: 0x80163420
		// End Line: 200

		/* begin block 1.2 */
			// Start line: 263
			// Start offset: 0x801635E0

			/* begin block 1.2.1 */
				// Start line: 263
				// Start offset: 0x801635E8

				/* begin block 1.2.1.1 */
					// Start line: 280
					// Start offset: 0x801636B0

					/* begin block 1.2.1.1.1 */
						// Start line: 281
						// Start offset: 0x801636C0
						// Variables:
					// 		int ox; // $v1
					// 		int oy; // $fp

						/* begin block 1.2.1.1.1.1 */
							// Start line: 312
							// Start offset: 0x80163824

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 317
								// Start offset: 0x8016384C
								// Variables:
							// 		unsigned char done; // $s5

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 318
									// Start offset: 0x8016384C
									// Variables:
								// 		int l; // $s2

									/* begin block 1.2.1.1.1.1.1.1.1 */
										// Start line: 320
										// Start offset: 0x80163854

										/* begin block 1.2.1.1.1.1.1.1.1.1 */
											// Start line: 322
											// Start offset: 0x80163868
											// Variables:
										// 		int j; // $s3

											/* begin block 1.2.1.1.1.1.1.1.1.1.1 */
												// Start line: 322
												// Start offset: 0x80163868
												// Variables:
											// 		int yy; // $s4

												/* begin block 1.2.1.1.1.1.1.1.1.1.1.1 */
													// Start line: 324
													// Start offset: 0x8016387C
													// Variables:
												// 		int iz; // $s0

													/* begin block 1.2.1.1.1.1.1.1.1.1.1.1.1 */
														// Start line: 328
														// Start offset: 0x80163880
														// Variables:
													// 		int xx; // $s1
													/* end block 1.2.1.1.1.1.1.1.1.1.1.1.1 */
													// End offset: 0x801638C0
													// End Line: 334
												/* end block 1.2.1.1.1.1.1.1.1.1.1.1 */
												// End offset: 0x801638C8
												// End Line: 335
											/* end block 1.2.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x801638C8
											// End Line: 335
										/* end block 1.2.1.1.1.1.1.1.1.1 */
										// End offset: 0x801638D0
										// End Line: 336
									/* end block 1.2.1.1.1.1.1.1.1 */
									// End offset: 0x801638D0
									// End Line: 336
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x801638D8
								// End Line: 337
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x801638D8
							// End Line: 337
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x801638D8
						// End Line: 337
					/* end block 1.2.1.1.1 */
					// End offset: 0x8016395C
					// End Line: 349
				/* end block 1.2.1.1 */
				// End offset: 0x8016395C
				// End Line: 349
			/* end block 1.2.1 */
			// End offset: 0x8016395C
			// End Line: 349
		/* end block 1.2 */
		// End offset: 0x80163970
		// End Line: 351
	/* end block 1 */
	// End offset: 0x80163990
	// End Line: 356

/* WARNING: Removing unreachable block (ram,0x801632b8) */
/* WARNING: Removing unreachable block (ram,0x80163304) */
/* WARNING: Removing unreachable block (ram,0x80163380) */
/* WARNING: Removing unreachable block (ram,0x801633cc) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void DeltaLoadLevel__Fv(void)

{
	uchar *puVar1;
	uchar uVar2;
	byte bVar3;
	ushort uVar4;
	bool bVar5;
	char cVar6;
	uchar uVar7;
	char cVar8;
	int iVar9;
	uint j;
	undefined4 uVar10;
	uchar *puVar11;
	uint uVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	LocalLevel *pLVar15;
	int iVar16;
	DMonsterStr *pDVar17;
	uint i;
	int ii;
	int iVar18;
	uint j_00;
	DLevel *pDVar19;
	uchar local_d8 [128];
	int local_58;
	DLevel *local_50;
	int local_48;
	uint local_30;
	
	deltaload = '\x01';
	local_50 = GetDLevel__Fib((uint)currlevel,(void *)(uint)(setlevel != '\0'));
	if (currlevel != '\0') {
		local_58 = 0;
		ii = 0;
		while (local_58 < nummonsters) {
			pDVar17 = local_50->monster + local_58;
			uVar7 = pDVar17->_mx;
			if (uVar7 != -1) {
				M_ClearSquares__Fi(local_58);
				uVar2 = pDVar17->_my;
				(&monster[0]._mx)[ii] = uVar7;
				(&monster[0]._my)[ii] = uVar2;
				(&monster[0]._moldx)[ii] = (&monster[0]._mx)[ii];
				iVar9 = pDVar17->_mhitpoints;
				(&monster[0]._mfutx)[ii] = (&monster[0]._mx)[ii];
				(&monster[0]._moldy)[ii] = (&monster[0]._my)[ii];
				(&monster[0]._mfuty)[ii] = (&monster[0]._my)[ii];
				if (iVar9 != -1) {
					*(int *)((int)&monster[0]._mhitpoints + ii) = iVar9;
				}
				if (iVar9 == 0) {
					(&monster[0]._moldx)[ii] = uVar7;
					(&monster[0]._moldy)[ii] = uVar2;
					M_ClearSquares__Fi(local_58);
					if ((&monster[0]._mAi)[ii] != '\x1b') {
						AddDead__Fiici((int)(&monster[0]._mx)[ii],(int)(&monster[0]._my)[ii],
													 *(char *)(*(int *)((int)&monster[0].MType + ii) + 0x18),
													 (int)(&monster[0]._mdir)[ii]);
					}
					(&monster[0]._mDelFlag)[ii] = '\x01';
					M_UpdateLeader__Fi(local_58);
				}
				else {
					decode_enemy__Fii(local_58,(uint)pDVar17->_menemy);
					if ((1 < (byte)(&monster[0]._mx)[ii]) || ((&monster[0]._my)[ii] != '\0')) {
						dung_map[(int)(&monster[0]._mx)[ii] * 0x70 + (int)(&monster[0]._my)[ii]].dMonster =
								 (short)local_58 + 1;
					}
					if (local_58 < 4) {
						*(ushort *)((int)&monster[0]._mFlags + ii) =
								 *(ushort *)((int)&monster[0]._mFlags + ii) | 0x30;
					}
					else {
						M_StartStand__Fii(local_58,(int)(&monster[0]._mdir)[ii]);
					}
				}
			}
			ii = ii + 0x68;
			local_58 = local_58 + 1;
		}
		if (setlevel == '\0') {
			puVar11 = &automapview;
			j = (uint)currlevel;
			pLVar15 = sgLocals + j;
			do {
				uVar10 = *(undefined4 *)(pLVar15->automapsv + 4);
				uVar13 = *(undefined4 *)(pLVar15->automapsv + 8);
				uVar14 = *(undefined4 *)(pLVar15->automapsv + 0xc);
				*(undefined4 *)puVar11 = *(undefined4 *)pLVar15->automapsv;
				((undefined4 *)puVar11)[1] = uVar10;
				((undefined4 *)puVar11)[2] = uVar13;
				((undefined4 *)puVar11)[3] = uVar14;
				pLVar15 = (LocalLevel *)(pLVar15->automapsv + 0x10);
				puVar11 = (uchar *)((undefined4 *)puVar11 + 4);
			} while (pLVar15 != (LocalLevel *)(sgLocals[j].automapsv + 0xc0));
		}
		else {
			puVar11 = &automapview;
			j = (uint)setlvlnum;
			pLVar15 = LocalLevel_ARRAY_800d7e3c + j;
			do {
				uVar10 = *(undefined4 *)(pLVar15->automapsv + 4);
				uVar13 = *(undefined4 *)(pLVar15->automapsv + 8);
				uVar14 = *(undefined4 *)(pLVar15->automapsv + 0xc);
				*(undefined4 *)puVar11 = *(undefined4 *)pLVar15->automapsv;
				((undefined4 *)puVar11)[1] = uVar10;
				((undefined4 *)puVar11)[2] = uVar13;
				((undefined4 *)puVar11)[3] = uVar14;
				pLVar15 = (LocalLevel *)(pLVar15->automapsv + 0x10);
				puVar11 = (uchar *)((undefined4 *)puVar11 + 4);
			} while (pLVar15 != (LocalLevel *)(LocalLevel_ARRAY_800d7e3c[j].automapsv + 0xc0));
		}
		uVar10 = *(undefined4 *)(pLVar15->automapsv + 4);
		*(undefined4 *)puVar11 = *(undefined4 *)pLVar15->automapsv;
		((undefined4 *)puVar11)[1] = uVar10;
		if (currlevel != '\0') {
			local_58 = 0;
			do {
				bVar3 = local_50->object[local_58].bCmd;
				if (bVar3 == 0x2f) {
					SyncBreakObj__Fii(-1,local_58);
				}
				else {
					if ((bVar3 < 0x30) && (0x2a < bVar3)) {
						SyncOpObject__Fiii(-1,(uint)bVar3,local_58);
					}
				}
				local_58 = local_58 + 1;
			} while (local_58 < 0x7f);
			local_58 = 0;
			if (0 < numobjects) {
				do {
					if ((uint)(byte)object[(int)(&objectactive)[local_58]]._otype - 0x35 < 2) {
						Obj_Trap__Fi((int)(&objectactive)[local_58]);
					}
					local_58 = local_58 + 1;
				} while (local_58 < numobjects);
			}
		}
	}
	ConvertdPiece__Fv();
	BuildLevTrigs__Fv();
	uVar7 = QuestStatus__Fi(9);
	if (((uVar7 != '\0') && (quests[9]._qvar2 == '\x04')) && (quests[9].pad_for_laz == '\0')) {
		CreateItem__Fiii(7,setpc_x * 2 + 0x19,setpc_y * 2 + 0x13);
	}
	local_58 = 0;
	local_48 = numitems;
	if (0 < numitems) {
		puVar11 = local_d8;
		do {
			puVar1 = (uchar *)(&itemactive + local_58);
			local_58 = local_58 + 1;
			*puVar11 = *puVar1;
			puVar11 = puVar11 + 1;
		} while (local_58 < numitems);
	}
	local_58 = 0;
	pDVar19 = local_50;
	while (local_58 < 0x7f) {
		uVar7 = pDVar19->item[0].bCmd;
		if (uVar7 != -1) {
			if (uVar7 == '\x01') {
				ii = FindGetItem__FiUsi((uint)pDVar19->item[0].wIndx,pDVar19->item[0].wCI,
																pDVar19->item[0].dwSeed);
				if (ii != -1) {
					if ((int)dung_map[(int)item[ii]._ix * 0x70 + (int)item[ii]._iy].dItem == ii + 1) {
						dung_map[(int)item[ii]._ix * 0x70 + (int)item[ii]._iy].dItem = '\0';
					}
					DeleteItem__Fii(ii,local_58);
					removellist__FPUcUc(local_d8,(uchar)ii);
				}
				uVar7 = pDVar19->item[0].bCmd;
			}
			cVar6 = itemavail;
			if (uVar7 == '\x02') {
				ii = (int)itemavail;
				local_d8[local_48] = itemavail;
				local_48 = local_48 + 1;
				cVar8 = s__800d53d5[0x7d - numitems];
				(&itemactive)[numitems] = itemavail;
				itemavail = cVar8;
				uVar4 = pDVar19->item[0].wIndx;
				if (uVar4 == 0x17) {
					RecreateEar__FiUsiUciiiiii
										(ii,pDVar19->item[0].wCI,pDVar19->item[0].dwSeed,pDVar19->item[0].bId,
										 (uint)pDVar19->item[0].bDur,(uint)pDVar19->item[0].bMDur,
										 (uint)pDVar19->item[0].bCh,(uint)pDVar19->item[0].bMCh,
										 (uint)pDVar19->item[0].wValue,pDVar19->item[0].dwBuff);
				}
				else {
					RecreateItem__FiiUsiii
										(ii,(uint)uVar4,pDVar19->item[0].wCI,pDVar19->item[0].dwSeed,
										 (uint)pDVar19->item[0].wValue,pDVar19->item[0].dwBuff);
					if (pDVar19->item[0].bId != '\0') {
						item[ii]._iIdentified = '\x01';
					}
					item[ii]._iDurability = (ushort)pDVar19->item[0].bDur;
					item[ii]._iMaxDur = (ushort)pDVar19->item[0].bMDur;
					item[ii]._iCharges = pDVar19->item[0].bCh;
					item[ii]._iMaxCharges = pDVar19->item[0].bMCh;
				}
				local_30 = (uint)pDVar19->item[0].x;
				j = (uint)pDVar19->item[0].y;
				uVar7 = CanPut__Fii(local_30,j);
				cVar8 = (char)local_30;
				if (uVar7 == '\0') {
					bVar5 = false;
					iVar9 = 1;
					uVar12 = local_30;
					while ((cVar8 = (char)uVar12, iVar9 < 0x32 && (iVar18 = -iVar9, !bVar5))) {
						while ((iVar18 <= iVar9 && (j_00 = j + iVar18, !bVar5))) {
							iVar16 = -iVar9;
							while ((iVar16 <= iVar9 && (i = uVar12 + iVar16, !bVar5))) {
								local_30 = uVar12;
								uVar7 = CanPut__Fii(i,j_00);
								uVar12 = local_30;
								if (uVar7 != '\0') {
									bVar5 = true;
									uVar12 = i;
									j = j_00;
								}
								iVar16 = iVar16 + 1;
							}
							iVar18 = iVar18 + 1;
						}
						iVar9 = iVar9 + 1;
					}
				}
				item[ii]._ix = cVar8;
				cVar8 = item[ii]._ix;
				item[ii]._iy = (char)j;
				(&dung_map[(int)cVar8 * 0x70].dItem)[(int)(j << 0x18) >> 0x15] = cVar6 + '\x01';
				RespawnItem__FiUc(ii,'\0');
				numitems = numitems + 1;
			}
		}
		pDVar19 = (DLevel *)(pDVar19->item + 1);
		local_58 = local_58 + 1;
	}
	DefragItems__FPUci(local_d8,local_48);
	deltaload = '\0';
	ReleaseDLevel__FP6DLevel(local_50);
	return;
}





