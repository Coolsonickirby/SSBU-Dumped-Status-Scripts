
void __thiscall
L2CFighterPickel::status::AttackLandingLight_main(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  FUN_7100081860();
  lib::L2CValue::L2CValue(aLStack48,0xdd934faa1);
  lua2cpp::L2CFighterCommon::status_LandingLightSub_param(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_7100081a00(this);
  lib::L2CValue::L2CValue(aLStack64,AttackLandingLight_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

