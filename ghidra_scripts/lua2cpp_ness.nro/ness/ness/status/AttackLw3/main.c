
void __thiscall L2CFighterNess::status::AttackLw3_main(L2CFighterNess *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_AttackLw3_common(this);
  lib::L2CValue::L2CValue(aLStack48,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_LW3);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,AttackLw3_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

