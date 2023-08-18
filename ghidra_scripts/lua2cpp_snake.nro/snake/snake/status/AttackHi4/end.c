
void __thiscall L2CFighterSnake::status::AttackHi4_end(L2CFighterSnake *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_710001e8e0();
  lua2cpp::L2CFighterCommon::status_end_AttackHi4(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

