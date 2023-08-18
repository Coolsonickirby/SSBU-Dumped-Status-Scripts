
void __thiscall
L2CFighterKirby::status::PickelSpecialN3Landing_main(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_LandingSub(this);
  lua2cpp::L2CFighterCommon::status_LandingStiffness(this);
  FUN_7100120960(this);
  lib::L2CValue::L2CValue(aLStack48,PickelSpecialN3Landing_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

