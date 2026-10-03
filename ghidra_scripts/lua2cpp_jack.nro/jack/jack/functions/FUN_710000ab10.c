
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000ab10(undefined8 param_1,L2CFighterCommon *param_2)

{
  L2CValue *this;
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
  uVar1 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack80);
    fVar3 = (float)app::sv_kinetic_energy::get_speed_x(param_2->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack64,fVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack128,0x157e5f2cee);
    uVar1 = lib::L2CValue::as_integer(aLStack112);
    uVar2 = lib::L2CValue::as_integer(aLStack128);
    fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_2->moduleAccessor,uVar1,uVar2);
    lib::L2CValue::L2CValue(aLStack96,fVar3);
    lib::L2CValue::operator*(aLStack64,aLStack96);
    lib::L2CValue::operator=(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack64);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack96);
    app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack96);
    fVar3 = (float)app::sv_kinetic_energy::get_speed_y(param_2->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack80,fVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack144,0x1509581c78);
    uVar1 = lib::L2CValue::as_integer(aLStack128);
    uVar2 = lib::L2CValue::as_integer(aLStack144);
    fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_2->moduleAccessor,uVar1,uVar2);
    lib::L2CValue::L2CValue(aLStack112,fVar3);
    lib::L2CValue::operator*(aLStack80,aLStack112);
    lib::L2CValue::operator=(aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack80);
    app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack160,FUN_710000aee0);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(param_2,(L2CValue)0x60);
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

