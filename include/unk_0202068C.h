#ifndef POKEHEARTGOLD_UNK_0202068C_H
#define POKEHEARTGOLD_UNK_0202068C_H

#include "heap.h"

typedef struct FaceIconContext FaceIconContext;

FaceIconContext *sub_0202068C(enum HeapID heapID, int count);
void sub_020206C8(FaceIconContext *ctx);
void *sub_020206E0(FaceIconContext *ctx, void *src, void *data, u32 unk_8, u32 unk_C, u8 frontIconId, u8 backIconId);
void sub_02020738(void *entry);
void sub_02020764(void *entry, u8 backIconId);
s32 sub_020208CC(void *a0, void *a1);
void *sub_020208DC(void *res, const s8 *name);
void *sub_02020910(void *res, u8 iconId);
u32 sub_0202094C(void *a0, void *a1, void *a2);
u32 sub_020209AC(void *res, u8 iconId, void *a1, void *a2);
u32 sub_020209E0(void *res, const s8 *name, void *a1, void *a2);

#endif
