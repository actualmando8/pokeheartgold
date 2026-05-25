#ifndef GUARD_OVERLAY_80_02239BF0_H
#define GUARD_OVERLAY_80_02239BF0_H

typedef struct {
    u8 field0;
    u8 state;
    s16 field2;
    s16 field4;
    s16 field6;
    s16 timer;
    s16 field8;
    s16 fieldA;
    s16 fieldC;
    u32 field30;
    u32 field34;
    u32 field38;
    u32 field3C;
} BattleCmdState;

void *ov80_02239BF0(void *param1, u8 flag, void *data, s32 count);
void ov80_02239C28(void *param1, BattleCmdState *state);
void ov80_02239C54(void *base);
u32 ov80_02239C80(void *param1, BattleCmdState *state);

extern void *ov80_0223DB24[];

#endif
