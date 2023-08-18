
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterDolly::status::DashBack_init(L2CFighterDolly *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::sub_dash_uniq_process_init(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_DASH_TO_RUN);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__unable_transition_term_forbid_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

