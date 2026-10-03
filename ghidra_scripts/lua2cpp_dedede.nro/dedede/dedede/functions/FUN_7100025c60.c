
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100025c60(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_TURN_KINETIC_RESET);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    fVar6 = (float)app::sv_kinetic_energy::get_speed_x(param_2->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack64,fVar6);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_FALL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_TURN_KINETIC_RESET);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack112,0x13cd7c2ea8);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_2->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack128,0x17383aeaac);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_2->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack96,fVar6);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack112);
    lib::L2CAgent::push_lua_stack(param_2,aLStack64);
    lib::L2CAgent::push_lua_stack(param_2,aLStack128);
    app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack112);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack128);
    app::sv_kinetic_energy::set_stable_speed(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack112);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack128);
    app::sv_kinetic_energy::set_limit_speed(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack96);
    app::sv_kinetic_energy::controller_set_accel_x_mul(param_2->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack112);
    app::sv_kinetic_energy::controller_set_accel_x_add(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

