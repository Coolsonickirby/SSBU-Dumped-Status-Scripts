
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001dd60(long param_1)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_SAMUS_STATUS_SPECIAL_S_WORK_FLAG_MATERIAL_MOTION);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_SAMUS_MOTION_PART_SET_KIND_VISOR);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::MotionModule__remove_motion_partial_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,false);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

