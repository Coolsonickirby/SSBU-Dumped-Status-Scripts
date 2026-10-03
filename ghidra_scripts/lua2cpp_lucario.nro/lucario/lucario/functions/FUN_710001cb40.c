
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001cb40(long param_1,L2CValue *param_2)

{
  int iVar1;
  int iVar2;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLAG_STATUS_TRANS);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_INT_NEXT_STATUS);
  iVar1 = lib::L2CValue::as_integer(param_2);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

