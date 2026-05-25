#ifndef GUARD_OVERLAY_01_021FB368_H
#define GUARD_OVERLAY_01_021FB368_H

typedef struct {
    u32 count;
    u32 *records;
} HitboxArray;

typedef struct {
    s32 x1;
    s32 y1;
    s32 x2;
    s32 y2;
    u32 fieldC;
    u32 valid;
} HitboxRecord;

u32 ov01_021FB368(s32 x, s32 y, HitboxRecord *rect);
HitboxArray *ov01_021FB3A4(u32 count, HeapID heapId);
void ov01_021FB3E4(u32 index, s32 x1, s32 y1, s32 x2, s32 y2, u32 fieldC, HitboxArray *arr);
void ov01_021FB418(HitboxArray *arr);
u32 ov01_021FB42C(s32 x, s32 y, HitboxArray *arr, u8 *out);
u32 ov01_021FB474(u32 index, HitboxArray *arr);
void ov01_021FB4A0(u32 index, u32 value, HitboxArray *arr);

#endif
