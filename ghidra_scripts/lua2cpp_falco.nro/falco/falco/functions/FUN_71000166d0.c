
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000166d0(L2CValue *param_1,L2CAgent *param_2)

{
  int iVar1;
  ShieldStatus SVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  fVar5 = (float)app::lua_bind::MotionModule__frame_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar5);
  lib::L2CValue::L2CValue(aLStack80,33.0);
  uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_REFLECTOR_KIND_REFLECTOR);
    lib::L2CValue::L2CValue(aLStack96,_SHIELD_STATUS_NONE);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLECTOR_GROUP_EXTEND);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    SVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::ReflectorModule__set_status_impl(param_2->moduleAccessor,iVar1,SVar2,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_MA_MSC_CMD_EFFECT_EFFECT_OFF_KIND);
    lib::L2CValue::L2CValue(aLStack96,0xecca63d69);
    lib::L2CValue::L2CValue(aLStack112,false);
    lib::L2CValue::L2CValue(aLStack144,false);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack96);
    lib::L2CAgent::push_lua_stack(param_2,aLStack112);
    lib::L2CAgent::push_lua_stack(param_2,aLStack144);
    app::sv_module_access::effect(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_MA_MSC_CMD_EFFECT_EFFECT_OFF_KIND);
    lib::L2CValue::L2CValue(aLStack96,0xfdc7fb0a0);
    lib::L2CValue::L2CValue(aLStack112,false);
    lib::L2CValue::L2CValue(aLStack144,false);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack96);
    lib::L2CAgent::push_lua_stack(param_2,aLStack112);
    lib::L2CAgent::push_lua_stack(param_2,aLStack144);
    app::sv_module_access::effect(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_MA_MSC_CMD_EFFECT_EFFECT_OFF_KIND);
    lib::L2CValue::L2CValue(aLStack96,0xfecc8ba2c);
    lib::L2CValue::L2CValue(aLStack112,false);
    lib::L2CValue::L2CValue(aLStack144,false);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack96);
    lib::L2CAgent::push_lua_stack(param_2,aLStack112);
    lib::L2CAgent::push_lua_stack(param_2,aLStack144);
    app::sv_module_access::effect(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

