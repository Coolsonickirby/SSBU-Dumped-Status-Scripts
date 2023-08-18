
void __thiscall
L2CFighterMurabito::status::SpecialLwWaterDashF_main
          (L2CFighterMurabito *this,L2CValue *return_value)

{
  L2CValue *this_00;
  L2CValue aLStack64 [16];
  
  app::lua_bind::ControlModule__reset_flick_x_impl(this->moduleAccessor);
  app::lua_bind::ControlModule__reset_flick_sub_x_impl(this->moduleAccessor);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1c);
  lib::L2CValue::L2CValue(aLStack64,0xfe);
  lib::L2CValue::operator_(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lua2cpp::L2CFighterCommon::sub_ItemShootDashF_Common(this);
  lib::L2CValue::L2CValue(aLStack64,SpecialLwWaterDashF_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

