
void __thiscall
L2CFighterToonlink::status::Walk_exec_stop(L2CFighterToonlink *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::sub_walk_uniq_process_exit(this);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_7100006ea0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

