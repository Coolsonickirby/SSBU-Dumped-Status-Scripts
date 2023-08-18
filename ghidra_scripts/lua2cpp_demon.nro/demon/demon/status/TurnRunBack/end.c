
void __thiscall
L2CFighterDemon::status::TurnRunBack_end(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::sub_turn_run_uniq_process_exit(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

