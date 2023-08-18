
void __thiscall
L2CFighterPickel::status::SpecialS_end(L2CFighterPickel *this,L2CValue *return_value)

{
  app::lua_bind::KineticModule__clear_speed_all_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

