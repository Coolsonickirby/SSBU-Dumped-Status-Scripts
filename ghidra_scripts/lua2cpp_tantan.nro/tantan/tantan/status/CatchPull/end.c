
void __thiscall
L2CFighterTantan::status::CatchPull_end(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_end_CatchPull(this);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_71000209e0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

