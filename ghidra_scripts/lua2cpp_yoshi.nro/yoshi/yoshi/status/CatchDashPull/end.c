
void __thiscall
L2CFighterYoshi::status::CatchDashPull_end(L2CFighterYoshi *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_end_CatchDashPull(this);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_710001b2f0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

