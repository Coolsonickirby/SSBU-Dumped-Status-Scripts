
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100047da0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  float fVar7;
  undefined8 uVar8;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  uVar3 = lib::L2CValue::as_integer(param_3);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(param_2->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack272);
  lib::L2CValue::~L2CValue(aLStack272);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack272,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack80,0x15b5d7569e);
    uVar4 = lib::L2CValue::as_integer(aLStack272);
    uVar5 = lib::L2CValue::as_integer(aLStack80);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_2->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack96,fVar7);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack272);
    uVar3 = lib::L2CValue::as_integer(param_3);
    uVar8 = app::lua_bind::GroundModule__get_touch_normal_impl(param_2->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),(float)uVar8);
    lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar8 >> 0x20));
    lib::L2CValue::L2CValue(aLStack272,(L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::L2CValue(aLStack80,aLStack128);
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xf0,(L2CValue)0xb0);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::L2CValue(aLStack192,aLStack112);
    lib::L2CValue::L2CValue(aLStack224,param_4);
    lua2cpp::L2CFighterBase::Vector2__normalize(param_2,(L2CValue)0x20);
    pLVar6 = aLStack192;
    lua2cpp::L2CFighterBase::Vector2__dot(param_2,SUB81(pLVar6,0),(L2CValue)0x30);
    lib::L2CAgent::math_acos((L2CAgent *)auStack176,pLVar6);
    lib::L2CAgent::math_deg((L2CAgent *)auStack160,pLVar6);
    lib::L2CValue::L2CValue(aLStack272,90.0);
    lib::L2CValue::operator-(aLStack272,aLStack96);
    lib::L2CValue::~L2CValue(aLStack272);
    uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack240);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    lib::L2CValue::~L2CValue((L2CValue *)auStack176);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)auStack160);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack176);
      uVar8 = app::sv_kinetic_energy::get_speed(param_2->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack272,(float)uVar8);
      lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar8 >> 0x20));
      lib::L2CValue::operator=(aLStack80,aLStack272);
      lib::L2CValue::operator=((L2CValue *)auStack160,aLStack256);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue((L2CValue *)auStack176);
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack240);
      fVar7 = (float)app::sv_kinetic_energy::get_speed_x(param_2->luaStateAgent);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar7);
      lib::L2CValue::operator+(aLStack80,(L2CValue *)auStack176);
      lib::L2CValue::operator=(aLStack80,aLStack272);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue((L2CValue *)auStack176);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack240);
      fVar7 = (float)app::sv_kinetic_energy::get_speed_y(param_2->luaStateAgent);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar7);
      lib::L2CValue::operator+((L2CValue *)auStack160,(L2CValue *)auStack176);
      lib::L2CValue::operator=((L2CValue *)auStack160,aLStack272);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue((L2CValue *)auStack176);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack272);
      lib::L2CAgent::push_lua_stack(param_2,aLStack80);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack160);
      app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::L2CValue(param_1,true);
      lib::L2CValue::~L2CValue((L2CValue *)auStack160);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      return;
    }
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(param_1,false);
  return;
}

