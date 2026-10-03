
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002ad80(L2CAgent *param_1)

{
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
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  FUN_710002b000();
  lib::L2CValue::L2CValue(aLStack64,_MA_MSC_CMD_EFFECT_EFFECT_FOLLOW);
  lib::L2CValue::L2CValue(aLStack80,0x12ce40e3e9);
  lib::L2CValue::L2CValue(aLStack96,0x35dbfe258);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,-1.5);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,1.0);
  lib::L2CValue::L2CValue(aLStack224,false);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack64);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  lib::L2CAgent::push_lua_stack(param_1,aLStack96);
  lib::L2CAgent::push_lua_stack(param_1,aLStack112);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  lib::L2CAgent::push_lua_stack(param_1,aLStack144);
  lib::L2CAgent::push_lua_stack(param_1,aLStack160);
  lib::L2CAgent::push_lua_stack(param_1,aLStack176);
  lib::L2CAgent::push_lua_stack(param_1,aLStack192);
  lib::L2CAgent::push_lua_stack(param_1,aLStack208);
  lib::L2CAgent::push_lua_stack(param_1,aLStack224);
  app::sv_module_access::effect(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

