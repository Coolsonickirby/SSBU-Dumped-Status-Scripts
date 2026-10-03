
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100027a30(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_INT_ALL_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_INT_AFTER_TURN_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

