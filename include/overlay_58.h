#ifndef OVERLAY_58_H
#define OVERLAY_58_H

#include "global.h"

typedef struct ApricornBoxContext ApricornBoxContext;

u32 ov58_022378C0(u32 *overlayPtr);
u32 ApricornBox_Init(void *a1);
u32 ApricornBox_Main(void *a1, ApricornBoxContext *ctx);
u32 ApricornBox_Exit(void *a1);
void ov58_022379C0(void *ctx, void *mon, u32 a3);
void ov58_02237B94(void *a1);
u32 ov58_02237B98(ApricornBoxContext *ctx);
u32 ov58_02237BB0(ApricornBoxContext *ctx);
u32 ov58_02237BD4(ApricornBoxContext *ctx);
u32 ov58_02237C4C(ApricornBoxContext *ctx);
u32 ov58_02237C88(ApricornBoxContext *ctx);
u32 ov58_02237CA0(ApricornBoxContext *ctx);

#endif
