
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001b11f0(L2CAgent *param_1)

{
  BattleObject **this;
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack192,false);
  lib::L2CValue::L2CValue(aLStack64,false);
  lib::L2CValue::operator=(aLStack192,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  this = &param_1[2].battleObject;
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) goto LAB_71001b1324;
    lib::L2CValue::L2CValue(aLStack64,true);
    lib::L2CValue::operator=(aLStack192,aLStack64);
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) goto LAB_71001b1324;
    lib::L2CValue::L2CValue(aLStack64,true);
    lib::L2CValue::operator=(aLStack192,aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack64);
LAB_71001b1324:
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack192);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    fVar5 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(param_1->moduleAccessor,iVar2)
    ;
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack64,ENERGY_STOP_RESET_TYPE_GROUND);
    lib::L2CValue::operator=(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,ENERGY_STOP_RESET_TYPE_AIR);
      lib::L2CValue::operator=(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__enable_energy_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack192);
  return;
}

