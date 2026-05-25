#ifndef GUARD_OVERLAY_01_021FD1B8_H
#define GUARD_OVERLAY_01_021FD1B8_H

#include "global.h"

extern u32 ov01_02208E1C[];
extern u32 ov01_02208E30[];

void *ov01_021FD1B8(void *parent);
void ov01_021FD1CC(void *ctx);
void ov01_021FD1E8(void *ctx, u16 spriteId, u32 objId, u32 mapId);
void ov01_021FD20C(void *obj);
void ov01_021FD21C(void *ctx);
void *ov01_021FD244(void *ctx, u16 spriteId);
void ov01_021FD258(void *parent, u32 count, void *ctx);
void ov01_021FD290(void *parent, void *event, void *pool);
void *ov01_021FD2CC(void *parent, void *pool);
void ov01_021FD2EC(void *obj, void *parent);
u32 ov01_021FD328(void *obj, void *data);
void ov01_021FD378(void);
void ov01_021FD37C(void *obj, void *data);
void ov01_021FD3E0(void *obj, void *data);
void ov01_021FD3F8(void *parent);

#endif
