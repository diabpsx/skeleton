#ifndef OVERLAY_H
#define OVERLAY_H


extern enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this); // 0x8008C030

extern void * OVR_IsMemcardOverlayBlank__Fv(); // 0x8008BBDC

extern void OVR_LoadPregame__Fv(); // 0x8008BC08

extern void OVR_LoadFrontend__Fv(); // 0x8008BC30

extern void OVR_LoadGame__Fv(); // 0x8008BC58

extern void OVR_LoadFmv__Fv(); // 0x8008BC80

extern void OVR_LoadMemcard__Fv(); // 0x8008BCA8

extern void ClearOutOverlays__Fv(); // 0x8008BCD4

extern void ClearOut__7Overlay(struct Overlay *this); // 0x8008BD2C

extern void Load__7Overlay(struct Overlay *this); // 0x8008BDF0

extern enum OVER_TYPE OVR_GetCurrentOverlay__Fv(); // 0x8008BE60

extern void LoadOver__FR7Overlay(struct Overlay *Ovr); // 0x8008BE6C

extern void _GLOBAL_.I.OVR_Open__Fv(); // 0x8008BEC0


#endif
