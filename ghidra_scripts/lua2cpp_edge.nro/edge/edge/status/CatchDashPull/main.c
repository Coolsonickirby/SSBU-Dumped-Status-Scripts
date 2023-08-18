
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::CatchDashPull_main(L2CFighterEdge *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0x14e3e2e1ca);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_EDGE_STATUS_CATCH_PULL_WORK_INT_EFFECT_HANDLE);
  FUN_7100020b30(this,aLStack48,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack48);
  lua2cpp::L2CFighterCommon::status_CatchDashPull(this);
  return;
}

