
void __thiscall
L2CFighterRobot::status::SpecialHiItemShootAir_end(L2CFighterRobot *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::sub_ftStatusUniqProcessItemShoot_exitStatus_New(this);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_7100019720(this);
  lua2cpp::L2CFighterCommon::status_end_ItemShootAir_New(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

