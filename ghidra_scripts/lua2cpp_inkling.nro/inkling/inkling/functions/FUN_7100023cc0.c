
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100023cc0(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  BattleObject **this;
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  float fVar4;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,param_2);
  lib::L2CValue::L2CValue(aLStack96,param_3);
  lib::L2CValue::L2CValue(aLStack112,param_4);
  FUN_710001d290(param_1,aLStack80,aLStack96,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar2 = lib::L2CValue::operator==(param_4,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  this = &param_1[2].battleObject;
  if ((uVar2 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) != 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
      lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
      uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) != 0) goto LAB_7100023d58;
    }
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      return;
    }
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
LAB_7100023d58:
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__unable_energy_impl(param_1->moduleAccessor,iVar1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
    iVar1 = lib::L2CValue::as_integer(aLStack144);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack128,fVar4);
    fVar4 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,fVar4);
    lib::L2CValue::operator*(aLStack128,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    FUN_7100026bd0(param_1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
    iVar1 = lib::L2CValue::as_integer(aLStack144);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack128,fVar4);
    fVar4 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,fVar4);
    lib::L2CValue::operator*(aLStack128,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

