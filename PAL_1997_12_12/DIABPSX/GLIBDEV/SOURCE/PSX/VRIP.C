#include "THISDUST.H"
#include "VRIP.H"


// decompiled code
// original method signature: 
// int /*$ra*/ vsprintf(char *str /*$a0*/, char *fmt /*$a1*/, char *ap /*$a2*/)
 // line 157, offset 0x80023c5c
	/* begin block 1 */
		// Start line: 158
		// Start offset: 0x80023C5C
		// Variables:
	// 		struct FILE f; // stack offset -40
	/* end block 1 */
	// End offset: 0x80023C98
	// End Line: 168

	/* begin block 2 */
		// Start line: 314
	/* end block 2 */
	// End Line: 315

int vsprintf(char *str,char *fmt,char *ap)

{
	int iVar1;
	FILE local_28;
	
	local_28._flag = 0x110;
	local_28._cnt = 0x7fffffff;
	local_28._ptr = str;
	iVar1 = _doprnt(fmt,ap,&local_28);
	*local_28._ptr = '\0';
	return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ _doprnt(char *fmt0 /*$a0*/, char *argp /*$s2*/, struct FILE *fp /*$s5*/)
 // line 172, offset 0x80023ca8
	/* begin block 1 */
		// Start line: 173
		// Start offset: 0x80023CA8
		// Variables:
	// 		char *fmt; // $s6
	// 		int ch; // $a0
	// 		int cnt; // stack offset -88
	// 		int n; // $s0
	// 		char *t; // $s1
	// 		unsigned long _ulong; // $v1
	// 		int base; // $a1
	// 		int dprec; // stack offset -80
	// 		int fieldsz; // $fp
	// 		int flags; // $s3
	// 		int fpprec; // stack offset -72
	// 		int prec; // $s4
	// 		int realsz; // $s4
	// 		int size; // $s7
	// 		int width; // stack offset -64
	// 		char sign; // $a2
	// 		char *digs; // stack offset -56
		// Labels:
		//		0x80023DFC	rflag
		//		0x80024164	nosign
		//		0x80024210	pforw

		/* begin block 1.1 */
			// Start line: 267
			// Start offset: 0x80023EC4
			// Variables:
		// 		char c; // $v0
		/* end block 1.1 */
		// End offset: 0x80023EF8
		// End Line: 173

		/* begin block 1.2 */
			// Start line: 284
			// Start offset: 0x80023F40
		/* end block 1.2 */
		// End offset: 0x80023F64
		// End Line: 173

		/* begin block 1.3 */
			// Start line: 345
			// Start offset: 0x8002409C
			// Variables:
		// 		char *p; // $v0
		/* end block 1.3 */
		// End offset: 0x800240C8
		// End Line: 354
	/* end block 1 */
	// End offset: 0x8002445C
	// End Line: 480

	/* begin block 2 */
		// Start line: 353
	/* end block 2 */
	// End Line: 354

int _doprnt(char *fmt0,char *argp,FILE *fp)

{
	byte bVar1;
	char cVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	undefined4 *puVar7;
	undefined4 *puVar8;
	void *pvVar9;
	int iVar10;
	uint uVar11;
	int iVar12;
	uint uVar13;
	int __c;
	char *__s;
	uint *puVar14;
	uint uVar15;
	undefined4 *__n;
	byte *pbVar16;
	undefined4 *__n_00;
	uint uVar17;
	int local_58;
	undefined4 *local_50;
	int local_48;
	undefined4 *local_40;
	char *local_38;
	
	if ((fp->_flag & 0x200U) != 0) {
		fp->_flag = fp->_flag & 0xffffffb7U | 0x10;
	}
	if ((fp->_flag & 0x10U) == 0) {
		local_58 = -1;
	}
	else {
		local_38 = "0123456789abcdef";
		local_58 = 0;
		while( true ) {
			__c = fp->_cnt;
			bVar1 = *fmt0;
			pbVar16 = (byte *)fp->_ptr;
			while ((bVar1 != 0 && (bVar1 != 0x25))) {
				__c = __c + -1;
				if (((__c < 0) && (((fp->_flag & 4U) == 0 || (fp->_bufsiz <= -__c)))) ||
					 ((bVar1 == 10 && ((fp->_flag & 4U) != 0)))) {
					fp->_cnt = __c;
					__c = fp->_cnt;
					*(byte **)&fp->_ptr = pbVar16;
				}
				else {
					*pbVar16 = bVar1;
					pbVar16 = pbVar16 + 1;
				}
				fmt0 = (char *)((byte *)fmt0 + 1);
				bVar1 = *fmt0;
				local_58 = local_58 + 1;
			}
			fp->_cnt = __c;
			*(byte **)&fp->_ptr = pbVar16;
			if (bVar1 == 0) break;
			uVar15 = 0;
			bVar3 = false;
			bVar6 = false;
			bVar5 = false;
			bVar4 = false;
			__n = (undefined4 *)0xffffffff;
			__c = 0;
			local_50 = (undefined4 *)0x0;
			local_48 = 0;
			local_40 = (undefined4 *)0x0;
LAB_80023dfc:
			pbVar16 = (byte *)fmt0 + 1;
			puVar14 = (uint *)argp;
			switch(*pbVar16) {
			case 0:
				goto LAB_8002445c;
			default:
				local_58 = local_58 + 1;
				putc((int)(char)*pbVar16,(FILE *)fp);
				fmt0 = (char *)((byte *)fmt0 + 2);
				break;
			case 0x20:
				fmt0 = (char *)pbVar16;
				if (__c == 0) {
					__c = 0x20;
					fmt0 = (char *)pbVar16;
				}
				goto LAB_80023dfc;
			case 0x23:
				uVar15 = uVar15 | 8;
				bVar6 = true;
				fmt0 = (char *)pbVar16;
				goto LAB_80023dfc;
			case 0x2a:
				puVar14 = (uint *)argp + 1;
				local_40 = *(undefined4 **)argp;
				argp = (char *)puVar14;
				fmt0 = (char *)pbVar16;
				if (-1 < (int)local_40) goto LAB_80023dfc;
				local_40 = (undefined4 *)-(int)local_40;
			case 0x2d:
				uVar15 = uVar15 | 0x10;
				argp = (char *)puVar14;
				fmt0 = (char *)pbVar16;
				goto LAB_80023dfc;
			case 0x2b:
				__c = 0x2b;
				fmt0 = (char *)pbVar16;
				goto LAB_80023dfc;
			case 0x2e:
				fmt0 = (char *)((byte *)fmt0 + 2);
				if (*fmt0 == 0x2a) {
					__n = *(undefined4 **)argp;
					argp = (char *)((uint *)argp + 1);
				}
				else {
					bVar1 = *fmt0;
					__n = (undefined4 *)0x0;
					while ((bVar1 < 0x80 && (((&DAT_800a5fa5)[(uint)bVar1] & 4) != 0))) {
						iVar10 = (int)*fmt0;
						fmt0 = (char *)((byte *)fmt0 + 1);
						if (iVar10 < 0x31) {
							iVar12 = 0;
						}
						else {
							iVar12 = iVar10 + -0x30;
							if (0x38 < iVar10) {
								iVar12 = 9;
							}
						}
						bVar1 = *fmt0;
						__n = (undefined4 *)((int)__n * 10 + iVar12);
					}
					fmt0 = (char *)((byte *)fmt0 + -1);
				}
				if ((int)__n < -1) {
					__n = (undefined4 *)0xffffffff;
				}
				goto LAB_80023dfc;
			case 0x30:
				uVar15 = uVar15 | 0x20;
				fmt0 = (char *)pbVar16;
				goto LAB_80023dfc;
			case 0x31:
			case 0x32:
			case 0x33:
			case 0x34:
			case 0x35:
			case 0x36:
			case 0x37:
			case 0x38:
			case 0x39:
				local_40 = (undefined4 *)0x0;
				do {
					fmt0 = (char *)pbVar16;
					iVar10 = (int)*fmt0;
					iVar12 = 0;
					if ((0x30 < iVar10) && (iVar12 = iVar10 + -0x30, 0x38 < iVar10)) {
						iVar12 = 9;
					}
					bVar1 = ((byte *)fmt0)[1];
					local_40 = (undefined4 *)((int)local_40 * 10 + iVar12);
				} while ((bVar1 < 0x80) &&
								(pbVar16 = (byte *)fmt0 + 1, ((&DAT_800a5fa5)[(uint)bVar1] & 4) != 0));
				goto LAB_80023dfc;
			case 0x44:
				uVar15 = uVar15 | 1;
				bVar4 = true;
			case 100:
			case 0x69:
				if ((bVar4) || (!bVar5)) {
					uVar11 = *(uint *)argp;
				}
				else {
					uVar11 = SEXT24(*(short *)argp);
				}
				uVar13 = 10;
				if ((int)uVar11 < 0) {
					uVar11 = -uVar11;
					__c = 0x2d;
				}
LAB_80024168:
				if (-1 < (int)__n) {
					uVar15 = uVar15 & 0xffffffdf;
				}
				__s = (char *)&sName;
				if ((uVar11 != 0) || (__n != (undefined4 *)0x0)) {
					do {
						__n_00 = (undefined4 *)__s;
						uVar17 = uVar11 / uVar13;
						if (uVar13 == 0) {
							trap(0x1c00);
						}
						cVar2 = local_38[uVar11 % uVar13];
						__s = (char *)((int)__n_00 + -1);
						*__s = cVar2;
						uVar11 = uVar17;
					} while (uVar17 != 0);
					local_38 = "0123456789abcdef";
					if (((bVar6) && (uVar13 == 8)) && (cVar2 != '0')) {
						__s = (char *)((int)__n_00 + -2);
						*__s = 0x30;
					}
				}
				__n_00 = (undefined4 *)((int)&sName - (int)__s);
				local_50 = __n;
LAB_80024210:
				argp = (char *)((uint *)argp + 1);
				__n = local_50;
				if ((int)local_50 < (int)__n_00) {
					__n = __n_00;
				}
				if (__c != 0) {
					__n = (undefined4 *)((int)__n + 1);
				}
				if (bVar3) {
					__n = (undefined4 *)((int)__n + 2);
				}
				if (((uVar15 & 0x30) == 0) && (puVar7 = __n, local_40 != (undefined4 *)0x0)) {
					while ((int)puVar7 < (int)local_40) {
						putc(0x20,(FILE *)fp);
						puVar7 = (undefined4 *)((int)puVar7 + 1);
					}
				}
				if (__c != 0) {
					putc(__c,(FILE *)fp);
				}
				if (bVar3) {
					putc(0x30,(FILE *)fp);
					putc((int)(char)*pbVar16,(FILE *)fp);
				}
				puVar7 = __n_00;
				puVar8 = __n;
				if ((uVar15 & 0x30) == 0x20) {
					while (puVar7 = __n_00, (int)puVar8 < (int)local_40) {
						putc(0x30,(FILE *)fp);
						puVar8 = (undefined4 *)((int)puVar8 + 1);
					}
				}
				while ((int)puVar7 < (int)local_50) {
					putc(0x30,(FILE *)fp);
					puVar7 = (undefined4 *)((int)puVar7 + 1);
				}
				__c = fp->_cnt - (int)__n_00;
				if ((__c < 0) || ((fp->_flag & 4U) != 0)) {
					while (__n_00 = (undefined4 *)((int)__n_00 + -1), -1 < (int)__n_00) {
						cVar2 = *__s;
						__s = (char *)((int)__s + 1);
						putc((int)cVar2,(FILE *)fp);
					}
				}
				else {
					fp->_cnt = __c;
					memcpy(fp->_ptr,__s,(size_t)__n_00);
					fp->_ptr = (char *)((int)__n_00 + (int)fp->_ptr);
				}
				while (local_48 = local_48 + -1, -1 < local_48) {
					putc(0x30,(FILE *)fp);
				}
				__n_00 = __n;
				if ((uVar15 & 0x10) != 0) {
					while ((int)__n_00 < (int)local_40) {
						putc(0x20,(FILE *)fp);
						__n_00 = (undefined4 *)((int)__n_00 + 1);
					}
				}
				fmt0 = (char *)((byte *)fmt0 + 2);
				if ((int)local_40 < (int)__n) {
					local_40 = __n;
				}
				local_58 = (int)local_40 + local_58;
				break;
			case 0x4c:
				uVar15 = uVar15 | 2;
				fmt0 = (char *)pbVar16;
				goto LAB_80023dfc;
			case 0x4f:
				uVar15 = uVar15 | 1;
				bVar4 = true;
			case 0x6f:
				if ((bVar4) || (uVar13 = 8, !bVar5)) {
					uVar11 = *(uint *)argp;
					uVar13 = 8;
				}
				else {
					uVar11 = (uint)*(ushort *)argp;
				}
LAB_80024164:
				__c = 0;
				goto LAB_80024168;
			case 0x55:
				uVar15 = uVar15 | 1;
				bVar4 = true;
			case 0x75:
				if ((bVar4) || (uVar13 = 10, !bVar5)) {
					uVar11 = *(uint *)argp;
					uVar13 = 10;
				}
				else {
					uVar11 = (uint)*(ushort *)argp;
				}
				goto LAB_80024164;
			case 0x58:
				local_38 = "0123456789ABCDEF";
			case 0x78:
				if ((bVar4) || (!bVar5)) {
					uVar11 = *(uint *)argp;
				}
				else {
					uVar11 = (uint)*(ushort *)argp;
				}
				uVar13 = 0x10;
				if (!bVar6) goto LAB_80024164;
				__c = 0;
				if (uVar11 != 0) {
					uVar15 = uVar15 | 0x40;
					bVar3 = true;
					goto LAB_80024164;
				}
				goto LAB_80024168;
			case 99:
				__s = buf;
				__n_00 = (undefined4 *)&DAT_00000001;
				buf[0] = *argp;
				__c = 0;
				goto LAB_80024210;
			case 0x68:
				uVar15 = uVar15 | 4;
				bVar5 = true;
				fmt0 = (char *)pbVar16;
				goto LAB_80023dfc;
			case 0x6c:
				goto switchD_80023e24_caseD_6c;
			case 0x70:
				uVar11 = *(uint *)argp;
				uVar13 = 0x10;
				goto LAB_80024164;
			case 0x73:
				__s = *(char **)argp;
				if ((undefined4 *)__s == (undefined4 *)0x0) {
					__s = "(null)";
				}
				if ((int)__n < 0) {
					__n_00 = (undefined4 *)strlen(__s);
					__c = 0;
				}
				else {
					pvVar9 = memchr(__s,0,(size_t)__n);
					__c = 0;
					if ((pvVar9 == (void *)0x0) ||
						 (__n_00 = (undefined4 *)((int)pvVar9 - (int)__s),
						 (int)__n < (int)(undefined4 *)((int)pvVar9 - (int)__s))) {
						__n_00 = __n;
					}
				}
				goto LAB_80024210;
			}
		}
	}
LAB_8002445c:
	return local_58;
switchD_80023e24_caseD_6c:
	uVar15 = uVar15 | 1;
	bVar4 = true;
	fmt0 = (char *)pbVar16;
	goto LAB_80023dfc;
}





