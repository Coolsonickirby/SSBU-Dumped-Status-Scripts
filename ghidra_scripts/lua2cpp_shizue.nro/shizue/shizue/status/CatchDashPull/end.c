
void __thiscall
L2CFighterShizue::status::CatchDashPull_end(L2CFighterShizue *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_710002e150();
  lua2cpp::L2CFighterCommon::status_end_CatchDashPull(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

