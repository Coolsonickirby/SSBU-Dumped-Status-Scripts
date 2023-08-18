
void __thiscall
L2CFighterPickel::status::SpecialN1Fall_exec(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::sub_fall_uniq_process_exec(this);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_7100024750(this);
  FUN_71000250d0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

