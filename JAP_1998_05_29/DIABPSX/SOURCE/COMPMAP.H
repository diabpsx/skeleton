#ifndef COMPMAP_H
#define COMPMAP_H


extern struct CompClass * __9CompClass(struct CompClass *this); // 0x80052A90

extern int GetSize__14CompressedLevs(struct CompressedLevs *this); // 0x80052A54

extern struct AMap * __4AMap(struct AMap *this); // 0x800821A8

extern void _._4AMap(struct AMap *this, int __in_chrg); // 0x80082160

extern void * IsCompressed__4AMap(struct AMap *this); // 0x80082154

extern void CheckMapNum__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum); // 0x80082120


// decompiled code
// original method signature: 
// struct CompClass * /*$ra*/ __9CompClass(struct CompClass *this /*$a0*/)
 // line 51, offset 0x80052a90
	/* begin block 1 */
		// Start line: 102
	/* end block 1 */
	// End Line: 103

/* WARNING: Unknown calling convention yet parameter storage is locked */

CompClass * __9CompClass(CompClass *this)

{
	*(undefined4 *)this = 0x80116850;
	return this;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetSize__14CompressedLevs(struct CompressedLevs *this /*$s0*/)
 // line 60, offset 0x80052a54
	/* begin block 1 */
		// Start line: 61
		// Start offset: 0x80052A54
	/* end block 1 */
	// End offset: 0x80052A7C
	// End Line: 66

	/* begin block 2 */
		// Start line: 120
	/* end block 2 */
	// End Line: 121

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetSize__14CompressedLevs(CompressedLevs *this)

{
	long lVar1;
	
	lVar1 = GAL_AlignSizeToType(this->Size[0x15],1);
	return this->Offset[0x15] + lVar1;
}



// decompiled code
// original method signature: 
// struct AMap * /*$ra*/ __4AMap(struct AMap *this /*$s0*/)
 // line 75, offset 0x800821a8
	/* begin block 1 */
		// Start line: 76
		// Start offset: 0x800821A8
	/* end block 1 */
	// End offset: 0x800821A8
	// End Line: 76

	/* begin block 2 */
		// Start line: 150
	/* end block 2 */
	// End Line: 151

AMap * __4AMap(AMap *this)

{
	this->hnd = -1;
	Init__4AMap(this);
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._4AMap(struct AMap *this /*$s1*/, int __in_chrg /*$s0*/)
 // line 80, offset 0x80082160
	/* begin block 1 */
		// Start line: 81
		// Start offset: 0x80082160
	/* end block 1 */
	// End offset: 0x80082160
	// End Line: 81

	/* begin block 2 */
		// Start line: 160
	/* end block 2 */
	// End Line: 161

void ___4AMap(AMap *this,int __in_chrg)

{
	Init__4AMap(this);
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete(this);
	}
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsCompressed__4AMap(struct AMap *this /*$a0*/)
 // line 86, offset 0x80082154
	/* begin block 1 */
		// Start line: 87
		// Start offset: 0x80082154
	/* end block 1 */
	// End offset: 0x80082158
	// End Line: 87

	/* begin block 2 */
		// Start line: 172
	/* end block 2 */
	// End Line: 173

void * IsCompressed__4AMap(AMap *this)

{
	return this->Compressed;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckMapNum__13CompLevelMapsi(struct CompLevelMaps *this /*$a0*/, int MapNum /*$a1*/)
 // line 129, offset 0x80082120
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x80082120
	/* end block 1 */
	// End offset: 0x80082144
	// End Line: 130

	/* begin block 2 */
		// Start line: 258
	/* end block 2 */
	// End Line: 259

void CheckMapNum__13CompLevelMapsi(CompLevelMaps *this,int MapNum)

{
	if (0x15 < (uint)MapNum) {
		DBG_Error((char *)0x0,"source/compmap.h",0x81);
	}
	return;
}





extern struct CompLevelMaps * __13CompLevelMapsRC9CompClass(struct CompLevelMaps *this, struct CompClass *NewCompObj); // 0x80081608

extern void _._13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg); // 0x80081674

extern void Init__13CompLevelMaps(struct CompLevelMaps *this); // 0x80081704

extern void InitAllMaps__13CompLevelMaps(struct CompLevelMaps *this); // 0x80081734

extern struct DLevel * GetMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum); // 0x80081788

extern void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Dl); // 0x80081804

extern void ImportData__13CompLevelMapsP14CompressedLevs(struct CompLevelMaps *this, struct CompressedLevs *Levs); // 0x800818A4

extern int ExportData__13CompLevelMapsPUc(struct CompLevelMaps *this, unsigned char *U8Dest); // 0x80081950

extern void MakeSureMapXDecomped__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum); // 0x800819FC

extern void Init__4AMap(struct AMap *this); // 0x80081AA8

extern int WriteCompressed__4AMapPUcRC9CompClass(struct AMap *this, unsigned char *Dest, struct CompClass *CompObj); // 0x80081B14

extern void SetCompData__4AMapPCUci(struct AMap *this, unsigned char *Data, int NewSize); // 0x80081B88

extern struct DLevel * GetMap__4AMap(struct AMap *this); // 0x80081C78

extern void ReleaseMap__4AMapP6DLevel(struct AMap *this, struct DLevel *Dl); // 0x80081D98

extern void CompressMap__4AMapRC9CompClass(struct AMap *this, struct CompClass *CompObj); // 0x80081E28

extern void DecompressMap__4AMapRC9CompClass(struct AMap *this, struct CompClass *CompObj); // 0x80081FEC


#endif
