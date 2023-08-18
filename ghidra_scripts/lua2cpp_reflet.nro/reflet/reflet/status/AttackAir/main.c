
void __thiscall
L2CFighterReflet::status::AttackAir_main(L2CFighterReflet *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::sub_attack_air(this);
  FUN_7100028220(this);
  lib::L2CValue::L2CValue(aLStack48,AttackAir_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

