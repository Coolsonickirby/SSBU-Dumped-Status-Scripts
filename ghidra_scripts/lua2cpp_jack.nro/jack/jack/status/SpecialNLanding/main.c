
void __thiscall
L2CFighterJack::status::SpecialNLanding_main(L2CFighterJack *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_landing_fall_special_sub(this);
  lib::L2CValue::L2CValue(aLStack48,SpecialNLanding_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

