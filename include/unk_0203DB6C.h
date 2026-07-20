#ifndef GUARD_UNK_0203DB6C_H
#define GUARD_UNK_0203DB6C_H

#include "map_object.h"

void FieldSystem_GetFacingObject(FieldSystem *fieldSystem, LocalMapObject **ret_p);
BOOL sub_0203DC64(FieldSystem *fieldSystem, LocalMapObject** localMapObject);
u16 GetInteractedBackgroundEventScript(FieldSystem *fieldSystem, BG_EVENT *bgEvents, int numEvents);
u32 sub_0203DDA4(FieldSystem *fieldSystem, BG_EVENT *bgEvents, int numEvents);
u16 sub_0203DE04(FieldSystem *fieldSystem, const COORD_EVENT *coordEvent, int numEvents);

#endif // GUARD_UNK_0203DB6C_H
