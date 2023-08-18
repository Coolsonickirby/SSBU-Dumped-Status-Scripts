
void __thiscall L2CFighterLuigi::status::Appeal_pre(L2CFighterLuigi *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,FIGHTER_POWER_UP_ATTACK_BIT_ATTACK_1);
  lib::L2CValue::L2CValue(aLStack64,aLStack48);
  lua2cpp::L2CFighterCommon::status_pre_Appeal_common(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

