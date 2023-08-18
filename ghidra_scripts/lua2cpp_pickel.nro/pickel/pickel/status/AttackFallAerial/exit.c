
void __thiscall
L2CFighterPickel::status::AttackFallAerial_exit(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,false);
  lua2cpp::L2CFighterCommon::sub_fall_uniq_process_exit_param(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

