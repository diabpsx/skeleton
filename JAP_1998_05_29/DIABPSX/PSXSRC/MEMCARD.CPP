#include "THISDUST.H"
#include "MEMCARD.H"


// decompiled code
// original method signature: 
// void /*$ra*/ endian_swap__FPUci(unsigned char *b /*$a0*/, int byts /*$a1*/)
 // line 137, offset 0x801426f8
	/* begin block 1 */
		// Start line: 138
		// Start offset: 0x801426F8
		// Variables:
	// 		unsigned char t; // $v1
	/* end block 1 */
	// End offset: 0x80142724
	// End Line: 142

	/* begin block 2 */
		// Start line: 278
	/* end block 2 */
	// End Line: 279

void endian_swap__FPUci(uchar *b,int byts)

{
	uchar uVar1;
	uchar *puVar2;
	
	if (0 < byts) {
		puVar2 = b + byts;
		do {
			uVar1 = *b;
			*b = b[1];
			b[1] = uVar1;
			b = b + 2;
		} while ((int)b < (int)puVar2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ sjis_endian_swap__FPUci(unsigned char *b /*$a0*/, int byts /*$a1*/)
 // line 145, offset 0x8014272c
	/* begin block 1 */
		// Start line: 146
		// Start offset: 0x8014272C
		// Variables:
	// 		unsigned char t; // $v0
	/* end block 1 */
	// End offset: 0x8014276C
	// End Line: 156

	/* begin block 2 */
		// Start line: 294
	/* end block 2 */
	// End Line: 295

void sjis_endian_swap__FPUci(uchar *b,int byts)

{
	byte bVar1;
	uchar *puVar2;
	
	if (0 < byts) {
		puVar2 = b + byts;
		do {
			if ((b[1] & 0x80) != 0) {
				bVar1 = *b;
				*b = b[1];
				b[1] = bVar1;
				b = b + 1;
			}
			b = b + 1;
		} while ((int)b < (int)puVar2);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ to_sjis__Fc(char asc /*$a0*/)
 // line 167, offset 0x80142774
	/* begin block 1 */
		// Start line: 168
		// Start offset: 0x80142774
		// Variables:
	// 		struct sjis *sp; // $a2
	/* end block 1 */
	// End offset: 0x801427E8
	// End Line: 187

	/* begin block 2 */
		// Start line: 335
	/* end block 2 */
	// End Line: 336

ushort to_sjis__Fc(char asc)

{
	char cVar1;
	ushort *puVar2;
	sjis *psVar3;
	
	psVar3 = &sjis_table;
	if (sjis_table.ascii != '\0') {
		puVar2 = &sjis_table.sjis;
		cVar1 = sjis_table.ascii;
		do {
			if (((int)cVar1 <= (int)asc) &&
				 ((int)asc < (int)((int)cVar1 + (uint)*(byte *)((int)puVar2 + -1)))) {
				return *puVar2 + ((short)asc - (short)cVar1);
			}
			psVar3 = psVar3 + 1;
			cVar1 = psVar3->ascii;
			puVar2 = puVar2 + 2;
		} while (psVar3->ascii != '\0');
	}
	return 0x8148;
}



// decompiled code
// original method signature: 
// char /*$ra*/ to_ascii__FUs(unsigned short sjis /*$a0*/)
 // line 200, offset 0x801427f4
	/* begin block 1 */
		// Start line: 201
		// Start offset: 0x801427F4
		// Variables:
	// 		struct sjis *sp; // $t0
	/* end block 1 */
	// End offset: 0x80142870
	// End Line: 219

	/* begin block 2 */
		// Start line: 401
	/* end block 2 */
	// End Line: 402

char to_ascii__FUs(ushort sjis)

{
	char cVar1;
	ushort uVar2;
	byte *pbVar3;
	sjis *psVar4;
	
	psVar4 = &sjis_table;
	if (sjis_table.ascii != '\0') {
		pbVar3 = &sjis_table.num;
		cVar1 = sjis_table.ascii;
		do {
			uVar2 = *(ushort *)(pbVar3 + 1);
			if (((uint)uVar2 <= (uint)sjis) && ((uint)sjis < (uint)uVar2 + (uint)*pbVar3)) {
				return cVar1 + ((char)sjis - (char)uVar2);
			}
			psVar4 = psVar4 + 1;
			cVar1 = psVar4->ascii;
			pbVar3 = pbVar3 + 4;
		} while (psVar4->ascii != '\0');
	}
	to_ascii_invalid_char = 1;
	return '?';
}



// decompiled code
// original method signature: 
// void /*$ra*/ ascii_to_sjis__FPUcPUs(unsigned char *asc /*$s1*/, unsigned short *sjis /*$s0*/)
 // line 229, offset 0x8014287c
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x8014287C
	/* end block 1 */
	// End offset: 0x801428EC
	// End Line: 243

	/* begin block 2 */
		// Start line: 458
	/* end block 2 */
	// End Line: 459

void ascii_to_sjis__FPUcPUs(uchar *asc,ushort *sjis)

{
	byte *pbVar1;
	byte asc_00;
	ushort uVar2;
	
	asc_00 = *asc;
	while (asc_00 != 0) {
		if ((asc_00 & 0x80) == 0) {
			asc = asc + 1;
			uVar2 = to_sjis__Fc(asc_00);
			*sjis = uVar2;
		}
		else {
			pbVar1 = asc + 1;
			asc = asc + 2;
			*sjis = CONCAT11(asc_00,*pbVar1);
		}
		asc_00 = *asc;
		sjis = sjis + 1;
	}
	*sjis = 0;
	sjis[1] = 0;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ is_sjis__FPUc(unsigned char *buf /*$a0*/)
 // line 246, offset 0x80142904
	/* begin block 1 */
		// Start line: 247
		// Start offset: 0x80142904
	/* end block 1 */
	// End offset: 0x80142908
	// End Line: 248

	/* begin block 2 */
		// Start line: 494
	/* end block 2 */
	// End Line: 495

int is_sjis__FPUc(uchar *buf)

{
	return (uint)(*buf >> 7);
}



// decompiled code
// original method signature: 
// int /*$ra*/ sjis_to_ascii__FPUsPc(unsigned short *sjis /*$s0*/, char *asc /*$s1*/)
 // line 251, offset 0x80142910
	/* begin block 1 */
		// Start line: 252
		// Start offset: 0x80142910
	/* end block 1 */
	// End offset: 0x80142980
	// End Line: 271

	/* begin block 2 */
		// Start line: 503
	/* end block 2 */
	// End Line: 504

int sjis_to_ascii__FPUsPc(ushort *sjis,char *asc)

{
	ushort sjis_00;
	char cVar1;
	
	to_ascii_invalid_char = 0;
	sjis_00 = *sjis;
	if ((sjis_00 & 0x8000) == 0) {
		strcpy(asc,(char *)sjis);
	}
	else {
		while (sjis_00 != 0) {
			sjis = sjis + 1;
			cVar1 = to_ascii__FUs(sjis_00);
			*asc = cVar1;
			sjis_00 = *sjis;
			asc = asc + 1;
		}
		*asc = '\0';
	}
	return (uint)(to_ascii_invalid_char == 0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ read_card_directory__Fi(int card_number /*$s5*/)
 // line 280, offset 0x80142998
	/* begin block 1 */
		// Start line: 281
		// Start offset: 0x80142998
		// Variables:
	// 		char path[80]; // stack offset -136
	// 		struct DIRENTRY *dir; // $s1
	// 		int i; // $s3
	// 		int fh; // $s1
	// 		int r; // $s2
	/* end block 1 */
	// End offset: 0x80142BC0
	// End Line: 398

	/* begin block 2 */
		// Start line: 561
	/* end block 2 */
	// End Line: 562

void read_card_directory__Fi(int card_number)

{
	int iVar1;
	int __fd;
	ssize_t sVar2;
	int *piVar3;
	char *__buf;
	ushort *sjis;
	DIRENTRY *pDVar4;
	int iVar5;
	char acStack136 [80];
	int iStack56;
	
	pDVar4 = card_dir + card_number * 0x10;
	if (mem_card_event_handler != (code *)0x0) {
		(*mem_card_event_handler)(0,card_number);
	}
	if ((&card_usable)[card_number] == 0) {
		if ((card_status == 3) || (INT_8011b3e0 == 3)) {
			if (card_number == 1) {
				card_dirty = 1;
			}
			else {
				INT_8011b1ec = 1;
			}
		}
	}
	else {
		sprintf(acStack136,"bu%d0:*",card_number);
		piVar3 = &card_files + card_number;
		*piVar3 = 0;
		iVar1 = firstfile(acStack136,pDVar4);
		while (iVar1 != 0) {
			pDVar4 = pDVar4 + 1;
			*piVar3 = *piVar3 + 1;
			iVar1 = nextfile(pDVar4);
		}
		iVar1 = 0;
		if (0 < (&card_files)[card_number]) {
			iStack56 = card_number << 0xd;
			iVar5 = 0;
			do {
				sprintf(acStack136,"bu%d0:%s",card_number,card_dir[card_number * 0x10].name + iVar5);
				__fd = open(acStack136,1);
				if (__fd == -1) {
LAB_80142b38:
					card_removed__Fi(card_number);
					PantsDelay__Fv();
					return;
				}
				__buf = card_header[iVar1].magic + iStack56;
				sVar2 = read(__fd,__buf,0x200);
				sjis = (ushort *)(__buf + 4);
				endian_swap__FPUci((uchar *)sjis,0x40);
				sjis_to_ascii__FPUsPc(sjis,(char *)sjis);
				close(__fd);
				if ((__fd == -1) || (sVar2 == -1)) goto LAB_80142b38;
				(&card_changed)[card_number] = 1;
				iVar1 = iVar1 + 1;
				iVar5 = iVar5 + 0x28;
			} while (iVar1 < (&card_files)[card_number]);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ test_card_format__Fi(int card_number /*$s0*/)
 // line 418, offset 0x80142bf4
	/* begin block 1 */
		// Start line: 419
		// Start offset: 0x80142BF4
	/* end block 1 */
	// End offset: 0x80142CCC
	// End Line: 491

	/* begin block 2 */
		// Start line: 847
	/* end block 2 */
	// End Line: 848

int test_card_format__Fi(int card_number)

{
	int iVar1;
	uint uVar2;
	
	_card_load(card_number << 4);
	_card_wait(card_number);
	iVar1 = TestEvent(card_ev0);
	uVar2 = 1;
	if (iVar1 != 1) {
		iVar1 = TestEvent(card_ev1);
		if ((iVar1 == 1) || (iVar1 = TestEvent(card_ev2), iVar1 == 1)) {
			card_removed__Fi(card_number);
			uVar2 = 0;
		}
		else {
			iVar1 = TestEvent(card_ev3);
			if (iVar1 == 1) {
				iVar1 = read_card_block__Fii(card_number,0);
				uVar2 = 0;
				if ((iVar1 != 0) && (block_buf == 'M')) {
					uVar2 = (uint)(s__800cc7e9[0] == 'C');
				}
			}
			else {
				uVar2 = 0;
			}
		}
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ checksum_data__FPci(char *buf /*$a0*/, int size /*$v1*/)
 // line 503, offset 0x80142ce4
	/* begin block 1 */
		// Start line: 504
		// Start offset: 0x80142CE4
		// Variables:
	// 		int chk; // $a2
	/* end block 1 */
	// End offset: 0x80142D14
	// End Line: 508

	/* begin block 2 */
		// Start line: 1020
	/* end block 2 */
	// End Line: 1021

int checksum_data__FPci(char *buf,int size)

{
	char cVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = -0x21524111;
	iVar2 = size + -1;
	if (size != 0) {
		do {
			cVar1 = *buf;
			buf = buf + 1;
			iVar2 = iVar2 + -1;
			iVar3 = iVar3 - (int)cVar1;
		} while (iVar2 != -1);
	}
	return iVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ delete_card_file__Fii(int card_number /*$s0*/, int file /*$s1*/)
 // line 520, offset 0x80142d20
	/* begin block 1 */
		// Start line: 521
		// Start offset: 0x80142D20
		// Variables:
	// 		char path[80]; // stack offset -96
	/* end block 1 */
	// End offset: 0x80142DFC
	// End Line: 559

	/* begin block 2 */
		// Start line: 1054
	/* end block 2 */
	// End Line: 1055

int delete_card_file__Fii(int card_number,int file)

{
	int iVar1;
	char acStack96 [80];
	
	if ((&card_usable)[card_number] != 0) {
		if ((&card_files)[card_number] <= file) {
			return 0;
		}
		if (mem_card_event_handler != (code *)0x0) {
			(*mem_card_event_handler)(5,card_number);
		}
		sprintf(acStack96,"bu%d0:%s",card_number,card_dir + file + card_number * 0x10);
		iVar1 = erase(acStack96);
		if (iVar1 != 0) {
			(&card_dirty)[card_number] = 1;
			(&card_changed)[card_number] = 1;
			return 1;
		}
	}
	return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ read_card_file__FiiiPc(int card_number /*$s0*/, int file /*$s1*/, int id /*$a2*/, char *buf /*$s5*/)
 // line 572, offset 0x80142e18
	/* begin block 1 */
		// Start line: 573
		// Start offset: 0x80142E18
		// Variables:
	// 		int okay; // $s3
	// 		int tries; // $s4
	// 		int fd; // $s1
	// 		int r; // $v0
	// 		int size; // $s0
	// 		int checksumerror; // $s6
	// 		struct file_header h; // stack offset -624
	// 		char path[80]; // stack offset -112
	/* end block 1 */
	// End offset: 0x80142FC8
	// End Line: 691

	/* begin block 2 */
		// Start line: 1161
	/* end block 2 */
	// End Line: 1162

int read_card_file__FiiiPc(int card_number,int file,int id,char *buf)

{
	bool bVar1;
	uint uVar2;
	int __fd;
	ssize_t sVar3;
	size_t sVar4;
	int iVar5;
	size_t __nbytes;
	uint uVar6;
	int iVar7;
	undefined auStack624 [256];
	int local_170;
	size_t local_16c;
	char acStack112 [80];
	
	uVar6 = 0;
	iVar7 = 4;
	bVar1 = false;
	if ((&card_usable)[card_number] == 0) {
		uVar2 = 3;
	}
	else {
		if (file < (&card_files)[card_number]) {
			uVar2 = 2;
			if (card_header[card_number * 0x10 + file].id == id) {
				if (mem_card_event_handler != (code *)0x0) {
					(*mem_card_event_handler)(3,card_number);
				}
				sprintf(acStack112,"bu%d0:%s",card_number,card_dir + file + card_number * 0x10);
				do {
					__fd = open(acStack112,1);
					if (__fd == -1) {
						return 1;
					}
					sVar3 = read(__fd,auStack624,0x200);
					if (sVar3 != -1) {
						uVar2 = local_16c + 0x200 & 0x7f;
						__nbytes = local_16c;
						if (uVar2 != 0) {
							__nbytes = (local_16c + 0x80) - uVar2;
						}
						sVar4 = read(__fd,buf,__nbytes);
						if ((sVar4 != 0xffffffff) && (sVar4 == __nbytes)) {
							iVar5 = checksum_data__FPci(buf,local_16c);
							uVar6 = 1;
							if (iVar5 != local_170) {
								bVar1 = true;
							}
						}
					}
					close(__fd);
				} while ((uVar6 == 0) && (iVar7 = iVar7 + -1, iVar7 != -1));
				uVar2 = 0xfffffffe;
				if (!bVar1) {
					uVar2 = uVar6 ^ 1;
				}
			}
		}
		else {
			uVar2 = 2;
		}
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ format_card__Fi(int card_number /*$s1*/)
 // line 702, offset 0x80142ff4
	/* begin block 1 */
		// Start line: 703
		// Start offset: 0x80142FF4
		// Variables:
	// 		char path[80]; // stack offset -96
	/* end block 1 */
	// End offset: 0x801430A0
	// End Line: 733

	/* begin block 2 */
		// Start line: 1514
	/* end block 2 */
	// End Line: 1515

int format_card__Fi(int card_number)

{
	code *pcVar1;
	int iVar2;
	int iVar3;
	char acStack96 [80];
	
	pcVar1 = mem_card_event_handler;
	iVar2 = 0;
	if ((&card_status)[card_number] == 0) {
		(&card_dirty)[card_number] = 1;
		(&card_changed)[card_number] = 1;
		(&card_files)[card_number] = 0;
		if (pcVar1 != (code *)0x0) {
			(*pcVar1)(4,card_number);
		}
		sprintf(acStack96,&DAT_8011b3d4,card_number);
		iVar3 = format(acStack96);
		iVar2 = 0;
		if (iVar3 != 0) {
			iVar2 = test_card_format__Fi(card_number);
			(&card_usable)[card_number] = iVar2;
		}
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ write_card_file__FiiPcT2PUcPUsiT4(int card_number /*$s2*/, int id /*$s5*/, char *name /*$v0*/, char *title /*$s3*/, unsigned char *icon /*stack 16*/, unsigned short *clut /*stack 20*/, int size /*stack 24*/, unsigned char *buf /*stack 28*/)
 // line 757, offset 0x801430b8
	/* begin block 1 */
		// Start line: 758
		// Start offset: 0x801430B8
		// Variables:
	// 		struct file_header h; // stack offset -632
	// 		int fd; // $s0
	// 		int failed; // $s3
	// 		int e; // $s4
	// 		char path[80]; // stack offset -120

		/* begin block 1.1 */
			// Start line: 791
			// Start offset: 0x80143294
			// Variables:
		// 		int Loop; // $a0
		/* end block 1.1 */
		// End offset: 0x801432C4
		// End Line: 802
	/* end block 1 */
	// End offset: 0x801433DC
	// End Line: 891

	/* begin block 2 */
		// Start line: 1630
	/* end block 2 */
	// End Line: 1631

int write_card_file__FiiPcT2PUcPUsiT4
							(int card_number,int id,char *name,char *title,uchar *icon,ushort *clut,int size,
							uchar *buf)

{
	bool bVar1;
	ssize_t sVar2;
	size_t sVar3;
	int iVar4;
	undefined4 uVar5;
	undefined *puVar6;
	uint uVar7;
	undefined4 uVar8;
	int __fd;
	undefined4 uVar9;
	undefined4 *puVar10;
	undefined4 *puVar11;
	undefined local_278;
	undefined local_277;
	undefined local_276;
	char local_275;
	ushort auStack628 [45];
	undefined local_219;
	undefined4 local_218;
	undefined4 local_214;
	undefined4 local_210;
	undefined4 local_20c;
	undefined4 local_208;
	undefined4 local_204;
	undefined4 local_200;
	undefined4 local_1fc;
	undefined4 local_1f8 [32];
	int local_178;
	int local_174;
	int local_170;
	char acStack120 [80];
	
	sprintf(acStack120,"bu%d0:%s",card_number,name);
	local_278 = 0x53;
	local_277 = 0x43;
	local_276 = 0x11;
	local_275 = (char)(size + 0x200U >> 0xd);
	if ((size + 0x200U & 0x1fff) != 0) {
		local_275 = local_275 + '\x01';
	}
	memset(auStack628,0,0x40);
	ascii_to_sjis__FPUcPUs((uchar *)title,auStack628);
	endian_swap__FPUci((uchar *)auStack628,0x40);
	local_218 = *(undefined4 *)clut;
	local_214 = *(undefined4 *)(clut + 2);
	local_210 = *(undefined4 *)(clut + 4);
	local_20c = *(undefined4 *)(clut + 6);
	local_208 = *(undefined4 *)(clut + 8);
	local_204 = *(undefined4 *)(clut + 10);
	local_200 = *(undefined4 *)(clut + 0xc);
	local_1fc = *(undefined4 *)(clut + 0xe);
	puVar10 = local_1f8;
	puVar11 = (undefined4 *)(icon + 0x180);
	if (((uint)icon & 3) == 0) {
		do {
			uVar5 = ((undefined4 *)icon)[1];
			uVar8 = ((undefined4 *)icon)[2];
			uVar9 = ((undefined4 *)icon)[3];
			*puVar10 = *(undefined4 *)icon;
			puVar10[1] = uVar5;
			puVar10[2] = uVar8;
			puVar10[3] = uVar9;
			icon = (uchar *)((undefined4 *)icon + 4);
			puVar10 = puVar10 + 4;
		} while ((undefined4 *)icon != puVar11);
	}
	else {
		do {
			uVar5 = ((undefined4 *)icon)[1];
			uVar8 = ((undefined4 *)icon)[2];
			uVar9 = ((undefined4 *)icon)[3];
			*puVar10 = *(undefined4 *)icon;
			puVar10[1] = uVar5;
			puVar10[2] = uVar8;
			puVar10[3] = uVar9;
			icon = (uchar *)((undefined4 *)icon + 4);
			puVar10 = puVar10 + 4;
		} while ((undefined4 *)icon != puVar11);
	}
	local_174 = size;
	local_170 = id;
	local_178 = checksum_data__FPci((char *)buf,size);
	__fd = 0x1b;
	puVar6 = &local_219;
	do {
		*puVar6 = 0;
		__fd = __fd + -1;
		puVar6 = puVar6 + -1;
	} while (-1 < __fd);
	bVar1 = true;
	if ((&card_usable)[card_number] == 0) {
		__fd = 3;
	}
	else {
		if (mem_card_event_handler != (code *)0x0) {
			(*mem_card_event_handler)(2,card_number);
		}
		__fd = open(acStack120,(int)local_275 << 0x10 | 0x200);
		if (__fd != -1) {
			sVar2 = write(__fd,&local_278,0x200);
			if (sVar2 == 0x200) {
				uVar7 = size + 0x200U & 0x7f;
				if (uVar7 != 0) {
					size = (size + 0x80) - uVar7;
				}
				sVar3 = write(__fd,buf,size);
				if (sVar3 == size) {
					bVar1 = false;
					close(__fd);
				}
			}
		}
		if (bVar1) {
			iVar4 = _get_errno();
			if (__fd != -1) {
				close(__fd);
			}
			__fd = 1;
			if (iVar4 == 0x1c) {
				return 2;
			}
		}
		else {
			__fd = 0;
		}
		(&card_dirty)[card_number] = 1;
		(&card_changed)[card_number] = 1;
	}
	return __fd;
}



// decompiled code
// original method signature: 
// void /*$ra*/ new_card__Fi(int card_number /*$s0*/)
 // line 900, offset 0x8014340c
	/* begin block 1 */
		// Start line: 901
		// Start offset: 0x8014340C
	/* end block 1 */
	// End offset: 0x8014348C
	// End Line: 933

	/* begin block 2 */
		// Start line: 1956
	/* end block 2 */
	// End Line: 1957

void new_card__Fi(int card_number)

{
	int iVar1;
	
	if (mem_card_event_handler != (code *)0x0) {
		(*mem_card_event_handler)(1,card_number);
	}
	_bu_init();
	_card_clear(card_number << 4);
	_card_wait(card_number);
	iVar1 = test_hw_event__Fv();
	if (iVar1 == 0) {
		iVar1 = test_card_format__Fi(card_number);
		(&card_usable)[card_number] = iVar1;
		read_card_directory__Fi(card_number);
	}
	else {
		card_removed__Fi(card_number);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ service_card__Fi(int card_number /*$s0*/)
 // line 945, offset 0x801434a0
	/* begin block 1 */
		// Start line: 946
		// Start offset: 0x801434A0
		// Variables:
	// 		int last_status; // $a0
	/* end block 1 */
	// End offset: 0x801435CC
	// End Line: 1035

	/* begin block 2 */
		// Start line: 2046
	/* end block 2 */
	// End Line: 2047

void service_card__Fi(int card_number)

{
	int iVar1;
	
	iVar1 = last_card_status[card_number];
	switch((&card_status)[card_number]) {
	case 0:
		if ((1 < iVar1 - 1U) && (iVar1 != 4)) goto switchD_801434f0_caseD_1;
		break;
	default:
		goto switchD_801434f0_caseD_1;
	case 2:
		if (iVar1 == 0) {
			if (mem_card_event_handler != (code *)0x0) {
				(*mem_card_event_handler)(8,card_number);
			}
			(&card_usable)[card_number] = 0;
		}
		goto switchD_801434f0_caseD_1;
	case 3:
	}
	(&new_card_flag)[card_number] = (void *)0x1;
switchD_801434f0_caseD_1:
	if ((&card_dirty)[card_number] != 0) {
		iVar1 = test_card_format__Fi(card_number);
		(&card_usable)[card_number] = iVar1;
		dirflag = '\x01';
		read_card_directory__Fi(card_number);
		dirflag = '\0';
		(&card_dirty)[card_number] = 0;
	}
	return;
}





