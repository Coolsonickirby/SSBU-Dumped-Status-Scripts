
void __thiscall L2CFighterPickel::status::Fall_end(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_end_Fall(this);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_71000744a0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

