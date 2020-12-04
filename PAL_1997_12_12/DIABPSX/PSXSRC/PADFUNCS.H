#ifndef PADFUNCS_H
#define PADFUNCS_H


extern void DrawArrow__Fii(int x1, int y1); // 0x8009636C

extern void show_spell_dir__Fi(int pnum); // 0x80096570

extern void release_spell__Fi(int pnum); // 0x800969E4

extern void select_belt_item__Fi(int pnum); // 0x80096A58

extern unsigned char any_belt_items__Fv(); // 0x80096A60

extern void get_last_inv__Fv(); // 0x80096AC8

extern void get_next_inv__Fv(); // 0x80096BF8

extern void pad_func_up__Fi(int pnum); // 0x80096D30

extern void pad_func_down__Fi(int pnum); // 0x80096D5C

extern void pad_func_left__Fi(int pnum); // 0x80096D88

extern void pad_func_right__Fi(int pnum); // 0x80096D90

extern void pad_func_select__Fi(int pnum); // 0x80096D98

extern void pad_func_Attack__Fi(int pnum); // 0x80096E54

extern void pad_func_Action__Fi(int pnum); // 0x80097270

extern void InitTargetCursor__Fi(int pnum); // 0x80097584

extern void RemoveTargetCursor__Fi(int pnum); // 0x8009768C

extern void pad_func_Cast_Spell__Fi(int pnum); // 0x8009771C

extern void pad_func_Use_Item__Fi(int pnum); // 0x80097C9C

extern void pad_func_Chr__Fi(int pnum); // 0x80097D5C

extern void pad_func_Inv__Fi(int pnum); // 0x80097E64

extern void pad_func_SplBook__Fi(int pnum); // 0x80097F50

extern void pad_func_QLog__Fi(int pnum); // 0x8009803C

extern void pad_func_SpellBook__Fi(int pnum); // 0x800980C0

extern void pad_func_AutoMap__Fi(int pnum); // 0x80098158

extern void pad_func_Quick_Spell__Fi(int pnum); // 0x80098214

extern void check_inv__FiPci(int pnum, char *ilist, int entries); // 0x80098290

extern void pad_func_Quick_Use_Health__Fi(int pnum); // 0x80098458

extern void pad_func_Quick_Use_Mana__Fi(int pnum); // 0x80098480

extern int get_max_find_size__FPici(int *lsize, char mask, int pnum); // 0x800984A8

extern int sort_gold__Fi(int pnum); // 0x800985E8

extern void DrawObjSelector__Fi(int pnum); // 0x800986F4

extern void DrawObjTask__FP4TASK(struct TASK *T); // 0x80098FB8

extern void add_area_find_object__Fciii(char type, int index, int x, int y); // 0x80099094

extern unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance); // 0x800991A0

extern unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum); // 0x80099560

extern void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current); // 0x800997B4

extern void _GLOBAL_.D.gplayer(); // 0x800999D8

extern void _GLOBAL_.I.gplayer(); // 0x80099A00


#endif
