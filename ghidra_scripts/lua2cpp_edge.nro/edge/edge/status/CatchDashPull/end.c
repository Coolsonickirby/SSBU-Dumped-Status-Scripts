
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::CatchDashPull_end(L2CFighterEdge *this,L2CValue *return_value)

{
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_EDGE_STATUS_CATCH_PULL_WORK_INT_EFFECT_HANDLE);
  lib::L2CValue::L2CValue(aLStack64,true);
  FUN_710001fed0(this,aLStack48,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack48);
  lua2cpp::L2CFighterCommon::status_end_CatchDashPull(this);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

