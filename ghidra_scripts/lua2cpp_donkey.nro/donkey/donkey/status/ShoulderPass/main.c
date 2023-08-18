
void __thiscall
L2CFighterDonkey::status::ShoulderPass_main(L2CFighterDonkey *this,L2CValue *return_value)

{
  byte bVar1;
  GroundCorrectKind GVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  app::lua_bind::ControlModule__reset_flick_y_impl(this->moduleAccessor);
  bVar1 = app::lua_bind::GroundModule__pass_floor_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
  GVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,ShoulderPass_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

