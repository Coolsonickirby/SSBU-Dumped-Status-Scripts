
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001c5c0(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DOLLY_STATUS_SPECIAL_S_WORK_FLAG_AIR_ATTACK);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xec379508b);
    lib::L2CValue::operator=(aLStack80,aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0x12edc4fab6);
    lib::L2CValue::operator=(aLStack80,aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xfea97fe73);
  uVar3 = lib::L2CValue::as_integer(aLStack64);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_2->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(param_1,fVar5);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack64);
  lib::L2CAgent::push_lua_stack(param_2,param_1);
  lib::L2CAgent::push_lua_stack(param_2,aLStack96);
  app::sv_kinetic_energy::set_limit_speed(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

