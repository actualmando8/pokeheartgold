/* Decompiled from asm/frontier_system.s */
#include "global.h"
#include "frontier_system.h"
#include "frontier.h"
#include "filesystem.h"
#include "msgdata.h"
#include "message_format.h"
#include "pm_string.h"
#include "heap.h"
#include "overlay_80_0222ACA0.h"

/* Forward declarations */
extern void *ov80_0223B9CC;
extern const void *gFrontierCommandTable;
void *FrontierScriptContext_Init(void *ctx, void *msgData, const void *cmdTable);
void FrontierScriptContext_Start(void *ctx, void *msgData);
u32 FrontierScriptContext_ReadWord(void *ctx);
u8 FrontierScriptContext_Run(void *ctx);
void *ov80_02239C54(void *saveData);

struct FrontierSystem {
    /* 0x00 */ void                      *saveData;
    /* 0x04 */ FrontierScriptContext     *tasks[8];
    /* 0x24 */ void                      *msgData;
    /* 0x28 */ void                      *format;
    /* 0x2C */ void                      *str1;
    /* 0x30 */ void                      *str2;
    /* 0x34 */ enum HeapID               heapID;
    /* 0x38 */ u8                        taskCount;
    /* 0x39 */ u8                        padding_39[3];
    /* 0x3C */ void                      *unk3C;
    /* 0x40 */ u16                       results[8];
    /* 0x48 */ u8                        padding_48[0x14];
    /* 0x5C */ u16                       frontierMap;
    /* 0x5E */ u8                        active;
    /* 0x5F */ u8                        padding_5F;
};

void *FrontierSystem_Create(void *saveData, enum HeapID heapID, u16 frontierMap) {
    struct FrontierSystem *sys;

    sys = Heap_Alloc(heapID, 0xBC);
    MI_CpuFill8(sys, 0, 0xBC);
    sys->saveData = saveData;
    sys->heapID = heapID;
    sys->frontierMap = frontierMap;
    ov80_0222AA40(&sys->unk3C, &sys->msgData, frontierMap, heapID);
    sys->format = MessageFormat_New_Custom(8, 0x40, heapID);
    sys->str1 = String_New((u32)(1 << 0xA), heapID);
    sys->str2 = String_New((u32)(1 << 0xA), heapID);
    FrontierSystem_deadstripped_0222AA3C(sys, frontierMap, 0);
    return sys;
}

u8 FrontierSystem_Main(void *sys) {
    struct FrontierSystem *s = (struct FrontierSystem *)sys;
    u32 i;
    FrontierScriptContext **taskPtr;

    if (s->active == 0) {
        return 1;
    }
    if (s->taskCount != 0) {
        taskPtr = s->tasks;
        i = 0;
        do {
            if (*taskPtr != NULL) {
                if (!FrontierScriptContext_Run(*taskPtr)) {
                    ov80_0222AA0C(sys, *taskPtr);
                    *taskPtr = NULL;
                    s->taskCount--;
                }
            }
            i++;
            taskPtr++;
        } while (i < 8);
        (void)ov80_02239C54(s->saveData);
    }
    if (s->active == 0) {
        return 1;
    }
    return 0;
}

void ov80_0222A920(void *sys) {
    struct FrontierSystem *s = (struct FrontierSystem *)sys;

    if (s->active != 0) {
        GF_AssertFail();
    }
    MessageFormat_Delete(s->format);
    String_Delete(s->str1);
    String_Delete(s->str2);
    Heap_Free(s->unk3C);
    DestroyMsgData(s->msgData);
    Heap_Free(s);
}

void FrontierSystem_AddTask(void *sys, u16 scriptId, void *args) {
    struct FrontierSystem *s = (struct FrontierSystem *)sys;
    FrontierScriptContext *ctx;

    ctx = Heap_Alloc(s->heapID, 0x90);
    MI_CpuFill8(ctx, 0, 0x90);
    FrontierScriptContext_Init(ctx, ov80_0223B9CC, gFrontierCommandTable);
    if (scriptId == 0xFFFF) {
        FrontierScriptContext_Start(ctx, s->format);
        ((void **)ctx)[0x21] = s->msgData;
    } else if (s->frontierMap == scriptId) {
        FrontierScriptContext_Start(ctx, s->format);
        ((void **)ctx)[0x21] = s->format;
        ((void **)ctx)[0x20] = s->msgData;
    } else {
        ov80_0222AA40(&((void **)ctx)[0x21], &((void **)ctx)[0x20], scriptId, s->heapID);
        FrontierScriptContext_Start(ctx, ((void **)ctx)[0x21]);
    }
    ov80_0222AB14(ctx, args);
    ov80_0222A9DC(sys, ctx);
}

u8 ov80_0222A9DC(void *sys, FrontierScriptContext *ctx) {
    struct FrontierSystem *s = (struct FrontierSystem *)sys;
    u32 i;
    FrontierScriptContext **taskPtr;

    i = 0;
    taskPtr = s->tasks;
    do {
        if (*taskPtr == NULL) {
            *taskPtr = ctx;
            s->taskCount++;
            return 1;
        }
        i++;
        taskPtr++;
    } while (i < 8);
    GF_AssertFail();
    return 0;
}

void ov80_0222AA0C(void *sys, FrontierScriptContext *ctx) {
    struct FrontierSystem *s = (struct FrontierSystem *)sys;
    void *taskMsgData;
    void *taskFormat;

    taskMsgData = ((void **)ctx)[0x20];
    if (taskMsgData != s->msgData) {
        DestroyMsgData(taskMsgData);
    }
    taskFormat = ((void **)ctx)[0x21];
    if (taskFormat != s->format) {
        Heap_Free(taskFormat);
    }
    Heap_Free(ctx);
}

void FrontierSystem_deadstripped_0222AA3C(void *sys, u16 arg1, u32 arg2) {
}

void ov80_0222AA40(void **dataOut, void **msgDataOut, u16 frontierMap, enum HeapID heapID) {
    u32 narc1;
    u32 narc2;

    narc1 = ov80_0222ACA0(frontierMap, 1);
    narc2 = ov80_0222ACA0(frontierMap, 2);
    *dataOut = AllocAndReadWholeNarcMemberByIdPair((NarcId)0xB6, (s32)narc1, heapID);
    *msgDataOut = NewMsgDataFromNarc((MsgDataLoadType)1, (NarcId)0x1B, (s32)narc2, heapID);
}

void ov80_0222AA7C(void *sys, u16 newFrontierMap, enum HeapID heapID) {
    struct FrontierSystem *s = (struct FrontierSystem *)sys;
    u32 narc1;
    u32 narc2;
    void *newMsgData;
    u32 i;
    FrontierScriptContext **taskPtr;

    narc1 = ov80_0222ACA0(s->frontierMap, 1);
    narc2 = ov80_0222ACA0(newFrontierMap, 2);
    if (narc1 != narc2) {
        newMsgData = NewMsgDataFromNarc((MsgDataLoadType)1, (NarcId)0x1B, (s32)narc2, heapID);
        i = 0;
        taskPtr = s->tasks;
        do {
            if (*taskPtr != NULL) {
                if (((void **) *taskPtr)[0x20] == s->msgData) {
                    ((void **) *taskPtr)[0x20] = newMsgData;
                }
            }
            i++;
            taskPtr++;
        } while (i < 8);
        DestroyMsgData(s->msgData);
        s->msgData = newMsgData;
    }
}

void *ov80_0222AAD8(void *sys, void *src) {
    struct FrontierSystem *s = (struct FrontierSystem *)sys;
    void *data;
    u32 i;
    u16 *srcPtr;
    u16 *dstPtr;

    data = Heap_Alloc(s->heapID, 0x10);
    srcPtr = &s->results[0];
    dstPtr = data;
    for (i = 0; i < 8; i++) {
        *dstPtr = *srcPtr;
        dstPtr++;
        srcPtr++;
    }
    return data;
}

void ov80_0222AAF8(void *sys, void *data) {
    struct FrontierSystem *s = (struct FrontierSystem *)sys;
    u32 i;
    u16 *srcPtr;
    u16 *dstPtr;

    srcPtr = data;
    dstPtr = &s->results[0];
    for (i = 0; i < 8; i++) {
        *dstPtr = *srcPtr;
        dstPtr++;
        srcPtr++;
    }
    Heap_Free(data);
}

u32 ov80_0222AB14(FrontierScriptContext *ctx, void *arg) {
    u32 offset;

    offset = FrontierScriptContext_ReadWord(ctx);
    return ((u32 *)ctx)[0x0E] + offset;
}

void *ov80_0222AB2C(void *sys, u16 fieldIdx) {
    return (void *)((u8 *)sys + 0x24 + fieldIdx * 2);
}

void *FrontierSystem_GetFrontierMap(void *sys) {
    return sub_0209680C(sys);
}
