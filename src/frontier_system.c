/* Decompiled from asm/frontier_system.s */
#include "global.h"
#include "frontier_system.h"
#include "frontier.h"

/* Forward declarations */
extern void *ov80_0223B9CC;
extern const void *gFrontierCommandTable;
void *ov80_0222ACA0(u16 frontierMap, u8 type);
void *AllocAndReadWholeNarcMemberByIdPair(u8 id1, u16 id2, void *narc);
void *NewMsgDataFromNarc(u8 id1, u16 id2, void *data, enum HeapID heapID);
void DestroyMsgData(void *msgData);
void *Heap_Alloc(enum HeapID heapID, u32 size);
void Heap_Free(void *ptr);
void MI_CpuFill8(void *dst, u8 value, u32 size);
void *MessageFormat_New_Custom(u32 a0, void *a1, enum HeapID heapID);
void MessageFormat_Delete(void *fmt);
void *String_New(enum HeapID heapID, u32 size);
void String_Delete(void *str);
void *FrontierScriptContext_Init(void *ctx, void *msgData, const void *cmdTable);
void FrontierScriptContext_Start(void *ctx, void *msgData);
u32 FrontierScriptContext_ReadWord(void *ctx);
void FrontierScriptContext_Run(void *ctx);

struct FrontierSystem {
    /* 0x00 */ void *saveData;
    /* 0x04 */ FrontierScriptContext *tasks[8];
    /* 0x24 */ u8 padding_24[0x10];
    /* 0x34 */ enum HeapID heapID;
    /* 0x38 */ u8 taskCount;
    /* 0x39 */ u8 padding_39[3];
    /* 0x3C */ void *msgData;
    /* 0x40 */ void *format;
    /* 0x44 */ void *str1;
    /* 0x48 */ void *str2;
    /* 0x4C */ u8 padding_4C[0x04];
    /* 0x50 */ u16 results[8];
    /* 0x58 */ u8 padding_58[0x04];
    /* 0x5C */ u16 frontierMap;
    /* 0x5E */ u8 active;
    /* 0x5F */ u8 padding_5F;
};

void *FrontierSystem_Create(void *saveData, enum HeapID heapID, u16 frontierMap) {
    struct FrontierSystem *sys;

    sys = Heap_Alloc(heapID, 0xBC);
    MI_CpuFill8(sys, 0, 0xBC);
    sys->saveData = saveData;
    sys->heapID = heapID;
    sys->frontierMap = frontierMap;
    ov80_0222AA40(&sys->results[0], &sys->msgData, frontierMap, heapID);
    sys->format = MessageFormat_New_Custom(8, sys, heapID);
    sys->str1 = String_New(heapID, 1 << 0xA);
    sys->str2 = String_New(heapID, 1 << 0xA);
    FrontierSystem_deadstripped_0222AA3C(sys, frontierMap, 0);
    return sys;
}

u8 FrontierSystem_Main(void *sys) {
    struct FrontierSystem *s = (struct FrontierSystem *)sys;
    u32 i;
    u32 *taskPtr;

    if (s->active == 0) {
        return 1;
    }
    if (s->taskCount != 0) {
        taskPtr = s->tasks;
        i = 0;
        do {
            if (*taskPtr != NULL) {
                if (FrontierScriptContext_Run(*taskPtr) == 0) {
                    ov80_0222AA0C(sys, *taskPtr);
                    *taskPtr = NULL;
                    s->taskCount--;
                }
            }
            i++;
            taskPtr++;
        } while (i < 8);
        ov80_02239C54(s->saveData);
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
    Heap_Free(s->msgData);
    DestroyMsgData(s->msgData);
    Heap_Free(s);
}

void FrontierSystem_AddTask(void *sys, u16 scriptId, void *args) {
    struct FrontierSystem *s = (struct FrontierSystem *)sys;
    void *ctx;

    ctx = Heap_Alloc(s->heapID, 0x90);
    MI_CpuFill8(ctx, 0, 0x90);
    FrontierScriptContext_Init(ctx, ov80_0223B9CC, gFrontierCommandTable);
    if (scriptId == 0xFFFF) {
        FrontierScriptContext_Start(ctx, s->format);
        ((u32 *)ctx)[0x21] = (u32)s->msgData;
    } else if (s->frontierMap == scriptId) {
        FrontierScriptContext_Start(ctx, s->format);
        ((u32 *)ctx)[0x21] = (u32)s->format;
        ((u32 *)ctx)[0x20] = (u32)s->msgData;
    } else {
        ov80_0222AA40(&((u32 *)ctx)[0x21], &((u32 *)ctx)[0x20], scriptId, s->heapID);
        FrontierScriptContext_Start(ctx, ((u32 *)ctx)[0x21]);
    }
    ov80_0222AB14(ctx, args);
    ov80_0222A9DC(sys, ctx);
}

u8 ov80_0222A9DC(void *sys, FrontierScriptContext *ctx) {
    struct FrontierSystem *s = (struct FrontierSystem *)sys;
    u32 i;
    u32 **taskPtr;

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

    taskMsgData = ((u32 *)ctx)[0x20];
    if (taskMsgData != s->msgData) {
        DestroyMsgData(taskMsgData);
    }
    taskFormat = ((u32 *)ctx)[0x21];
    if (taskFormat != s->format) {
        Heap_Free(taskFormat);
    }
    Heap_Free(ctx);
}

void FrontierSystem_deadstripped_0222AA3C(void *sys, u16 arg1, u32 arg2) {
}

void ov80_0222AA40(void *dataOut, void *msgDataOut, u16 frontierMap, enum HeapID heapID) {
    void *narc1;
    void *narc2;

    narc1 = ov80_0222ACA0(frontierMap, 1);
    narc2 = ov80_0222ACA0(frontierMap, 2);
    *dataOut = AllocAndReadWholeNarcMemberByIdPair(0xB6, narc2, heapID);
    *msgDataOut = NewMsgDataFromNarc(1, 0x1B, narc2, heapID);
}

void ov80_0222AA7C(void *sys, u16 newFrontierMap, enum HeapID heapID) {
    struct FrontierSystem *s = (struct FrontierSystem *)sys;
    void *narc1;
    void *narc2;
    void *newMsgData;
    u32 i;
    u32 **taskPtr;

    narc1 = ov80_0222ACA0(s->frontierMap, 1);
    narc2 = ov80_0222ACA0(newFrontierMap, 2);
    if (narc1 != narc2) {
        newMsgData = NewMsgDataFromNarc(1, 0x1B, narc2, heapID);
        i = 0;
        taskPtr = s->tasks;
        do {
            if (*taskPtr != NULL) {
                if (((u32 *)*taskPtr)[0x20] == s->msgData) {
                    ((u32 *)*taskPtr)[0x20] = newMsgData;
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
