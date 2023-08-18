
void __thiscall
L2CFighterTrail::status::AttackAirF_end(L2CFighterTrail *this,L2CValue *return_value)

{
  app::lua_bind::ComboModule__clear_setting_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

