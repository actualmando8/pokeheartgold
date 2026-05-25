#ifndef GUARD_FRONTIER_SYSTEM_H
#define GUARD_FRONTIER_SYSTEM_H

/* Forward declarations */
typedef struct FrontierScriptContext FrontierScriptContext;

void *FrontierSystem_Create(void *saveData, enum HeapID heapID, u16 frontierMap);
u8 FrontierSystem_Main(void *sys);
void ov80_0222A920(void *sys);
void FrontierSystem_AddTask(void *sys, u16 scriptId, void *args);
u8 ov80_0222A9DC(void *sys, FrontierScriptContext *ctx);
void ov80_0222AA0C(void *sys, FrontierScriptContext *ctx);
void FrontierSystem_deadstripped_0222AA3C(void *sys, u16 arg1, u32 arg2);
void ov80_0222AA40(void *dataOut, void *msgDataOut, u16 frontierMap, enum HeapID heapID);
void ov80_0222AA7C(void *sys, u16 newFrontierMap, enum HeapID heapID);
void *ov80_0222AAD8(void *sys, void *src);
void ov80_0222AAF8(void *sys, void *data);
u32 ov80_0222AB14(FrontierScriptContext *ctx, void *arg);
void *ov80_0222AB2C(void *sys, u16 fieldIdx);
void *FrontierSystem_GetFrontierMap(void *sys);

#endif // GUARD_FRONTIER_SYSTEM_H
