#ifndef PADFUNCS_H
#define PADFUNCS_H


extern void SetQSpell__Fiii(int pnum, int Spell, int type); // 0x800A09DC

extern void release_spell__Fi(int pnum); // 0x800A09FC

extern void select_belt_item__Fi(int pnum); // 0x800A0A60

extern unsigned char any_belt_items__Fv(); // 0x800A0A68

extern void get_last_inv__Fv(); // 0x800A0AD0

extern void get_next_inv__Fv(); // 0x800A0BFC

extern void pad_func_up__Fi(int pnum); // 0x800A0D30

extern void pad_func_down__Fi(int pnum); // 0x800A0D5C

extern void pad_func_left__Fi(int pnum); // 0x800A0D88

extern void pad_func_right__Fi(int pnum); // 0x800A0D90

extern void pad_func_select__Fi(int pnum); // 0x800A0D98

extern void SetFindMonsterXY__FP12PlayerStructi(struct PlayerStruct *p, int i); // 0x800A0E5C

extern void pad_func_Attack__Fi(int pnum); // 0x800A0EEC

extern void pad_func_Action__Fi(int pnum); // 0x800A13A0

extern void InitTargetCursor__Fi(int pnum); // 0x800A1758

extern void RemoveTargetCursor__Fi(int pnum); // 0x800A178C

extern void * TargetingSpell__Fi(int sp); // 0x800A17D4

extern void pad_func_Cast_Spell__Fi(int pnum); // 0x800A181C

extern void pad_func_Use_Item__Fi(int pnum); // 0x800A1C44

extern void pad_func_BeltList__Fi(int pnum); // 0x800A1E78

extern void pad_func_Chr__Fi(int pnum); // 0x800A1FE0

extern void pad_func_Inv__Fi(int pnum); // 0x800A2114

extern void pad_func_SplBook__Fi(int pnum); // 0x800A2244

extern void pad_func_QLog__Fi(int pnum); // 0x800A2390

extern void pad_func_SpellBook__Fi(int pnum); // 0x800A2484

extern void pad_func_AutoMap__Fi(int pnum); // 0x800A255C

extern void pad_func_Quick_Spell__Fi(int pnum); // 0x800A2618

extern void check_inv__FiPci(int pnum, char *ilist, int entries); // 0x800A278C

extern void pad_func_Quick_Use_Health__Fi(int pnum); // 0x800A2A0C

extern void pad_func_Quick_Use_Mana__Fi(int pnum); // 0x800A2A34

extern void * sort_gold__Fi(int pnum); // 0x800A2A5C

extern void DrawObjSelector__FiP12PlayerStruct(int pnum, struct PlayerStruct *player); // 0x800A2B64

extern void * SelectorActive__Fv(); // 0x800A336C

extern void DrawObjTask__FP4TASK(struct TASK *T); // 0x800A3378

extern void add_area_find_object__Fiii(int index, int x, int y); // 0x800A36B4

extern unsigned char CheckRangeObject__Fiii(int x, int y, int distance); // 0x800A3724

extern unsigned char CheckArea__FiiiUci(int xx, int yy, int range, unsigned char allflag, int pnum); // 0x800A3A9C

extern void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current); // 0x800A4080

extern void _GLOBAL_.D.gplayer(); // 0x800A41F8

extern void _GLOBAL_.I.gplayer(); // 0x800A4220


#endif
