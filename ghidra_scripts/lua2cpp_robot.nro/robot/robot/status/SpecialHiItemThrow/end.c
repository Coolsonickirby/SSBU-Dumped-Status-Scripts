
void __thiscall
L2CFighterRobot::status::SpecialHiItemThrow_end(L2CFighterRobot *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_7100019720();
  lua2cpp::L2CFighterCommon::status_end_ItemThrow(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

