
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016820(L2CAgent *param_1,L2CValue *param_2)

{
  L2CValue *this;
  undefined8 uVar1;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0x1359d88780);
  lib::L2CValue::L2CValue(aLStack128,param_2);
  FUN_7100014a20(aLStack96,param_1,aLStack112,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack192);
  uVar1 = app::sv_kinetic_energy::get_speed(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack176,(float)uVar1);
  lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar1 >> 0x20));
  lib::L2CValue::L2CValue(aLStack64,aLStack176);
  lib::L2CValue::L2CValue(aLStack80,aLStack160);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xc0,(L2CValue)0xb0);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
  lib::L2CValue::operator*(this,aLStack96);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack64);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  lib::L2CAgent::push_lua_stack(param_1,aLStack192);
  app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

