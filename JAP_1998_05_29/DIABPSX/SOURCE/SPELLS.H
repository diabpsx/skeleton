#ifndef SPELLS_H
#define SPELLS_H


extern int GetManaAmount__Fii(int id, int sn); // 0x80077054

extern void UseMana__Fii(int id, int sn); // 0x80077308

extern unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly); // 0x80077498

extern void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl); // 0x80077538

extern void DoResurrect__Fii(int pnum, int rid); // 0x80077850

extern void DoHealOther__Fii(int pnum, int rid); // 0x80077AB8


#endif
