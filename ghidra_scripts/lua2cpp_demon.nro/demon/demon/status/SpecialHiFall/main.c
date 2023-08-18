
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::SpecialHiFall_main(L2CFighterDemon *this,L2CValue *return_value)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  fVar3 = (float)app::sv_kinetic_energy::get_stable_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack64,fVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  fVar3 = (float)app::sv_kinetic_energy::get_limit_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack128,0x1090f8cc22);
  uVar1 = lib::L2CValue::as_integer(aLStack112);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack144,0xf71f4d4f8);
  lib::L2CValue::L2CValue(aLStack160,0);
  uVar1 = lib::L2CValue::as_integer(aLStack144);
  uVar2 = lib::L2CValue::as_integer(aLStack160);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar3);
  lib::L2CValue::operator_(aLStack96,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  app::sv_kinetic_energy::controller_set_accel_x_mul(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack160,0x14d3c2bb9d);
  uVar1 = lib::L2CValue::as_integer(aLStack144);
  uVar2 = lib::L2CValue::as_integer(aLStack160);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar3);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::operator_(aLStack64,aLStack128);
  lib::L2CValue::operator_(aLStack64,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::operator_(aLStack80,aLStack128);
  lib::L2CValue::operator_(aLStack80,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lua2cpp::L2CFighterCommon::status_Fall(this);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

