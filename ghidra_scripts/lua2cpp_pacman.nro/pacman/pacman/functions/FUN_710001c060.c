
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001c060(long param_1)

{
  int iVar1;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PACMAN_STATUS_FINAL_WORK_INT_CAMERA_TYPE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack48,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::CameraModule__set_camera_type_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

