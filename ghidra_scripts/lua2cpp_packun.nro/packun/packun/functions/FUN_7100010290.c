
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100010290(L2CAgent *param_1)

{
  ulong uVar1;
  ulong uVar2;
  L2CValue *this;
  L2CValue *pLVar3;
  float fVar4;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined auStack128 [32];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack96,0xbce2bf707);
  uVar1 = lib::L2CValue::as_integer(aLStack64);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10),0xbc73fdd9f);
  uVar1 = lib::L2CValue::as_integer(aLStack64);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack128 + 0x10));
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack128 + 0x10));
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,0xbf34bdeb7);
  uVar1 = lib::L2CValue::as_integer(aLStack64);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)auStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10),fVar4);
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack64);
  fVar4 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar4);
  lib::L2CValue::~L2CValue(aLStack64);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,9);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PACKUN_STATUS_KIND_SPECIAL_HI_END);
  pLVar3 = aLStack64;
  uVar1 = lib::L2CValue::operator==(this,pLVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    fVar4 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack64,fVar4);
    pLVar3 = aLStack64;
    lib::L2CValue::operator=((L2CValue *)auStack128,pLVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  lib::L2CAgent::math_abs((L2CAgent *)auStack128,pLVar3);
  lib::L2CValue::operator-(aLStack80,aLStack160);
  lib::L2CValue::operator/(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  lib::L2CValue::operator-(aLStack64,aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::operator*(aLStack160,aLStack144);
  lib::L2CValue::operator+(aLStack96,aLStack176);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::operator*((L2CValue *)(auStack128 + 0x10),aLStack64);
  lib::L2CValue::operator=((L2CValue *)(auStack128 + 0x10),aLStack176);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack192);
  fVar4 = (float)app::sv_kinetic_energy::get_speed_y(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack176,fVar4);
  lib::L2CValue::~L2CValue(aLStack192);
  uVar1 = lib::L2CValue::operator<((L2CValue *)(auStack128 + 0x10),aLStack176);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack128 + 0x10));
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack192);
  }
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack128 + 0x10));
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

