
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100010190(L2CAgent *param_1,undefined8 param_2,L2CValue *param_3)

{
  L2CValue *pLVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined auStack112 [32];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  BattleObjectModuleAccessor *local_30;
  ulong uStack40;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_30,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_30);
  fVar2 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack64,fVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_30);
  fVar2 = (float)app::sv_kinetic_energy::get_speed_y(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack80,fVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  fVar2 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)(auStack112 + 0x10),fVar2);
  lib::L2CValue::operator*(aLStack64,(L2CValue *)(auStack112 + 0x10));
  lib::L2CAgent::math_atan((L2CAgent *)aLStack80,aLStack128,param_3);
  pLVar1 = (L2CValue *)(auStack112 + 0x10);
  lib::L2CValue::operator*((L2CValue *)&local_30,pLVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CAgent::math_deg((L2CAgent *)auStack112,pLVar1);
  uVar3 = lib::L2CValue::as_number(aLStack128);
  uVar4 = lib::L2CValue::as_number(aLStack144);
  uVar5 = lib::L2CValue::as_number(aLStack160);
  local_30 = (BattleObjectModuleAccessor *)CONCAT44(uVar4,uVar3);
  uStack40 = (ulong)uVar5;
  app::lua_bind::PostureModule__set_rot_impl(param_1->moduleAccessor,(Vector3f *)&local_30,0);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)auStack112);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack112 + 0x10));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

