
void __thiscall
L2CWeaponDededeGordo::status::WallStop_end(L2CWeaponDededeGordo *this,L2CValue *return_value)

{
  app::lua_bind::GroundModule__detach_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

