
void __thiscall
L2CFighterYoshi::status::AttackAir_main_loop(L2CFighterYoshi *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_AttackAir_Main(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

