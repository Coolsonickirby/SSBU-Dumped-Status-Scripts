
void __thiscall
L2CFighterDemon::status::SquatTurnAuto_pre(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,FIGHTER_STATUS_ATTR_DISABLE_TURN_DAMAGE);
  lua2cpp::L2CFighterCommon::status_pre_SquatWait_common(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

