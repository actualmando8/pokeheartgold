#ifndef POKEHEARTGOLD_UNK_02014A08_H
#define POKEHEARTGOLD_UNK_02014A08_H

#include "heap.h"
#include "sys_task.h"

typedef struct HBlankDmaContext HBlankDmaContext;

HBlankDmaContext *sub_02014AD8(enum HeapID heapID, void *a1);
void sub_02014B08(HBlankDmaContext *ctx, u8 bufA_start, u8 bufA_end, s16 offset, u32 a3, u32 a4, u32 a5);
void sub_02014BD8(HBlankDmaContext *ctx);
void *sub_02014BF8(HBlankDmaContext *ctx);
void sub_02014C08(HBlankDmaContext *ctx);
void sub_02014C40(HBlankDmaContext *ctx);

#endif
