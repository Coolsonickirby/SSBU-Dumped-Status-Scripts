
void __thiscall
L2CFighterKirby::status::PickelSpecialN3Fall_exec(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::sub_fall_uniq_process_exec(this);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_710011e710(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

