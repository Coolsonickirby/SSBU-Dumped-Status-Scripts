
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71002206f0(L2CValue *param_1,L2CFighterCommon *param_2)

{
  int iVar1;
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_status_pre_SpecialNCommon(param_2);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_ST_INIT);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_MIIGUNNER_SPECIAL_N1_START);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::StatusModule__set_status_kind_interrupt_impl(param_2->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(param_1,1);
  return;
}

