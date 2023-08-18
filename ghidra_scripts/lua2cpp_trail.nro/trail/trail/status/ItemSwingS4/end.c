
void __thiscall
L2CFighterTrail::status::ItemSwingS4_end(L2CFighterTrail *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_7100018940();
  lua2cpp::L2CFighterCommon::status_end_ItemSwingS4(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

