
void __thiscall L2CFighterIke::status::SpecialNEnd_init(L2CFighterIke *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

