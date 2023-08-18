
void __thiscall
L2CWeaponTrailBeam::status::Stay_init(L2CWeaponTrailBeam *this,L2CValue *return_value)

{
  app::lua_bind::KineticModule__clear_speed_all_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

