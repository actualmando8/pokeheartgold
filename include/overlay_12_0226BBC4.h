#ifndef GUARD_OVERLAY_12_0226BBC4_H
#define GUARD_OVERLAY_12_0226BBC4_H

void ov12_0226BBC4(SpriteSystem *sys, SpriteManager *mgr, enum HeapID heapID, NARC *narc);
void ov12_0226BC40(SpriteManager *mgr, u32 charId, u32 cellId, u32 animId);
void *ov12_0226BC68(SpriteSystem *sys, SpriteManager *mgr, enum HeapID heapID, void *args);
void ov12_0226BCE4(void *state);
void ov12_0226BCFC(void *state, s16 x, s16 y, fx32 yOffset);
void ov12_0226BD2C(void *state, s16 x, s16 y);
void ov12_0226BD38(void *state);
void ov12_0226BD4C(void *state, s16 countdown);
u8 ov12_0226BD50(void *state);
void ov12_0226BEB8(void *state);

#endif // GUARD_OVERLAY_12_0226BBC4_H
