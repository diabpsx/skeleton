#include "THISDUST.H"
#include "SYSOBJ.H"


// decompiled code
// original method signature: 
// struct SysObj * /*$ra*/ __6SysObj(struct SysObj *this /*$v0*/)
 // line 65, offset 0x80086618
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x80086618
	/* end block 1 */
	// End offset: 0x80086618
	// End Line: 66

	/* begin block 2 */
		// Start line: 130
	/* end block 2 */
	// End Line: 131

SysObj * __6SysObj(SysObj *this)

{
	long lVar1;
	
	lVar1 = NewHnd;
	NewHnd = 0xffffffff;
	this->MemHnd = lVar1;
	return this;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ __nw__6SysObji(int Amount /*$a0*/)
 // line 77, offset 0x80086630
	/* begin block 1 */
		// Start line: 78
		// Start offset: 0x80086630
	/* end block 1 */
	// End offset: 0x8008664C
	// End Line: 80

	/* begin block 2 */
		// Start line: 155
	/* end block 2 */
	// End Line: 156

void * __nw__6SysObji(int Amount)

{
	DBG_Error((char *)0x0,"psxsrc/SYSOBJ.CPP",0x4e);
	return (void *)0x0;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ __nw__6SysObjiUl(int Amount /*$a0*/, unsigned long RamID /*$a1*/)
 // line 89, offset 0x8008665c
	/* begin block 1 */
		// Start line: 90
		// Start offset: 0x8008665C
		// Variables:
	// 		long hnd; // $s0
	// 		void *RetAddr; // $s1
	/* end block 1 */
	// End offset: 0x800866C0
	// End Line: 102

	/* begin block 2 */
		// Start line: 179
	/* end block 2 */
	// End Line: 180

void * __nw__6SysObjiUl(int Amount,ulong RamID)

{
	long Handle;
	void *pvVar1;
	
	Handle = GAL_Alloc(Amount,RamID,(char *)0x0);
	if (Handle == -1) {
		DBG_Error((char *)0x0,"psxsrc/SYSOBJ.CPP",0x5e);
	}
	pvVar1 = GAL_Lock(Handle);
	if (pvVar1 == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/SYSOBJ.CPP",0x61);
	}
	NewHnd = Handle;
	return pvVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ __dl__6SysObjPv(void *ptr /*$a0*/)
 // line 111, offset 0x800866d8
	/* begin block 1 */
		// Start line: 112
		// Start offset: 0x800866D8
		// Variables:
	// 		struct SysObj *This; // $s0
	/* end block 1 */
	// End offset: 0x80086730
	// End Line: 120

	/* begin block 2 */
		// Start line: 227
	/* end block 2 */
	// End Line: 228

void __dl__6SysObjPv(void *ptr)

{
	uchar uVar1;
	
	if (*(int *)ptr == -1) {
		DBG_Error((char *)0x0,"psxsrc/SYSOBJ.CPP",0x74);
	}
	uVar1 = GAL_Free(*(long *)ptr);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/SYSOBJ.CPP",0x77);
	}
	return;
}





