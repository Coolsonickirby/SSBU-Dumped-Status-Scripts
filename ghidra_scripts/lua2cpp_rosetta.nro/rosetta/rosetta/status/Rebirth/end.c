
void __thiscall
L2CFighterRosetta::status::Rebirth_end(L2CFighterRosetta *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_7100002220();
  lua2cpp::L2CFighterCommon::status_end_Rebirth(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

