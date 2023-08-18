
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialHi4_init(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack64 [16];
  
  app::lua_bind::KineticModule__clear_speed_all_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

