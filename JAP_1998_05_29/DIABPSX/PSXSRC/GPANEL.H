#ifndef GPANEL_H
#define GPANEL_H


extern unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm); // 0x800975CC

extern struct GPanel * __6GPaneli(struct GPanel *this, int Ofs); // 0x80097610

extern void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr); // 0x80097674

extern unsigned char SpdTrimCol__Fs(short col); // 0x80097AE8

extern void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr); // 0x80097B20

extern void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr); // 0x8009824C

extern void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr); // 0x800983E8

extern int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType); // 0x80098438

extern void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr); // 0x80098704

extern void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr); // 0x80098830


#endif
