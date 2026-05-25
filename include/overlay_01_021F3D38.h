#ifndef GUARD_OVERLAY_01_021F3D38_H
#define GUARD_OVERLAY_01_021F3D38_H

#include "global.h"

void *ov01_021F3D38(enum HeapID heapId);
void ov01_021F3D50(void *ctx);
void ov01_021F3D68(void *ctx, u8 y, u16 x);
void ov01_021F3D70(void *ctx, u8 bits);
void ov01_021F3D80(void);
u8 ov01_021F3D84(void *ctx);
u32 ov01_021F3D88(void *ctx);
void ov01_021F3D98(void *parent);
void ov01_021F3DFC(void *parent, int a1);
void ov01_021F3E10(void *parent);
void ov01_021F3E4C(void *parent);
u32 ov01_021F3EA0(void *parent);
u32 ov01_021F3EE0(void *parent);

#endif
