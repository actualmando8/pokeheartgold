#ifndef GUARD_FRONTIER_H
#define GUARD_FRONTIER_H

u8 Frontier_Init(void *overlayManager);
u8 Frontier_Main(void *overlayManager, u8 *stateOut);
u8 Frontier_Exit(void *overlayManager);
void Frontier_CreateMap(void *data);
void Frontier_FreeMap(void *data);
void sub_02096780(void *data);
void Frontier_LoadOverlays(void);
void Frontier_UnloadOverlays(void);
void *Frontier_GetLaunchArgs(void *overlayManager);
void *sub_0209680C(void *data);
void *Frontier_GetData(void *overlayManager);
void Frontier_SetData(void *overlayManager, void *data);
void Frontier_LaunchApplication(void *data, void *overlayFn, void *args, u8 flag, void *callback);
void sub_0209684C(void *overlayManager);
void sub_02096854(void *data, u8 battleType, u16 frontierMapId);
u16 *sub_02096864(void *data);
u16 *sub_02096868(void *data);
u16 *sub_0209686C(void *data, u32 idx);
void *sub_02096878(void *data);
void sub_02096884(void *data);

extern const void *gOverlayTemplate_Frontier;

#endif // GUARD_FRONTIER_H
