#ifndef GPANEL_H
#define GPANEL_H


extern unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm); // 0x8008D9D0

extern struct GPanel * __6GPaneli(struct GPanel *this, int Ofs); // 0x8008DA14

extern void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr); // 0x8008DA6C

extern void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr); // 0x8008DEEC

extern void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr); // 0x8008E370

extern void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr); // 0x8008E4DC

extern int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType); // 0x8008E528

extern void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr); // 0x8008E8E4

extern void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr); // 0x8008E9D8


#endif
