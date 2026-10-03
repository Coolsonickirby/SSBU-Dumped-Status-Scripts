
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002c1f0(L2CAgent *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_FALL);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack96,0x163a5f2ef4);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  lib::L2CAgent::push_lua_stack(param_1,aLStack64);
  lib::L2CAgent::push_lua_stack(param_1,aLStack96);
  app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

