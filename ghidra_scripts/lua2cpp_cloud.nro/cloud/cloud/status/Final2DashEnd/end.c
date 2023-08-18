
void __thiscall
L2CFighterCloud::status::Final2DashEnd_end(L2CFighterCloud *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  Hash40 HVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x16ca1c5441);
  HVar3 = lib::L2CValue::as_hash(aLStack64);
  app::lua_bind::EffectModule__remove_common_impl(this->moduleAccessor,HVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x11dba4ac03);
  lib::L2CValue::L2CValue(aLStack80,false);
  lib::L2CValue::L2CValue(aLStack96,true);
  HVar3 = lib::L2CValue::as_hash(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  bVar2 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::EffectModule__kill_kind_impl
            (this->moduleAccessor,HVar3,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_710000b800(this);
  lib::L2CValue::L2CValue(aLStack80,0x1e0aba2d68);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

