#ifndef OVERLAY_H
#define OVERLAY_H


extern enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this); // 0x80095838

extern void * OVR_IsMemcardOverlayBlank__Fv(); // 0x800953F8

extern void OVR_LoadPregame__Fv(); // 0x80095424

extern void OVR_LoadFrontend__Fv(); // 0x8009544C

extern void OVR_LoadGame__Fv(); // 0x80095474

extern void OVR_LoadFmv__Fv(); // 0x8009549C

extern void OVR_LoadMemcard__Fv(); // 0x800954C4

extern void ClearOutOverlays__Fv(); // 0x800954F0

extern void ClearOut__7Overlay(struct Overlay *this); // 0x80095548

extern void Load__7Overlay(struct Overlay *this); // 0x8009560C

extern enum OVER_TYPE OVR_GetCurrentOverlay__Fv(); // 0x80095668

extern void LoadOver__FR7Overlay(struct Overlay *Ovr); // 0x80095674

extern void _GLOBAL_.I.OVR_Open__Fv(); // 0x800956C8


#endif
