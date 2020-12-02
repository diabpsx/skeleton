#include "THISDUST.H"
#include "SYSINIT.H"


// decompiled code
// original method signature: 
// struct FileIO * /*$ra*/ SYSI_GetFs__Fv()
 // line 182, offset 0x80084474
	/* begin block 1 */
		// Start line: 183
		// Start offset: 0x80084474
	/* end block 1 */
	// End offset: 0x80084478
	// End Line: 184

	/* begin block 2 */
		// Start line: 365
	/* end block 2 */
	// End Line: 366

/* WARNING: Unknown calling convention yet parameter storage is locked */

FileIO * SYSI_GetFs__Fv(void)

{
	return FileSystem;
}



// decompiled code
// original method signature: 
// struct FileIO * /*$ra*/ SYSI_GetOverlayFs__Fv()
 // line 192, offset 0x80084480
	/* begin block 1 */
		// Start line: 193
		// Start offset: 0x80084480
	/* end block 1 */
	// End offset: 0x80084484
	// End Line: 194

	/* begin block 2 */
		// Start line: 385
	/* end block 2 */
	// End Line: 386

/* WARNING: Unknown calling convention yet parameter storage is locked */

FileIO * SYSI_GetOverlayFs__Fv(void)

{
	return OverlayFileSystem;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SortOutFileSystem__Fv()
 // line 201, offset 0x8008448c
	/* begin block 1 */
		// Start line: 202
		// Start offset: 0x8008448C
		// Variables:
	// 		char *SearchPath; // $s0
	/* end block 1 */
	// End offset: 0x800845A8
	// End Line: 276

	/* begin block 2 */
		// Start line: 405
	/* end block 2 */
	// End Line: 406

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SortOutFileSystem__Fv(void)

{
	PCIO *this;
	DatIO *this_00;
	CdIO *this_01;
	
	FileSYS = 0;
	if (OPT_FileSystem == 0) {
		FileSYS = 1;
		if (-1 < OPT_DevKit) {
			if (OPT_DevKit < 2) {
				this = (PCIO *)__nw__6SysObjiUl(0x14,1);
				FileSystem = (FileIO *)__4PCIOUl(this,1);
			}
			else {
				if (OPT_DevKit == 2) {
					this_00 = (DatIO *)__nw__6SysObjiUl(0x14,1);
					FileSystem = (FileIO *)__5DatIOUl(this_00,1);
				}
			}
		}
	}
	else {
		if (OPT_FileSystem == 1) {
			FileSYS = 2;
			this_01 = (CdIO *)__nw__6SysObjiUl(0x14,1);
			FileSystem = (FileIO *)__4CdIOUl(this_01,1);
			BL_InitEAC__Fv();
		}
	}
	OverlayFileSystem = FileSystem;
	if (FileSystem == (FileIO *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/SYSINIT.CPP",0xff);
	}
	SetSearchPath__6FileIOPCc(FileSystem,"target\\data\\load\\jap;target\\data\\load;data;data\\snd");
	if (OverlayFileSystem != FileSystem) {
		SetSearchPath__6FileIOPCc
							(OverlayFileSystem,"target\\data\\load\\jap;target\\data\\load;data;data\\snd");
	}
	return;
}





