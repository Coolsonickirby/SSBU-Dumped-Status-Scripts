
void __thiscall
L2CFighterKoopa::status::SpecialHiG_main(L2CFighterKoopa *this,L2CValue *return_value)

{
  GroundCorrectKind GVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
  GVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,SpecialHiG_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

