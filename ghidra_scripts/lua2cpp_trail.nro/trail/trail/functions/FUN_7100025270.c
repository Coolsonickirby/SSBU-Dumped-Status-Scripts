
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100025270(L2CAgent *param_1,L2CValue *param_2)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
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
  
  lib::L2CValue::L2CValue(aLStack96);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_TYPE_AIR_BRAKE);
    lib::L2CValue::operator=(aLStack96,aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    lib::L2CValue::operator=(aLStack96,aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  fVar7 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack160);
  fVar7 = (float)app::sv_kinetic_energy::get_speed_y(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack144,fVar7);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack176,aLStack112);
  lua2cpp::L2CFighterBase::Vector2__length(param_1,(L2CValue)0x50);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator==(param_2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack208,0x14c6deb55d);
    uVar4 = lib::L2CValue::as_integer(aLStack192);
    uVar5 = lib::L2CValue::as_integer(aLStack208);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack80,fVar7);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    uVar4 = lib::L2CValue::operator<(aLStack80,aLStack160);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::operator/(aLStack80,aLStack160);
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
      lib::L2CValue::operator*(pLVar3,aLStack192);
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
      lib::L2CValue::operator=(pLVar3,aLStack208);
      lib::L2CValue::~L2CValue(aLStack208);
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
      lib::L2CValue::operator*(pLVar3,aLStack192);
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
      lib::L2CValue::operator=(pLVar3,aLStack208);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::operator=(aLStack160,aLStack80);
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      lib::L2CAgent::push_lua_stack(param_1,pLVar3);
      lib::L2CAgent::push_lua_stack(param_1,pLVar6);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
    }
    lib::L2CValue::~L2CValue(aLStack80);
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack208,0x100f9d0521);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    uVar5 = lib::L2CValue::as_integer(aLStack208);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack192,fVar7);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack80);
    fVar7 = (float)lib::L2CValue::as_number(aLStack160);
    bVar1 = app::sv_math::is_zero(fVar7);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator==(aLStack208,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack208);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack80);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    }
    else {
      lib::L2CValue::operator/(aLStack192,aLStack160);
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
      lib::L2CValue::operator*(pLVar3,aLStack80);
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
      lib::L2CValue::operator*(pLVar3,aLStack80);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack240);
    }
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar3 = aLStack192;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack224,0xe2fea5e43);
    uVar4 = lib::L2CValue::as_integer(aLStack208);
    uVar5 = lib::L2CValue::as_integer(aLStack224);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack192,fVar7);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,aLStack240);
    app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    pLVar3 = aLStack80;
  }
  lib::L2CValue::~L2CValue(pLVar3);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

