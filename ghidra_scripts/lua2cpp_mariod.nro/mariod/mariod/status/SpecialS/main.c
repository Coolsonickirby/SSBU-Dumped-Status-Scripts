
void __thiscall
L2CFighterMariod::status::SpecialS_main(L2CFighterMariod *this,L2CValue *return_value)

{
  byte bVar1;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  bVar1 = app::lua_bind::PostureModule__set_stick_lr_impl(this->moduleAccessor,0.0);
  lib::L2CValue::L2CValue(aLStack48,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack48);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,SpecialS_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

