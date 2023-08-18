
void __thiscall
L2CFighterTantan::status::FallAerial_end(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_end_FallAerial(this);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_710002af50(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

