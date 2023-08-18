
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterEdge::status::SpecialLw_end(L2CFighterEdge *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::ShieldModule__set_hit_stop_slow_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_LW_HIT);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_LW_END);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_MA_MSC_CMD_EFFECT_EFFECT_OFF_KIND);
      lib::L2CValue::L2CValue(aLStack112,0x12219595b5);
      lib::L2CValue::L2CValue(aLStack128,true);
      lib::L2CValue::L2CValue(aLStack144,true);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      app::sv_module_access::effect(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue(aLStack112,0x196ba70f91);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      HVar5 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                (this->moduleAccessor,iVar2,HVar5,-1);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_MA_MSC_CMD_EFFECT_EFFECT_OFF_KIND);
      lib::L2CValue::L2CValue(aLStack112,0x12219595b5);
      lib::L2CValue::L2CValue(aLStack128,false);
      lib::L2CValue::L2CValue(aLStack144,false);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      app::sv_module_access::effect(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    app::lua_bind::MotionAnimcmdModule__enable_skip_delay_update_impl(this->moduleAccessor);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

