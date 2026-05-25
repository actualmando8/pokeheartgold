#ifndef OVERLAY_80_02235FC8_H
#define OVERLAY_80_02235FC8_H

#include "types.h"

typedef struct FrontierContext FrontierContext;

void ov80_02235FC8(u32 a1);
void ov80_02235FEC(u32 ptr);
void ov80_02235FF8(u32 type, u32 a2, u32 a3);
void ov80_02236040(FrontierContext *ctx, u32 type, void *a3);
void ov80_0223608C(u32 a1, FrontierContext *ctx, u32 heapId);
void ov80_022362B8(FrontierContext *ctx);
void ov80_02236330(u32 a1, FrontierContext *ctx, u32 heapId);
void ov80_0223641C(FrontierContext *ctx);

#endif
