#include "THISDUST.H"
#include "FILEIO.H"


// decompiled code
// original method signature: 
// struct FileIO * /*$ra*/ __6FileIOUl(struct FileIO *this /*$s0*/, unsigned long OurMemId /*$s1*/)
 // line 61, offset 0x8008587c
	/* begin block 1 */
		// Start line: 62
		// Start offset: 0x8008587C
	/* end block 1 */
	// End offset: 0x8008587C
	// End Line: 62

	/* begin block 2 */
		// Start line: 122
	/* end block 2 */
	// End Line: 123

FileIO * __6FileIOUl(FileIO *this,ulong OurMemId)

{
	__6SysObj((SysObj *)this);
	*(undefined4 *)this->_vf = 0x801100f8;
	this->hndPath = -1;
	this->MemId = OurMemId;
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._6FileIO(struct FileIO *this /*$s1*/, int __in_chrg /*$s0*/)
 // line 70, offset 0x800858cc
	/* begin block 1 */
		// Start line: 71
		// Start offset: 0x800858CC
	/* end block 1 */
	// End offset: 0x800858CC
	// End Line: 71

	/* begin block 2 */
		// Start line: 142
	/* end block 2 */
	// End Line: 143

void ___6FileIO(FileIO *this,int __in_chrg)

{
	*(undefined4 *)this->_vf = 0x801100f8;
	DumpOldPath__6FileIO(this);
	if ((__in_chrg & 1U) != 0) {
		__dl__6SysObjPv(this);
	}
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ Read__6FileIOPCcUl(struct FileIO *this /*$s0*/, char *Name /*$s2*/, unsigned long RamId /*$s4*/)
 // line 79, offset 0x80085920
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x80085920
		// Variables:
	// 		int MemSize; // $s1
	// 		long MyHnd; // $s1
	// 		unsigned char *LoadAddr; // $s2
	/* end block 1 */
	// End offset: 0x80085A6C
	// End Line: 103

	/* begin block 2 */
		// Start line: 160
	/* end block 2 */
	// End Line: 161

long Read__6FileIOPCcUl(FileIO *this,char *Name,ulong RamId)

{
	uchar uVar1;
	undefined *puVar2;
	ulong Size;
	long Handle;
	void *pvVar3;
	undefined4 uVar4;
	
	puVar2 = (undefined *)FindFile__6FileIOPCcPc(this,Name,_6FileIO_FileToLoad);
	if (puVar2 != &DAT_00000001) {
		FileNotFound__6FileIOPCc(this,Name);
	}
	Size = (**(code **)(*(int *)this->_vf + 0x24))
									 ((int)&(this->SysObj).MemHnd + (int)*(short *)(*(int *)this->_vf + 0x20),
										_6FileIO_FileToLoad);
	if (Size == 0) {
		DBG_Error((char *)0x0,"psxsrc/FILEIO.CPP",0x59);
	}
	Handle = GAL_Alloc(Size,RamId,Name);
	if (Handle == -1) {
		DBG_Error((char *)0x0,"psxsrc/FILEIO.CPP",0x5c);
	}
	pvVar3 = GAL_Lock(Handle);
	if (Handle == 0) {
		DBG_Error((char *)0x0,"psxsrc/FILEIO.CPP",0x5f);
	}
	uVar4 = (**(code **)(*(int *)this->_vf + 0x24))
										((int)&(this->SysObj).MemHnd + (int)*(short *)(*(int *)this->_vf + 0x20),
										 _6FileIO_FileToLoad);
	(**(code **)(*(int *)this->_vf + 0x1c))
						((int)&(this->SysObj).MemHnd + (int)*(short *)(*(int *)this->_vf + 0x18),
						 _6FileIO_FileToLoad,pvVar3,uVar4);
	uVar1 = GAL_Unlock(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/FILEIO.CPP",100);
	}
	return Handle;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FileLen__6FileIOPCc(struct FileIO *this /*$s0*/, char *Name /*$a1*/)
 // line 112, offset 0x80085a90
	/* begin block 1 */
		// Start line: 113
		// Start offset: 0x80085A90
	/* end block 1 */
	// End offset: 0x80085ADC
	// End Line: 120

	/* begin block 2 */
		// Start line: 232
	/* end block 2 */
	// End Line: 233

int FileLen__6FileIOPCc(FileIO *this,char *Name)

{
	undefined *puVar1;
	int iVar2;
	
	puVar1 = (undefined *)FindFile__6FileIOPCcPc(this,Name,_6FileIO_FileToLoad);
	iVar2 = -1;
	if (puVar1 == &DAT_00000001) {
		iVar2 = (**(code **)(*(int *)this->_vf + 0x24))
											((int)&(this->SysObj).MemHnd + (int)*(short *)(*(int *)this->_vf + 0x20),
											 _6FileIO_FileToLoad);
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FileNotFound__6FileIOPCc(struct FileIO *this /*$a0*/, char *Name /*$a1*/)
 // line 129, offset 0x80085af4
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x80085AF4
	/* end block 1 */
	// End offset: 0x80085B04
	// End Line: 132

	/* begin block 2 */
		// Start line: 269
	/* end block 2 */
	// End Line: 270

void FileNotFound__6FileIOPCc(FileIO *this,char *Name)

{
	DBG_Halt();
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this /*$s1*/, char *Name /*$a1*/, int Slice /*$s3*/, TDRFuncPtr_StreamFile__6FileIOPCciPFPUciib_bii3Func Func /*$s4*/, int Offset /*stack 16*/, int Size /*stack 20*/)
 // line 138, offset 0x80085b14
	/* begin block 1 */
		// Start line: 139
		// Start offset: 0x80085B14
	/* end block 1 */
	// End offset: 0x80085BCC
	// End Line: 151

	/* begin block 2 */
		// Start line: 287
	/* end block 2 */
	// End Line: 288

void * StreamFile__6FileIOPCciPFPUciib_bii
								 (FileIO *this,char *Name,int Slice,
								 TDRFuncPtr_StreamFile__6FileIOPCciPFPUciib_bii3Func Func,int Offset,int Size)

{
	void *pvVar1;
	
	pvVar1 = FindFile__6FileIOPCcPc(this,Name,_6FileIO_FileToLoad);
	if (pvVar1 == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/FILEIO.CPP",0x91);
	}
	if (Size == -1) {
		Size = (**(code **)(*(int *)this->_vf + 0x24))
										 ((int)&(this->SysObj).MemHnd + (int)*(short *)(*(int *)this->_vf + 0x20),
											_6FileIO_FileToLoad);
	}
	pvVar1 = (void *)(**(code **)(*(int *)this->_vf + 0x34))
														 ((int)&(this->SysObj).MemHnd +
															(int)*(short *)(*(int *)this->_vf + 0x30),_6FileIO_FileToLoad,Slice,
															Func,Offset,Size);
	return pvVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ ReadAtAddr__6FileIOPCcPUci(struct FileIO *this /*$s0*/, char *Name /*$a1*/, unsigned char *Dest /*$s3*/, int Len /*$s1*/)
 // line 157, offset 0x80085bf4
	/* begin block 1 */
		// Start line: 158
		// Start offset: 0x80085BF4
	/* end block 1 */
	// End offset: 0x80085C98
	// End Line: 172

	/* begin block 2 */
		// Start line: 337
	/* end block 2 */
	// End Line: 338

void * ReadAtAddr__6FileIOPCcPUci(FileIO *this,char *Name,uchar *Dest,int Len)

{
	void *pvVar1;
	
	pvVar1 = FindFile__6FileIOPCcPc(this,Name,_6FileIO_FileToLoad);
	if (pvVar1 == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/FILEIO.CPP",0xa4);
	}
	if (Len == -1) {
		Len = (**(code **)(*(int *)this->_vf + 0x24))
										((int)&(this->SysObj).MemHnd + (int)*(short *)(*(int *)this->_vf + 0x20),
										 _6FileIO_FileToLoad);
	}
	(**(code **)(*(int *)this->_vf + 0x1c))
						((int)&(this->SysObj).MemHnd + (int)*(short *)(*(int *)this->_vf + 0x18),
						 _6FileIO_FileToLoad,Dest,Len);
	return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DumpOldPath__6FileIO(struct FileIO *this /*$s0*/)
 // line 180, offset 0x80085cb8
	/* begin block 1 */
		// Start line: 181
		// Start offset: 0x80085CB8

		/* begin block 1.1 */
			// Start line: 181
			// Start offset: 0x80085CB8

			/* begin block 1.1.1 */
				// Start line: 183
				// Start offset: 0x80085CDC
			/* end block 1.1.1 */
			// End offset: 0x80085D04
			// End Line: 186
		/* end block 1.1 */
		// End offset: 0x80085D04
		// End Line: 186
	/* end block 1 */
	// End offset: 0x80085D04
	// End Line: 186

	/* begin block 2 */
		// Start line: 389
	/* end block 2 */
	// End Line: 390

void DumpOldPath__6FileIO(FileIO *this)

{
	uchar uVar1;
	
	if (this->hndPath != -1) {
		uVar1 = GAL_Free(this->hndPath);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"psxsrc/FILEIO.CPP",0xb8);
		}
		this->hndPath = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetSearchPath__6FileIOPCc(struct FileIO *this /*$s0*/, char *Path /*$s1*/)
 // line 193, offset 0x80085d1c
	/* begin block 1 */
		// Start line: 194
		// Start offset: 0x80085D1C
	/* end block 1 */
	// End offset: 0x80085DE0
	// End Line: 208

	/* begin block 2 */
		// Start line: 415
	/* end block 2 */
	// End Line: 416

void SetSearchPath__6FileIOPCc(FileIO *this,char *Path)

{
	uchar uVar1;
	size_t sVar2;
	long lVar3;
	char *pcVar4;
	
	DumpOldPath__6FileIO(this);
	sVar2 = strlen(Path);
	lVar3 = GAL_Alloc(sVar2 + 1,this->MemId,(char *)0x0);
	this->hndPath = lVar3;
	if (lVar3 == -1) {
		DBG_Error((char *)0x0,"psxsrc/FILEIO.CPP",0xc6);
	}
	pcVar4 = (char *)GAL_Lock(this->hndPath);
	this->SearchPath = pcVar4;
	if (this->hndPath == 0) {
		DBG_Error((char *)0x0,"psxsrc/FILEIO.CPP",0xc9);
	}
	strcpy(this->SearchPath,Path);
	strupr__FPc(this->SearchPath);
	uVar1 = GAL_Unlock(this->hndPath);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/FILEIO.CPP",0xcf);
	}
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ FindFile__6FileIOPCcPc(struct FileIO *this /*$s0*/, char *Name /*$s4*/, char *Buffa /*$s1*/)
 // line 215, offset 0x80085df8
	/* begin block 1 */
		// Start line: 216
		// Start offset: 0x80085DF8

		/* begin block 1.1 */
			// Start line: 216
			// Start offset: 0x80085DF8

			/* begin block 1.1.1 */
				// Start line: 223
				// Start offset: 0x80085E54
				// Variables:
			// 		void * Success; // $s3

				/* begin block 1.1.1.1 */
					// Start line: 224
					// Start offset: 0x80085E54

					/* begin block 1.1.1.1.1 */
						// Start line: 227
						// Start offset: 0x80085E68
						// Variables:
					// 		char *Path; // $s2
					/* end block 1.1.1.1.1 */
					// End offset: 0x80085EE4
					// End Line: 243
				/* end block 1.1.1.1 */
				// End offset: 0x80085EE4
				// End Line: 243
			/* end block 1.1.1 */
			// End offset: 0x80085EE8
			// End Line: 246
		/* end block 1.1 */
		// End offset: 0x80085EE8
		// End Line: 246
	/* end block 1 */
	// End offset: 0x80085EE8
	// End Line: 246

	/* begin block 2 */
		// Start line: 459
	/* end block 2 */
	// End Line: 460

void * FindFile__6FileIOPCcPc(FileIO *this,char *Name,char *Buffa)

{
	int iVar1;
	void *pvVar2;
	undefined *puVar3;
	char *Src;
	undefined *puVar4;
	
	strcpy(Buffa,Name);
	strupr__FPc(Buffa);
	iVar1 = (**(code **)(*(int *)this->_vf + 0x14))
										((int)&(this->SysObj).MemHnd + (int)*(short *)(*(int *)this->_vf + 0x10),Buffa);
	puVar3 = &DAT_00000001;
	if (iVar1 == 0) {
		puVar4 = (undefined *)0x0;
		pvVar2 = SearchPathExists__6FileIO(this);
		puVar3 = (undefined *)0x0;
		if (pvVar2 != (void *)0x0) {
			LockSearchPath__6FileIO(this);
			Src = this->SearchPath;
			do {
				Src = CopyPathItem__6FileIOPcPCc(this,Buffa,Src);
				puVar3 = puVar4;
				if (Src == (char *)0x0) break;
				strcat(Buffa,&DAT_8011ab38);
				strcat(Buffa,Name);
				iVar1 = (**(code **)(*(int *)this->_vf + 0x14))
													((int)&(this->SysObj).MemHnd + (int)*(short *)(*(int *)this->_vf + 0x10),
													 Buffa);
				if (iVar1 != 0) {
					puVar4 = &DAT_00000001;
				}
				puVar3 = puVar4;
			} while (puVar4 == (undefined *)0x0);
			UnlockSearchPath__6FileIO(this);
		}
	}
	return puVar3;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ CopyPathItem__6FileIOPcPCc(struct FileIO *this /*$a0*/, char *Dst /*$s2*/, char *Src /*$a1*/)
 // line 254, offset 0x80085f0c
	/* begin block 1 */
		// Start line: 255
		// Start offset: 0x80085F0C
		// Variables:
	// 		char *Ptr; // $s0
	// 		int Len; // $s1
	/* end block 1 */
	// End offset: 0x80085F98
	// End Line: 275

	/* begin block 2 */
		// Start line: 538
	/* end block 2 */
	// End Line: 539

char * CopyPathItem__6FileIOPcPCc(FileIO *this,char *Dst,char *Src)

{
	char cVar1;
	char cVar2;
	char *pcVar3;
	char *__n;
	
	cVar2 = *Src;
	cVar1 = *Src;
	pcVar3 = Src;
	while ((cVar1 != '\0' && (cVar2 != ';'))) {
		pcVar3 = pcVar3 + 1;
		cVar1 = *pcVar3;
		cVar2 = *pcVar3;
	}
	__n = pcVar3 + -(int)Src;
	if (__n == (char *)0x0) {
		pcVar3 = (char *)0x0;
	}
	else {
		memcpy(Dst,Src,(size_t)__n);
		cVar1 = *pcVar3;
		Dst[(int)__n] = '\0';
		if (cVar1 != '\0') {
			pcVar3 = pcVar3 + 1;
		}
	}
	return pcVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LockSearchPath__6FileIO(struct FileIO *this /*$s0*/)
 // line 282, offset 0x80085fb4
	/* begin block 1 */
		// Start line: 283
		// Start offset: 0x80085FB4
	/* end block 1 */
	// End offset: 0x80085FF8
	// End Line: 287

	/* begin block 2 */
		// Start line: 598
	/* end block 2 */
	// End Line: 599

void LockSearchPath__6FileIO(FileIO *this)

{
	void *pvVar1;
	char *pcVar2;
	
	pvVar1 = SearchPathExists__6FileIO(this);
	if (pvVar1 != (void *)0x0) {
		pcVar2 = (char *)GAL_Lock(this->hndPath);
		this->SearchPath = pcVar2;
		if (pcVar2 == (char *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/FILEIO.CPP",0x11e);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UnlockSearchPath__6FileIO(struct FileIO *this /*$s0*/)
 // line 295, offset 0x8008600c
	/* begin block 1 */
		// Start line: 296
		// Start offset: 0x8008600C

		/* begin block 1.1 */
			// Start line: 296
			// Start offset: 0x8008600C

			/* begin block 1.1.1 */
				// Start line: 298
				// Start offset: 0x80086028
			/* end block 1.1.1 */
			// End offset: 0x80086050
			// End Line: 300
		/* end block 1.1 */
		// End offset: 0x80086050
		// End Line: 300
	/* end block 1 */
	// End offset: 0x80086050
	// End Line: 300

	/* begin block 2 */
		// Start line: 624
	/* end block 2 */
	// End Line: 625

void UnlockSearchPath__6FileIO(FileIO *this)

{
	uchar uVar1;
	void *pvVar2;
	
	pvVar2 = SearchPathExists__6FileIO(this);
	if ((pvVar2 != (void *)0x0) && (uVar1 = GAL_Unlock(this->hndPath), uVar1 == '\0')) {
		DBG_Error((char *)0x0,"psxsrc/FILEIO.CPP",299);
	}
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ SearchPathExists__6FileIO(struct FileIO *this /*$a0*/)
 // line 308, offset 0x80086064
	/* begin block 1 */
		// Start line: 309
		// Start offset: 0x80086064
	/* end block 1 */
	// End offset: 0x80086070
	// End Line: 310

	/* begin block 2 */
		// Start line: 651
	/* end block 2 */
	// End Line: 652

void * SearchPathExists__6FileIO(FileIO *this)

{
	return (void *)(uint)(~this->hndPath != 0);
}



// decompiled code
// original method signature: 
// void * /*$ra*/ Save__6FileIOPCcPUci(struct FileIO *this /*$a0*/, char *Name /*$a1*/, unsigned char *Addr /*$a2*/, int Len /*$a3*/)
 // line 317, offset 0x80086078
	/* begin block 1 */
		// Start line: 318
		// Start offset: 0x80086078
	/* end block 1 */
	// End offset: 0x800860A4
	// End Line: 319

	/* begin block 2 */
		// Start line: 668
	/* end block 2 */
	// End Line: 669

void * Save__6FileIOPCcPUci(FileIO *this,char *Name,uchar *Addr,int Len)

{
	void *pvVar1;
	
	pvVar1 = (void *)(**(code **)(*(int *)this->_vf + 0x2c))
														 ((int)&(this->SysObj).MemHnd +
															(int)*(short *)(*(int *)this->_vf + 0x28));
	return pvVar1;
}





