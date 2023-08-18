
void __thiscall
L2CFighterPacman::status::LandingDamageLight_main(L2CFighterPacman *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_710001b990();
  lua2cpp::L2CFighterCommon::status_LandingDamageLight(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

