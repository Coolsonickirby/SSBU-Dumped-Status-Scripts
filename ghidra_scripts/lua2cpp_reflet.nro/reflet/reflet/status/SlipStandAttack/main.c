
void __thiscall
L2CFighterReflet::status::SlipStandAttack_main(L2CFighterReflet *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_7100027780();
  lua2cpp::L2CFighterCommon::status_SlipStandAttack(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

