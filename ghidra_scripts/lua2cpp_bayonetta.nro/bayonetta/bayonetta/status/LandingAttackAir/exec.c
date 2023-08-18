
void __thiscall
L2CFighterBayonetta::status::LandingAttackAir_exec(L2CFighterBayonetta *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::sub_landing_uniq_process_exec(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

