
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100024650(L2CAgent *param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  float fVar3;
  L2CValue aLStack192 [16];
  undefined auStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack112);
  fVar3 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack96,fVar3);
  fVar3 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar3);
  lib::L2CValue::operator*(aLStack96,aLStack128);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLOAT_GROUND_DEGREE_PREV);
  pLVar2 = (L2CValue *)lib::L2CValue::as_integer(aLStack192);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,(int)pLVar2);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar3);
  lib::L2CAgent::math_rad((L2CAgent *)auStack176,pLVar2);
  lib::L2CAgent::math_sin((L2CAgent *)auStack160,pLVar2);
  lib::L2CValue::operator*(aLStack80,(L2CValue *)(auStack160 + 0x10));
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack48);
  lib::L2CAgent::push_lua_stack(param_1,aLStack64);
  app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::KineticModule__enable_energy_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

