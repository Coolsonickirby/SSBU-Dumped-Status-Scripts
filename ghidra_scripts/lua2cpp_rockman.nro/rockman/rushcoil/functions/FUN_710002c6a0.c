
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002c6a0(L2CAgent *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_ALL);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar4 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_ALL);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar4 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack64);
  lib::L2CAgent::push_lua_stack(param_1,aLStack112);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  lib::L2CAgent::push_lua_stack(param_1,aLStack144);
  lib::L2CAgent::push_lua_stack(param_1,aLStack160);
  lib::L2CAgent::push_lua_stack(param_1,aLStack176);
  lib::L2CAgent::push_lua_stack(param_1,aLStack192);
  app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack160,0xed69a9d42);
  lib::L2CValue::L2CValue(aLStack176,0xad93f6119);
  uVar2 = lib::L2CValue::as_integer(aLStack160);
  uVar3 = lib::L2CValue::as_integer(aLStack176);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack144,fVar4);
  lib::L2CValue::L2CValue(aLStack64,-1.0);
  lib::L2CValue::operator*(aLStack64,aLStack144);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack144,0xed69a9d42);
  lib::L2CValue::L2CValue(aLStack160,0xe306ae0f9);
  uVar2 = lib::L2CValue::as_integer(aLStack144);
  uVar3 = lib::L2CValue::as_integer(aLStack160);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack144);
  lib::L2CAgent::push_lua_stack(param_1,aLStack160);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack144);
  lib::L2CAgent::push_lua_stack(param_1,aLStack160);
  lib::L2CAgent::push_lua_stack(param_1,aLStack64);
  app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::KineticModule__enable_energy_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack144);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  lib::L2CAgent::push_lua_stack(param_1,aLStack96);
  app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

