
void __thiscall
L2CFighterPickel::status::SpecialLwWalkBack_end(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_end_WalkBack(this);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_710002e2e0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

