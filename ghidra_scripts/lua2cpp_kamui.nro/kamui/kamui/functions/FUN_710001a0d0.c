
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001a0d0(L2CAgent *param_1)

{
  BattleObject **this;
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  this = &param_1[2].battleObject;
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
  lib::L2CValue::L2CValue(aLStack64,0.5);
  uVar3 = lib::L2CValue::operator<=(aLStack64,pLVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
    lib::L2CValue::L2CValue(aLStack64,-0.5);
    uVar3 = lib::L2CValue::operator<=(pLVar2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) goto LAB_710001a3b8;
  }
  lib::L2CValue::L2CValue(aLStack64,0.05);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
  lib::L2CValue::operator*(aLStack80,pLVar2);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack144);
  fVar4 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack128,fVar4);
  lib::L2CValue::operator+(aLStack128,aLStack80);
  lib::L2CValue::operator=(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_AIR_CONTROL_SPEED_X_LIMIT)
  ;
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  pLVar2 = aLStack64;
  lib::L2CValue::operator=(aLStack96,pLVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar2);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack96,pLVar2);
  uVar3 = lib::L2CValue::operator<=(aLStack64,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)(ulong)_FIGHTER_KINETIC_ENERGY_ID_STOP;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack96,pLVar2);
    fVar4 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,fVar4);
    lib::L2CValue::operator*(aLStack144,aLStack160);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack160);
    pLVar2 = aLStack144;
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    pLVar2 = aLStack128;
  }
  lib::L2CValue::~L2CValue(pLVar2);
  lib::L2CValue::~L2CValue(aLStack64);
LAB_710001a3b8:
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

