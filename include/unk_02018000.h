#ifndef UNK_02018000_H
#define UNK_02018000_H

#include "types.h"

typedef struct ModelContext {
    void *model;
    void *mdlSet;
    void *anmObj;
    void *tex;
    u32 flag;
} ModelContext;

typedef struct RenderObj {
    u8 renderData[0x54];
    s32 pos_x, pos_y, pos_z;
    s32 scale_x, scale_y, scale_z;
    u32 visible;
    s16 rot_x, rot_y, rot_z;
} RenderObj;

void sub_02018030(ModelContext *ctx, void *narc, u32 blockId, u32 a3);
void sub_02018068(ModelContext *ctx);
void sub_020180BC(ModelContext *ctx, void *a1, void *narc, u32 blockId, 
                  u32 a4, u32 a5, u32 a6);
void sub_020180E8(ModelContext *ctx, void *a1, void *a2, void *a3);
void sub_020180F8(ModelContext *ctx, void *a1);
void sub_02018124(ModelContext *ctx, s32 a1);
u32 sub_0201815C(ModelContext *ctx, s32 a1);
void sub_02018198(ModelContext *ctx, s32 pos);
s32 sub_020181A0(ModelContext *ctx);
s32 sub_020181A4(ModelContext *ctx);
void sub_020181B0(RenderObj *obj, void *a1);
void sub_020181D4(void *renderObj, void *anmObj);
void sub_020181E0(void *renderObj, void *anmObj);
void sub_020181EC(RenderObj *obj);
void sub_02018288(RenderObj *obj, void *a1);
void sub_020182A0(RenderObj *obj, u32 visible);
u32 sub_020182A4(RenderObj *obj);
void sub_020182A8(RenderObj *obj, s32 x, s32 y, s32 z);
void sub_020182B0(RenderObj *obj, s32 *x, s32 *y, s32 *z);
void sub_020182C4(RenderObj *obj, s32 x, s32 y, s32 z);
void sub_020182CC(RenderObj *obj, s32 *x, s32 *y, s32 *z);
void sub_020182E0(RenderObj *obj, u32 idx, s16 angle);
s16 sub_020182EC(RenderObj *obj, u32 idx);

#endif
