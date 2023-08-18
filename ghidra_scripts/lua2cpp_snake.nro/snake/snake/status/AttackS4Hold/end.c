
void __thiscall
L2CFighterSnake::status::AttackS4Hold_end(L2CFighterSnake *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_710001ea10();
  lua2cpp::L2CFighterCommon::status_end_AttackS4Hold(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

