
void __thiscall
L2CFighterYoshi::status::JumpAerial_main_loop(L2CFighterYoshi *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_JumpAerial_Main(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack48);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uint)((bVar1 & 1U) != 0));
  return;
}

