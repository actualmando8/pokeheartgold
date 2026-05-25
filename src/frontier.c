/* Decompiled from asm/frontier.s */
#include "global.h"
#include "frontier.h"
#include "frontier_system.h"

FS_EXTERN_OVERLAY(OVY_80);
FS_EXTERN_OVERLAY(OVY_81);
FS_EXTERN_OVERLAY(OVY_42);

/* Forward declarations for functions defined in frontier_map.c */
void *FrontierMap_Init(void *saveData);
void FrontierMap_Free(void *map);

/* Forward declarations for overlay_80 functions */
void ov80_022389C4(void *a0);
void ov80_02238A18(void *a0);

struct FrontierData {
    /* 0x00 */ void *launchArgs;
    /* 0x04 */ void *overlayManager;
    /* 0x08 */ void *heapPtr;
    /* 0x0C */ void *callback;
    /* 0x10 */ u8 flag;
    /* 0x11 */ u8 padding_11[3];
    /* 0x14 */ void *frontierSystem;
    /* 0x18 */ void *frontierMap;
    /* 0x1C */ u8 padding_1C;
    /* 0x1D */ u8 mapCreated;
    /* 0x1E */ u8 battleType;
    /* 0x1F */ u8 padding_1F;
    /* 0x20 */ u16 frontierMapId;
    /* 0x22 */ u8 padding_22[2];
    /* 0x24 */ u16 results[0x18];
    /* 0x84 */ u16 scores[0x20];
    /* 0xA4 */ u8 padding_A4[4];
};

u8 Frontier_Init(void *overlayManager) {
    struct FrontierData *data;
    void *launchArgs;
    u8 battleType;

    Frontier_LoadOverlays();
    data = OverlayManager_CreateAndGetData(overlayManager, 0x00000A54, FS_OVERLAY_ID(OVY_80));
    MI_CpuFill8(data, 0, 0x00000A54);
    sub_02096780(data);
    sub_02096884(data);
    launchArgs = OverlayManager_GetArgs(overlayManager);
    data->launchArgs = launchArgs;
    if (launchArgs == NULL) {
        GF_AssertFail();
    }
    battleType = ((u8 *)launchArgs)[0x20];
    data->frontierSystem = FrontierSystem_Create(data, FS_OVERLAY_ID(OVY_80), battleType);
    battleType = ((u8 *)launchArgs)[0x20];
    FrontierSystem_AddTask(data->frontierSystem, battleType, 0);
    Frontier_CreateMap(data);
    return 1;
}

u8 Frontier_Main(void *overlayManager, u8 *stateOut) {
    struct FrontierData *data;
    u8 state;
    u8 result;
    void *r6;

    data = OverlayManager_GetData(overlayManager);
    state = *stateOut;
    if (state > 6) {
        return 0;
    }
    switch (state) {
    case 0:
        *stateOut = 1;
        return 0;
    case 1:
        if (((u8 *)data)[0x22] != 0) {
            *stateOut = 2;
            return 0;
        }
        if (data->mapCreated == 0) {
            break;
        }
        if (data->battleType == 1) {
            *stateOut = 5;
            return 0;
        }
        result = FrontierSystem_Main(data->frontierSystem);
        if (data->overlayManager == NULL) {
            break;
        }
        *stateOut = 3;
        return 0;
    case 2:
        return 1;
    case 3:
        ov80_022389C4(data->frontierMap);
        Frontier_FreeMap(data);
        Frontier_UnloadOverlays();
        *stateOut = 4;
        return 0;
    case 4:
        result = OverlayManager_Run(data->overlayManager);
        if (result != 1) {
            break;
        }
        OverlayManager_Delete(data->overlayManager);
        Frontier_LoadOverlays();
        if (data->callback != NULL) {
            ((void (*)(void *))data->callback)(data->heapPtr);
        }
        if (data->heapPtr != NULL && data->flag == 1) {
            Heap_Free(data->heapPtr);
        }
        data->overlayManager = NULL;
        data->callback = NULL;
        data->heapPtr = NULL;
        Frontier_CreateMap(data);
        ov80_02238A18(data->frontierMap);
        *stateOut = 1;
        return 0;
    case 5:
        Frontier_FreeMap(data);
        sub_02096780(data);
        *stateOut = 6;
        return 0;
    case 6:
        Frontier_CreateMap(data);
        if (data->frontierMapId != 0xFFFF) {
            result = FrontierSystem_Main(data->frontierSystem);
        } else {
            data->frontierSystem = FrontierSystem_Create(data, FS_OVERLAY_ID(OVY_80), ((u8 *)data->launchArgs)[0x20]);
            result = FrontierSystem_Main(data->frontierSystem);
        }
        r6 = ov80_0222AAD8(data->frontierSystem, NULL);
        ov80_0222A920(data->frontierSystem);
        data->frontierSystem = FrontierSystem_Create(data, FS_OVERLAY_ID(OVY_80), ((u8 *)data->launchArgs)[0x20]);
        FrontierSystem_AddTask(data->frontierSystem, ((u8 *)data->launchArgs)[0x20], data->frontierMapId);
        ov80_0222AAF8(data->frontierSystem, r6);
        data->battleType = 0;
        return 0;
    }
    return 0;
}

u8 Frontier_Exit(void *overlayManager) {
    struct FrontierData *data;

    data = OverlayManager_GetData(overlayManager);
    ov80_0222A920(data->frontierSystem);
    Frontier_FreeMap(data);
    OverlayManager_FreeData(overlayManager);
    Frontier_UnloadOverlays();
    return 1;
}

void Frontier_CreateMap(void *data) {
    FrontierMap_Init(data);
    ((struct FrontierData *)data)->frontierMap = NULL;
    ((struct FrontierData *)data)->mapCreated = 1;
}

void Frontier_FreeMap(void *data) {
    FrontierMap_Free(((struct FrontierData *)data)->frontierMap);
    ((struct FrontierData *)data)->mapCreated = 0;
}

void sub_02096780(void *data) {
    struct FrontierData *d = (struct FrontierData *)data;
    u32 i;

    for (i = 0; i < 0x18; i++) {
        d->results[i] = 0xFFFF;
    }
    MI_CpuFill8(&d->scores[0], 0, 0x1E << 6);
    for (i = 0; i < 0x20; i++) {
        d->scores[i] = 0xFFFF;
    }
}

void Frontier_LoadOverlays(void) {
    HandleLoadOverlay(FS_OVERLAY_ID(OVY_80), 2);
    HandleLoadOverlay(FS_OVERLAY_ID(OVY_81), 2);
    HandleLoadOverlay(FS_OVERLAY_ID(OVY_42), 2);
}

void Frontier_UnloadOverlays(void) {
    UnloadOverlayByID(FS_OVERLAY_ID(OVY_80));
    UnloadOverlayByID(FS_OVERLAY_ID(OVY_81));
    UnloadOverlayByID(FS_OVERLAY_ID(OVY_42));
}

void *Frontier_GetLaunchArgs(void *overlayManager) {
    return *(void **)overlayManager;
}

void *sub_0209680C(void *data) {
    return ((struct FrontierData *)data)->frontierMap;
}

void *Frontier_GetData(void *overlayManager) {
    return *(void **)*(void **)overlayManager;
}

void Frontier_SetData(void *overlayManager, void *data) {
    *(void **)*(void **)overlayManager = data;
}

void Frontier_LaunchApplication(void *data, const OverlayManagerTemplate *ovyTemp, void *args, u8 flag, void *callback) {
    struct FrontierData *d = (struct FrontierData *)data;

    if (d->overlayManager != NULL) {
        GF_AssertFail();
    }
    d->overlayManager = OverlayManager_New(overlayManager, ovyTemp, FS_OVERLAY_ID(OVY_80));
    d->heapPtr = args;
    d->flag = flag;
    d->callback = callback;
}

void sub_0209684C(void *overlayManager) {
    ((u8 *)overlayManager)[0x22] = 1;
}

void sub_02096854(void *data, u8 battleType, u16 frontierMapId) {
    struct FrontierData *d = (struct FrontierData *)data;

    ((u8 *)d->launchArgs)[0x20] = battleType;
    d->battleType = 1;
    d->frontierMapId = frontierMapId;
}

u16 *sub_02096864(void *data) {
    return ((struct FrontierData *)data)->results;
}

u16 *sub_02096868(void *data) {
    return ((struct FrontierData *)data)->scores;
}

u16 *sub_0209686C(void *data, u32 idx) {
    struct FrontierData *d = (struct FrontierData *)data;
    return &d->scores[idx * (0x3C / 2)];
}

void *sub_02096878(void *data) {
    return (void *)((u8 *)data + 0x00000A04);
}

void sub_02096884(void *data) {
    struct FrontierData *d = (struct FrontierData *)data;
    u32 i;
    u8 *p;

    p = (u8 *)d + 0x00000A04;
    MI_CpuFill8(p, 0, 8);
    for (i = 0; i < 8; i++) {
        ((u16 *)p)[i] = 0xFFFF;
    }
}

const OverlayManagerTemplate gOverlayTemplate_Frontier = {
    Frontier_Init, Frontier_Main, Frontier_Exit, 0xFFFFFFFF
};
