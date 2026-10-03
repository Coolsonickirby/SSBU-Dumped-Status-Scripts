
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100055120(L2CAgent *param_1)

{
  BattleObject **this;
  byte bVar1;
  ulong uVar2;
  L2CAgent *this_00;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  float fVar6;
  undefined8 uVar7;
  L2CValue aLStack256 [16];
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
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar2 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar2 & 1) == 0) {
    return;
  }
  FUN_710002e160(aLStack112,param_1);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack176);
  uVar7 = app::sv_kinetic_energy::get_speed(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack160,(float)uVar7);
  lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar7 >> 0x20));
  lib::L2CValue::L2CValue(aLStack80,aLStack160);
  lib::L2CValue::L2CValue(aLStack96,aLStack144);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack96);
  fVar6 = (float)app::sv_kinetic_energy::get_stable_speed_x(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::operator*(aLStack80,aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack240);
  uVar7 = app::sv_kinetic_energy::get_limit_speed(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack224,(float)uVar7);
  lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar7 >> 0x20));
  lib::L2CValue::L2CValue(aLStack80,aLStack224);
  lib::L2CValue::L2CValue(aLStack96,aLStack208);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  pLVar5 = (L2CValue *)0x18cdc1683;
  this_00 = (L2CAgent *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  lib::L2CAgent::math_abs(this_00,pLVar5);
  uVar2 = lib::L2CValue::operator<(aLStack176,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    lib::L2CValue::operator*(pLVar5,aLStack112);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    lib::L2CValue::operator=(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  lib::L2CAgent::push_lua_stack(param_1,pLVar5);
  lib::L2CAgent::push_lua_stack(param_1,pLVar3);
  app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  lib::L2CAgent::push_lua_stack(param_1,aLStack176);
  lib::L2CAgent::push_lua_stack(param_1,pLVar5);
  app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  fVar6 = (float)app::sv_kinetic_energy::get_speed_y(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack96,fVar6);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar2 = lib::L2CValue::operator<(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) goto LAB_71000555e4;
  this = &param_1[2].battleObject;
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,10);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_JUMP_AERIAL);
  uVar2 = lib::L2CValue::operator==(pLVar5,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,10);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FLY);
    uVar2 = lib::L2CValue::operator==(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) != 0) goto LAB_7100055554;
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_JUMP_AERIAL);
    uVar2 = lib::L2CValue::operator==(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) goto LAB_71000555e4;
    lib::L2CValue::L2CValue(aLStack240,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack256,0x1a9acadc3b);
    uVar2 = lib::L2CValue::as_integer(aLStack240);
    uVar4 = lib::L2CValue::as_integer(aLStack256);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar2,uVar4);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::operator*(aLStack96,aLStack80);
    lib::L2CValue::operator=(aLStack96,aLStack240);
  }
  else {
LAB_7100055554:
    lib::L2CValue::L2CValue(aLStack240,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack256,0x1ccfc20699);
    uVar2 = lib::L2CValue::as_integer(aLStack240);
    uVar4 = lib::L2CValue::as_integer(aLStack256);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar2,uVar4);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::operator*(aLStack96,aLStack80);
    lib::L2CValue::operator=(aLStack96,aLStack240);
  }
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack80);
LAB_71000555e4:
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  lib::L2CAgent::push_lua_stack(param_1,aLStack96);
  app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

