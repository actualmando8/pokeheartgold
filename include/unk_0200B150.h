#ifndef GUARD_UNK_0200B150_H
#define GUARD_UNK_0200B150_H

#include "global.h"

void *OamManager_Create(u32 fromOBJmain, u32 numOBJmain, u32 fromAffineMain, u32 numAffineMain, u32 fromOBJsub, u32 numOBJsub, u32 fromAffineSub, u32 numAffineSub, enum HeapID heapID);
void sub_0200B194(u32 width, u32 height, u32 r2, u32 r3);
void OamManager_ApplyAndResetBuffers(void);
void OamManager_Free(void);
void sub_0200B27C(void *r0, void *r1, u32 isMain, void *r3);
void thunk_ClearMainOAM(enum HeapID heapID);
void thunk_ClearSubOAM(enum HeapID heapID);
void *sub_0200B2F0(void *oam, void *affine);
void *sub_0200B310(void *oam, void *affine);
void *sub_0200B334(void *affine);
void *sub_0200B358(void *affine);
extern u32 _021D0EB0;

#endif
