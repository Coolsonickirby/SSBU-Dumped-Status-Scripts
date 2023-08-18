
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::AttackLw3_pre(L2CFighterMetaknight *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_ATTR_CLEAR_MOTION_ENERGY);
  lua2cpp::L2CFighterCommon::status_pre_AttackLw3_common(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

