
void __thiscall
L2CFighterGanon::status::SpecialSCatch_main(L2CFighterGanon *this,L2CValue *return_value)

{
  float fVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0.0);
  fVar1 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,SpecialSCatch_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

