#ifndef GUARD_UNK_020192D0_H
#define GUARD_UNK_020192D0_H

#include "global.h"

extern u32 _020F6288[];
extern u32 _021D1108;

u32 sub_020192D0(void *overlayData);
u32 sub_0201935C(void *overlayData, void *state);
u32 sub_02019490(void *overlayData);
void sub_020194B4(void *overlayData);
void sub_020194F8(void *data);
void *sub_02019520(u32 irqFlags, void *heap, u32 size);
void sub_02019548(u32 irqFlags, void *ptr);

#endif
