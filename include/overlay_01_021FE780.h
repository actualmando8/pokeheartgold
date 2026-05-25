#ifndef GUARD_OVERLAY_01_021FE780_H
#define GUARD_OVERLAY_01_021FE780_H

#include "global.h"

extern u8 ov01_022090C4[12];
extern u8 ov01_022090D0[12];
extern u32 ov01_022090DC[];

void *ov01_021FE780(void *parent);
void ov01_021FE79C(void *ctx);
void ov01_021FE7AC(void *ctx);
void ov01_021FE7D0(void *ctx);
void ov01_021FE7DC(void *obj, s16 x, s16 z, u32 r3);
u32 ov01_021FE868(void *obj, void *data);
void ov01_021FE8B0(void *r0, void *data);
void ov01_021FE8C8(void *obj, void *data);
void ov01_021FE970(void *obj, void *data);
void ov01_021FE9F4(void *ctx, void *data);

#endif
