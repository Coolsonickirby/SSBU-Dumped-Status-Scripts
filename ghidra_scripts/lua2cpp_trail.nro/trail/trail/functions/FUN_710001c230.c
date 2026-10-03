
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001c230(long param_1)

{
  int iVar1;
  Hash40 HVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MOTION_PART_SET_KIND_HAVE_ITEM);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  HVar2 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,HVar2);
  lib::L2CValue::L2CValue(aLStack64,0xef638717f);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MOTION_PART_SET_KIND_HAVE_ITEM);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::MotionModule__remove_motion_partial_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,false);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

