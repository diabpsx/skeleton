#include "THISDUST.H"
#include "SYSINIT.H"


// decompiled code
// original method signature: 
// struct FileIO * /*$ra*/ SYSI_GetFs__Fv()
 // line 163, offset 0x8007ca64
	/* begin block 1 */
		// Start line: 164
		// Start offset: 0x8007CA64
	/* end block 1 */
	// End offset: 0x8007CA68
	// End Line: 165

	/* begin block 2 */
		// Start line: 327
	/* end block 2 */
	// End Line: 328

/* WARNING: Unknown calling convention yet parameter storage is locked */

FileIO * SYSI_GetFs__Fv(void)

{
	return FileSystem;
}



// decompiled code
// original method signature: 
// struct FileIO * /*$ra*/ SYSI_GetOverlayFs__Fv()
 // line 173, offset 0x8007ca70
	/* begin block 1 */
		// Start line: 174
		// Start offset: 0x8007CA70
	/* end block 1 */
	// End offset: 0x8007CA74
	// End Line: 175

	/* begin block 2 */
		// Start line: 347
	/* end block 2 */
	// End Line: 348

/* WARNING: Unknown calling convention yet parameter storage is locked */

FileIO * SYSI_GetOverlayFs__Fv(void)

{
	return OverlayFileSystem;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SortOutFileSystem__Fv()
 // line 182, offset 0x8007ca7c
	/* begin block 1 */
		// Start line: 183
		// Start offset: 0x8007CA7C
	/* end block 1 */
	// End offset: 0x8007CBA4
	// End Line: 243

	/* begin block 2 */
		// Start line: 367
	/* end block 2 */
	// End Line: 368

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
			BL_InitEAC__Fv();
			FileSYS = 2;
			this_01 = (CdIO *)__nw__6SysObjiUl(0x14,1);
			FileSystem = (FileIO *)__4CdIOUl(this_01,1);
			BL_LoadDirectory__Fv();
		}
	}
	OverlayFileSystem = FileSystem;
	if (FileSystem == (FileIO *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/SYSINIT.CPP",0xed);
	}
	SetSearchPath__6FileIOPCc(FileSystem,"target\\data\\load;data;data\\sfx");
	if (OverlayFileSystem != FileSystem) {
		SetSearchPath__6FileIOPCc(OverlayFileSystem,"target\\data\\load;data;data\\sfx");
	}
	return;
}





