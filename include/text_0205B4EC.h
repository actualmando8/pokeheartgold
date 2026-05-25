#ifndef GUARD_TEXT_0205B4EC_H
#define GUARD_TEXT_0205B4EC_H

#include "global.h"

void sub_0205B4EC(void *taskMgr, u32 resetPrinters);
u32 sub_0205B514(void *param1, void *param2, u32 frameType);
void sub_0205B564(void *window, void *taskMgr);
void sub_0205B5A8(void *window);
u32 sub_0205B5B4(void *taskMgr, void *textData, void *options, u32 font);
u32 sub_0205B5EC(void *taskMgr, void *textData, u32 fontId, u32 textFrameDelay, BOOL canABSpeedUp, u32 a4);
u32 IsPrintFinished(u32 textPrinterNum);
u32 sub_0205B63C(u32 param1, u32 windowId, u32 sizeType, u32 frameType);
void sub_0205B6A0(void *window, void *taskMgr, u32 frameId);

#endif
