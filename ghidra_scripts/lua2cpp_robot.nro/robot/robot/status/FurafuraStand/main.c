
void __thiscall
L2CFighterRobot::status::FurafuraStand_main(L2CFighterRobot *this,L2CValue *return_value)

{
  GroundCorrectKind GVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
  GVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lua2cpp::L2CFighterCommon::status_FuraFuraStand(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

