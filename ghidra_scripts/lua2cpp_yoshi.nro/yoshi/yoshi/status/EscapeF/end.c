
void __thiscall L2CFighterYoshi::status::EscapeF_end(L2CFighterYoshi *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_end_EscapeF(this);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_710001b610(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

