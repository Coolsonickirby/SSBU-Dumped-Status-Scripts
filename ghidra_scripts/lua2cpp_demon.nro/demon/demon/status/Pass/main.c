
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterDemon::status::Pass_main(L2CFighterDemon *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_Pass_common(this);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_COMMAND_623NB);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,Pass_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

