#ifndef GUARD_OVERLAY_01_021EA8E0_H
#define GUARD_OVERLAY_01_021EA8E0_H

typedef struct MaterialAttr MaterialAttr;

MaterialAttr *ov01_021EA8E0(void);
void ov01_021EA8FC(MaterialAttr **attrPtr);
void ov01_021EA9B0(void *attrData, NNSG3dResMdlSet *mdlSet, u32 flags);
void ov01_021EAAB8(void *lightData, u8 idx, s16 x, s16 y);
void ov01_021EAAE0(void *lightData, u8 idx, u16 color);
void ov01_021EAAF4(void *attrData, u16 r, u32 a, BOOL apply);
void ov01_021EAB08(void *attrData, u16 g, BOOL apply);
void ov01_021EAB1C(void *attrData, u16 r, u32 a, BOOL apply);
void ov01_021EAB30(void *attrData, u16 g, BOOL apply);
void ov01_021EAB44(void *attrData, u32 polygonMode, BOOL apply);
void ov01_021EAB58(void *attrData, u32 cullMode, BOOL apply);
void ov01_021EAB6C(void *attrData, u32 alpha, BOOL apply);
void ov01_021EAB80(void *attrData, u32 mask, BOOL apply, BOOL update);

#endif // GUARD_OVERLAY_01_021EA8E0_H
