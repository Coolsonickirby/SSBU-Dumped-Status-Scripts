
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDonkey::status::ShoulderStart_init(L2CFighterDonkey *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Hash40 HVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,LINK_NO_CAPTURE);
  lib::L2CValue::L2CValue(aLStack96,0x8af9b3d1d);
  lib::L2CValue::L2CValue(aLStack112,0);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  HVar4 = lib::L2CValue::as_hash(aLStack96);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar2,HVar4,uVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_MA_MSC_SET_IGNORE_CATCHING);
  lib::L2CValue::L2CValue(aLStack112,true);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  app::sv_module_access::capture(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack128,0x1687ff50b5);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::L2CValue(aLStack144,false);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::HitModule__set_invincible_frame_global_impl
            (this->moduleAccessor,iVar2,(bool)(bVar1 & 1),0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

