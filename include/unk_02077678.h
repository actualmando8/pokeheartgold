#ifndef GUARD_UNK_02077678_H
#define GUARD_UNK_02077678_H

#include "global.h"

extern u8 _02100038[];
extern u32 _0210003C[];
extern u32 _02100048[];
extern u8 _021000A4[];

u32 sub_02077678(u32 idx);
u32 sub_02077690(void);
u32 sub_02077694(void);
u32 sub_02077698(void);
u32 sub_0207769C(u32 idx);
u32 sub_020776B4(void);
void sub_020776B8(void *spriteMgr, void *charRes, void *cellRes, u32 idx);
void sub_020776EC(void *spriteMgr, void *plttRes, void *cellRes, u32 idx);
void sub_02077720(void *spriteMgr, void *plttRes, void *buffer, u32 idx);
void sub_0207775C(void *spriteMgr, void *cellRes, void *animRes, u32 idx);
void sub_020777A4(u32 id);
void sub_020777AC(u32 id);
void sub_020777B4(u32 cellId, u32 animId);
void *sub_020777C8(void *spriteMgr, void *charRes, void *initData, u32 idx);
void thunk_ManagedSprite_DeleteAndFreeResources(void *sprite);
u32 sub_02077800(u32 idx);
u32 sub_02077818(u32 idx);
u32 sub_02077830(void);
void sub_02077834(void *spriteMgr, void *charRes, void *cellRes, u32 idx);
void sub_02077868(u32 id);
void sub_02077870(void *sprite);

#endif
