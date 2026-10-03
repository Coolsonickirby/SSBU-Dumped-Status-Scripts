
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100017a90(long param_1)

{
  int iVar1;
  Hash40 HVar2;
  ulong uVar3;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  HVar2 = app::lua_bind::MotionModule__motion_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack64,HVar2);
  lib::L2CValue::L2CValue(aLStack48,0x5e54ad4c0);
  uVar3 = lib::L2CValue::operator==(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack48,_FIGHTER_MOTION_PART_SET_KIND_DEMO_FACIAL);
    iVar1 = lib::L2CValue::as_integer(aLStack48);
    app::lua_bind::MotionModule__remove_motion_partial_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,false);
    lib::L2CValue::~L2CValue(aLStack48);
  }
  return;
}

