#ifndef GUARD_UNK_0203DB6C_H
#define GUARD_UNK_0203DB6C_H

void sub_0203DB6C(void);
void sub_0203DB70(void);
u8 sub_0203DB74(void);
u8 _GetCoordsOfFacingTile(void *fieldSys, u16 *xOut, u16 *zOut);
s32 sub_0203DBD4(void *fieldSys, void *obj);
void FieldSystem_GetFacingObject(void *fieldSys, u16 *objOut);
BOOL sub_0203DC64(void *fieldSys, u16 *objOut);
u16 GetInteractedBackgroundEventScript(void *fieldSys, u16 *bgEvents, u16 count);
s32 BgEventIsUncollectedHiddenItem(void *fieldSys, u16 *event);
s32 BgEventDirectionIsCompatibleWithPlayerFacing(void *fieldSys, u16 *event);
u16 sub_0203DDA4(void *fieldSys, u16 *bgEvents, u16 count);
u16 sub_0203DE04(void *fieldSys, u16 *bgEvents, u16 count);

#endif // GUARD_UNK_0203DB6C_H
