
void __thiscall
L2CFighterDemon::status::ThrowCommand_exit(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
  app::sv_kinetic_energy::clear_speed_ex(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x50000000);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::JostleModule__set_ignore_owner_id_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  bVar1 = app::lua_bind::CatchModule__is_catch_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) != 0) {
    app::lua_bind::CatchModule__catch_cut_impl(this->moduleAccessor,false,false);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

