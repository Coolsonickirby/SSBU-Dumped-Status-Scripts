
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMiigunner::status::SpecialN_pre(L2CFighterMiigunner *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_status_pre_SpecialNCommon(this);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_ST_INIT);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIGUNNER_STATUS_KIND_SPECIAL_N1_START);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  return;
}

