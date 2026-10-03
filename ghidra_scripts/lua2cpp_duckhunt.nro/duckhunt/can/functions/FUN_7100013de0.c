
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100013de0(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3)

{
  int iVar1;
  float fVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator+(param_3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_FALL_ACCEL);
  fVar2 = (float)lib::L2CValue::as_number(aLStack96);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar2,iVar1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_TYPE_NORMAL);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  lib::L2CAgent::push_lua_stack(param_1,param_2);
  lib::L2CAgent::push_lua_stack(param_1,param_3);
  app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

