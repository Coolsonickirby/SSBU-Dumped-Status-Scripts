
void FUN_7100005870(undefined8 param_1,L2CAgent *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8,
                   L2CValue *param_9,L2CValue *param_10,L2CValue *param_11_00,L2CValue *param_11,
                   L2CValue *param_12,L2CValue *param_13,L2CValue *param_14,L2CValue *param_15)

{
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,param_3);
  lib::L2CAgent::push_lua_stack(param_2,param_4);
  lib::L2CAgent::push_lua_stack(param_2,param_5);
  lib::L2CAgent::push_lua_stack(param_2,param_6);
  lib::L2CAgent::push_lua_stack(param_2,param_7);
  lib::L2CAgent::push_lua_stack(param_2,param_8);
  lib::L2CAgent::push_lua_stack(param_2,param_9);
  lib::L2CAgent::push_lua_stack(param_2,param_10);
  lib::L2CAgent::push_lua_stack(param_2,param_11_00);
  lib::L2CAgent::push_lua_stack(param_2,param_11);
  lib::L2CAgent::push_lua_stack(param_2,param_12);
  lib::L2CAgent::push_lua_stack(param_2,param_13);
  lib::L2CAgent::push_lua_stack(param_2,param_14);
  lib::L2CAgent::push_lua_stack(param_2,param_15);
  app::sv_module_access::effect(param_2->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_2,1);
  return;
}

