#ifndef GUARD_TEXT_0205B4EC_H
#define GUARD_TEXT_0205B4EC_H

#include "global.h"

void sub_0205B4EC(void *taskMgr, u32 resetPrinters);
u32 sub_0205B514(u32 param1, u32 param2, u32 frameType);
void sub_0205B564(void *window, void *taskMgr);
void sub_0205B5A8(void *window);
void sub_0205B5B4(void *taskMgr, u32 windowId, u32 textData, u32 font);
void sub_0205B5EC(void *taskMgr, u32 windowId, u32 textData, u32 font);
u32 IsPrintFinished(void);
u32 sub_0205B63C(u32 param1, u32 windowId, u32 sizeType, u32 frameType);
void sub_0205B6A0(void *window, void *taskMgr, u32 frameId);

#endif
