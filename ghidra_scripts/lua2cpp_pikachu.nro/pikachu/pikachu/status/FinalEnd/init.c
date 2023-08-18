
void __thiscall
L2CFighterPikachu::status::FinalEnd_init(L2CFighterPikachu *this,L2CValue *return_value)

{
  app::lua_bind::KineticModule__unable_energy_all_impl(this->moduleAccessor);
  app::lua_bind::KineticModule__clear_speed_all_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

