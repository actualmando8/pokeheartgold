#ifndef GUARD_UNK_0206979C_H
#define GUARD_UNK_0206979C_H

#include "gf_3d_render.h"

/* Forward declarations for NitroSDK types */
typedef struct NNSG3dAnm NNSG3dAnm;

/* Animation controller - 0x24 bytes */
typedef struct {
    u32 flags;              /* 0x00: bit 0=loaded, bit 2=at_end */
    void *data;             /* 0x04: Loaded animation data */
    NNSG3dResFileHeader *header; /* 0x08: Resource header */
    NNSG3dAnm *anm;         /* 0x0C: Animation resource */
    NNSG3dAnmObj *anmObj;   /* 0x10: Animation object */
    NNSFndAllocator allocator; /* 0x14: Allocator for anmObj */
    u32 currentFrame;       /* 0x20: Current frame */
} AnmCtrl;

/* Render object wrapper - 0x54 bytes */
typedef struct {
    NNSG3dRenderObj renderObj; /* 0x00 */
} RenderObjWrapper;

void sub_020697A8(AnmCtrl *ctrl, void *data);
void sub_020697D0(void *parent, AnmCtrl *ctrl);
void sub_020697DC(AnmCtrl *ctrl, NARC *narc, s32 fileId, BOOL isCompressed, enum HeapID heapID);
void sub_02069818(AnmCtrl *ctrl);
void sub_0206983C(AnmCtrl *ctrl, NNSG3dAnm *anm, enum HeapID heapID);
void sub_02069864(AnmCtrl *ctrl, NNSG3dAnm *anm, enum HeapID heapID);
void sub_02069870(AnmCtrl *ctrl, NNSG3dAnm *anm, fx32 speed);
void sub_02069884(AnmCtrl *ctrl, fx32 speed);
void sub_02069894(AnmCtrl *ctrl, NARC *narc, s32 fileId, BOOL isCompressed, enum HeapID heapID, fx32 speed);
void sub_020698B8(AnmCtrl *ctrl);
void sub_020698D0(AnmCtrl *ctrl);
BOOL sub_020698E8(AnmCtrl *ctrl, s32 frames, BOOL loop);
BOOL sub_02069948(AnmCtrl *ctrl);
void sub_02069964(RenderObjWrapper *wrapper, NNSG3dResMdl *mdl);
void sub_02069978(RenderObjWrapper *wrapper, NNSG3dResMdl *mdl);
void sub_02069984(NNSG3dRenderObj *obj, NNSG3dAnmObj *anmObj);
void sub_0206998C(RenderObjWrapper *wrapper, NNSG3dAnmObj *anmObj);
void sub_02069998(RenderObjWrapper *wrapper, NNSG3dResMdl *mdl, NNSG3dAnmObj *anmObj);
void sub_020699AC(NNSG3dRenderObj *obj, const VecFx32 *translation, const MtxFx33 *rotation, const VecFx32 *scale);
void sub_020699BC(NNSG3dRenderObj *obj, VecFx32 *translation);
void sub_020699D0(NNSG3dRenderObj *obj, const VecFx32 *translation, const MtxFx33 *rotation, const u16 *color);

#endif // GUARD_UNK_0206979C_H
