#ifndef GUARD_OVERLAY_01_021FAD1C_H
#define GUARD_OVERLAY_01_021FAD1C_H

#include "global.h"

u32 ov01_021FAD1C(u32 *aMin, u32 *bMin, u32 *aMax, u32 *bMax);
void ov01_021FAD6C(void *mesh, u16 vertIdx, u32 *out);
void ov01_021FAD9C(void *mesh, u16 faceIdx, u32 *out);
u32 ov01_021FADBC(void *mesh, u16 faceIdx);
void ov01_021FADD4(u32 *results);
u32 ov01_021FADEC(u32 *faces, u16 count, u32 target, u16 *outIdx);
u32 ov01_021FAE50(void *mesh, u32 rayType, u32 *rayOrig, u32 *rayDir, u32 *outResults, u32 *outCount);

#endif
