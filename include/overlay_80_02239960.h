#ifndef GUARD_OVERLAY_80_02239960_H
#define GUARD_OVERLAY_80_02239960_H

typedef struct {
    u32 models[8];
    u16 field20;
    u16 field22;
} ModelManager;

void *ov80_02239960(u16 field20);
void ov80_02239980(void *arr);
void *ov80_022399A4(ModelManager *mgr, u32 index, void *param2, u32 param3);
void ov80_02239A1C(ModelManager *mgr, u32 index);
void ov80_02239A38(void);
void *ov80_02239A60(ModelManager *mgr, u32 index);
u32 ov80_02239A74(void *arr);
void ov80_02239A98(void *model);
void *ov80_02239AB0(void);
void *ov80_02239AD4(void);

#endif
