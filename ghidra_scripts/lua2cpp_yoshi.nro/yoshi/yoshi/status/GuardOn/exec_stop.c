
void __thiscall
L2CFighterYoshi::status::GuardOn_exec_stop(L2CFighterYoshi *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_710000a4b0();
  lib::L2CValue::L2CValue(aLStack48,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  lua2cpp::L2CFighterCommon::sub_ftStatusUniqProcessGuardOn_execStop_Inner(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

