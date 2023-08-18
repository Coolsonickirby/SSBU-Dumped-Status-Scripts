
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYounglink::status::ShieldGuard_exec_stop(L2CFighterYounglink *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  FUN_7100006ea0();
  lib::L2CValue::L2CValue(aLStack48,0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_DELAY_MUL);
  lua2cpp::L2CFighterCommon::sub_ftStatusUniqProcessGuardOn_execStop_Inner(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

