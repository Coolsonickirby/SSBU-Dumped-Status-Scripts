
void __thiscall
L2CFighterRobot::status::SpecialHiItemShootAir_exec(L2CFighterRobot *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::sub_ftStatusUniqProcessItemShoot_execStatus_New(this);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_71000163e0(aLStack64,this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

