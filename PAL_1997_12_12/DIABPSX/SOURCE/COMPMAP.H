#ifndef COMPMAP_H
#define COMPMAP_H


extern struct CompLevelMaps * __13CompLevelMaps(struct CompLevelMaps *this); // 0x8007AB30

extern void _._13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg); // 0x8007AB5C

extern void Init__13CompLevelMaps(struct CompLevelMaps *this); // 0x8007AB84

extern void Dump__13CompLevelMaps(struct CompLevelMaps *this); // 0x8007ABB4

extern void DumpMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum); // 0x8007AC58

extern struct DLevel * UseMap__13CompLevelMapsi(struct CompLevelMaps *this, int Val); // 0x8007ACC0

extern void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Map); // 0x8007AD94

extern void * IsMapCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val); // 0x8007AE04

extern void WriteBackCachedMap__13CompLevelMaps(struct CompLevelMaps *this); // 0x8007AE78

extern void DecompToCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val); // 0x8007B08C

extern void BuildCompLevelImage__13CompLevelMapsP17CompLevelMemImage(struct CompLevelMaps *this, struct CompLevelMemImage *Dest); // 0x8007B22C

extern void InitFromCompLevelImage__13CompLevelMapsP17CompLevelMemImage(struct CompLevelMaps *this, struct CompLevelMemImage *Src); // 0x8007B38C

extern int DoComp__13CompLevelMapsPUcT1i(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int SourceSize); // 0x8007B4CC

extern int DoDecomp__13CompLevelMapsPUcT1ii(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int DestSize, int SourceSize); // 0x8007B504


#endif
