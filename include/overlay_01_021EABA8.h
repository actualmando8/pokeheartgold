#ifndef POKEHEARTGOLD_OVERLAY_01_021EABA8_H
#define POKEHEARTGOLD_OVERLAY_01_021EABA8_H

#include "nitro/fx/fx_vec.h"

typedef struct Camera Camera;

void ov01_021EABA8(void *parent, void **handlerOut, u32 presetIndex, u32 useHistory);
void ov01_021EAC30(void *handler);
void *ov01_021EAC4C(void);
void ov01_021EAC64(void *ptr);
void ov01_021EAC6C(void *handler, u32 presetIndex);
void ov01_021EACBC(void *handler, u32 presetIndex);
u32 ov01_021EAD8C(void *handler);
void ov01_021EAE50(Camera *camera, u16 *startAngle, u16 *endAngle, u32 step);
void ov01_021EAEA4(Camera *camera, VecFx32 *startPos, VecFx32 *endPos, u32 step);
s32 ov01_021EAEE0(s32 start, s32 end, u32 step);

#endif // POKEHEARTGOLD_OVERLAY_01_021EABA8_H
