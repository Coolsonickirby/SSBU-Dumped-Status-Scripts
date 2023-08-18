
void __thiscall L2CFighterIke::status::SpecialS_end(L2CFighterIke *this,L2CValue *return_value)

{
  app::lua_bind::PhysicsModule__stop_charge_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

