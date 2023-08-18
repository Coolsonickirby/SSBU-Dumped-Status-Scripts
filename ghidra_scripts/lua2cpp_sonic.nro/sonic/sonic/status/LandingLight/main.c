
void __thiscall
L2CFighterSonic::status::LandingLight_main(L2CFighterSonic *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_LandingLightSub(this);
  FUN_7100011c50(this);
  lib::L2CValue::L2CValue(aLStack48,LandingLight_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

