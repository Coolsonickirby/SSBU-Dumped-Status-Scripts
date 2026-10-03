
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000e890(L2CAgent *param_1)

{
  BattleObject **this;
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  BattleObjectModuleAccessor *pBVar6;
  float fVar7;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,aLStack96);
  lib::L2CValue::L2CValue(aLStack144,aLStack112);
  lib::L2CValue::L2CValue(aLStack160,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
  this = &param_1[2].battleObject;
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_KIND_SPECIAL_S_ATTACK);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack208,0x1e0f06c380);
      uVar4 = lib::L2CValue::as_integer(aLStack192);
      uVar5 = lib::L2CValue::as_integer(aLStack208);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack176,fVar7);
      lib::L2CValue::operator*(aLStack128,aLStack176);
      lib::L2CValue::operator=(aLStack128,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack208,0x1cb48f6808);
      uVar4 = lib::L2CValue::as_integer(aLStack192);
      uVar5 = lib::L2CValue::as_integer(aLStack208);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack176,fVar7);
      lib::L2CValue::operator*(aLStack128,aLStack176);
      lib::L2CValue::operator=(aLStack128,aLStack80);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack80,ENERGY_STOP_RESET_TYPE_GROUND);
    lib::L2CValue::operator=(aLStack160,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    app::KineticUtility::clear_unable_energy(iVar1,pBVar6);
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_KIND_SPECIAL_S_ATTACK);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack208,0x1b0ebbcadb);
      uVar4 = lib::L2CValue::as_integer(aLStack192);
      uVar5 = lib::L2CValue::as_integer(aLStack208);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack176,fVar7);
      lib::L2CValue::operator*(aLStack128,aLStack176);
      lib::L2CValue::operator=(aLStack128,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack208,0x19cae9e3d2);
      uVar4 = lib::L2CValue::as_integer(aLStack192);
      uVar5 = lib::L2CValue::as_integer(aLStack208);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack176,fVar7);
      lib::L2CValue::operator*(aLStack128,aLStack176);
      lib::L2CValue::operator=(aLStack128,aLStack80);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack80,ENERGY_STOP_RESET_TYPE_AIR);
    lib::L2CValue::operator=(aLStack160,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::L2CValue(aLStack176,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,aLStack208);
    lib::L2CAgent::push_lua_stack(param_1,aLStack224);
    lib::L2CAgent::push_lua_stack(param_1,aLStack240);
    app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__enable_energy_impl(param_1->moduleAccessor,iVar1);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  lib::L2CAgent::push_lua_stack(param_1,aLStack160);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  lib::L2CAgent::push_lua_stack(param_1,aLStack176);
  lib::L2CAgent::push_lua_stack(param_1,aLStack192);
  lib::L2CAgent::push_lua_stack(param_1,aLStack208);
  lib::L2CAgent::push_lua_stack(param_1,aLStack224);
  app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack176,-1.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  lib::L2CAgent::push_lua_stack(param_1,aLStack176);
  lib::L2CAgent::push_lua_stack(param_1,aLStack192);
  app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::KineticModule__enable_energy_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_SPECIAL_S_WORK_INT_SITUATION_PREV);
  iVar1 = lib::L2CValue::as_integer(pLVar3);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

