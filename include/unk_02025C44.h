#ifndef GUARD_UNK_02025C44_H
#define GUARD_UNK_02025C44_H

#include "global.h"

void GF_InitG2dRenderer(void *renderer, void *surface);
void sub_02025C54(void *dst, void *src, void *r2, void *r3, void *r4, void *r5);
void GF_SetG2dRendererSurface(void *dst, void *src);
u32 sub_02025C98(void *matrixA, void *matrixB, void *bounds);

#endif
