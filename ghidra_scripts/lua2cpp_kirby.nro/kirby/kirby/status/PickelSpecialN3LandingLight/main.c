
void __thiscall
L2CFighterKirby::status::PickelSpecialN3LandingLight_main
          (L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0xdd934faa1);
  lua2cpp::L2CFighterCommon::status_LandingLightSub_param(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_7100120960(this);
  lib::L2CValue::L2CValue(aLStack64,PickelSpecialN3LandingLight_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

