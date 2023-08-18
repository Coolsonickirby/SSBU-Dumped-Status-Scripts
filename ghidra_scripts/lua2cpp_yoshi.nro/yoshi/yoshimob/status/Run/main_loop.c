
void __thiscall
L2CWeaponYoshiYoshimob::status::Run_main_loop(L2CWeaponYoshiYoshimob *this,L2CValue *return_value)

{
  byte bVar1;
  L2CValue aLStack48 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack48,(bool)(bVar1 & 1));
  lib::L2CValue::operator_cast_to_bool(aLStack48);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

