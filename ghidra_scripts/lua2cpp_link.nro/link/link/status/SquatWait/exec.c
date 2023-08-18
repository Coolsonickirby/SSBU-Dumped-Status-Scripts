
void __thiscall L2CFighterLink::status::SquatWait_exec(L2CFighterLink *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_7100006e40();
  lua2cpp::L2CFighterCommon::sub_squat_uniq_process_main(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

