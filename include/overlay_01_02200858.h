#ifndef GUARD_OVERLAY_01_02200858_H
#define GUARD_OVERLAY_01_02200858_H

#include "global.h"

extern u32 ov01_02209334[];
extern u32 ov01_02209340[];
extern u8 ov01_02209354[84];

void *ov01_02200858(void *parent);
void ov01_02200874(void *ctx);
void ov01_02200884(void *ctx);
void ov01_022008A8(void *ctx);
void ov01_022008B4(void *obj, void *parent);
u32 ov01_02200900(void *obj, void *data);
void ov01_02200938(void);
u32 ov01_0220093C(void *obj, void *data);
void ov01_02200A08(void *obj, void *data);
u32 ov01_02200AB0(u8 facing);

#endif
