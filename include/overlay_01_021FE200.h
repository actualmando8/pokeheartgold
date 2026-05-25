#ifndef GUARD_OVERLAY_01_021FE200_H
#define GUARD_OVERLAY_01_021FE200_H

#include "global.h"
#include "overlay_01_021F1348.h"

extern const UnkOv01_02209280 ov01_02208FE0;
extern const u32 ov01_02208FF4[];
extern const u32 ov01_0220901C[];
extern const u32 ov01_02209044[];

UnkOv01_021FFECC *ov01_021FE200(void *parent);
void ov01_021FE220(UnkOv01_021FFECC *entity);
void ov01_021FE3C4(LocalMapObject *obj, u32 type, u32 row, u32 col);
void ov01_021FE3D0(LocalMapObject *obj, u32 type, u32 row, u32 col);
void ov01_021FE3DC(LocalMapObject *obj, u32 type, u32 row, u32 col);
void ov01_021FE3E8(LocalMapObject *obj, u32 type, u32 row, u32 col);

#endif
