
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000231a0(L2CAgent *param_1)

{
  L2CValue *pLVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined auStack128 [32];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_1);
  pLVar1 = aLStack96;
  lib::L2CAgent::push_lua_stack(param_1,pLVar1);
  fVar3 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,fVar3);
  lib::L2CAgent::math_abs((L2CAgent *)&stack0xffffffffffffffc0,pLVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator==(pLVar1,(L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack160,0x14202169d2);
    uVar2 = lib::L2CValue::as_integer(aLStack144);
    pLVar1 = (L2CValue *)lib::L2CValue::as_integer(aLStack160);
    fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar2,(ulong)pLVar1);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar3);
    lib::L2CAgent::math_max((L2CAgent *)auStack128,aLStack80,pLVar1);
    fVar3 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,fVar3);
    lib::L2CValue::operator*((L2CValue *)(auStack128 + 0x10),aLStack176);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack160,0x17099b7bc3);
    uVar2 = lib::L2CValue::as_integer(aLStack144);
    pLVar1 = (L2CValue *)lib::L2CValue::as_integer(aLStack160);
    fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar2,(ulong)pLVar1);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar3);
    lib::L2CAgent::math_max((L2CAgent *)auStack128,aLStack80,pLVar1);
    fVar3 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,fVar3);
    lib::L2CValue::operator*((L2CValue *)(auStack128 + 0x10),aLStack176);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
  }
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack128 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

