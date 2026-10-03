
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001dfa0(L2CAgent *param_1)

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
  
  lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack96,0x115508c4ee);
  uVar1 = lib::L2CValue::as_integer(aLStack80);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack64,fVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack112,0x10fd32c95b);
  uVar1 = lib::L2CValue::as_integer(aLStack96);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack128,0x1466fa25ec);
  uVar1 = lib::L2CValue::as_integer(aLStack112);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar3);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack112);
  lib::L2CAgent::push_lua_stack(param_1,aLStack96);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack112);
  app::sv_kinetic_energy::controller_set_accel_x_mul(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  app::sv_kinetic_energy::controller_set_accel_x_add(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack112);
  lib::L2CAgent::push_lua_stack(param_1,aLStack64);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack144,0x108a35f9cd);
  uVar1 = lib::L2CValue::as_integer(aLStack128);
  uVar2 = lib::L2CValue::as_integer(aLStack144);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack112,fVar3);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack160,0x1411fd157a);
  uVar1 = lib::L2CValue::as_integer(aLStack144);
  uVar2 = lib::L2CValue::as_integer(aLStack160);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar3);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::operator-(aLStack112);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack144);
  lib::L2CAgent::push_lua_stack(param_1,aLStack160);
  app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack144);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

