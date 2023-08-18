
void __thiscall
L2CFighterPalutena::status::AttackAir_init(L2CFighterPalutena *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_7100008020();
  lua2cpp::L2CFighterCommon::sub_attack_air_uniq_process_init(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

