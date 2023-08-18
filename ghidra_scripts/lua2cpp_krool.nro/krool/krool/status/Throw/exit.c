
void __thiscall L2CFighterKrool::status::Throw_exit(L2CFighterKrool *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::sub_throw_uniq_process_exit(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

