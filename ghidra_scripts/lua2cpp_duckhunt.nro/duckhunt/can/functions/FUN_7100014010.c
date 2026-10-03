
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100014010(L2CAgent *param_1,L2CValue *param_2)

{
  int iVar1;
  float fVar2;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::operator+(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_ROTATION_SPEED);
  fVar2 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar2,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_KINETIC_ENERGY_RESERVE_ID_ROT_NORMAL);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_SPIN_DIR);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar2);
  lib::L2CValue::operator*(aLStack96,param_2);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack64);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  lib::L2CAgent::push_lua_stack(param_1,aLStack144);
  app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

