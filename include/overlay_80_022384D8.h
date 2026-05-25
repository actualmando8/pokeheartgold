#ifndef GUARD_OVERLAY_80_022384D8_H
#define GUARD_OVERLAY_80_022384D8_H

typedef struct {
    u32 task;
    u32 parent;
    u16 field8;
    u16 fieldA;
} AnimContext;

typedef struct {
    u32 parent;
    AnimContext **contexts;
} AnimParent;

AnimParent *ov80_022384D8(u32 parent);
AnimContext **ov80_022384FC(u32 parent);
void ov80_02238530(void *task, void *data);
void ov80_022385B0(AnimParent *p);
void ov80_022385C4(AnimContext *ctx);
u32 ov80_022385D8(u32 index);
u32 ov80_02238610(u32 index);

#endif
