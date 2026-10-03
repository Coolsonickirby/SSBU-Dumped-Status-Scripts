
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001f13a0(L2CValue *param_1,long param_2)

{
  int iVar1;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WARIO_STATUS_SPECIAL_N_WORK_INT_WAIT_FRAME_MIN);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WARIO_STATUS_SPECIAL_N_WORK_INT_WAIT_FRAME_MAX);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

